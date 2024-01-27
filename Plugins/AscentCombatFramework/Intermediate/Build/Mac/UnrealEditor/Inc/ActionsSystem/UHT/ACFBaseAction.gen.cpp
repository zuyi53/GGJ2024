// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/ACFBaseAction.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "ACFActionTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFBaseAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsManagerComponent_NoRegister();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction_NoRegister();
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EMontageReproductionType();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFMontageInfo();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFWarpReproductionInfo();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionConfig();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFBaseAction::execHandleMontageStarted)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param__animMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMontageStarted(Z_Param__animMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execHandleMontageFinished)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param__animMontage);
		P_GET_UBOOL(Z_Param__bInterruptted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMontageFinished(Z_Param__animMontage,Z_Param__bInterruptted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execExitAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execSetMontageReproductionType)
	{
		P_GET_ENUM(EMontageReproductionType,Z_Param_reproType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMontageReproductionType(EMontageReproductionType(Z_Param_reproType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execExecuteAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execClientsOnSubActionStateExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsOnSubActionStateExited_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execClientsOnSubActionStateEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsOnSubActionStateEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnSubActionStateExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubActionStateExited_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnSubActionStateEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubActionStateEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execClientsOnNotablePointReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsOnNotablePointReached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnNotablePointReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotablePointReached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execStopActionImmediately)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopActionImmediately();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execSetMontageInfo)
	{
		P_GET_STRUCT_REF(FACFMontageInfo,Z_Param_Out_montageInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMontageInfo(Z_Param_Out_montageInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetWarpTargetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetWarpTargetComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetWarpTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetWarpTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetWarpInfo)
	{
		P_GET_STRUCT_REF(FACFWarpReproductionInfo,Z_Param_Out_outWarpInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWarpInfo_Implementation(Z_Param_Out_outWarpInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetMontageSectionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMontageSectionName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetActionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetActionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execCanExecuteAction)
	{
		P_GET_OBJECT(ACharacter,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecuteAction_Implementation(Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execPlayEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnActionTransition)
	{
		P_GET_OBJECT(UACFBaseAction,Z_Param_previousState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionTransition_Implementation(Z_Param_previousState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execClientsOnActionEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsOnActionEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnActionEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execClientsOnActionStarted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsOnActionStarted_Implementation(Z_Param_contextString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execOnActionStarted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionStarted_Implementation(Z_Param_contextString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetAnimMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetAnimMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execSetAnimMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_newMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimMontage(Z_Param_newMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execSetActionConfig)
	{
		P_GET_STRUCT_REF(FActionConfig,Z_Param_Out_newConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActionConfig(Z_Param_Out_newConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetActionConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FActionConfig*)Z_Param__Result=P_THIS->GetActionConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execStartCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseAction::execGetCooldownTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCooldownTimeRemaining();
		P_NATIVE_END;
	}
	struct ACFBaseAction_eventCanExecuteAction_Parms
	{
		ACharacter* owner;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFBaseAction_eventCanExecuteAction_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFBaseAction_eventClientsOnActionStarted_Parms
	{
		FString contextString;
	};
	struct ACFBaseAction_eventGetMontageSectionName_Parms
	{
		FName ReturnValue;
	};
	struct ACFBaseAction_eventGetPlayRate_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFBaseAction_eventGetPlayRate_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFBaseAction_eventGetWarpInfo_Parms
	{
		FACFWarpReproductionInfo outWarpInfo;
	};
	struct ACFBaseAction_eventGetWarpTargetComponent_Parms
	{
		USceneComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFBaseAction_eventGetWarpTargetComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ACFBaseAction_eventGetWarpTransform_Parms
	{
		FTransform ReturnValue;
	};
	struct ACFBaseAction_eventOnActionStarted_Parms
	{
		FString contextString;
	};
	struct ACFBaseAction_eventOnActionTransition_Parms
	{
		UACFBaseAction* previousState;
	};
	struct ACFBaseAction_eventOnTick_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UACFBaseAction_CanExecuteAction = FName(TEXT("CanExecuteAction"));
	bool UACFBaseAction::CanExecuteAction(ACharacter* owner)
	{
		ACFBaseAction_eventCanExecuteAction_Parms Parms;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_CanExecuteAction),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UACFBaseAction_ClientsOnActionEnded = FName(TEXT("ClientsOnActionEnded"));
	void UACFBaseAction::ClientsOnActionEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_ClientsOnActionEnded),NULL);
	}
	static FName NAME_UACFBaseAction_ClientsOnActionStarted = FName(TEXT("ClientsOnActionStarted"));
	void UACFBaseAction::ClientsOnActionStarted(const FString& contextString)
	{
		ACFBaseAction_eventClientsOnActionStarted_Parms Parms;
		Parms.contextString=contextString;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_ClientsOnActionStarted),&Parms);
	}
	static FName NAME_UACFBaseAction_ClientsOnNotablePointReached = FName(TEXT("ClientsOnNotablePointReached"));
	void UACFBaseAction::ClientsOnNotablePointReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_ClientsOnNotablePointReached),NULL);
	}
	static FName NAME_UACFBaseAction_ClientsOnSubActionStateEntered = FName(TEXT("ClientsOnSubActionStateEntered"));
	void UACFBaseAction::ClientsOnSubActionStateEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_ClientsOnSubActionStateEntered),NULL);
	}
	static FName NAME_UACFBaseAction_ClientsOnSubActionStateExited = FName(TEXT("ClientsOnSubActionStateExited"));
	void UACFBaseAction::ClientsOnSubActionStateExited()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_ClientsOnSubActionStateExited),NULL);
	}
	static FName NAME_UACFBaseAction_GetMontageSectionName = FName(TEXT("GetMontageSectionName"));
	FName UACFBaseAction::GetMontageSectionName()
	{
		ACFBaseAction_eventGetMontageSectionName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_GetMontageSectionName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UACFBaseAction_GetPlayRate = FName(TEXT("GetPlayRate"));
	float UACFBaseAction::GetPlayRate()
	{
		ACFBaseAction_eventGetPlayRate_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_GetPlayRate),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UACFBaseAction_GetWarpInfo = FName(TEXT("GetWarpInfo"));
	void UACFBaseAction::GetWarpInfo(FACFWarpReproductionInfo& outWarpInfo)
	{
		ACFBaseAction_eventGetWarpInfo_Parms Parms;
		Parms.outWarpInfo=outWarpInfo;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_GetWarpInfo),&Parms);
		outWarpInfo=Parms.outWarpInfo;
	}
	static FName NAME_UACFBaseAction_GetWarpTargetComponent = FName(TEXT("GetWarpTargetComponent"));
	USceneComponent* UACFBaseAction::GetWarpTargetComponent()
	{
		ACFBaseAction_eventGetWarpTargetComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_GetWarpTargetComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UACFBaseAction_GetWarpTransform = FName(TEXT("GetWarpTransform"));
	FTransform UACFBaseAction::GetWarpTransform()
	{
		ACFBaseAction_eventGetWarpTransform_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_GetWarpTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UACFBaseAction_OnActionEnded = FName(TEXT("OnActionEnded"));
	void UACFBaseAction::OnActionEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnActionEnded),NULL);
	}
	static FName NAME_UACFBaseAction_OnActionStarted = FName(TEXT("OnActionStarted"));
	void UACFBaseAction::OnActionStarted(const FString& contextString)
	{
		ACFBaseAction_eventOnActionStarted_Parms Parms;
		Parms.contextString=contextString;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnActionStarted),&Parms);
	}
	static FName NAME_UACFBaseAction_OnActionTransition = FName(TEXT("OnActionTransition"));
	void UACFBaseAction::OnActionTransition(UACFBaseAction* previousState)
	{
		ACFBaseAction_eventOnActionTransition_Parms Parms;
		Parms.previousState=previousState;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnActionTransition),&Parms);
	}
	static FName NAME_UACFBaseAction_OnNotablePointReached = FName(TEXT("OnNotablePointReached"));
	void UACFBaseAction::OnNotablePointReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnNotablePointReached),NULL);
	}
	static FName NAME_UACFBaseAction_OnSubActionStateEntered = FName(TEXT("OnSubActionStateEntered"));
	void UACFBaseAction::OnSubActionStateEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnSubActionStateEntered),NULL);
	}
	static FName NAME_UACFBaseAction_OnSubActionStateExited = FName(TEXT("OnSubActionStateExited"));
	void UACFBaseAction::OnSubActionStateExited()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnSubActionStateExited),NULL);
	}
	static FName NAME_UACFBaseAction_OnTick = FName(TEXT("OnTick"));
	void UACFBaseAction::OnTick(float DeltaTime)
	{
		ACFBaseAction_eventOnTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_OnTick),&Parms);
	}
	static FName NAME_UACFBaseAction_PlayEffects = FName(TEXT("PlayEffects"));
	void UACFBaseAction::PlayEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseAction_PlayEffects),NULL);
	}
	void UACFBaseAction::StaticRegisterNativesUACFBaseAction()
	{
		UClass* Class = UACFBaseAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanExecuteAction", &UACFBaseAction::execCanExecuteAction },
			{ "ClientsOnActionEnded", &UACFBaseAction::execClientsOnActionEnded },
			{ "ClientsOnActionStarted", &UACFBaseAction::execClientsOnActionStarted },
			{ "ClientsOnNotablePointReached", &UACFBaseAction::execClientsOnNotablePointReached },
			{ "ClientsOnSubActionStateEntered", &UACFBaseAction::execClientsOnSubActionStateEntered },
			{ "ClientsOnSubActionStateExited", &UACFBaseAction::execClientsOnSubActionStateExited },
			{ "ExecuteAction", &UACFBaseAction::execExecuteAction },
			{ "ExitAction", &UACFBaseAction::execExitAction },
			{ "GetActionConfig", &UACFBaseAction::execGetActionConfig },
			{ "GetActionTag", &UACFBaseAction::execGetActionTag },
			{ "GetAnimMontage", &UACFBaseAction::execGetAnimMontage },
			{ "GetCooldownTimeRemaining", &UACFBaseAction::execGetCooldownTimeRemaining },
			{ "GetMontageSectionName", &UACFBaseAction::execGetMontageSectionName },
			{ "GetPlayRate", &UACFBaseAction::execGetPlayRate },
			{ "GetWarpInfo", &UACFBaseAction::execGetWarpInfo },
			{ "GetWarpTargetComponent", &UACFBaseAction::execGetWarpTargetComponent },
			{ "GetWarpTransform", &UACFBaseAction::execGetWarpTransform },
			{ "HandleMontageFinished", &UACFBaseAction::execHandleMontageFinished },
			{ "HandleMontageStarted", &UACFBaseAction::execHandleMontageStarted },
			{ "OnActionEnded", &UACFBaseAction::execOnActionEnded },
			{ "OnActionStarted", &UACFBaseAction::execOnActionStarted },
			{ "OnActionTransition", &UACFBaseAction::execOnActionTransition },
			{ "OnNotablePointReached", &UACFBaseAction::execOnNotablePointReached },
			{ "OnSubActionStateEntered", &UACFBaseAction::execOnSubActionStateEntered },
			{ "OnSubActionStateExited", &UACFBaseAction::execOnSubActionStateExited },
			{ "OnTick", &UACFBaseAction::execOnTick },
			{ "PlayEffects", &UACFBaseAction::execPlayEffects },
			{ "SetActionConfig", &UACFBaseAction::execSetActionConfig },
			{ "SetAnimMontage", &UACFBaseAction::execSetAnimMontage },
			{ "SetMontageInfo", &UACFBaseAction::execSetMontageInfo },
			{ "SetMontageReproductionType", &UACFBaseAction::execSetMontageReproductionType },
			{ "StartCooldown", &UACFBaseAction::execStartCooldown },
			{ "StopActionImmediately", &UACFBaseAction::execStopActionImmediately },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventCanExecuteAction_Parms, owner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFBaseAction_eventCanExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFBaseAction_eventCanExecuteAction_Parms), &Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Used to implement your own activation condition for the execution of this action. */" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Used to implement your own activation condition for the execution of this action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "CanExecuteAction", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::PropPointers), sizeof(ACFBaseAction_eventCanExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventCanExecuteAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_CanExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_CanExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ClientsOnActionEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventClientsOnActionStarted_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ClientsOnActionStarted", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::PropPointers), sizeof(ACFBaseAction_eventClientsOnActionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventClientsOnActionStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Clients Version for notable point*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Clients Version for notable point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ClientsOnNotablePointReached", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Clients version for OnSubActionState*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Clients version for OnSubActionState" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ClientsOnSubActionStateEntered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Clients version for OnSubActionState*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Clients version for OnSubActionState" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ClientsOnSubActionStateExited", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ExecuteAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Play the animation montage related to this action. Called automatically by default*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Play the animation montage related to this action. Called automatically by default" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ExecuteAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ExecuteAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_ExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_ExitAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_ExitAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called to force the end of the action. Does not stop the animation but allows the trigger of eventually stored\n    actions or set the actual state to the default one*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Called to force the end of the action. Does not stop the animation but allows the trigger of eventually stored\n    actions or set the actual state to the default one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_ExitAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "ExitAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_ExitAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_ExitAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_ExitAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_ExitAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics
	{
		struct ACFBaseAction_eventGetActionConfig_Parms
		{
			FActionConfig ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetActionConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FActionConfig, METADATA_PARAMS(0, nullptr) }; // 1412304444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// GETTERS & SETTERS//\n" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "GETTERS & SETTERS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetActionConfig", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::ACFBaseAction_eventGetActionConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::ACFBaseAction_eventGetActionConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetActionConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetActionConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics
	{
		struct ACFBaseAction_eventGetActionTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetActionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::ACFBaseAction_eventGetActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::ACFBaseAction_eventGetActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics
	{
		struct ACFBaseAction_eventGetAnimMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetAnimMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::ACFBaseAction_eventGetAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::ACFBaseAction_eventGetAnimMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics
	{
		struct ACFBaseAction_eventGetCooldownTimeRemaining_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetCooldownTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Blueprint callable function that will get us the cooldown remaining for the action*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Blueprint callable function that will get us the cooldown remaining for the action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetCooldownTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::ACFBaseAction_eventGetCooldownTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::ACFBaseAction_eventGetCooldownTimeRemaining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetMontageSectionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Implement this to select the name of the montage section that should be played when executing this action */" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Implement this to select the name of the montage section that should be played when executing this action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetMontageSectionName", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::PropPointers), sizeof(ACFBaseAction_eventGetMontageSectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventGetMontageSectionName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::PropPointers), sizeof(ACFBaseAction_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventGetPlayRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_outWarpInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::NewProp_outWarpInfo = { "outWarpInfo", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetWarpInfo_Parms, outWarpInfo), Z_Construct_UScriptStruct_FACFWarpReproductionInfo, METADATA_PARAMS(0, nullptr) }; // 1843774883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::NewProp_outWarpInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Implement this to configure the warp info. Only called if MontageReproductionType is set to Warp */" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Implement this to configure the warp info. Only called if MontageReproductionType is set to Warp" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetWarpInfo", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::PropPointers), sizeof(ACFBaseAction_eventGetWarpInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventGetWarpInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetWarpInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetWarpInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetWarpTargetComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Implement this if you only want to configure the transform of the warp point.\n    Only called if MontageReproductionType is set to Warp */" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Implement this if you only want to configure the transform of the warp point.\n    Only called if MontageReproductionType is set to Warp" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetWarpTargetComponent", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::PropPointers), sizeof(ACFBaseAction_eventGetWarpTargetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventGetWarpTargetComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventGetWarpTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Implement this if you only want to configure the transform of the warp point.\n    Only called if MontageReproductionType is set to Warp */" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Implement this if you only want to configure the transform of the warp point.\n    Only called if MontageReproductionType is set to Warp" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "GetWarpTransform", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::PropPointers), sizeof(ACFBaseAction_eventGetWarpTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventGetWarpTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_GetWarpTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_GetWarpTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics
	{
		struct ACFBaseAction_eventHandleMontageFinished_Parms
		{
			UAnimMontage* _animMontage;
			bool _bInterruptted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__animMontage;
		static void NewProp__bInterruptted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bInterruptted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::NewProp__animMontage = { "_animMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventHandleMontageFinished_Parms, _animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::NewProp__bInterruptted_SetBit(void* Obj)
	{
		((ACFBaseAction_eventHandleMontageFinished_Parms*)Obj)->_bInterruptted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::NewProp__bInterruptted = { "_bInterruptted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFBaseAction_eventHandleMontageFinished_Parms), &Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::NewProp__bInterruptted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::NewProp__animMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::NewProp__bInterruptted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "HandleMontageFinished", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::ACFBaseAction_eventHandleMontageFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::ACFBaseAction_eventHandleMontageFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics
	{
		struct ACFBaseAction_eventHandleMontageStarted_Parms
		{
			UAnimMontage* _animMontage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__animMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::NewProp__animMontage = { "_animMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventHandleMontageStarted_Parms, _animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::NewProp__animMontage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "HandleMontageStarted", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::ACFBaseAction_eventHandleMontageStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::ACFBaseAction_eventHandleMontageStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnActionEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnActionEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called when the action is finished. Normally if BindActionToAnimation is set to true\n        this is called when the animation is finished*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Called when the action is finished. Normally if BindActionToAnimation is set to true\n        this is called when the animation is finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnActionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnActionEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnActionEnded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnActionEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnActionEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventOnActionStarted_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called when the action is successfully triggered*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Called when the action is successfully triggered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnActionStarted", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::PropPointers), sizeof(ACFBaseAction_eventOnActionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventOnActionStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnActionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnActionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previousState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_previousState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::NewProp_previousState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::NewProp_previousState = { "previousState", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventOnActionTransition_Parms, previousState), Z_Construct_UClass_UACFBaseAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::NewProp_previousState_MetaData), Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::NewProp_previousState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::NewProp_previousState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called when the action is successfully triggered and BEFORE the OnActionStarted.\n        If the character is coming from the DefaultState previousState will be nullptr*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Called when the action is successfully triggered and BEFORE the OnActionStarted.\n        If the character is coming from the DefaultState previousState will be nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnActionTransition", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::PropPointers), sizeof(ACFBaseAction_eventOnActionTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventOnActionTransition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnActionTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnActionTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*To trigger a Notable point you have to add an ACFNotifyAction to your Animation Montage.\n        Called during the execution of the action when the montage reaches the ACFNotifyAction*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "To trigger a Notable point you have to add an ACFNotifyAction to your Animation Montage.\n        Called during the execution of the action when the montage reaches the ACFNotifyAction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnNotablePointReached", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*To trigger a SubActionState you have to place a ACFActionSubState notify in your Animation Montage.\n        Called during the execution of the action when the montage reaches the beginning of the Substate*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "To trigger a SubActionState you have to place a ACFActionSubState notify in your Animation Montage.\n        Called during the execution of the action when the montage reaches the beginning of the Substate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnSubActionStateEntered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*To trigger a SubActionState you have to place a ACFActionSubState notify in your Animation Montage.\n        Called during the execution of the action when the montage reaches the end  of the Substate*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "To trigger a SubActionState you have to place a ACFActionSubState notify in your Animation Montage.\n        Called during the execution of the action when the montage reaches the end  of the Substate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnSubActionStateExited", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_OnTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called every frame if the ActionsManagerComponent of this character has bCanTick set to true*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Called every frame if the ActionsManagerComponent of this character has bCanTick set to true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "OnTick", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::PropPointers), sizeof(ACFBaseAction_eventOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAction_eventOnTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_PlayEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_PlayEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_PlayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "PlayEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_PlayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_PlayEffects_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_PlayEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_PlayEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics
	{
		struct ACFBaseAction_eventSetActionConfig_Parms
		{
			FActionConfig newConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_newConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::NewProp_newConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::NewProp_newConfig = { "newConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventSetActionConfig_Parms, newConfig), Z_Construct_UScriptStruct_FActionConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::NewProp_newConfig_MetaData), Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::NewProp_newConfig_MetaData) }; // 1412304444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::NewProp_newConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "SetActionConfig", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::ACFBaseAction_eventSetActionConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::ACFBaseAction_eventSetActionConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_SetActionConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_SetActionConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics
	{
		struct ACFBaseAction_eventSetAnimMontage_Parms
		{
			UAnimMontage* newMontage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::NewProp_newMontage = { "newMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventSetAnimMontage_Parms, newMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::NewProp_newMontage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "SetAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::ACFBaseAction_eventSetAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::ACFBaseAction_eventSetAnimMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_SetAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_SetAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics
	{
		struct ACFBaseAction_eventSetMontageInfo_Parms
		{
			FACFMontageInfo montageInfo;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::NewProp_montageInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::NewProp_montageInfo = { "montageInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventSetMontageInfo_Parms, montageInfo), Z_Construct_UScriptStruct_FACFMontageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::NewProp_montageInfo_MetaData), Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::NewProp_montageInfo_MetaData) }; // 3920625168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::NewProp_montageInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Implement this to select the name of the montage section that should be played when executing this action */" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Implement this to select the name of the montage section that should be played when executing this action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "SetMontageInfo", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::ACFBaseAction_eventSetMontageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::ACFBaseAction_eventSetMontageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_SetMontageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_SetMontageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics
	{
		struct ACFBaseAction_eventSetMontageReproductionType_Parms
		{
			EMontageReproductionType reproType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_reproType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_reproType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::NewProp_reproType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::NewProp_reproType = { "reproType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAction_eventSetMontageReproductionType_Parms, reproType), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, METADATA_PARAMS(0, nullptr) }; // 3954621547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::NewProp_reproType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::NewProp_reproType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "SetMontageReproductionType", nullptr, nullptr, Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::ACFBaseAction_eventSetMontageReproductionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::ACFBaseAction_eventSetMontageReproductionType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_StartCooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_StartCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Starts the cooldown for this action, call this also clientside for UI*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Starts the cooldown for this action, call this also clientside for UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_StartCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "StartCooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_StartCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_StartCooldown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_StartCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_StartCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseAction_StopActionImmediately_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseAction_StopActionImmediately_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Interrupt current action AND animation Immediately*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "Interrupt current action AND animation Immediately" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseAction_StopActionImmediately_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseAction, nullptr, "StopActionImmediately", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseAction_StopActionImmediately_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseAction_StopActionImmediately_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFBaseAction_StopActionImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseAction_StopActionImmediately_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFBaseAction);
	UClass* Z_Construct_UClass_UACFBaseAction_NoRegister()
	{
		return UACFBaseAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFBaseAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionsManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_animMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTimerReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTimerReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StatisticComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFBaseAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFBaseAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFBaseAction_CanExecuteAction, "CanExecuteAction" }, // 759706103
		{ &Z_Construct_UFunction_UACFBaseAction_ClientsOnActionEnded, "ClientsOnActionEnded" }, // 1330087053
		{ &Z_Construct_UFunction_UACFBaseAction_ClientsOnActionStarted, "ClientsOnActionStarted" }, // 3092069787
		{ &Z_Construct_UFunction_UACFBaseAction_ClientsOnNotablePointReached, "ClientsOnNotablePointReached" }, // 4275888454
		{ &Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateEntered, "ClientsOnSubActionStateEntered" }, // 2890323245
		{ &Z_Construct_UFunction_UACFBaseAction_ClientsOnSubActionStateExited, "ClientsOnSubActionStateExited" }, // 449198761
		{ &Z_Construct_UFunction_UACFBaseAction_ExecuteAction, "ExecuteAction" }, // 433545111
		{ &Z_Construct_UFunction_UACFBaseAction_ExitAction, "ExitAction" }, // 3708540616
		{ &Z_Construct_UFunction_UACFBaseAction_GetActionConfig, "GetActionConfig" }, // 4154369708
		{ &Z_Construct_UFunction_UACFBaseAction_GetActionTag, "GetActionTag" }, // 671640715
		{ &Z_Construct_UFunction_UACFBaseAction_GetAnimMontage, "GetAnimMontage" }, // 2493463957
		{ &Z_Construct_UFunction_UACFBaseAction_GetCooldownTimeRemaining, "GetCooldownTimeRemaining" }, // 2093377675
		{ &Z_Construct_UFunction_UACFBaseAction_GetMontageSectionName, "GetMontageSectionName" }, // 735935893
		{ &Z_Construct_UFunction_UACFBaseAction_GetPlayRate, "GetPlayRate" }, // 3690370173
		{ &Z_Construct_UFunction_UACFBaseAction_GetWarpInfo, "GetWarpInfo" }, // 3475406857
		{ &Z_Construct_UFunction_UACFBaseAction_GetWarpTargetComponent, "GetWarpTargetComponent" }, // 1251309530
		{ &Z_Construct_UFunction_UACFBaseAction_GetWarpTransform, "GetWarpTransform" }, // 3549689927
		{ &Z_Construct_UFunction_UACFBaseAction_HandleMontageFinished, "HandleMontageFinished" }, // 3261185781
		{ &Z_Construct_UFunction_UACFBaseAction_HandleMontageStarted, "HandleMontageStarted" }, // 2241513407
		{ &Z_Construct_UFunction_UACFBaseAction_OnActionEnded, "OnActionEnded" }, // 3328240425
		{ &Z_Construct_UFunction_UACFBaseAction_OnActionStarted, "OnActionStarted" }, // 3833831472
		{ &Z_Construct_UFunction_UACFBaseAction_OnActionTransition, "OnActionTransition" }, // 3376770492
		{ &Z_Construct_UFunction_UACFBaseAction_OnNotablePointReached, "OnNotablePointReached" }, // 3456258833
		{ &Z_Construct_UFunction_UACFBaseAction_OnSubActionStateEntered, "OnSubActionStateEntered" }, // 4092069142
		{ &Z_Construct_UFunction_UACFBaseAction_OnSubActionStateExited, "OnSubActionStateExited" }, // 1272430957
		{ &Z_Construct_UFunction_UACFBaseAction_OnTick, "OnTick" }, // 2155603337
		{ &Z_Construct_UFunction_UACFBaseAction_PlayEffects, "PlayEffects" }, // 2914189520
		{ &Z_Construct_UFunction_UACFBaseAction_SetActionConfig, "SetActionConfig" }, // 2292342900
		{ &Z_Construct_UFunction_UACFBaseAction_SetAnimMontage, "SetAnimMontage" }, // 3972756106
		{ &Z_Construct_UFunction_UACFBaseAction_SetMontageInfo, "SetMontageInfo" }, // 1692936985
		{ &Z_Construct_UFunction_UACFBaseAction_SetMontageReproductionType, "SetMontageReproductionType" }, // 2593895656
		{ &Z_Construct_UFunction_UACFBaseAction_StartCooldown, "StartCooldown" }, // 977882860
		{ &Z_Construct_UFunction_UACFBaseAction_StopActionImmediately, "StopActionImmediately" }, // 2948953280
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actions/ACFBaseAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionConfig = { "ActionConfig", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, ActionConfig), Z_Construct_UScriptStruct_FActionConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionConfig_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionConfig_MetaData) }; // 1412304444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionsManager_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionsManager = { "ActionsManager", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, ActionsManager), Z_Construct_UClass_UACFActionsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionsManager_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionsManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CharacterOwner_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CharacterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_animMontage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_animMontage = { "animMontage", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_animMontage_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_animMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_MontageInfo_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_MontageInfo = { "MontageInfo", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, MontageInfo), Z_Construct_UScriptStruct_FACFMontageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_MontageInfo_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_MontageInfo_MetaData) }; // 3920625168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionTag_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CooldownTimerReference_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*A reference to the cooldown started for the Action*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
		{ "ToolTip", "A reference to the cooldown started for the Action" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CooldownTimerReference = { "CooldownTimerReference", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, CooldownTimerReference), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CooldownTimerReference_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CooldownTimerReference_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseAction_Statics::NewProp_StatisticComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actions/ACFBaseAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFBaseAction_Statics::NewProp_StatisticComp = { "StatisticComp", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseAction, StatisticComp), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::NewProp_StatisticComp_MetaData), Z_Construct_UClass_UACFBaseAction_Statics::NewProp_StatisticComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFBaseAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionsManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_animMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_MontageInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_ActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_CooldownTimerReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseAction_Statics::NewProp_StatisticComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFBaseAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFBaseAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFBaseAction_Statics::ClassParams = {
		&UACFBaseAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFBaseAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFBaseAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFBaseAction()
	{
		if (!Z_Registration_Info_UClass_UACFBaseAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFBaseAction.OuterSingleton, Z_Construct_UClass_UACFBaseAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFBaseAction.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFBaseAction>()
	{
		return UACFBaseAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFBaseAction);
	UACFBaseAction::~UACFBaseAction() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFBaseAction, UACFBaseAction::StaticClass, TEXT("UACFBaseAction"), &Z_Registration_Info_UClass_UACFBaseAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFBaseAction), 515601053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_1816399260(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMPlayerCameraManager.h"
#include "CinematicCameraManager/Public/CCMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMPlayerCameraManager() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_ACCMPlayerCameraManager();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_ACCMPlayerCameraManager_NoRegister();
	CINEMATICCAMERAMANAGER_API UEnum* Z_Construct_UEnum_CinematicCameraManager_ELockType();
	CINEMATICCAMERAMANAGER_API UEnum* Z_Construct_UEnum_CinematicCameraManager_ETargetLockType();
	CINEMATICCAMERAMANAGER_API UFunction* Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature();
	CINEMATICCAMERAMANAGER_API UFunction* Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraMovementSettings();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraSequenceSettings();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMSequenceEvent();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics
	{
		struct _Script_CinematicCameraManager_eventOnCameraSequenceStarted_Parms
		{
			FName cameraSequence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSequence_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_cameraSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::NewProp_cameraSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::NewProp_cameraSequence = { "cameraSequence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CinematicCameraManager_eventOnCameraSequenceStarted_Parms, cameraSequence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::NewProp_cameraSequence_MetaData), Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::NewProp_cameraSequence_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::NewProp_cameraSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CinematicCameraManager, nullptr, "OnCameraSequenceStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::_Script_CinematicCameraManager_eventOnCameraSequenceStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::_Script_CinematicCameraManager_eventOnCameraSequenceStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCameraSequenceStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCameraSequenceStarted, FName const& cameraSequence)
{
	struct _Script_CinematicCameraManager_eventOnCameraSequenceStarted_Parms
	{
		FName cameraSequence;
	};
	_Script_CinematicCameraManager_eventOnCameraSequenceStarted_Parms Parms;
	Parms.cameraSequence=cameraSequence;
	OnCameraSequenceStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics
	{
		struct _Script_CinematicCameraManager_eventOnCameraSequenceEnded_Parms
		{
			FName cameraSequence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSequence_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_cameraSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::NewProp_cameraSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::NewProp_cameraSequence = { "cameraSequence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CinematicCameraManager_eventOnCameraSequenceEnded_Parms, cameraSequence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::NewProp_cameraSequence_MetaData), Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::NewProp_cameraSequence_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::NewProp_cameraSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CinematicCameraManager, nullptr, "OnCameraSequenceEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::_Script_CinematicCameraManager_eventOnCameraSequenceEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::_Script_CinematicCameraManager_eventOnCameraSequenceEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCameraSequenceEnded_DelegateWrapper(const FMulticastScriptDelegate& OnCameraSequenceEnded, FName const& cameraSequence)
{
	struct _Script_CinematicCameraManager_eventOnCameraSequenceEnded_Parms
	{
		FName cameraSequence;
	};
	_Script_CinematicCameraManager_eventOnCameraSequenceEnded_Parms Parms;
	Parms.cameraSequence=cameraSequence;
	OnCameraSequenceEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execHandlePawnChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_newPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePawnChanged(Z_Param_newPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execOverrideCameraReferences)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_inPlayerCamera);
		P_GET_OBJECT(USpringArmComponent,Z_Param_inCameraBoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideCameraReferences(Z_Param_inPlayerCamera,Z_Param_inCameraBoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execRemoveSequenceEventModifier)
	{
		P_GET_STRUCT_REF(FCCMSequenceEvent,Z_Param_Out_modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSequenceEventModifier(Z_Param_Out_modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execAddSequenceEventModifier)
	{
		P_GET_STRUCT_REF(FCCMSequenceEvent,Z_Param_Out_modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSequenceEventModifier(Z_Param_Out_modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execStopCurrentCameraSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCurrentCameraSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execTriggerCameraSequence)
	{
		P_GET_OBJECT(AActor,Z_Param_cameraOwner);
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCameraSequence(Z_Param_cameraOwner,Z_Param_CameraEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execSetFollowPlayer)
	{
		P_GET_UBOOL(Z_Param_bFollow);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inFollowSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowPlayer(Z_Param_bFollow,Z_Param_inFollowSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execStopLookingActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLookingActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execLockCameraOnComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToLookAt);
		P_GET_ENUM(ELockType,Z_Param_lockType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lockStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockCameraOnComponent(Z_Param_ComponentToLookAt,ELockType(Z_Param_lockType),Z_Param_lockStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execLockCameraOnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorLookAt);
		P_GET_ENUM(ELockType,Z_Param_lockType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lockStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockCameraOnActor(Z_Param_ActorLookAt,ELockType(Z_Param_lockType),Z_Param_lockStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execResetCameraPosition)
	{
		P_GET_UBOOL(Z_Param_bInstantReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCameraPosition(Z_Param_bInstantReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execStopCameraEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCameraEvent(Z_Param_CameraEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execTriggerTimedCameraEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTimedCameraEvent(Z_Param_CameraEventName,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACCMPlayerCameraManager::execTriggerCameraEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCameraEvent(Z_Param_CameraEventName);
		P_NATIVE_END;
	}
	void ACCMPlayerCameraManager::StaticRegisterNativesACCMPlayerCameraManager()
	{
		UClass* Class = ACCMPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSequenceEventModifier", &ACCMPlayerCameraManager::execAddSequenceEventModifier },
			{ "HandlePawnChanged", &ACCMPlayerCameraManager::execHandlePawnChanged },
			{ "LockCameraOnActor", &ACCMPlayerCameraManager::execLockCameraOnActor },
			{ "LockCameraOnComponent", &ACCMPlayerCameraManager::execLockCameraOnComponent },
			{ "OverrideCameraReferences", &ACCMPlayerCameraManager::execOverrideCameraReferences },
			{ "RemoveSequenceEventModifier", &ACCMPlayerCameraManager::execRemoveSequenceEventModifier },
			{ "ResetCameraPosition", &ACCMPlayerCameraManager::execResetCameraPosition },
			{ "SetFollowPlayer", &ACCMPlayerCameraManager::execSetFollowPlayer },
			{ "StopCameraEvent", &ACCMPlayerCameraManager::execStopCameraEvent },
			{ "StopCurrentCameraSequence", &ACCMPlayerCameraManager::execStopCurrentCameraSequence },
			{ "StopLookingActor", &ACCMPlayerCameraManager::execStopLookingActor },
			{ "TriggerCameraEvent", &ACCMPlayerCameraManager::execTriggerCameraEvent },
			{ "TriggerCameraSequence", &ACCMPlayerCameraManager::execTriggerCameraSequence },
			{ "TriggerTimedCameraEvent", &ACCMPlayerCameraManager::execTriggerTimedCameraEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics
	{
		struct CCMPlayerCameraManager_eventAddSequenceEventModifier_Parms
		{
			FCCMSequenceEvent modifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::NewProp_modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::NewProp_modifier = { "modifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventAddSequenceEventModifier_Parms, modifier), Z_Construct_UScriptStruct_FCCMSequenceEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::NewProp_modifier_MetaData), Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::NewProp_modifier_MetaData) }; // 584148919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::NewProp_modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "AddSequenceEventModifier", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::CCMPlayerCameraManager_eventAddSequenceEventModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::CCMPlayerCameraManager_eventAddSequenceEventModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics
	{
		struct CCMPlayerCameraManager_eventHandlePawnChanged_Parms
		{
			APawn* newPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::NewProp_newPawn = { "newPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventHandlePawnChanged_Parms, newPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::NewProp_newPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "HandlePawnChanged", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::CCMPlayerCameraManager_eventHandlePawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::CCMPlayerCameraManager_eventHandlePawnChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics
	{
		struct CCMPlayerCameraManager_eventLockCameraOnActor_Parms
		{
			AActor* ActorLookAt;
			ELockType lockType;
			float lockStrength;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorLookAt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_lockType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_lockType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lockStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_ActorLookAt = { "ActorLookAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventLockCameraOnActor_Parms, ActorLookAt), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_lockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_lockType = { "lockType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventLockCameraOnActor_Parms, lockType), Z_Construct_UEnum_CinematicCameraManager_ELockType, METADATA_PARAMS(0, nullptr) }; // 2423666668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_lockStrength = { "lockStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventLockCameraOnActor_Parms, lockStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_ActorLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_lockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_lockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::NewProp_lockStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "CPP_Default_lockStrength", "5.000000" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "LockCameraOnActor", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::CCMPlayerCameraManager_eventLockCameraOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::CCMPlayerCameraManager_eventLockCameraOnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics
	{
		struct CCMPlayerCameraManager_eventLockCameraOnComponent_Parms
		{
			USceneComponent* ComponentToLookAt;
			ELockType lockType;
			float lockStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToLookAt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToLookAt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_lockType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_lockType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lockStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_ComponentToLookAt_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_ComponentToLookAt = { "ComponentToLookAt", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventLockCameraOnComponent_Parms, ComponentToLookAt), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_ComponentToLookAt_MetaData), Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_ComponentToLookAt_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_lockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_lockType = { "lockType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventLockCameraOnComponent_Parms, lockType), Z_Construct_UEnum_CinematicCameraManager_ELockType, METADATA_PARAMS(0, nullptr) }; // 2423666668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_lockStrength = { "lockStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventLockCameraOnComponent_Parms, lockStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_ComponentToLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_lockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_lockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::NewProp_lockStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "CPP_Default_lockStrength", "5.000000" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "LockCameraOnComponent", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::CCMPlayerCameraManager_eventLockCameraOnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::CCMPlayerCameraManager_eventLockCameraOnComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics
	{
		struct CCMPlayerCameraManager_eventOverrideCameraReferences_Parms
		{
			UCameraComponent* inPlayerCamera;
			USpringArmComponent* inCameraBoom;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inPlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inPlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inCameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inCameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inPlayerCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inPlayerCamera = { "inPlayerCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventOverrideCameraReferences_Parms, inPlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inPlayerCamera_MetaData), Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inPlayerCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inCameraBoom_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inCameraBoom = { "inCameraBoom", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventOverrideCameraReferences_Parms, inCameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inCameraBoom_MetaData), Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inCameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::NewProp_inCameraBoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "OverrideCameraReferences", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::CCMPlayerCameraManager_eventOverrideCameraReferences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::CCMPlayerCameraManager_eventOverrideCameraReferences_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics
	{
		struct CCMPlayerCameraManager_eventRemoveSequenceEventModifier_Parms
		{
			FCCMSequenceEvent modifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::NewProp_modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::NewProp_modifier = { "modifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventRemoveSequenceEventModifier_Parms, modifier), Z_Construct_UScriptStruct_FCCMSequenceEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::NewProp_modifier_MetaData), Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::NewProp_modifier_MetaData) }; // 584148919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::NewProp_modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "RemoveSequenceEventModifier", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::CCMPlayerCameraManager_eventRemoveSequenceEventModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::CCMPlayerCameraManager_eventRemoveSequenceEventModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics
	{
		struct CCMPlayerCameraManager_eventResetCameraPosition_Parms
		{
			bool bInstantReset;
		};
		static void NewProp_bInstantReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::NewProp_bInstantReset_SetBit(void* Obj)
	{
		((CCMPlayerCameraManager_eventResetCameraPosition_Parms*)Obj)->bInstantReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::NewProp_bInstantReset = { "bInstantReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CCMPlayerCameraManager_eventResetCameraPosition_Parms), &Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::NewProp_bInstantReset_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::NewProp_bInstantReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "CPP_Default_bInstantReset", "false" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "ResetCameraPosition", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::CCMPlayerCameraManager_eventResetCameraPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::CCMPlayerCameraManager_eventResetCameraPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics
	{
		struct CCMPlayerCameraManager_eventSetFollowPlayer_Parms
		{
			bool bFollow;
			float inFollowSpeed;
		};
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inFollowSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((CCMPlayerCameraManager_eventSetFollowPlayer_Parms*)Obj)->bFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CCMPlayerCameraManager_eventSetFollowPlayer_Parms), &Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::NewProp_inFollowSpeed = { "inFollowSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventSetFollowPlayer_Parms, inFollowSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::NewProp_bFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::NewProp_inFollowSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "CPP_Default_inFollowSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "SetFollowPlayer", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::CCMPlayerCameraManager_eventSetFollowPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::CCMPlayerCameraManager_eventSetFollowPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics
	{
		struct CCMPlayerCameraManager_eventStopCameraEvent_Parms
		{
			FName CameraEventName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventStopCameraEvent_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::NewProp_CameraEventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "StopCameraEvent", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::CCMPlayerCameraManager_eventStopCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::CCMPlayerCameraManager_eventStopCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "StopCurrentCameraSequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "StopLookingActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics
	{
		struct CCMPlayerCameraManager_eventTriggerCameraEvent_Parms
		{
			FName CameraEventName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventTriggerCameraEvent_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::NewProp_CameraEventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "TriggerCameraEvent", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::CCMPlayerCameraManager_eventTriggerCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::CCMPlayerCameraManager_eventTriggerCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics
	{
		struct CCMPlayerCameraManager_eventTriggerCameraSequence_Parms
		{
			AActor* cameraOwner;
			FName CameraEventName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraOwner;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::NewProp_cameraOwner = { "cameraOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventTriggerCameraSequence_Parms, cameraOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventTriggerCameraSequence_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::NewProp_cameraOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::NewProp_CameraEventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "TriggerCameraSequence", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::CCMPlayerCameraManager_eventTriggerCameraSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::CCMPlayerCameraManager_eventTriggerCameraSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics
	{
		struct CCMPlayerCameraManager_eventTriggerTimedCameraEvent_Parms
		{
			FName CameraEventName;
			float duration;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventTriggerTimedCameraEvent_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMPlayerCameraManager_eventTriggerTimedCameraEvent_Parms, duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::NewProp_CameraEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCMPlayerCameraManager, nullptr, "TriggerTimedCameraEvent", nullptr, nullptr, Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::CCMPlayerCameraManager_eventTriggerTimedCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::CCMPlayerCameraManager_eventTriggerTimedCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACCMPlayerCameraManager);
	UClass* Z_Construct_UClass_ACCMPlayerCameraManager_NoRegister()
	{
		return ACCMPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ACCMPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMovements_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMovements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLockPitchUpperLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLockPitchUpperLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLockPitchLowerLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLockPitchLowerLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalLockOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalLockOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalMov_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalMov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowPlayer_MetaData[];
#endif
		static void NewProp_bFollowPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFollowDeltaAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFollowDeltaAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintDebugDeltaAngle_MetaData[];
#endif
		static void NewProp_bPrintDebugDeltaAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintDebugDeltaAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingSequence_MetaData[];
#endif
		static void NewProp_bIsPlayingSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sequenceCameraActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_sequenceCameraActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraSequenceStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraSequenceStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraSequenceEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraSequenceEnded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentlyActiveCameraEvents_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_currentlyActiveCameraEvents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentlyActiveCameraEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_currentlyActiveCameraEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originalPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_originalPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originalFov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_originalFov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__originalRelativeRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__originalRelativeRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__localPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localFov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__localFov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localTimeDilatation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__localTimeDilatation;
		static const UECodeGen_Private::FBytePropertyParams NewProp__localIsLockingAt_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localIsLockingAt_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp__localIsLockingAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localStrafing_MetaData[];
#endif
		static void NewProp__localStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__localStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__lockStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__lockStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localOrientToMov_MetaData[];
#endif
		static void NewProp__localOrientToMov_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__localOrientToMov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__localArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__localArmLength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_targetLockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetLockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_targetLockType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentLockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentLockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLockType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localtarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_localtarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localtargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_localtargetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSequenceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentSequenceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACCMPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACCMPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_AddSequenceEventModifier, "AddSequenceEventModifier" }, // 1968529959
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_HandlePawnChanged, "HandlePawnChanged" }, // 737595676
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnActor, "LockCameraOnActor" }, // 343288324
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_LockCameraOnComponent, "LockCameraOnComponent" }, // 2030809892
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_OverrideCameraReferences, "OverrideCameraReferences" }, // 1398197058
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_RemoveSequenceEventModifier, "RemoveSequenceEventModifier" }, // 777007347
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_ResetCameraPosition, "ResetCameraPosition" }, // 1473671990
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_SetFollowPlayer, "SetFollowPlayer" }, // 3081265403
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_StopCameraEvent, "StopCameraEvent" }, // 2761869359
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_StopCurrentCameraSequence, "StopCurrentCameraSequence" }, // 1722048470
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_StopLookingActor, "StopLookingActor" }, // 800242223
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraEvent, "TriggerCameraEvent" }, // 2368871443
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerCameraSequence, "TriggerCameraSequence" }, // 3485861030
		{ &Z_Construct_UFunction_ACCMPlayerCameraManager_TriggerTimedCameraEvent, "TriggerTimedCameraEvent" }, // 3174166807
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CCMPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraMovements_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraMovements = { "CameraMovements", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, CameraMovements), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraMovements_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraMovements_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchUpperLimit_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchUpperLimit = { "CameraLockPitchUpperLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, CameraLockPitchUpperLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchUpperLimit_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchUpperLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchLowerLimit_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchLowerLimit = { "CameraLockPitchLowerLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, CameraLockPitchLowerLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchLowerLimit_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchLowerLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_GlobalLockOffset_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_GlobalLockOffset = { "GlobalLockOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, GlobalLockOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_GlobalLockOffset_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_GlobalLockOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraActorClass_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraActorClass = { "CameraActorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, CameraActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraActorClass_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FinalMov_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FinalMov = { "FinalMov", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, FinalMov), Z_Construct_UScriptStruct_FCCMCameraMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FinalMov_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FinalMov_MetaData) }; // 3274307025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCamera_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_cameraBoom_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_cameraBoom_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_cameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer_SetBit(void* Obj)
	{
		((ACCMPlayerCameraManager*)Obj)->bFollowPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer = { "bFollowPlayer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACCMPlayerCameraManager), &Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FollowSpeed_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "EditCondition", "bFollowPlayerWhenMoving" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FollowSpeed = { "FollowSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, FollowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FollowSpeed_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FollowSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_MaxFollowDeltaAngle_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "EditCondition", "bFollowPlayerWhenMoving" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_MaxFollowDeltaAngle = { "MaxFollowDeltaAngle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, MaxFollowDeltaAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_MaxFollowDeltaAngle_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_MaxFollowDeltaAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle_MetaData[] = {
		{ "Category", "CCM Camera" },
		{ "EditCondition", "bFollowPlayerWhenMoving" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle_SetBit(void* Obj)
	{
		((ACCMPlayerCameraManager*)Obj)->bPrintDebugDeltaAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle = { "bPrintDebugDeltaAngle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACCMPlayerCameraManager), &Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence_SetBit(void* Obj)
	{
		((ACCMPlayerCameraManager*)Obj)->bIsPlayingSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence = { "bIsPlayingSequence", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACCMPlayerCameraManager), &Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_sequenceCameraActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_sequenceCameraActor = { "sequenceCameraActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, sequenceCameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_sequenceCameraActor_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_sequenceCameraActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequence = { "currentSequence", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, currentSequence), Z_Construct_UScriptStruct_FCurrentSequence, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequence_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequence_MetaData) }; // 1053218227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceStarted_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceStarted = { "OnCameraSequenceStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, OnCameraSequenceStarted), Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceStarted_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceStarted_MetaData) }; // 918002631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceEnded_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceEnded = { "OnCameraSequenceEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, OnCameraSequenceEnded), Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceEnded_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceEnded_MetaData) }; // 3534977427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_ValueProp = { "currentlyActiveCameraEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCCMCameraMovementSettings, METADATA_PARAMS(0, nullptr) }; // 3274307025
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_Key_KeyProp = { "currentlyActiveCameraEvents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents = { "currentlyActiveCameraEvents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, currentlyActiveCameraEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_MetaData) }; // 3274307025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCharacter = { "playerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, playerCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCharacter_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalPos_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalPos = { "originalPos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, originalPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalPos_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalFov_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalFov = { "originalFov", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, originalFov), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalFov_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalFov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__originalRelativeRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__originalRelativeRot = { "_originalRelativeRot", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _originalRelativeRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__originalRelativeRot_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__originalRelativeRot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localPos_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localPos = { "_localPos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _localPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localPos_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localFov_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localFov = { "_localFov", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _localFov), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localFov_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localFov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localTimeDilatation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localTimeDilatation = { "_localTimeDilatation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _localTimeDilatation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localTimeDilatation_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localTimeDilatation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt = { "_localIsLockingAt", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _localIsLockingAt), Z_Construct_UEnum_CinematicCameraManager_ETargetLockType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt_MetaData) }; // 3532725755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing_SetBit(void* Obj)
	{
		((ACCMPlayerCameraManager*)Obj)->_localStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing = { "_localStrafing", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACCMPlayerCameraManager), &Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__lockStrength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__lockStrength = { "_lockStrength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _lockStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__lockStrength_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__lockStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov_SetBit(void* Obj)
	{
		((ACCMPlayerCameraManager*)Obj)->_localOrientToMov = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov = { "_localOrientToMov", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACCMPlayerCameraManager), &Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localArmLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localArmLength = { "_localArmLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, _localArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localArmLength_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localArmLength_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType = { "targetLockType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, targetLockType), Z_Construct_UEnum_CinematicCameraManager_ETargetLockType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType_MetaData) }; // 3532725755
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType = { "currentLockType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, currentLockType), Z_Construct_UEnum_CinematicCameraManager_ELockType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType_MetaData) }; // 2423666668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtarget = { "localtarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, localtarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtarget_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtargetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtargetComponent = { "localtargetComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, localtargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtargetComponent_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtargetComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequenceSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequenceSettings = { "currentSequenceSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACCMPlayerCameraManager, currentSequenceSettings), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequenceSettings_MetaData), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequenceSettings_MetaData) }; // 2134631071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACCMPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraMovements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchUpperLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraLockPitchLowerLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_GlobalLockOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_CameraActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FinalMov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_cameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bFollowPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_FollowSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_MaxFollowDeltaAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bPrintDebugDeltaAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_bIsPlayingSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_sequenceCameraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_OnCameraSequenceEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentlyActiveCameraEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_playerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_originalFov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__originalRelativeRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localFov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localTimeDilatation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localIsLockingAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__lockStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localOrientToMov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp__localArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_targetLockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentLockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_localtargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACCMPlayerCameraManager_Statics::NewProp_currentSequenceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACCMPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACCMPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACCMPlayerCameraManager_Statics::ClassParams = {
		&ACCMPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACCMPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACCMPlayerCameraManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACCMPlayerCameraManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACCMPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_ACCMPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACCMPlayerCameraManager.OuterSingleton, Z_Construct_UClass_ACCMPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACCMPlayerCameraManager.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<ACCMPlayerCameraManager>()
	{
		return ACCMPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACCMPlayerCameraManager);
	ACCMPlayerCameraManager::~ACCMPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACCMPlayerCameraManager, ACCMPlayerCameraManager::StaticClass, TEXT("ACCMPlayerCameraManager"), &Z_Registration_Info_UClass_ACCMPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACCMPlayerCameraManager), 1907659610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_3844770696(TEXT("/Script/CinematicCameraManager"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

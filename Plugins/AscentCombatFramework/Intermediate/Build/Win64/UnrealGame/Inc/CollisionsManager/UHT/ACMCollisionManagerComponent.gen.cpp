// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollisionsManager/Public/ACMCollisionManagerComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMCollisionManagerComponent() {}
// Cross Module References
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionManagerComponent();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister();
	COLLISIONSMANAGER_API UEnum* Z_Construct_UEnum_CollisionsManager_EDebugType();
	COLLISIONSMANAGER_API UFunction* Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature();
	COLLISIONSMANAGER_API UFunction* Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FAreaDamageInfo();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTraceInfo();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FHitActors();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FTraceInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CollisionsManager();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics
	{
		struct _Script_CollisionsManager_eventOnCollisionDetected_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CollisionsManager_eventOnCollisionDetected_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::NewProp_HitResult_MetaData), Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CollisionsManager, nullptr, "OnCollisionDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::_Script_CollisionsManager_eventOnCollisionDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::_Script_CollisionsManager_eventOnCollisionDetected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCollisionDetected_DelegateWrapper(const FMulticastScriptDelegate& OnCollisionDetected, FHitResult const& HitResult)
{
	struct _Script_CollisionsManager_eventOnCollisionDetected_Parms
	{
		FHitResult HitResult;
	};
	_Script_CollisionsManager_eventOnCollisionDetected_Parms Parms;
	Parms.HitResult=HitResult;
	OnCollisionDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics
	{
		struct _Script_CollisionsManager_eventOnActorDamaged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::NewProp_damageReceiver = { "damageReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CollisionsManager_eventOnActorDamaged_Parms, damageReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::NewProp_damageReceiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CollisionsManager, nullptr, "OnActorDamaged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::_Script_CollisionsManager_eventOnActorDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::_Script_CollisionsManager_eventOnActorDamaged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActorDamaged_DelegateWrapper(const FMulticastScriptDelegate& OnActorDamaged, AActor* damageReceiver)
{
	struct _Script_CollisionsManager_eventOnActorDamaged_Parms
	{
		AActor* damageReceiver;
	};
	_Script_CollisionsManager_eventOnActorDamaged_Parms Parms;
	Parms.damageReceiver=damageReceiver;
	OnActorDamaged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execHandleAreaDamageLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAreaDamageLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execHandleAreaDamageFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAreaDamageFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execHandleAllTimedTraceFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAllTimedTraceFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execHandleTimedSingleTraceFinished)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_traceEnded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTimedSingleTraceFinished(Z_Param_Out_traceEnded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execTryGetTraceConfig)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_traceName);
		P_GET_STRUCT_REF(FTraceInfo,Z_Param_Out_outTraceInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetTraceConfig(Z_Param_Out_traceName,Z_Param_Out_outTraceInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execSetTraceConfig)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_traceName);
		P_GET_STRUCT_REF(FTraceInfo,Z_Param_Out_traceInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceConfig(Z_Param_Out_traceName,Z_Param_Out_traceInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execGetActorOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execSetActorOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_newOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorOwner(Z_Param_newOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execIsTraceActive)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_traceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTraceActive(Z_Param_Out_traceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execGetDamageTraces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FTraceInfo>*)Z_Param__Result=P_THIS->GetDamageTraces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStopTrails)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_trail);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTrails_Implementation(Z_Param_trail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execPlayTrails)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_trail);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTrails_Implementation(Z_Param_trail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStartAllTimedTraces)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAllTimedTraces_Implementation(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStartTimedSingleTrace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TraceName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimedSingleTrace_Implementation(Z_Param_TraceName,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStopSingleTrace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSingleTrace_Implementation(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStartSingleTrace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSingleTrace_Implementation(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStopAllTraces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllTraces_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStartAllTraces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAllTraces_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execPerformSwipeTraceShot_Local)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_end);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformSwipeTraceShot_Local(Z_Param_Out_start,Z_Param_Out_end,Z_Param_radius,Z_Param_Out_outHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execPerformSwipeTraceShot)
	{
		P_GET_STRUCT(FVector,Z_Param_start);
		P_GET_STRUCT(FVector,Z_Param_end);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformSwipeTraceShot_Implementation(Z_Param_start,Z_Param_end,Z_Param_radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execClearCollisionChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollisionChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execSetCollisionChannels)
	{
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_inTraceChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionChannels(Z_Param_inTraceChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execAddCollisionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_inTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionChannel(ECollisionChannel(Z_Param_inTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execAddActorToIgnore)
	{
		P_GET_OBJECT(AActor,Z_Param_ignoredActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorToIgnore(Z_Param_ignoredActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execPerformAreaDamageForDuration)
	{
		P_GET_STRUCT(FVector,Z_Param_damageCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAreaDamageForDuration_Implementation(Z_Param_damageCenter,Z_Param_damageRadius,Z_Param_duration,Z_Param_damageInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execPerformAreaDamage_Single_Local)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_damageCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageRadius);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_outHits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAreaDamage_Single_Local(Z_Param_Out_damageCenter,Z_Param_damageRadius,Z_Param_Out_outHits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execPerformAreaDamage_Single)
	{
		P_GET_STRUCT(FVector,Z_Param_damageCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAreaDamage_Single_Implementation(Z_Param_damageCenter,Z_Param_damageRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStopCurrentAreaDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCurrentAreaDamage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execStartAreaDamage)
	{
		P_GET_STRUCT(FVector,Z_Param_damageCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAreaDamage_Implementation(Z_Param_damageCenter,Z_Param_damageRadius,Z_Param_damageInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionManagerComponent::execSetupCollisionManager)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_inDamageMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCollisionManager(Z_Param_inDamageMesh);
		P_NATIVE_END;
	}
	struct ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Parms
	{
		FVector damageCenter;
		float damageRadius;
	};
	struct ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms
	{
		FVector damageCenter;
		float damageRadius;
		float duration;
		float damageInterval;
	};
	struct ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms
	{
		FVector start;
		FVector end;
		float radius;
	};
	struct ACMCollisionManagerComponent_eventPlayTrails_Parms
	{
		FName trail;
	};
	struct ACMCollisionManagerComponent_eventStartAllTimedTraces_Parms
	{
		float Duration;
	};
	struct ACMCollisionManagerComponent_eventStartAreaDamage_Parms
	{
		FVector damageCenter;
		float damageRadius;
		float damageInterval;
	};
	struct ACMCollisionManagerComponent_eventStartSingleTrace_Parms
	{
		FName Name;
	};
	struct ACMCollisionManagerComponent_eventStartTimedSingleTrace_Parms
	{
		FName TraceName;
		float Duration;
	};
	struct ACMCollisionManagerComponent_eventStopSingleTrace_Parms
	{
		FName Name;
	};
	struct ACMCollisionManagerComponent_eventStopTrails_Parms
	{
		FName trail;
	};
	static FName NAME_UACMCollisionManagerComponent_PerformAreaDamage_Single = FName(TEXT("PerformAreaDamage_Single"));
	void UACMCollisionManagerComponent::PerformAreaDamage_Single(FVector const& damageCenter, float damageRadius)
	{
		ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Parms Parms;
		Parms.damageCenter=damageCenter;
		Parms.damageRadius=damageRadius;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_PerformAreaDamage_Single),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_PerformAreaDamageForDuration = FName(TEXT("PerformAreaDamageForDuration"));
	void UACMCollisionManagerComponent::PerformAreaDamageForDuration(FVector const& damageCenter, float damageRadius, float duration, float damageInterval)
	{
		ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms Parms;
		Parms.damageCenter=damageCenter;
		Parms.damageRadius=damageRadius;
		Parms.duration=duration;
		Parms.damageInterval=damageInterval;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_PerformAreaDamageForDuration),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_PerformSwipeTraceShot = FName(TEXT("PerformSwipeTraceShot"));
	void UACMCollisionManagerComponent::PerformSwipeTraceShot(FVector const& start, FVector const& end, float radius)
	{
		ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms Parms;
		Parms.start=start;
		Parms.end=end;
		Parms.radius=radius;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_PerformSwipeTraceShot),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_PlayTrails = FName(TEXT("PlayTrails"));
	void UACMCollisionManagerComponent::PlayTrails(FName const& trail)
	{
		ACMCollisionManagerComponent_eventPlayTrails_Parms Parms;
		Parms.trail=trail;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_PlayTrails),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_StartAllTimedTraces = FName(TEXT("StartAllTimedTraces"));
	void UACMCollisionManagerComponent::StartAllTimedTraces(float Duration)
	{
		ACMCollisionManagerComponent_eventStartAllTimedTraces_Parms Parms;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StartAllTimedTraces),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_StartAllTraces = FName(TEXT("StartAllTraces"));
	void UACMCollisionManagerComponent::StartAllTraces()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StartAllTraces),NULL);
	}
	static FName NAME_UACMCollisionManagerComponent_StartAreaDamage = FName(TEXT("StartAreaDamage"));
	void UACMCollisionManagerComponent::StartAreaDamage(FVector const& damageCenter, float damageRadius, float damageInterval)
	{
		ACMCollisionManagerComponent_eventStartAreaDamage_Parms Parms;
		Parms.damageCenter=damageCenter;
		Parms.damageRadius=damageRadius;
		Parms.damageInterval=damageInterval;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StartAreaDamage),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_StartSingleTrace = FName(TEXT("StartSingleTrace"));
	void UACMCollisionManagerComponent::StartSingleTrace(FName const& Name)
	{
		ACMCollisionManagerComponent_eventStartSingleTrace_Parms Parms;
		Parms.Name=Name;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StartSingleTrace),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_StartTimedSingleTrace = FName(TEXT("StartTimedSingleTrace"));
	void UACMCollisionManagerComponent::StartTimedSingleTrace(FName const& TraceName, float Duration)
	{
		ACMCollisionManagerComponent_eventStartTimedSingleTrace_Parms Parms;
		Parms.TraceName=TraceName;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StartTimedSingleTrace),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_StopAllTraces = FName(TEXT("StopAllTraces"));
	void UACMCollisionManagerComponent::StopAllTraces()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StopAllTraces),NULL);
	}
	static FName NAME_UACMCollisionManagerComponent_StopCurrentAreaDamage = FName(TEXT("StopCurrentAreaDamage"));
	void UACMCollisionManagerComponent::StopCurrentAreaDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StopCurrentAreaDamage),NULL);
	}
	static FName NAME_UACMCollisionManagerComponent_StopSingleTrace = FName(TEXT("StopSingleTrace"));
	void UACMCollisionManagerComponent::StopSingleTrace(FName const& Name)
	{
		ACMCollisionManagerComponent_eventStopSingleTrace_Parms Parms;
		Parms.Name=Name;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StopSingleTrace),&Parms);
	}
	static FName NAME_UACMCollisionManagerComponent_StopTrails = FName(TEXT("StopTrails"));
	void UACMCollisionManagerComponent::StopTrails(FName const& trail)
	{
		ACMCollisionManagerComponent_eventStopTrails_Parms Parms;
		Parms.trail=trail;
		ProcessEvent(FindFunctionChecked(NAME_UACMCollisionManagerComponent_StopTrails),&Parms);
	}
	void UACMCollisionManagerComponent::StaticRegisterNativesUACMCollisionManagerComponent()
	{
		UClass* Class = UACMCollisionManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorToIgnore", &UACMCollisionManagerComponent::execAddActorToIgnore },
			{ "AddCollisionChannel", &UACMCollisionManagerComponent::execAddCollisionChannel },
			{ "ClearCollisionChannels", &UACMCollisionManagerComponent::execClearCollisionChannels },
			{ "GetActorOwner", &UACMCollisionManagerComponent::execGetActorOwner },
			{ "GetDamageTraces", &UACMCollisionManagerComponent::execGetDamageTraces },
			{ "HandleAllTimedTraceFinished", &UACMCollisionManagerComponent::execHandleAllTimedTraceFinished },
			{ "HandleAreaDamageFinished", &UACMCollisionManagerComponent::execHandleAreaDamageFinished },
			{ "HandleAreaDamageLooping", &UACMCollisionManagerComponent::execHandleAreaDamageLooping },
			{ "HandleTimedSingleTraceFinished", &UACMCollisionManagerComponent::execHandleTimedSingleTraceFinished },
			{ "IsTraceActive", &UACMCollisionManagerComponent::execIsTraceActive },
			{ "PerformAreaDamage_Single", &UACMCollisionManagerComponent::execPerformAreaDamage_Single },
			{ "PerformAreaDamage_Single_Local", &UACMCollisionManagerComponent::execPerformAreaDamage_Single_Local },
			{ "PerformAreaDamageForDuration", &UACMCollisionManagerComponent::execPerformAreaDamageForDuration },
			{ "PerformSwipeTraceShot", &UACMCollisionManagerComponent::execPerformSwipeTraceShot },
			{ "PerformSwipeTraceShot_Local", &UACMCollisionManagerComponent::execPerformSwipeTraceShot_Local },
			{ "PlayTrails", &UACMCollisionManagerComponent::execPlayTrails },
			{ "SetActorOwner", &UACMCollisionManagerComponent::execSetActorOwner },
			{ "SetCollisionChannels", &UACMCollisionManagerComponent::execSetCollisionChannels },
			{ "SetTraceConfig", &UACMCollisionManagerComponent::execSetTraceConfig },
			{ "SetupCollisionManager", &UACMCollisionManagerComponent::execSetupCollisionManager },
			{ "StartAllTimedTraces", &UACMCollisionManagerComponent::execStartAllTimedTraces },
			{ "StartAllTraces", &UACMCollisionManagerComponent::execStartAllTraces },
			{ "StartAreaDamage", &UACMCollisionManagerComponent::execStartAreaDamage },
			{ "StartSingleTrace", &UACMCollisionManagerComponent::execStartSingleTrace },
			{ "StartTimedSingleTrace", &UACMCollisionManagerComponent::execStartTimedSingleTrace },
			{ "StopAllTraces", &UACMCollisionManagerComponent::execStopAllTraces },
			{ "StopCurrentAreaDamage", &UACMCollisionManagerComponent::execStopCurrentAreaDamage },
			{ "StopSingleTrace", &UACMCollisionManagerComponent::execStopSingleTrace },
			{ "StopTrails", &UACMCollisionManagerComponent::execStopTrails },
			{ "TryGetTraceConfig", &UACMCollisionManagerComponent::execTryGetTraceConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics
	{
		struct ACMCollisionManagerComponent_eventAddActorToIgnore_Parms
		{
			AActor* ignoredActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ignoredActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::NewProp_ignoredActor = { "ignoredActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventAddActorToIgnore_Parms, ignoredActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::NewProp_ignoredActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "AddActorToIgnore", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::ACMCollisionManagerComponent_eventAddActorToIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::ACMCollisionManagerComponent_eventAddActorToIgnore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics
	{
		struct ACMCollisionManagerComponent_eventAddCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> inTraceChannel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inTraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::NewProp_inTraceChannel = { "inTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventAddCollisionChannel_Parms, inTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::NewProp_inTraceChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "AddCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::ACMCollisionManagerComponent_eventAddCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::ACMCollisionManagerComponent_eventAddCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "ClearCollisionChannels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics
	{
		struct ACMCollisionManagerComponent_eventGetActorOwner_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventGetActorOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "GetActorOwner", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::ACMCollisionManagerComponent_eventGetActorOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::ACMCollisionManagerComponent_eventGetActorOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics
	{
		struct ACMCollisionManagerComponent_eventGetDamageTraces_Parms
		{
			TMap<FName,FTraceInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTraceInfo, METADATA_PARAMS(0, nullptr) }; // 2049366361
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventGetDamageTraces_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2049366361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "GetDamageTraces", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::ACMCollisionManagerComponent_eventGetDamageTraces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::ACMCollisionManagerComponent_eventGetDamageTraces_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "HandleAllTimedTraceFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "HandleAreaDamageFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "HandleAreaDamageLooping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics
	{
		struct ACMCollisionManagerComponent_eventHandleTimedSingleTraceFinished_Parms
		{
			FName traceEnded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceEnded_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::NewProp_traceEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::NewProp_traceEnded = { "traceEnded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventHandleTimedSingleTraceFinished_Parms, traceEnded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::NewProp_traceEnded_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::NewProp_traceEnded_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::NewProp_traceEnded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "HandleTimedSingleTraceFinished", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::ACMCollisionManagerComponent_eventHandleTimedSingleTraceFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::ACMCollisionManagerComponent_eventHandleTimedSingleTraceFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics
	{
		struct ACMCollisionManagerComponent_eventIsTraceActive_Parms
		{
			FName traceName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_traceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_traceName = { "traceName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventIsTraceActive_Parms, traceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_traceName_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_traceName_MetaData) };
	void Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACMCollisionManagerComponent_eventIsTraceActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACMCollisionManagerComponent_eventIsTraceActive_Parms), &Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_traceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "IsTraceActive", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::ACMCollisionManagerComponent_eventIsTraceActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::ACMCollisionManagerComponent_eventIsTraceActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageCenter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageCenter = { "damageCenter", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Parms, damageCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageCenter_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageCenter_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageRadius = { "damageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Parms, damageRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::NewProp_damageRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "PerformAreaDamage_Single", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics
	{
		struct ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Local_Parms
		{
			FVector damageCenter;
			float damageRadius;
			TArray<FHitResult> outHits;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageCenter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageRadius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outHits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageCenter = { "damageCenter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Local_Parms, damageCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageCenter_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageCenter_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageRadius = { "damageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Local_Parms, damageRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_outHits_Inner = { "outHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_outHits = { "outHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Local_Parms, outHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_damageRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_outHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::NewProp_outHits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "Comment", "/*Not replicated version of perform area damage that only works locally but gives bacj the hit result*/" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
		{ "ToolTip", "Not replicated version of perform area damage that only works locally but gives bacj the hit result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "PerformAreaDamage_Single_Local", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Local_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::ACMCollisionManagerComponent_eventPerformAreaDamage_Single_Local_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageCenter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageCenter = { "damageCenter", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms, damageCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageCenter_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageCenter_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageRadius = { "damageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms, damageRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms, duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageInterval = { "damageInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms, damageInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::NewProp_damageInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "CPP_Default_damageInterval", "1.000000" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "PerformAreaDamageForDuration", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventPerformAreaDamageForDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_start_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_end_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_end_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms, radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::NewProp_radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "CPP_Default_radius", "0.000000" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "PerformSwipeTraceShot", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics
	{
		struct ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms
		{
			FVector start;
			FVector end;
			float radius;
			FHitResult outHit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_start_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_end_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_end_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms, radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_outHit = { "outHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms, outHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::NewProp_outHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "Comment", "/*Not repliacted version of perform swipe trace that only works locally but gives back the hit result*/" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
		{ "ToolTip", "Not repliacted version of perform swipe trace that only works locally but gives back the hit result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "PerformSwipeTraceShot_Local", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::ACMCollisionManagerComponent_eventPerformSwipeTraceShot_Local_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trail_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_trail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::NewProp_trail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::NewProp_trail = { "trail", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventPlayTrails_Parms, trail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::NewProp_trail_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::NewProp_trail_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::NewProp_trail,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "PlayTrails", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventPlayTrails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventPlayTrails_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics
	{
		struct ACMCollisionManagerComponent_eventSetActorOwner_Parms
		{
			AActor* newOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::NewProp_newOwner = { "newOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventSetActorOwner_Parms, newOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::NewProp_newOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "Comment", "/*used to override the default owner. Useful if this component is used in a weapon but\n\x09you want the Damage dealer is actually your character and NOT the weapon itself*/" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
		{ "ToolTip", "used to override the default owner. Useful if this component is used in a weapon but\n       you want the Damage dealer is actually your character and NOT the weapon itself" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "SetActorOwner", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::ACMCollisionManagerComponent_eventSetActorOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::ACMCollisionManagerComponent_eventSetActorOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics
	{
		struct ACMCollisionManagerComponent_eventSetCollisionChannels_Parms
		{
			TArray<TEnumAsByte<ECollisionChannel> > inTraceChannels;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inTraceChannels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inTraceChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::NewProp_inTraceChannels_Inner = { "inTraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::NewProp_inTraceChannels = { "inTraceChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventSetCollisionChannels_Parms, inTraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::NewProp_inTraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::NewProp_inTraceChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "SetCollisionChannels", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::ACMCollisionManagerComponent_eventSetCollisionChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::ACMCollisionManagerComponent_eventSetCollisionChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics
	{
		struct ACMCollisionManagerComponent_eventSetTraceConfig_Parms
		{
			FName traceName;
			FTraceInfo traceInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_traceInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceName = { "traceName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventSetTraceConfig_Parms, traceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceName_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceInfo = { "traceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventSetTraceConfig_Parms, traceInfo), Z_Construct_UScriptStruct_FTraceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceInfo_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceInfo_MetaData) }; // 2049366361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::NewProp_traceInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "SetTraceConfig", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::ACMCollisionManagerComponent_eventSetTraceConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::ACMCollisionManagerComponent_eventSetTraceConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics
	{
		struct ACMCollisionManagerComponent_eventSetupCollisionManager_Parms
		{
			UMeshComponent* inDamageMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inDamageMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inDamageMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::NewProp_inDamageMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::NewProp_inDamageMesh = { "inDamageMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventSetupCollisionManager_Parms, inDamageMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::NewProp_inDamageMesh_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::NewProp_inDamageMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::NewProp_inDamageMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "SetupCollisionManager", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::ACMCollisionManagerComponent_eventSetupCollisionManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::ACMCollisionManagerComponent_eventSetupCollisionManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartAllTimedTraces_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StartAllTimedTraces", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventStartAllTimedTraces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventStartAllTimedTraces_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StartAllTraces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageCenter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageCenter = { "damageCenter", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartAreaDamage_Parms, damageCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageCenter_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageCenter_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageRadius = { "damageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartAreaDamage_Parms, damageRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageInterval = { "damageInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartAreaDamage_Parms, damageInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::NewProp_damageInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "CPP_Default_damageInterval", "1.000000" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StartAreaDamage", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventStartAreaDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventStartAreaDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartSingleTrace_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StartSingleTrace", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventStartSingleTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventStartSingleTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_TraceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_TraceName = { "TraceName", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartTimedSingleTrace_Parms, TraceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_TraceName_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_TraceName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStartTimedSingleTrace_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_TraceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StartTimedSingleTrace", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventStartTimedSingleTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventStartTimedSingleTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StopAllTraces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StopCurrentAreaDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStopSingleTrace_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StopSingleTrace", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventStopSingleTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventStopSingleTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trail_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_trail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::NewProp_trail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::NewProp_trail = { "trail", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventStopTrails_Parms, trail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::NewProp_trail_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::NewProp_trail_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::NewProp_trail,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "StopTrails", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::PropPointers), sizeof(ACMCollisionManagerComponent_eventStopTrails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMCollisionManagerComponent_eventStopTrails_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics
	{
		struct ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms
		{
			FName traceName;
			FTraceInfo outTraceInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outTraceInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_traceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_traceName = { "traceName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms, traceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_traceName_MetaData), Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_traceName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_outTraceInfo = { "outTraceInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms, outTraceInfo), Z_Construct_UScriptStruct_FTraceInfo, METADATA_PARAMS(0, nullptr) }; // 2049366361
	void Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms), &Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_traceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_outTraceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionManagerComponent, nullptr, "TryGetTraceConfig", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::ACMCollisionManagerComponent_eventTryGetTraceConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMCollisionManagerComponent);
	UClass* Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister()
	{
		return UACMCollisionManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACMCollisionManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowDebugInfo_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDebugInfo_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowDebugInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugInactiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugInactiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugActiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleHitsPerSwing_MetaData[];
#endif
		static void NewProp_bAllowMultipleHitsPerSwing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleHitsPerSwing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOwner_MetaData[];
#endif
		static void NewProp_bIgnoreOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOwner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTraces_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DamageTraces_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTraces_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamageTraces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwipeTraceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwipeTraceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaDamageTraceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaDamageTraceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCollisionDetected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollisionDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorDamaged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDamaged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_damageMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_activatedTraces_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_activatedTraces_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_activatedTraces_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_activatedTraces;
		static const UECodeGen_Private::FNamePropertyParams NewProp_pendingDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pendingDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pendingDelete;
		static const UECodeGen_Private::FStructPropertyParams NewProp_alreadyHitActors_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_alreadyHitActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alreadyHitActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_alreadyHitActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponents_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleSystemComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParticleSystemComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystemComponents_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NiagaraSystemComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NiagaraSystemComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTraceTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTraceTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaDamageTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaDamageTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaDamageLoopTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaDamageLoopTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAreaDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentAreaDamage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceTimers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceTimers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceTimers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TraceTimers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleTimedTraceStarted_MetaData[];
#endif
		static void NewProp_bSingleTimedTraceStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleTimedTraceStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllTimedTraceStarted_MetaData[];
#endif
		static void NewProp_bAllTimedTraceStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllTimedTraceStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACMCollisionManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACMCollisionManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_AddActorToIgnore, "AddActorToIgnore" }, // 4201460405
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_AddCollisionChannel, "AddCollisionChannel" }, // 2701760022
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_ClearCollisionChannels, "ClearCollisionChannels" }, // 3143375654
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_GetActorOwner, "GetActorOwner" }, // 3395698719
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_GetDamageTraces, "GetDamageTraces" }, // 1240144463
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAllTimedTraceFinished, "HandleAllTimedTraceFinished" }, // 3883939953
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageFinished, "HandleAreaDamageFinished" }, // 4131797257
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_HandleAreaDamageLooping, "HandleAreaDamageLooping" }, // 1658507488
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_HandleTimedSingleTraceFinished, "HandleTimedSingleTraceFinished" }, // 2948209433
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_IsTraceActive, "IsTraceActive" }, // 787396002
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single, "PerformAreaDamage_Single" }, // 2158081360
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamage_Single_Local, "PerformAreaDamage_Single_Local" }, // 973112001
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_PerformAreaDamageForDuration, "PerformAreaDamageForDuration" }, // 1359266452
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot, "PerformSwipeTraceShot" }, // 1041271877
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_PerformSwipeTraceShot_Local, "PerformSwipeTraceShot_Local" }, // 2270045555
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_PlayTrails, "PlayTrails" }, // 2988696536
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_SetActorOwner, "SetActorOwner" }, // 649281621
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_SetCollisionChannels, "SetCollisionChannels" }, // 979476987
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_SetTraceConfig, "SetTraceConfig" }, // 443189587
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_SetupCollisionManager, "SetupCollisionManager" }, // 2424370095
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTimedTraces, "StartAllTimedTraces" }, // 2382877438
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StartAllTraces, "StartAllTraces" }, // 3781383154
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StartAreaDamage, "StartAreaDamage" }, // 2322115931
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StartSingleTrace, "StartSingleTrace" }, // 84043111
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StartTimedSingleTrace, "StartTimedSingleTrace" }, // 82114270
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StopAllTraces, "StopAllTraces" }, // 1237042410
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StopCurrentAreaDamage, "StopCurrentAreaDamage" }, // 4008395899
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StopSingleTrace, "StopSingleTrace" }, // 1308221591
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_StopTrails, "StopTrails" }, // 3835820681
		{ &Z_Construct_UFunction_UACMCollisionManagerComponent_TryGetTraceConfig, "TryGetTraceConfig" }, // 476919664
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACMCollisionManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo_MetaData[] = {
		{ "Category", "ACM| Debug" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo = { "ShowDebugInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, ShowDebugInfo), Z_Construct_UEnum_CollisionsManager_EDebugType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo_MetaData) }; // 2140564541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugInactiveColor_MetaData[] = {
		{ "Category", "ACM| Debug" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugInactiveColor = { "DebugInactiveColor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, DebugInactiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugInactiveColor_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugInactiveColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugActiveColor_MetaData[] = {
		{ "Category", "ACM| Debug" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugActiveColor = { "DebugActiveColor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, DebugActiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugActiveColor_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugActiveColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing_SetBit(void* Obj)
	{
		((UACMCollisionManagerComponent*)Obj)->bAllowMultipleHitsPerSwing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing = { "bAllowMultipleHitsPerSwing", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACMCollisionManagerComponent), &Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels_Inner = { "CollisionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels = { "CollisionChannels", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, CollisionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels_MetaData) }; // 1822723181
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "ACM" },
		{ "Comment", "/** The actors to be ignore */" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
		{ "ToolTip", "The actors to be ignore" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner_MetaData[] = {
		{ "Category", "ACM" },
		{ "Comment", "/** If this hit should Ignore component's owner. You can set your Owner with SetActorOwner*/" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
		{ "ToolTip", "If this hit should Ignore component's owner. You can set your Owner with SetActorOwner" },
	};
#endif
	void Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner_SetBit(void* Obj)
	{
		((UACMCollisionManagerComponent*)Obj)->bIgnoreOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner = { "bIgnoreOwner", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACMCollisionManagerComponent), &Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_ValueProp = { "DamageTraces", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTraceInfo, METADATA_PARAMS(0, nullptr) }; // 2049366361
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_Key_KeyProp = { "DamageTraces_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_MetaData[] = {
		{ "Category", "ACM|Traces" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces = { "DamageTraces", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, DamageTraces), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_MetaData) }; // 2049366361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_SwipeTraceInfo_MetaData[] = {
		{ "Category", "ACM|Traces" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_SwipeTraceInfo = { "SwipeTraceInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, SwipeTraceInfo), Z_Construct_UScriptStruct_FBaseTraceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_SwipeTraceInfo_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_SwipeTraceInfo_MetaData) }; // 1770095764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTraceInfo_MetaData[] = {
		{ "Category", "ACM|Traces" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTraceInfo = { "AreaDamageTraceInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, AreaDamageTraceInfo), Z_Construct_UScriptStruct_FBaseTraceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTraceInfo_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTraceInfo_MetaData) }; // 1770095764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnCollisionDetected_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnCollisionDetected = { "OnCollisionDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, OnCollisionDetected), Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnCollisionDetected_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnCollisionDetected_MetaData) }; // 2631587285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnActorDamaged_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnActorDamaged = { "OnActorDamaged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, OnActorDamaged), Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnActorDamaged_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnActorDamaged_MetaData) }; // 968060938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_actorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_actorOwner = { "actorOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, actorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_actorOwner_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_actorOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_damageMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_damageMesh = { "damageMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, damageMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_damageMesh_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_damageMesh_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_ValueProp = { "activatedTraces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTraceInfo, METADATA_PARAMS(0, nullptr) }; // 2049366361
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_Key_KeyProp = { "activatedTraces_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces = { "activatedTraces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, activatedTraces), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_MetaData) }; // 2049366361
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete_Inner = { "pendingDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete = { "pendingDelete", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, pendingDelete), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_ValueProp = { "alreadyHitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHitActors, METADATA_PARAMS(0, nullptr) }; // 2134942261
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_Key_KeyProp = { "alreadyHitActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors = { "alreadyHitActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, alreadyHitActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_MetaData) }; // 2134942261
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_ValueProp = { "ParticleSystemComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_Key_KeyProp = { "ParticleSystemComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents = { "ParticleSystemComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, ParticleSystemComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_ValueProp = { "NiagaraSystemComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_Key_KeyProp = { "NiagaraSystemComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents = { "NiagaraSystemComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, NiagaraSystemComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AllTraceTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AllTraceTimer = { "AllTraceTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, AllTraceTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AllTraceTimer_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AllTraceTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTimer = { "AreaDamageTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, AreaDamageTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTimer_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageLoopTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageLoopTimer = { "AreaDamageLoopTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, AreaDamageLoopTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageLoopTimer_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageLoopTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_currentAreaDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_currentAreaDamage = { "currentAreaDamage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, currentAreaDamage), Z_Construct_UScriptStruct_FAreaDamageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_currentAreaDamage_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_currentAreaDamage_MetaData) }; // 2479451916
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_ValueProp = { "TraceTimers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 3999327403
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_Key_KeyProp = { "TraceTimers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers = { "TraceTimers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMCollisionManagerComponent, TraceTimers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted_SetBit(void* Obj)
	{
		((UACMCollisionManagerComponent*)Obj)->bSingleTimedTraceStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted = { "bSingleTimedTraceStarted", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACMCollisionManagerComponent), &Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACMCollisionManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted_SetBit(void* Obj)
	{
		((UACMCollisionManagerComponent*)Obj)->bAllTimedTraceStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted = { "bAllTimedTraceStarted", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACMCollisionManagerComponent), &Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted_MetaData), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACMCollisionManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ShowDebugInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugInactiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DebugActiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllowMultipleHitsPerSwing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_CollisionChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_IgnoredActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bIgnoreOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_DamageTraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_SwipeTraceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTraceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnCollisionDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_OnActorDamaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_actorOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_damageMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_activatedTraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_pendingDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_alreadyHitActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_ParticleSystemComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_NiagaraSystemComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AllTraceTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_AreaDamageLoopTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_currentAreaDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_TraceTimers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bSingleTimedTraceStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMCollisionManagerComponent_Statics::NewProp_bAllTimedTraceStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACMCollisionManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMCollisionManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMCollisionManagerComponent_Statics::ClassParams = {
		&UACMCollisionManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACMCollisionManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMCollisionManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACMCollisionManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACMCollisionManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMCollisionManagerComponent.OuterSingleton, Z_Construct_UClass_UACMCollisionManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACMCollisionManagerComponent.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UClass* StaticClass<UACMCollisionManagerComponent>()
	{
		return UACMCollisionManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACMCollisionManagerComponent);
	UACMCollisionManagerComponent::~UACMCollisionManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACMCollisionManagerComponent, UACMCollisionManagerComponent::StaticClass, TEXT("UACMCollisionManagerComponent"), &Z_Registration_Info_UClass_UACMCollisionManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMCollisionManagerComponent), 2473608954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_1738132956(TEXT("/Script/CollisionsManager"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

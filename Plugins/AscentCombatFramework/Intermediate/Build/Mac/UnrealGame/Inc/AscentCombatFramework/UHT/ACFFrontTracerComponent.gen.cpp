// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFFrontTracerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFFrontTracerComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFFrontTracerComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFFrontTracerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnActorDetected_Parms
		{
			const AActor* detectedActor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_detectedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::NewProp_detectedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::NewProp_detectedActor = { "detectedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnActorDetected_Parms, detectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::NewProp_detectedActor_MetaData), Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::NewProp_detectedActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::NewProp_detectedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnActorDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnActorDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnActorDetected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& OnActorDetected, const AActor* detectedActor)
{
	struct _Script_AscentCombatFramework_eventOnActorDetected_Parms
	{
		const AActor* detectedActor;
	};
	_Script_AscentCombatFramework_eventOnActorDetected_Parms Parms;
	Parms.detectedActor=detectedActor;
	OnActorDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFFrontTracerComponent::execGetCurrentlyTracedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentlyTracedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFrontTracerComponent::execStopContinuousTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopContinuousTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFrontTracerComponent::execStartContinuousTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartContinuousTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFrontTracerComponent::execPerformFrontTraceSingle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->PerformFrontTraceSingle();
		P_NATIVE_END;
	}
	void UACFFrontTracerComponent::StaticRegisterNativesUACFFrontTracerComponent()
	{
		UClass* Class = UACFFrontTracerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentlyTracedActor", &UACFFrontTracerComponent::execGetCurrentlyTracedActor },
			{ "PerformFrontTraceSingle", &UACFFrontTracerComponent::execPerformFrontTraceSingle },
			{ "StartContinuousTrace", &UACFFrontTracerComponent::execStartContinuousTrace },
			{ "StopContinuousTrace", &UACFFrontTracerComponent::execStopContinuousTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics
	{
		struct ACFFrontTracerComponent_eventGetCurrentlyTracedActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFrontTracerComponent_eventGetCurrentlyTracedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFrontTracerComponent, nullptr, "GetCurrentlyTracedActor", nullptr, nullptr, Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::ACFFrontTracerComponent_eventGetCurrentlyTracedActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::ACFFrontTracerComponent_eventGetCurrentlyTracedActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics
	{
		struct ACFFrontTracerComponent_eventPerformFrontTraceSingle_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFrontTracerComponent_eventPerformFrontTraceSingle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFrontTracerComponent, nullptr, "PerformFrontTraceSingle", nullptr, nullptr, Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::ACFFrontTracerComponent_eventPerformFrontTraceSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::ACFFrontTracerComponent_eventPerformFrontTraceSingle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFrontTracerComponent, nullptr, "StartContinuousTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFrontTracerComponent, nullptr, "StopContinuousTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFFrontTracerComponent);
	UClass* Z_Construct_UClass_UACFFrontTracerComponent_NoRegister()
	{
		return UACFFrontTracerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFFrontTracerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewActorDetected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewActorDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelsToTrace_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsToTrace_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelsToTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDebug_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFind_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToFind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePlayer_MetaData[];
#endif
		static void NewProp_bIgnorePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTrace_MetaData[];
#endif
		static void NewProp_bShowDebugTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentTracedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentTracedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFFrontTracerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFFrontTracerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFFrontTracerComponent_GetCurrentlyTracedActor, "GetCurrentlyTracedActor" }, // 2632265744
		{ &Z_Construct_UFunction_UACFFrontTracerComponent_PerformFrontTraceSingle, "PerformFrontTraceSingle" }, // 3841173330
		{ &Z_Construct_UFunction_UACFFrontTracerComponent_StartContinuousTrace, "StartContinuousTrace" }, // 1575977517
		{ &Z_Construct_UFunction_UACFFrontTracerComponent_StopContinuousTrace, "StopContinuousTrace" }, // 3831849570
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ACFFrontTracerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_OnNewActorDetected_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_OnNewActorDetected = { "OnNewActorDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFFrontTracerComponent, OnNewActorDetected), Z_Construct_UDelegateFunction_AscentCombatFramework_OnActorDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_OnNewActorDetected_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_OnNewActorDetected_MetaData) }; // 2036538582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFFrontTracerComponent, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_TraceLength_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_TraceLength_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace_Inner = { "ChannelsToTrace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace = { "ChannelsToTrace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFFrontTracerComponent, ChannelsToTrace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ShowDebug_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ShowDebug = { "ShowDebug", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFFrontTracerComponent, ShowDebug), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ShowDebug_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ShowDebug_MetaData) }; // 739760662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ActorToFind_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ActorToFind = { "ActorToFind", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFFrontTracerComponent, ActorToFind), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ActorToFind_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ActorToFind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer_SetBit(void* Obj)
	{
		((UACFFrontTracerComponent*)Obj)->bIgnorePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer = { "bIgnorePlayer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFFrontTracerComponent), &Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace_SetBit(void* Obj)
	{
		((UACFFrontTracerComponent*)Obj)->bShowDebugTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace = { "bShowDebugTrace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFFrontTracerComponent), &Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_currentTracedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFFrontTracerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_currentTracedActor = { "currentTracedActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFFrontTracerComponent, currentTracedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_currentTracedActor_MetaData), Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_currentTracedActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFFrontTracerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_OnNewActorDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_TraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ChannelsToTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ShowDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_ActorToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bIgnorePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_bShowDebugTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFFrontTracerComponent_Statics::NewProp_currentTracedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFFrontTracerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFFrontTracerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFFrontTracerComponent_Statics::ClassParams = {
		&UACFFrontTracerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFFrontTracerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFFrontTracerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFrontTracerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFFrontTracerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFFrontTracerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFFrontTracerComponent.OuterSingleton, Z_Construct_UClass_UACFFrontTracerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFFrontTracerComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFFrontTracerComponent>()
	{
		return UACFFrontTracerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFFrontTracerComponent);
	UACFFrontTracerComponent::~UACFFrontTracerComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFFrontTracerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFFrontTracerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFFrontTracerComponent, UACFFrontTracerComponent::StaticClass, TEXT("UACFFrontTracerComponent"), &Z_Registration_Info_UClass_UACFFrontTracerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFFrontTracerComponent), 2145869326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFFrontTracerComponent_h_3242562460(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFFrontTracerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFFrontTracerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

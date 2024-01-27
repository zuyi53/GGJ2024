// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFAIWavesMasterComponent.h"
#include "ACFAITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAIWavesMasterComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAIWavesMasterComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAIWavesMasterComponent_NoRegister();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWaveConfig();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnWaveStarted_Parms
		{
			int32 waveIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_waveIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::NewProp_waveIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::NewProp_waveIndex = { "waveIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnWaveStarted_Parms, waveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::NewProp_waveIndex_MetaData), Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::NewProp_waveIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::NewProp_waveIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnWaveStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::_Script_AIFramework_eventOnWaveStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::_Script_AIFramework_eventOnWaveStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWaveStarted_DelegateWrapper(const FMulticastScriptDelegate& OnWaveStarted, const int32 waveIndex)
{
	struct _Script_AIFramework_eventOnWaveStarted_Parms
	{
		int32 waveIndex;
	};
	_Script_AIFramework_eventOnWaveStarted_Parms Parms;
	Parms.waveIndex=waveIndex;
	OnWaveStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnWaveEnded_Parms
		{
			int32 waveIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_waveIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::NewProp_waveIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::NewProp_waveIndex = { "waveIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnWaveEnded_Parms, waveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::NewProp_waveIndex_MetaData), Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::NewProp_waveIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::NewProp_waveIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnWaveEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::_Script_AIFramework_eventOnWaveEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::_Script_AIFramework_eventOnWaveEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWaveEnded_DelegateWrapper(const FMulticastScriptDelegate& OnWaveEnded, const int32 waveIndex)
{
	struct _Script_AIFramework_eventOnWaveEnded_Parms
	{
		int32 waveIndex;
	};
	_Script_AIFramework_eventOnWaveEnded_Parms Parms;
	Parms.waveIndex=waveIndex;
	OnWaveEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAllWavesEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAllWavesEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAllWavesEnded)
{
	OnAllWavesEnded.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnWaveProgressed_Parms
		{
			int32 newIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_newIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::NewProp_newIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::NewProp_newIndex = { "newIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnWaveProgressed_Parms, newIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::NewProp_newIndex_MetaData), Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::NewProp_newIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::NewProp_newIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnWaveProgressed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::_Script_AIFramework_eventOnWaveProgressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::_Script_AIFramework_eventOnWaveProgressed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWaveProgressed_DelegateWrapper(const FMulticastScriptDelegate& OnWaveProgressed, const int32 newIndex)
{
	struct _Script_AIFramework_eventOnWaveProgressed_Parms
	{
		int32 newIndex;
	};
	_Script_AIFramework_eventOnWaveProgressed_Parms Parms;
	Parms.newIndex=newIndex;
	OnWaveProgressed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execHandleWaveFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleWaveFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execAreWavesStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreWavesStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execTryGetWaveConfigAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_waveIndex);
		P_GET_STRUCT_REF(FWaveConfig,Z_Param_Out_outWaveConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetWaveConfigAtIndex(Z_Param_waveIndex,Z_Param_Out_outWaveConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execGetCurrentWaveIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentWaveIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execProceedToNextWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProceedToNextWave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execRemoveAgentFromWave)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_waveIndex);
		P_GET_OBJECT(UClass,Z_Param_agentClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAgentFromWave_Implementation(Z_Param_waveIndex,Z_Param_agentClass,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execAddAgentToWave)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_waveIndex);
		P_GET_OBJECT(UClass,Z_Param_agentClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAgentToWave_Implementation(Z_Param_waveIndex,Z_Param_agentClass,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAIWavesMasterComponent::execStartWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWave();
		P_NATIVE_END;
	}
	struct ACFAIWavesMasterComponent_eventAddAgentToWave_Parms
	{
		int32 waveIndex;
		TSubclassOf<AACFCharacter>  agentClass;
		int32 count;
	};
	struct ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms
	{
		int32 waveIndex;
		TSubclassOf<AACFCharacter>  agentClass;
		int32 count;
	};
	static FName NAME_UACFAIWavesMasterComponent_AddAgentToWave = FName(TEXT("AddAgentToWave"));
	void UACFAIWavesMasterComponent::AddAgentToWave(int32 waveIndex, TSubclassOf<AACFCharacter>  agentClass, int32 count)
	{
		ACFAIWavesMasterComponent_eventAddAgentToWave_Parms Parms;
		Parms.waveIndex=waveIndex;
		Parms.agentClass=agentClass;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFAIWavesMasterComponent_AddAgentToWave),&Parms);
	}
	static FName NAME_UACFAIWavesMasterComponent_ProceedToNextWave = FName(TEXT("ProceedToNextWave"));
	void UACFAIWavesMasterComponent::ProceedToNextWave()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFAIWavesMasterComponent_ProceedToNextWave),NULL);
	}
	static FName NAME_UACFAIWavesMasterComponent_RemoveAgentFromWave = FName(TEXT("RemoveAgentFromWave"));
	void UACFAIWavesMasterComponent::RemoveAgentFromWave(int32 waveIndex, TSubclassOf<AACFCharacter>  agentClass, int32 count)
	{
		ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms Parms;
		Parms.waveIndex=waveIndex;
		Parms.agentClass=agentClass;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFAIWavesMasterComponent_RemoveAgentFromWave),&Parms);
	}
	void UACFAIWavesMasterComponent::StaticRegisterNativesUACFAIWavesMasterComponent()
	{
		UClass* Class = UACFAIWavesMasterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgentToWave", &UACFAIWavesMasterComponent::execAddAgentToWave },
			{ "AreWavesStarted", &UACFAIWavesMasterComponent::execAreWavesStarted },
			{ "GetCurrentWaveIndex", &UACFAIWavesMasterComponent::execGetCurrentWaveIndex },
			{ "HandleWaveFinished", &UACFAIWavesMasterComponent::execHandleWaveFinished },
			{ "ProceedToNextWave", &UACFAIWavesMasterComponent::execProceedToNextWave },
			{ "RemoveAgentFromWave", &UACFAIWavesMasterComponent::execRemoveAgentFromWave },
			{ "StartWave", &UACFAIWavesMasterComponent::execStartWave },
			{ "TryGetWaveConfigAtIndex", &UACFAIWavesMasterComponent::execTryGetWaveConfigAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_waveIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_agentClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::NewProp_waveIndex = { "waveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventAddAgentToWave_Parms, waveIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::NewProp_agentClass = { "agentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventAddAgentToWave_Parms, agentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventAddAgentToWave_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::NewProp_waveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::NewProp_agentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*NEEDS TO BE CALLED SERVER SIDE!*/" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
		{ "ToolTip", "NEEDS TO BE CALLED SERVER SIDE!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "AddAgentToWave", nullptr, nullptr, Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::PropPointers), sizeof(ACFAIWavesMasterComponent_eventAddAgentToWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIWavesMasterComponent_eventAddAgentToWave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics
	{
		struct ACFAIWavesMasterComponent_eventAreWavesStarted_Parms
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
	void Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIWavesMasterComponent_eventAreWavesStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIWavesMasterComponent_eventAreWavesStarted_Parms), &Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "AreWavesStarted", nullptr, nullptr, Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::ACFAIWavesMasterComponent_eventAreWavesStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::ACFAIWavesMasterComponent_eventAreWavesStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics
	{
		struct ACFAIWavesMasterComponent_eventGetCurrentWaveIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventGetCurrentWaveIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Procedes to the wave at the next index. Is automatically called when a waves end*/" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
		{ "ToolTip", "Procedes to the wave at the next index. Is automatically called when a waves end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "GetCurrentWaveIndex", nullptr, nullptr, Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::ACFAIWavesMasterComponent_eventGetCurrentWaveIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::ACFAIWavesMasterComponent_eventGetCurrentWaveIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "HandleWaveFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*NEEDS TO BE CALLED SERVER SIDE!*/" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
		{ "ToolTip", "NEEDS TO BE CALLED SERVER SIDE!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "ProceedToNextWave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_waveIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_agentClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::NewProp_waveIndex = { "waveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms, waveIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::NewProp_agentClass = { "agentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms, agentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::NewProp_waveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::NewProp_agentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*NEEDS TO BE CALLED SERVER SIDE!*/" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
		{ "ToolTip", "NEEDS TO BE CALLED SERVER SIDE!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "RemoveAgentFromWave", nullptr, nullptr, Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::PropPointers), sizeof(ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIWavesMasterComponent_eventRemoveAgentFromWave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*NEEDS TO BE CALLED SERVER SIDE!*/" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
		{ "ToolTip", "NEEDS TO BE CALLED SERVER SIDE!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "StartWave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics
	{
		struct ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms
		{
			int32 waveIndex;
			FWaveConfig outWaveConfig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_waveIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outWaveConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_waveIndex = { "waveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms, waveIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_outWaveConfig = { "outWaveConfig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms, outWaveConfig), Z_Construct_UScriptStruct_FWaveConfig, METADATA_PARAMS(0, nullptr) }; // 1951793475
	void Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms), &Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_waveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_outWaveConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIWavesMasterComponent, nullptr, "TryGetWaveConfigAtIndex", nullptr, nullptr, Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::ACFAIWavesMasterComponent_eventTryGetWaveConfigAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAIWavesMasterComponent);
	UClass* Z_Construct_UClass_UACFAIWavesMasterComponent_NoRegister()
	{
		return UACFAIWavesMasterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFAIWavesMasterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Waves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Waves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWaveStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWaveEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllWavesEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllWavesEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWaveProgressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveProgressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentWaveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentWaveIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAreWavesStarted_MetaData[];
#endif
		static void NewProp_bAreWavesStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreWavesStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_AddAgentToWave, "AddAgentToWave" }, // 4283255399
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_AreWavesStarted, "AreWavesStarted" }, // 2841778386
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_GetCurrentWaveIndex, "GetCurrentWaveIndex" }, // 2767061326
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_HandleWaveFinished, "HandleWaveFinished" }, // 1452923890
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_ProceedToNextWave, "ProceedToNextWave" }, // 1224865787
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_RemoveAgentFromWave, "RemoveAgentFromWave" }, // 3771216276
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_StartWave, "StartWave" }, // 1731379255
		{ &Z_Construct_UFunction_UACFAIWavesMasterComponent_TryGetWaveConfigAtIndex, "TryGetWaveConfigAtIndex" }, // 3371454818
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFAIWavesMasterComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves_Inner = { "Waves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWaveConfig, METADATA_PARAMS(0, nullptr) }; // 1951793475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves = { "Waves", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIWavesMasterComponent, Waves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves_MetaData) }; // 1951793475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveStarted_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveStarted = { "OnWaveStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIWavesMasterComponent, OnWaveStarted), Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveStarted_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveStarted_MetaData) }; // 2464265758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveEnded_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveEnded = { "OnWaveEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIWavesMasterComponent, OnWaveEnded), Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveEnded_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveEnded_MetaData) }; // 3693179956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnAllWavesEnded_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnAllWavesEnded = { "OnAllWavesEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIWavesMasterComponent, OnAllWavesEnded), Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnAllWavesEnded_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnAllWavesEnded_MetaData) }; // 762766134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveProgressed_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveProgressed = { "OnWaveProgressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIWavesMasterComponent, OnWaveProgressed), Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveProgressed_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveProgressed_MetaData) }; // 92617179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_currentWaveIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_currentWaveIndex = { "currentWaveIndex", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIWavesMasterComponent, currentWaveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_currentWaveIndex_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_currentWaveIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFAIWavesMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted_SetBit(void* Obj)
	{
		((UACFAIWavesMasterComponent*)Obj)->bAreWavesStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted = { "bAreWavesStarted", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAIWavesMasterComponent), &Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted_MetaData), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_Waves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnAllWavesEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_OnWaveProgressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_currentWaveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::NewProp_bAreWavesStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAIWavesMasterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::ClassParams = {
		&UACFAIWavesMasterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFAIWavesMasterComponent()
	{
		if (!Z_Registration_Info_UClass_UACFAIWavesMasterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAIWavesMasterComponent.OuterSingleton, Z_Construct_UClass_UACFAIWavesMasterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAIWavesMasterComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFAIWavesMasterComponent>()
	{
		return UACFAIWavesMasterComponent::StaticClass();
	}

	void UACFAIWavesMasterComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_currentWaveIndex(TEXT("currentWaveIndex"));
		static const FName Name_bAreWavesStarted(TEXT("bAreWavesStarted"));

		const bool bIsValid = true
			&& Name_currentWaveIndex == ClassReps[(int32)ENetFields_Private::currentWaveIndex].Property->GetFName()
			&& Name_bAreWavesStarted == ClassReps[(int32)ENetFields_Private::bAreWavesStarted].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFAIWavesMasterComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAIWavesMasterComponent);
	UACFAIWavesMasterComponent::~UACFAIWavesMasterComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAIWavesMasterComponent, UACFAIWavesMasterComponent::StaticClass, TEXT("UACFAIWavesMasterComponent"), &Z_Registration_Info_UClass_UACFAIWavesMasterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAIWavesMasterComponent), 3506172671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_1702950266(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

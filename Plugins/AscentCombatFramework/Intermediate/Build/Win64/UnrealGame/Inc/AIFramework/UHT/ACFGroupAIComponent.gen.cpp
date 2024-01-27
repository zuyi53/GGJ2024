// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFGroupAIComponent.h"
#include "ACFAITypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGroupAIComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFPatrolPath_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAIState();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAIAgentsInfo();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnInfo();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnAgentDeath_Parms
		{
			const AACFCharacter* character;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnAgentDeath_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::NewProp_character_MetaData), Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::NewProp_character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAgentDeath__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::_Script_AIFramework_eventOnAgentDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::_Script_AIFramework_eventOnAgentDeath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAgentDeath_DelegateWrapper(const FMulticastScriptDelegate& OnAgentDeath, const AACFCharacter* character)
{
	struct _Script_AIFramework_eventOnAgentDeath_Parms
	{
		const AACFCharacter* character;
	};
	_Script_AIFramework_eventOnAgentDeath_Parms Parms;
	Parms.character=character;
	OnAgentDeath.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAllAgentDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAllAgentDeath_DelegateWrapper(const FMulticastScriptDelegate& OnAllAgentDeath)
{
	OnAllAgentDeath.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAgentsSpawned__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAgentsSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnAgentsSpawned)
{
	OnAgentsSpawned.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAgentsChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAgentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAgentsChanged)
{
	OnAgentsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UACFGroupAIComponent::execHandleAgentDeath)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAgentDeath(Z_Param_agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSetGroupName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupName(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetGroupName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetGroupName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSetMaxSimultaneousAgents)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSimultaneousAgents(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetMaxSimultaneousAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMaxSimultaneousAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSetCanSpawnMultitpleTimes)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanSpawnMultitpleTimes(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execCanSpawnMultitpleTimes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSpawnMultitpleTimes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execIsAlreadyInGroup)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlreadyInGroup(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execReInitAgent)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReInitAgent(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execAddExistingCharacterToGroup)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddExistingCharacterToGroup(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetTotalAIToSpawnCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalAIToSpawnCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetAIToSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAISpawnInfo>*)Z_Param__Result=P_THIS->GetAIToSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execDespawnGroup)
	{
		P_GET_UBOOL(Z_Param_bUpdateAIToSpawn);
		P_GET_STRUCT(FGameplayTag,Z_Param_actionToTriggerOnDyingAgent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifespawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DespawnGroup_Implementation(Z_Param_bUpdateAIToSpawn,Z_Param_actionToTriggerOnDyingAgent,Z_Param_lifespawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSpawnGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnGroup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSendCommandToCompanions)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCommandToCompanions_Implementation(Z_Param_command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execRequestNewTarget)
	{
		P_GET_OBJECT(AACFAIController,Z_Param_requestSender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=P_THIS->RequestNewTarget(Z_Param_requestSender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetGroupCentroid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGroupCentroid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetGroupLead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetGroupLead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetEnemyGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetEnemyGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetPatrolPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFPatrolPath**)Z_Param__Result=P_THIS->GetPatrolPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSetPatrolPath)
	{
		P_GET_OBJECT(AACFPatrolPath,Z_Param_inPatrol);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolPath(Z_Param_inPatrol);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetAgentByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FAIAgentsInfo,Z_Param_Out_outAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAgentByIndex(Z_Param_index,Z_Param_Out_outAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execReplaceAIToSpawn)
	{
		P_GET_TARRAY_REF(FAISpawnInfo,Z_Param_Out_newAIs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceAIToSpawn(Z_Param_Out_newAIs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execRemoveAIToSpawn)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_charClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAIToSpawn(Z_Param_Out_charClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execAddAIToSpawn)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_charClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAIToSpawn(Z_Param_Out_charClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execSetInBattle)
	{
		P_GET_UBOOL(Z_Param_inBattle);
		P_GET_OBJECT(AActor,Z_Param_newTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInBattle(Z_Param_inBattle,Z_Param_newTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetGroupAgents)
	{
		P_GET_TARRAY_REF(FAIAgentsInfo,Z_Param_Out_outAgents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGroupAgents(Z_Param_Out_outAgents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execRemoveAgentFromGroup)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAgentFromGroup(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetGroupSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGroupSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetCombatTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execIsInBattle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInBattle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execGetAgentNearestTo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=P_THIS->GetAgentNearestTo(Z_Param_Out_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execOnChildDeath)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildDeath(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGroupAIComponent::execOnComponentLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentLoaded_Implementation();
		P_NATIVE_END;
	}
	struct ACFGroupAIComponent_eventDespawnGroup_Parms
	{
		bool bUpdateAIToSpawn;
		FGameplayTag actionToTriggerOnDyingAgent;
		float lifespawn;
	};
	struct ACFGroupAIComponent_eventSendCommandToCompanions_Parms
	{
		FGameplayTag command;
	};
	static FName NAME_UACFGroupAIComponent_DespawnGroup = FName(TEXT("DespawnGroup"));
	void UACFGroupAIComponent::DespawnGroup(bool bUpdateAIToSpawn, FGameplayTag actionToTriggerOnDyingAgent, float lifespawn)
	{
		ACFGroupAIComponent_eventDespawnGroup_Parms Parms;
		Parms.bUpdateAIToSpawn=bUpdateAIToSpawn ? true : false;
		Parms.actionToTriggerOnDyingAgent=actionToTriggerOnDyingAgent;
		Parms.lifespawn=lifespawn;
		ProcessEvent(FindFunctionChecked(NAME_UACFGroupAIComponent_DespawnGroup),&Parms);
	}
	static FName NAME_UACFGroupAIComponent_OnComponentLoaded = FName(TEXT("OnComponentLoaded"));
	void UACFGroupAIComponent::OnComponentLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFGroupAIComponent_OnComponentLoaded),NULL);
	}
	static FName NAME_UACFGroupAIComponent_SendCommandToCompanions = FName(TEXT("SendCommandToCompanions"));
	void UACFGroupAIComponent::SendCommandToCompanions(FGameplayTag command)
	{
		ACFGroupAIComponent_eventSendCommandToCompanions_Parms Parms;
		Parms.command=command;
		ProcessEvent(FindFunctionChecked(NAME_UACFGroupAIComponent_SendCommandToCompanions),&Parms);
	}
	static FName NAME_UACFGroupAIComponent_SpawnGroup = FName(TEXT("SpawnGroup"));
	void UACFGroupAIComponent::SpawnGroup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFGroupAIComponent_SpawnGroup),NULL);
	}
	void UACFGroupAIComponent::StaticRegisterNativesUACFGroupAIComponent()
	{
		UClass* Class = UACFGroupAIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAIToSpawn", &UACFGroupAIComponent::execAddAIToSpawn },
			{ "AddExistingCharacterToGroup", &UACFGroupAIComponent::execAddExistingCharacterToGroup },
			{ "CanSpawnMultitpleTimes", &UACFGroupAIComponent::execCanSpawnMultitpleTimes },
			{ "DespawnGroup", &UACFGroupAIComponent::execDespawnGroup },
			{ "GetAgentByIndex", &UACFGroupAIComponent::execGetAgentByIndex },
			{ "GetAgentNearestTo", &UACFGroupAIComponent::execGetAgentNearestTo },
			{ "GetAIToSpawn", &UACFGroupAIComponent::execGetAIToSpawn },
			{ "GetCombatTeam", &UACFGroupAIComponent::execGetCombatTeam },
			{ "GetEnemyGroup", &UACFGroupAIComponent::execGetEnemyGroup },
			{ "GetGroupAgents", &UACFGroupAIComponent::execGetGroupAgents },
			{ "GetGroupCentroid", &UACFGroupAIComponent::execGetGroupCentroid },
			{ "GetGroupLead", &UACFGroupAIComponent::execGetGroupLead },
			{ "GetGroupName", &UACFGroupAIComponent::execGetGroupName },
			{ "GetGroupSize", &UACFGroupAIComponent::execGetGroupSize },
			{ "GetMaxSimultaneousAgents", &UACFGroupAIComponent::execGetMaxSimultaneousAgents },
			{ "GetPatrolPath", &UACFGroupAIComponent::execGetPatrolPath },
			{ "GetTotalAIToSpawnCount", &UACFGroupAIComponent::execGetTotalAIToSpawnCount },
			{ "HandleAgentDeath", &UACFGroupAIComponent::execHandleAgentDeath },
			{ "IsAlreadyInGroup", &UACFGroupAIComponent::execIsAlreadyInGroup },
			{ "IsInBattle", &UACFGroupAIComponent::execIsInBattle },
			{ "OnChildDeath", &UACFGroupAIComponent::execOnChildDeath },
			{ "OnComponentLoaded", &UACFGroupAIComponent::execOnComponentLoaded },
			{ "ReInitAgent", &UACFGroupAIComponent::execReInitAgent },
			{ "RemoveAgentFromGroup", &UACFGroupAIComponent::execRemoveAgentFromGroup },
			{ "RemoveAIToSpawn", &UACFGroupAIComponent::execRemoveAIToSpawn },
			{ "ReplaceAIToSpawn", &UACFGroupAIComponent::execReplaceAIToSpawn },
			{ "RequestNewTarget", &UACFGroupAIComponent::execRequestNewTarget },
			{ "SendCommandToCompanions", &UACFGroupAIComponent::execSendCommandToCompanions },
			{ "SetCanSpawnMultitpleTimes", &UACFGroupAIComponent::execSetCanSpawnMultitpleTimes },
			{ "SetGroupName", &UACFGroupAIComponent::execSetGroupName },
			{ "SetInBattle", &UACFGroupAIComponent::execSetInBattle },
			{ "SetMaxSimultaneousAgents", &UACFGroupAIComponent::execSetMaxSimultaneousAgents },
			{ "SetPatrolPath", &UACFGroupAIComponent::execSetPatrolPath },
			{ "SpawnGroup", &UACFGroupAIComponent::execSpawnGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics
	{
		struct ACFGroupAIComponent_eventAddAIToSpawn_Parms
		{
			const TSubclassOf<AACFCharacter>  charClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_charClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_charClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_charClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_charClass = { "charClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventAddAIToSpawn_Parms, charClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_charClass_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_charClass_MetaData) };
	void Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventAddAIToSpawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventAddAIToSpawn_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_charClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "AddAIToSpawn", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::ACFGroupAIComponent_eventAddAIToSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::ACFGroupAIComponent_eventAddAIToSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics
	{
		struct ACFGroupAIComponent_eventAddExistingCharacterToGroup_Parms
		{
			AACFCharacter* character;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventAddExistingCharacterToGroup_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventAddExistingCharacterToGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventAddExistingCharacterToGroup_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "AddExistingCharacterToGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::ACFGroupAIComponent_eventAddExistingCharacterToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::ACFGroupAIComponent_eventAddExistingCharacterToGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics
	{
		struct ACFGroupAIComponent_eventCanSpawnMultitpleTimes_Parms
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
	void Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventCanSpawnMultitpleTimes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventCanSpawnMultitpleTimes_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "CanSpawnMultitpleTimes", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::ACFGroupAIComponent_eventCanSpawnMultitpleTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::ACFGroupAIComponent_eventCanSpawnMultitpleTimes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateAIToSpawn_MetaData[];
#endif
		static void NewProp_bUpdateAIToSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateAIToSpawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_actionToTriggerOnDyingAgent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lifespawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventDespawnGroup_Parms*)Obj)->bUpdateAIToSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn = { "bUpdateAIToSpawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventDespawnGroup_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_actionToTriggerOnDyingAgent = { "actionToTriggerOnDyingAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventDespawnGroup_Parms, actionToTriggerOnDyingAgent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_lifespawn = { "lifespawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventDespawnGroup_Parms, lifespawn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_bUpdateAIToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_actionToTriggerOnDyingAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::NewProp_lifespawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_actionToTriggerOnDyingAgent", "()" },
		{ "CPP_Default_bUpdateAIToSpawn", "true" },
		{ "CPP_Default_lifespawn", "1.000000" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "DespawnGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::PropPointers), sizeof(ACFGroupAIComponent_eventDespawnGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFGroupAIComponent_eventDespawnGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics
	{
		struct ACFGroupAIComponent_eventGetAgentByIndex_Parms
		{
			int32 index;
			FAIAgentsInfo outAgent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetAgentByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_outAgent = { "outAgent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetAgentByIndex_Parms, outAgent), Z_Construct_UScriptStruct_FAIAgentsInfo, METADATA_PARAMS(0, nullptr) }; // 2558498719
	void Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventGetAgentByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventGetAgentByIndex_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_outAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetAgentByIndex", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::ACFGroupAIComponent_eventGetAgentByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::ACFGroupAIComponent_eventGetAgentByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics
	{
		struct ACFGroupAIComponent_eventGetAgentNearestTo_Parms
		{
			FVector location;
			AACFCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetAgentNearestTo_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_location_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_location_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetAgentNearestTo_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetAgentNearestTo", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::ACFGroupAIComponent_eventGetAgentNearestTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::ACFGroupAIComponent_eventGetAgentNearestTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics
	{
		struct ACFGroupAIComponent_eventGetAIToSpawn_Parms
		{
			TArray<FAISpawnInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAISpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3249338304
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetAIToSpawn_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3249338304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetAIToSpawn", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::ACFGroupAIComponent_eventGetAIToSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::ACFGroupAIComponent_eventGetAIToSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics
	{
		struct ACFGroupAIComponent_eventGetCombatTeam_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::ACFGroupAIComponent_eventGetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::ACFGroupAIComponent_eventGetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics
	{
		struct ACFGroupAIComponent_eventGetEnemyGroup_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetEnemyGroup_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetEnemyGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::ACFGroupAIComponent_eventGetEnemyGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::ACFGroupAIComponent_eventGetEnemyGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics
	{
		struct ACFGroupAIComponent_eventGetGroupAgents_Parms
		{
			TArray<FAIAgentsInfo> outAgents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAgents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::NewProp_outAgents_Inner = { "outAgents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIAgentsInfo, METADATA_PARAMS(0, nullptr) }; // 2558498719
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::NewProp_outAgents = { "outAgents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetGroupAgents_Parms, outAgents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2558498719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::NewProp_outAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::NewProp_outAgents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetGroupAgents", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::ACFGroupAIComponent_eventGetGroupAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::ACFGroupAIComponent_eventGetGroupAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics
	{
		struct ACFGroupAIComponent_eventGetGroupCentroid_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetGroupCentroid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetGroupCentroid", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::ACFGroupAIComponent_eventGetGroupCentroid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::ACFGroupAIComponent_eventGetGroupCentroid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics
	{
		struct ACFGroupAIComponent_eventGetGroupLead_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetGroupLead_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetGroupLead", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::ACFGroupAIComponent_eventGetGroupLead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::ACFGroupAIComponent_eventGetGroupLead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics
	{
		struct ACFGroupAIComponent_eventGetGroupName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetGroupName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetGroupName", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::ACFGroupAIComponent_eventGetGroupName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::ACFGroupAIComponent_eventGetGroupName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics
	{
		struct ACFGroupAIComponent_eventGetGroupSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetGroupSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetGroupSize", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::ACFGroupAIComponent_eventGetGroupSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::ACFGroupAIComponent_eventGetGroupSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics
	{
		struct ACFGroupAIComponent_eventGetMaxSimultaneousAgents_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetMaxSimultaneousAgents_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetMaxSimultaneousAgents", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::ACFGroupAIComponent_eventGetMaxSimultaneousAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::ACFGroupAIComponent_eventGetMaxSimultaneousAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics
	{
		struct ACFGroupAIComponent_eventGetPatrolPath_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetPatrolPath_Parms, ReturnValue), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetPatrolPath", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::ACFGroupAIComponent_eventGetPatrolPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::ACFGroupAIComponent_eventGetPatrolPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics
	{
		struct ACFGroupAIComponent_eventGetTotalAIToSpawnCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventGetTotalAIToSpawnCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "GetTotalAIToSpawnCount", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::ACFGroupAIComponent_eventGetTotalAIToSpawnCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::ACFGroupAIComponent_eventGetTotalAIToSpawnCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics
	{
		struct ACFGroupAIComponent_eventHandleAgentDeath_Parms
		{
			AACFCharacter* agent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_agent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::NewProp_agent = { "agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventHandleAgentDeath_Parms, agent), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::NewProp_agent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "HandleAgentDeath", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::ACFGroupAIComponent_eventHandleAgentDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::ACFGroupAIComponent_eventHandleAgentDeath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics
	{
		struct ACFGroupAIComponent_eventIsAlreadyInGroup_Parms
		{
			const AACFCharacter* character;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventIsAlreadyInGroup_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_character_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_character_MetaData) };
	void Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventIsAlreadyInGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventIsAlreadyInGroup_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "IsAlreadyInGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::ACFGroupAIComponent_eventIsAlreadyInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::ACFGroupAIComponent_eventIsAlreadyInGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics
	{
		struct ACFGroupAIComponent_eventIsInBattle_Parms
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
	void Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventIsInBattle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventIsInBattle_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "IsInBattle", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::ACFGroupAIComponent_eventIsInBattle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::ACFGroupAIComponent_eventIsInBattle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics
	{
		struct ACFGroupAIComponent_eventOnChildDeath_Parms
		{
			const AACFCharacter* character;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventOnChildDeath_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::NewProp_character_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::NewProp_character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "OnChildDeath", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::ACFGroupAIComponent_eventOnChildDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::ACFGroupAIComponent_eventOnChildDeath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "OnComponentLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics
	{
		struct ACFGroupAIComponent_eventReInitAgent_Parms
		{
			AACFCharacter* character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventReInitAgent_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "ReInitAgent", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::ACFGroupAIComponent_eventReInitAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::ACFGroupAIComponent_eventReInitAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics
	{
		struct ACFGroupAIComponent_eventRemoveAgentFromGroup_Parms
		{
			AACFCharacter* character;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventRemoveAgentFromGroup_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventRemoveAgentFromGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventRemoveAgentFromGroup_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "RemoveAgentFromGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::ACFGroupAIComponent_eventRemoveAgentFromGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::ACFGroupAIComponent_eventRemoveAgentFromGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics
	{
		struct ACFGroupAIComponent_eventRemoveAIToSpawn_Parms
		{
			const TSubclassOf<AACFCharacter>  charClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_charClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_charClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_charClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_charClass = { "charClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventRemoveAIToSpawn_Parms, charClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_charClass_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_charClass_MetaData) };
	void Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventRemoveAIToSpawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventRemoveAIToSpawn_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_charClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "RemoveAIToSpawn", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::ACFGroupAIComponent_eventRemoveAIToSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::ACFGroupAIComponent_eventRemoveAIToSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics
	{
		struct ACFGroupAIComponent_eventReplaceAIToSpawn_Parms
		{
			TArray<FAISpawnInfo> newAIs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_newAIs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newAIs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newAIs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs_Inner = { "newAIs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAISpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3249338304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs = { "newAIs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventReplaceAIToSpawn_Parms, newAIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs_MetaData) }; // 3249338304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::NewProp_newAIs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "ReplaceAIToSpawn", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::ACFGroupAIComponent_eventReplaceAIToSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::ACFGroupAIComponent_eventReplaceAIToSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics
	{
		struct ACFGroupAIComponent_eventRequestNewTarget_Parms
		{
			const AACFAIController* requestSender;
			AACFCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requestSender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_requestSender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_requestSender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_requestSender = { "requestSender", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventRequestNewTarget_Parms, requestSender), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_requestSender_MetaData), Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_requestSender_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventRequestNewTarget_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_requestSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "RequestNewTarget", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::ACFGroupAIComponent_eventRequestNewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::ACFGroupAIComponent_eventRequestNewTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventSendCommandToCompanions_Parms, command), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::NewProp_command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SendCommandToCompanions", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::PropPointers), sizeof(ACFGroupAIComponent_eventSendCommandToCompanions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFGroupAIComponent_eventSendCommandToCompanions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics
	{
		struct ACFGroupAIComponent_eventSetCanSpawnMultitpleTimes_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventSetCanSpawnMultitpleTimes_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventSetCanSpawnMultitpleTimes_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SetCanSpawnMultitpleTimes", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::ACFGroupAIComponent_eventSetCanSpawnMultitpleTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::ACFGroupAIComponent_eventSetCanSpawnMultitpleTimes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics
	{
		struct ACFGroupAIComponent_eventSetGroupName_Parms
		{
			FName val;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventSetGroupName_Parms, val), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SetGroupName", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::ACFGroupAIComponent_eventSetGroupName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::ACFGroupAIComponent_eventSetGroupName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics
	{
		struct ACFGroupAIComponent_eventSetInBattle_Parms
		{
			bool inBattle;
			AActor* newTarget;
		};
		static void NewProp_inBattle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inBattle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::NewProp_inBattle_SetBit(void* Obj)
	{
		((ACFGroupAIComponent_eventSetInBattle_Parms*)Obj)->inBattle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::NewProp_inBattle = { "inBattle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIComponent_eventSetInBattle_Parms), &Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::NewProp_inBattle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::NewProp_newTarget = { "newTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventSetInBattle_Parms, newTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::NewProp_inBattle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::NewProp_newTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SetInBattle", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::ACFGroupAIComponent_eventSetInBattle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::ACFGroupAIComponent_eventSetInBattle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics
	{
		struct ACFGroupAIComponent_eventSetMaxSimultaneousAgents_Parms
		{
			uint8 val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventSetMaxSimultaneousAgents_Parms, val), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SetMaxSimultaneousAgents", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::ACFGroupAIComponent_eventSetMaxSimultaneousAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::ACFGroupAIComponent_eventSetMaxSimultaneousAgents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics
	{
		struct ACFGroupAIComponent_eventSetPatrolPath_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::NewProp_inPatrol = { "inPatrol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIComponent_eventSetPatrolPath_Parms, inPatrol), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::NewProp_inPatrol,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SetPatrolPath", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::ACFGroupAIComponent_eventSetPatrolPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::ACFGroupAIComponent_eventSetPatrolPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAIComponent, nullptr, "SpawnGroup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFGroupAIComponent);
	UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister()
	{
		return UACFGroupAIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFGroupAIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAgentPerception_MetaData[];
#endif
		static void NewProp_bOverrideAgentPerception_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAgentPerception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAgentTeam_MetaData[];
#endif
		static void NewProp_bOverrideAgentTeam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAgentTeam;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatTeam;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAiState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAiState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultAiState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousAgents_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousAgents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnMultitpleTimes_MetaData[];
#endif
		static void NewProp_bCanSpawnMultitpleTimes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnMultitpleTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AIToSpawn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AIToSpawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupLead_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_groupLead;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AICharactersInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AICharactersInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AICharactersInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBattle_MetaData[];
#endif
		static void NewProp_bInBattle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBattle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAgentDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgentDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllAgentDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllAgentDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAgentsSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgentsSpawned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAgentsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgentsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlreadySpawned_MetaData[];
#endif
		static void NewProp_bAlreadySpawned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlreadySpawned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_enemyGroup;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FormationInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FormationInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PatrolPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFGroupAIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFGroupAIComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFGroupAIComponent_AddAIToSpawn, "AddAIToSpawn" }, // 1699234284
		{ &Z_Construct_UFunction_UACFGroupAIComponent_AddExistingCharacterToGroup, "AddExistingCharacterToGroup" }, // 1395598604
		{ &Z_Construct_UFunction_UACFGroupAIComponent_CanSpawnMultitpleTimes, "CanSpawnMultitpleTimes" }, // 737304236
		{ &Z_Construct_UFunction_UACFGroupAIComponent_DespawnGroup, "DespawnGroup" }, // 1375645878
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetAgentByIndex, "GetAgentByIndex" }, // 368535602
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetAgentNearestTo, "GetAgentNearestTo" }, // 2469079688
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetAIToSpawn, "GetAIToSpawn" }, // 116045918
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetCombatTeam, "GetCombatTeam" }, // 3392830866
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetEnemyGroup, "GetEnemyGroup" }, // 3059733710
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetGroupAgents, "GetGroupAgents" }, // 3876833164
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetGroupCentroid, "GetGroupCentroid" }, // 1952074779
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetGroupLead, "GetGroupLead" }, // 3954293154
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetGroupName, "GetGroupName" }, // 643740621
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetGroupSize, "GetGroupSize" }, // 574742662
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetMaxSimultaneousAgents, "GetMaxSimultaneousAgents" }, // 3863538786
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetPatrolPath, "GetPatrolPath" }, // 690046264
		{ &Z_Construct_UFunction_UACFGroupAIComponent_GetTotalAIToSpawnCount, "GetTotalAIToSpawnCount" }, // 2044166306
		{ &Z_Construct_UFunction_UACFGroupAIComponent_HandleAgentDeath, "HandleAgentDeath" }, // 3174151172
		{ &Z_Construct_UFunction_UACFGroupAIComponent_IsAlreadyInGroup, "IsAlreadyInGroup" }, // 2233390744
		{ &Z_Construct_UFunction_UACFGroupAIComponent_IsInBattle, "IsInBattle" }, // 4175874066
		{ &Z_Construct_UFunction_UACFGroupAIComponent_OnChildDeath, "OnChildDeath" }, // 3699955040
		{ &Z_Construct_UFunction_UACFGroupAIComponent_OnComponentLoaded, "OnComponentLoaded" }, // 1482369977
		{ &Z_Construct_UFunction_UACFGroupAIComponent_ReInitAgent, "ReInitAgent" }, // 1111850919
		{ &Z_Construct_UFunction_UACFGroupAIComponent_RemoveAgentFromGroup, "RemoveAgentFromGroup" }, // 3450625623
		{ &Z_Construct_UFunction_UACFGroupAIComponent_RemoveAIToSpawn, "RemoveAIToSpawn" }, // 3837655010
		{ &Z_Construct_UFunction_UACFGroupAIComponent_ReplaceAIToSpawn, "ReplaceAIToSpawn" }, // 1935533359
		{ &Z_Construct_UFunction_UACFGroupAIComponent_RequestNewTarget, "RequestNewTarget" }, // 2861443727
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SendCommandToCompanions, "SendCommandToCompanions" }, // 4163746625
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SetCanSpawnMultitpleTimes, "SetCanSpawnMultitpleTimes" }, // 3124819849
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SetGroupName, "SetGroupName" }, // 1275264177
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SetInBattle, "SetInBattle" }, // 2236343559
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SetMaxSimultaneousAgents, "SetMaxSimultaneousAgents" }, // 4073177289
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SetPatrolPath, "SetPatrolPath" }, // 359645670
		{ &Z_Construct_UFunction_UACFGroupAIComponent_SpawnGroup, "SpawnGroup" }, // 1215477084
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ACFGroupAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "ACF | AI Config" },
		{ "Comment", "/*Generic name usable for UI*/" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
		{ "ToolTip", "Generic name usable for UI" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_GroupName_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_GroupName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception_MetaData[] = {
		{ "Category", "ACF | AI Config" },
		{ "Comment", "/*Should use group or agent perception?*/" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
		{ "ToolTip", "Should use group or agent perception?" },
	};
#endif
	void Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception_SetBit(void* Obj)
	{
		((UACFGroupAIComponent*)Obj)->bOverrideAgentPerception = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception = { "bOverrideAgentPerception", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFGroupAIComponent), &Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam_MetaData[] = {
		{ "Category", "ACF | AI Config" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam_SetBit(void* Obj)
	{
		((UACFGroupAIComponent*)Obj)->bOverrideAgentTeam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam = { "bOverrideAgentTeam", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFGroupAIComponent), &Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "Category", "ACF | AI Config" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState_MetaData[] = {
		{ "Category", "ACF | AI Config" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState = { "DefaultAiState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, DefaultAiState), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState_MetaData) }; // 1319398043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_MaxSimultaneousAgents_MetaData[] = {
		{ "Category", "ACF | Spawn" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_MaxSimultaneousAgents = { "MaxSimultaneousAgents", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, MaxSimultaneousAgents), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_MaxSimultaneousAgents_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_MaxSimultaneousAgents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes_MetaData[] = {
		{ "Category", "ACF | Spawn" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes_SetBit(void* Obj)
	{
		((UACFGroupAIComponent*)Obj)->bCanSpawnMultitpleTimes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes = { "bCanSpawnMultitpleTimes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFGroupAIComponent), &Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultSpawnOffset_MetaData[] = {
		{ "Category", "Category=ACF | Spawn" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultSpawnOffset = { "DefaultSpawnOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, DefaultSpawnOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultSpawnOffset_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultSpawnOffset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn_Inner = { "AIToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAISpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3249338304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn_MetaData[] = {
		{ "Category", "ACF | Spawn" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn = { "AIToSpawn", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, AIToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn_MetaData) }; // 3249338304
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "ACF | Spawn" },
		{ "Comment", "/*The location in which the Agents will be spawned*/" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
		{ "ToolTip", "The location in which the Agents will be spawned" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_groupLead_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_groupLead = { "groupLead", nullptr, (EPropertyFlags)0x0024080000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, groupLead), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_groupLead_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_groupLead_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo_Inner = { "AICharactersInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIAgentsInfo, METADATA_PARAMS(0, nullptr) }; // 2558498719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo = { "AICharactersInfo", nullptr, (EPropertyFlags)0x0020080001000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, AICharactersInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo_MetaData) }; // 2558498719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle_SetBit(void* Obj)
	{
		((UACFGroupAIComponent*)Obj)->bInBattle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle = { "bInBattle", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFGroupAIComponent), &Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentDeath = { "OnAgentDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, OnAgentDeath), Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentDeath_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentDeath_MetaData) }; // 1989504383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAllAgentDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAllAgentDeath = { "OnAllAgentDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, OnAllAgentDeath), Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAllAgentDeath_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAllAgentDeath_MetaData) }; // 4224148673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsSpawned_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsSpawned = { "OnAgentsSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, OnAgentsSpawned), Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsSpawned_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsSpawned_MetaData) }; // 73128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsChanged = { "OnAgentsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, OnAgentsChanged), Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsChanged_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsChanged_MetaData) }; // 746356836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned_SetBit(void* Obj)
	{
		((UACFGroupAIComponent*)Obj)->bAlreadySpawned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned = { "bAlreadySpawned", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFGroupAIComponent), &Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_enemyGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_enemyGroup = { "enemyGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, enemyGroup), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_enemyGroup_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_enemyGroup_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo_Inner = { "FormationInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo = { "FormationInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, FormationInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_PatrolPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGroupAIComponent, PatrolPath), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_PatrolPath_MetaData), Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_PatrolPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFGroupAIComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentPerception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bOverrideAgentTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_CombatTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultAiState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_MaxSimultaneousAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bCanSpawnMultitpleTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_DefaultSpawnOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AIToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_SpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_groupLead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_AICharactersInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bInBattle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAllAgentDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsSpawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_OnAgentsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_bAlreadySpawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_enemyGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_FormationInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGroupAIComponent_Statics::NewProp_PatrolPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFGroupAIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFGroupAIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFGroupAIComponent_Statics::ClassParams = {
		&UACFGroupAIComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFGroupAIComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFGroupAIComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAIComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFGroupAIComponent()
	{
		if (!Z_Registration_Info_UClass_UACFGroupAIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFGroupAIComponent.OuterSingleton, Z_Construct_UClass_UACFGroupAIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFGroupAIComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFGroupAIComponent>()
	{
		return UACFGroupAIComponent::StaticClass();
	}

	void UACFGroupAIComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_groupLead(TEXT("groupLead"));
		static const FName Name_AICharactersInfo(TEXT("AICharactersInfo"));
		static const FName Name_bInBattle(TEXT("bInBattle"));

		const bool bIsValid = true
			&& Name_groupLead == ClassReps[(int32)ENetFields_Private::groupLead].Property->GetFName()
			&& Name_AICharactersInfo == ClassReps[(int32)ENetFields_Private::AICharactersInfo].Property->GetFName()
			&& Name_bInBattle == ClassReps[(int32)ENetFields_Private::bInBattle].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFGroupAIComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFGroupAIComponent);
	UACFGroupAIComponent::~UACFGroupAIComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFGroupAIComponent, UACFGroupAIComponent::StaticClass, TEXT("UACFGroupAIComponent"), &Z_Registration_Info_UClass_UACFGroupAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFGroupAIComponent), 3398100569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_2268839446(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

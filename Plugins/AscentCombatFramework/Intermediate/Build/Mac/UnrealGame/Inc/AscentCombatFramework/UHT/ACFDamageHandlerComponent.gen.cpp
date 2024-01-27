// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFDamageHandlerComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DamageEvents.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDamageHandlerComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageCalculation_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageHandlerComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FOnHitActionChances();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnCharacterDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCharacterDeath_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDeath)
{
	OnCharacterDeath.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execHandleStatReachedZero)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_stat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStatReachedZero(Z_Param_stat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execClientsReceiveDamage)
	{
		P_GET_STRUCT(FACFDamageEvent,Z_Param_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsReceiveDamage_Implementation(Z_Param_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execRevive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Revive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execGetIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execTakeDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_damageReceiver);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_damageReceiver,Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execInitializeDamageCollisions)
	{
		P_GET_ENUM(ETeam,Z_Param_combatTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDamageCollisions(ETeam(Z_Param_combatTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageHandlerComponent::execGetLastDamageInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FACFDamageEvent*)Z_Param__Result=P_THIS->GetLastDamageInfo();
		P_NATIVE_END;
	}
	struct ACFDamageHandlerComponent_eventClientsReceiveDamage_Parms
	{
		FACFDamageEvent damageEvent;
	};
	static FName NAME_UACFDamageHandlerComponent_ClientsReceiveDamage = FName(TEXT("ClientsReceiveDamage"));
	void UACFDamageHandlerComponent::ClientsReceiveDamage(FACFDamageEvent const& damageEvent)
	{
		ACFDamageHandlerComponent_eventClientsReceiveDamage_Parms Parms;
		Parms.damageEvent=damageEvent;
		ProcessEvent(FindFunctionChecked(NAME_UACFDamageHandlerComponent_ClientsReceiveDamage),&Parms);
	}
	static FName NAME_UACFDamageHandlerComponent_Revive = FName(TEXT("Revive"));
	void UACFDamageHandlerComponent::Revive()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFDamageHandlerComponent_Revive),NULL);
	}
	void UACFDamageHandlerComponent::StaticRegisterNativesUACFDamageHandlerComponent()
	{
		UClass* Class = UACFDamageHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientsReceiveDamage", &UACFDamageHandlerComponent::execClientsReceiveDamage },
			{ "GetIsAlive", &UACFDamageHandlerComponent::execGetIsAlive },
			{ "GetLastDamageInfo", &UACFDamageHandlerComponent::execGetLastDamageInfo },
			{ "HandleStatReachedZero", &UACFDamageHandlerComponent::execHandleStatReachedZero },
			{ "InitializeDamageCollisions", &UACFDamageHandlerComponent::execInitializeDamageCollisions },
			{ "Revive", &UACFDamageHandlerComponent::execRevive },
			{ "TakeDamage", &UACFDamageHandlerComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventClientsReceiveDamage_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::NewProp_damageEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "ClientsReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::PropPointers), sizeof(ACFDamageHandlerComponent_eventClientsReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFDamageHandlerComponent_eventClientsReceiveDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics
	{
		struct ACFDamageHandlerComponent_eventGetIsAlive_Parms
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
	void Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDamageHandlerComponent_eventGetIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDamageHandlerComponent_eventGetIsAlive_Parms), &Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "GetIsAlive", nullptr, nullptr, Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::ACFDamageHandlerComponent_eventGetIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::ACFDamageHandlerComponent_eventGetIsAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics
	{
		struct ACFDamageHandlerComponent_eventGetLastDamageInfo_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventGetLastDamageInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(0, nullptr) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "GetLastDamageInfo", nullptr, nullptr, Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::ACFDamageHandlerComponent_eventGetLastDamageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::ACFDamageHandlerComponent_eventGetLastDamageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics
	{
		struct ACFDamageHandlerComponent_eventHandleStatReachedZero_Parms
		{
			FGameplayTag stat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_stat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventHandleStatReachedZero_Parms, stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::NewProp_stat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "HandleStatReachedZero", nullptr, nullptr, Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::ACFDamageHandlerComponent_eventHandleStatReachedZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::ACFDamageHandlerComponent_eventHandleStatReachedZero_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics
	{
		struct ACFDamageHandlerComponent_eventInitializeDamageCollisions_Parms
		{
			ETeam combatTeam;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_combatTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_combatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::NewProp_combatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::NewProp_combatTeam = { "combatTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventInitializeDamageCollisions_Parms, combatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::NewProp_combatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::NewProp_combatTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*assign the correct collision channel to the damage meshes from the team*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
		{ "ToolTip", "assign the correct collision channel to the damage meshes from the team" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "InitializeDamageCollisions", nullptr, nullptr, Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::ACFDamageHandlerComponent_eventInitializeDamageCollisions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::ACFDamageHandlerComponent_eventInitializeDamageCollisions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_Revive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_Revive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_Revive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "Revive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_Revive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_Revive_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_Revive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_Revive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics
	{
		struct ACFDamageHandlerComponent_eventTakeDamage_Parms
		{
			AActor* damageReceiver;
			float Damage;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_damageReceiver;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_damageReceiver = { "damageReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventTakeDamage_Parms, damageReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageEvent_MetaData), Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageEvent_MetaData) }; // 4174483363
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageHandlerComponent_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_damageReceiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_EventInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageHandlerComponent, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::ACFDamageHandlerComponent_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::ACFDamageHandlerComponent_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDamageHandlerComponent);
	UClass* Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister()
	{
		return UACFDamageHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFDamageHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamageReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOwnerDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOwnerDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBlockingCollisionChannel_MetaData[];
#endif
		static void NewProp_bUseBlockingCollisionChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBlockingCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageCalculatorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageCalculatorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResponseActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResponseActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResponseActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageCalculator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCalculator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDamageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastDamageReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDamageHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFDamageHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_ClientsReceiveDamage, "ClientsReceiveDamage" }, // 2157982181
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_GetIsAlive, "GetIsAlive" }, // 774360578
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_GetLastDamageInfo, "GetLastDamageInfo" }, // 4104469430
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_HandleStatReachedZero, "HandleStatReachedZero" }, // 2400452069
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_InitializeDamageCollisions, "InitializeDamageCollisions" }, // 206933326
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_Revive, "Revive" }, // 1224204782
		{ &Z_Construct_UFunction_UACFDamageHandlerComponent_TakeDamage, "TakeDamage" }, // 510951064
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFDamageHandlerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnDamageReceived_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnDamageReceived = { "OnDamageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageHandlerComponent, OnDamageReceived), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnDamageReceived_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnDamageReceived_MetaData) }; // 3555551665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnOwnerDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnOwnerDeath = { "OnOwnerDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageHandlerComponent, OnOwnerDeath), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnOwnerDeath_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnOwnerDeath_MetaData) }; // 2360202157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel_SetBit(void* Obj)
	{
		((UACFDamageHandlerComponent*)Obj)->bUseBlockingCollisionChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel = { "bUseBlockingCollisionChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFDamageHandlerComponent), &Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculatorClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculatorClass = { "DamageCalculatorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageHandlerComponent, DamageCalculatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFDamageCalculation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculatorClass_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculatorClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions_Inner = { "HitResponseActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOnHitActionChances, METADATA_PARAMS(0, nullptr) }; // 1039742790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The actions that should be triggered when this ai got hit and the conditional triggers.\n    Used to define automatic actions like Dodging/parrying/counterattacking or just playing hit animations*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
		{ "ToolTip", "The actions that should be triggered when this ai got hit and the conditional triggers.\n    Used to define automatic actions like Dodging/parrying/counterattacking or just playing hit animations" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions = { "HitResponseActions", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageHandlerComponent, HitResponseActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions_MetaData) }; // 1039742790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculator = { "DamageCalculator", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageHandlerComponent, DamageCalculator), Z_Construct_UClass_UACFDamageCalculation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculator_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_LastDamageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_LastDamageReceived = { "LastDamageReceived", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageHandlerComponent, LastDamageReceived), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_LastDamageReceived_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_LastDamageReceived_MetaData) }; // 4032775443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDamageHandlerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((UACFDamageHandlerComponent*)Obj)->bIsAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFDamageHandlerComponent), &Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive_MetaData), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDamageHandlerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnDamageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_OnOwnerDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bUseBlockingCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculatorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_HitResponseActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_DamageCalculator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_LastDamageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageHandlerComponent_Statics::NewProp_bIsAlive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDamageHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDamageHandlerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDamageHandlerComponent_Statics::ClassParams = {
		&UACFDamageHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFDamageHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDamageHandlerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageHandlerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFDamageHandlerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFDamageHandlerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDamageHandlerComponent.OuterSingleton, Z_Construct_UClass_UACFDamageHandlerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDamageHandlerComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDamageHandlerComponent>()
	{
		return UACFDamageHandlerComponent::StaticClass();
	}

	void UACFDamageHandlerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsAlive(TEXT("bIsAlive"));

		const bool bIsValid = true
			&& Name_bIsAlive == ClassReps[(int32)ENetFields_Private::bIsAlive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFDamageHandlerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDamageHandlerComponent);
	UACFDamageHandlerComponent::~UACFDamageHandlerComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDamageHandlerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDamageHandlerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDamageHandlerComponent, UACFDamageHandlerComponent::StaticClass, TEXT("UACFDamageHandlerComponent"), &Z_Registration_Info_UClass_UACFDamageHandlerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDamageHandlerComponent), 2824362411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDamageHandlerComponent_h_2791225393(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDamageHandlerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDamageHandlerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

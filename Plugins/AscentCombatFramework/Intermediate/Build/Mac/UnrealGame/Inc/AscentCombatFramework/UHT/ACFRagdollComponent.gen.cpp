// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFRagdollComponent.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFRagdollComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRagdollImpulse();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms
		{
			bool bIsInRagdoll;
		};
		static void NewProp_bIsInRagdoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInRagdoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::NewProp_bIsInRagdoll_SetBit(void* Obj)
	{
		((_Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms*)Obj)->bIsInRagdoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::NewProp_bIsInRagdoll = { "bIsInRagdoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms), &Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::NewProp_bIsInRagdoll_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::NewProp_bIsInRagdoll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnRagdollStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRagdollStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRagdollStateChanged, bool bIsInRagdoll)
{
	struct _Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms
	{
		bool bIsInRagdoll;
	};
	_Script_AscentCombatFramework_eventOnRagdollStateChanged_Parms Parms;
	Parms.bIsInRagdoll=bIsInRagdoll ? true : false;
	OnRagdollStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFRagdollComponent::execHandleDamageReceived)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDamageReceived(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRagdollComponent::execTerminateRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TerminateRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRagdollComponent::execIsInRagDoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInRagDoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRagdollComponent::execRecoverFromRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecoverFromRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRagdollComponent::execGoRagdollForDuration)
	{
		P_GET_STRUCT_REF(FRagdollImpulse,Z_Param_Out_impulse);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ragdollDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoRagdollForDuration(Z_Param_Out_impulse,Z_Param_ragdollDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRagdollComponent::execGoRagdoll)
	{
		P_GET_STRUCT_REF(FRagdollImpulse,Z_Param_Out_impulse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoRagdoll(Z_Param_Out_impulse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRagdollComponent::execGoRagdollFromDamage)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RagdollDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoRagdollFromDamage(Z_Param_Out_damageEvent,Z_Param_RagdollDuration);
		P_NATIVE_END;
	}
	void UACFRagdollComponent::StaticRegisterNativesUACFRagdollComponent()
	{
		UClass* Class = UACFRagdollComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoRagdoll", &UACFRagdollComponent::execGoRagdoll },
			{ "GoRagdollForDuration", &UACFRagdollComponent::execGoRagdollForDuration },
			{ "GoRagdollFromDamage", &UACFRagdollComponent::execGoRagdollFromDamage },
			{ "HandleDamageReceived", &UACFRagdollComponent::execHandleDamageReceived },
			{ "IsInRagDoll", &UACFRagdollComponent::execIsInRagDoll },
			{ "RecoverFromRagdoll", &UACFRagdollComponent::execRecoverFromRagdoll },
			{ "TerminateRagdoll", &UACFRagdollComponent::execTerminateRagdoll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics
	{
		struct ACFRagdollComponent_eventGoRagdoll_Parms
		{
			FRagdollImpulse impulse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_impulse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::NewProp_impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::NewProp_impulse = { "impulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRagdollComponent_eventGoRagdoll_Parms, impulse), Z_Construct_UScriptStruct_FRagdollImpulse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::NewProp_impulse_MetaData), Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::NewProp_impulse_MetaData) }; // 1734255984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::NewProp_impulse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "GoRagdoll", nullptr, nullptr, Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::ACFRagdollComponent_eventGoRagdoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::ACFRagdollComponent_eventGoRagdoll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics
	{
		struct ACFRagdollComponent_eventGoRagdollForDuration_Parms
		{
			FRagdollImpulse impulse;
			float ragdollDuration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_impulse;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ragdollDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_impulse = { "impulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRagdollComponent_eventGoRagdollForDuration_Parms, impulse), Z_Construct_UScriptStruct_FRagdollImpulse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_impulse_MetaData), Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_impulse_MetaData) }; // 1734255984
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_ragdollDuration = { "ragdollDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRagdollComponent_eventGoRagdollForDuration_Parms, ragdollDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::NewProp_ragdollDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_ragdollDuration", "-1.000000" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "GoRagdollForDuration", nullptr, nullptr, Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::ACFRagdollComponent_eventGoRagdollForDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::ACFRagdollComponent_eventGoRagdollForDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics
	{
		struct ACFRagdollComponent_eventGoRagdollFromDamage_Parms
		{
			FACFDamageEvent damageEvent;
			float RagdollDuration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRagdollComponent_eventGoRagdollFromDamage_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_RagdollDuration = { "RagdollDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRagdollComponent_eventGoRagdollFromDamage_Parms, RagdollDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_damageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::NewProp_RagdollDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_RagdollDuration", "-1.000000" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "GoRagdollFromDamage", nullptr, nullptr, Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::ACFRagdollComponent_eventGoRagdollFromDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::ACFRagdollComponent_eventGoRagdollFromDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics
	{
		struct ACFRagdollComponent_eventHandleDamageReceived_Parms
		{
			FACFDamageEvent damageEvent;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRagdollComponent_eventHandleDamageReceived_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::NewProp_damageEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "HandleDamageReceived", nullptr, nullptr, Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::ACFRagdollComponent_eventHandleDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::ACFRagdollComponent_eventHandleDamageReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics
	{
		struct ACFRagdollComponent_eventIsInRagDoll_Parms
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
	void Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFRagdollComponent_eventIsInRagDoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFRagdollComponent_eventIsInRagDoll_Parms), &Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "IsInRagDoll", nullptr, nullptr, Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::ACFRagdollComponent_eventIsInRagDoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::ACFRagdollComponent_eventIsInRagDoll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "RecoverFromRagdoll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRagdollComponent, nullptr, "TerminateRagdoll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFRagdollComponent);
	UClass* Z_Construct_UClass_UACFRagdollComponent_NoRegister()
	{
		return UACFRagdollComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFRagdollComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTestRagdollOnHit_MetaData[];
#endif
		static void NewProp_bTestRagdollOnHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestRagdollOnHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRagdollDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultRagdollDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsKinematic_MetaData[];
#endif
		static void NewProp_bIsKinematic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsKinematic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetUpFront_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GetUpFront;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetUpBack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GetUpBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRagdollStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRagdollStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFRagdollComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFRagdollComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFRagdollComponent_GoRagdoll, "GoRagdoll" }, // 4184055150
		{ &Z_Construct_UFunction_UACFRagdollComponent_GoRagdollForDuration, "GoRagdollForDuration" }, // 85628356
		{ &Z_Construct_UFunction_UACFRagdollComponent_GoRagdollFromDamage, "GoRagdollFromDamage" }, // 3096977832
		{ &Z_Construct_UFunction_UACFRagdollComponent_HandleDamageReceived, "HandleDamageReceived" }, // 1775173712
		{ &Z_Construct_UFunction_UACFRagdollComponent_IsInRagDoll, "IsInRagDoll" }, // 3550448228
		{ &Z_Construct_UFunction_UACFRagdollComponent_RecoverFromRagdoll, "RecoverFromRagdoll" }, // 929521211
		{ &Z_Construct_UFunction_UACFRagdollComponent_TerminateRagdoll, "TerminateRagdoll" }, // 613284897
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFRagdollComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit_SetBit(void* Obj)
	{
		((UACFRagdollComponent*)Obj)->bTestRagdollOnHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit = { "bTestRagdollOnHit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFRagdollComponent), &Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_ImpulseResistance_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bTestRagdollOnHit" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_ImpulseResistance = { "ImpulseResistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, ImpulseResistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_ImpulseResistance_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_ImpulseResistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_DefaultRagdollDuration_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_DefaultRagdollDuration = { "DefaultRagdollDuration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, DefaultRagdollDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_DefaultRagdollDuration_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_DefaultRagdollDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If character owner is not kinematic, after the ragdoll ends it needs to be reattached\n\x09to the actual capsule. Just check if your physics asset has it roots to set as kinematic*/" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
		{ "ToolTip", "If character owner is not kinematic, after the ragdoll ends it needs to be reattached\n       to the actual capsule. Just check if your physics asset has it roots to set as kinematic" },
	};
#endif
	void Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic_SetBit(void* Obj)
	{
		((UACFRagdollComponent*)Obj)->bIsKinematic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic = { "bIsKinematic", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFRagdollComponent), &Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, PelvisBone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_PelvisBone_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_PelvisBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpFront_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpFront = { "GetUpFront", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, GetUpFront), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpFront_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpFront_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpBack_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpBack = { "GetUpBack", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, GetUpBack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpBack_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpBack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_OnRagdollStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_OnRagdollStateChanged = { "OnRagdollStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, OnRagdollStateChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnRagdollStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_OnRagdollStateChanged_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_OnRagdollStateChanged_MetaData) }; // 505903992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_characterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFRagdollComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_characterOwner = { "characterOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollComponent, characterOwner), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_characterOwner_MetaData), Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_characterOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFRagdollComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bTestRagdollOnHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_ImpulseResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_DefaultRagdollDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_bIsKinematic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpFront,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_GetUpBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_OnRagdollStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollComponent_Statics::NewProp_characterOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFRagdollComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFRagdollComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFRagdollComponent_Statics::ClassParams = {
		&UACFRagdollComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFRagdollComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFRagdollComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFRagdollComponent()
	{
		if (!Z_Registration_Info_UClass_UACFRagdollComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFRagdollComponent.OuterSingleton, Z_Construct_UClass_UACFRagdollComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFRagdollComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFRagdollComponent>()
	{
		return UACFRagdollComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFRagdollComponent);
	UACFRagdollComponent::~UACFRagdollComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFRagdollComponent, UACFRagdollComponent::StaticClass, TEXT("UACFRagdollComponent"), &Z_Registration_Info_UClass_UACFRagdollComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFRagdollComponent), 3265631766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollComponent_h_574517134(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

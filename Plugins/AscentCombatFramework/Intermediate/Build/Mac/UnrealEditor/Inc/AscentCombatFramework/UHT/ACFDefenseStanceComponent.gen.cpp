// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFDefenseStanceComponent.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "Components/ACFEquipmentComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDefenseStanceComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFBlockComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDefenseStanceComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDefenseStanceComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipment();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms
		{
			bool bIsDefending;
		};
		static void NewProp_bIsDefending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::NewProp_bIsDefending_SetBit(void* Obj)
	{
		((_Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms*)Obj)->bIsDefending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::NewProp_bIsDefending = { "bIsDefending", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms), &Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::NewProp_bIsDefending_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::NewProp_bIsDefending,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnDefenseStanceChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDefenseStanceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDefenseStanceChanged, bool bIsDefending)
{
	struct _Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms
	{
		bool bIsDefending;
	};
	_Script_AscentCombatFramework_eventOnDefenseStanceChanged_Parms Parms;
	Parms.bIsDefending=bIsDefending ? true : false;
	OnDefenseStanceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnCounterAttackTriggered__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCounterAttackTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnCounterAttackTriggered)
{
	OnCounterAttackTriggered.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execHandleEquipmentChanged)
	{
		P_GET_STRUCT_REF(FEquipment,Z_Param_Out_Equipment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEquipmentChanged(Z_Param_Out_Equipment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execOnRep_DefPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DefPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execTryGetBestBlockComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFBlockComponent**)Z_Param__Result=P_THIS->TryGetBestBlockComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execTryCounterAttack)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_incomingDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryCounterAttack(Z_Param_Out_incomingDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execCanCounterAttack)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_incomingDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCounterAttack(Z_Param_Out_incomingDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execDisableCounterAttackWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCounterAttackWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execEnableCounterAttackWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCounterAttackWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execGetCurrentBlockComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFBlockComponent**)Z_Param__Result=P_THIS->GetCurrentBlockComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execGetDamagedStatistic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetDamagedStatistic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execGetBlockAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetBlockAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execIsInDefensePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInDefensePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execCanStartDefensePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartDefensePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execCanBlockDamage)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBlockDamage(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execTryBlockIncomingDamage)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageToBlock);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_outAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryBlockIncomingDamage(Z_Param_Out_damageEvent,Z_Param_damageToBlock,Z_Param_Out_outAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execStopDefending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDefending_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDefenseStanceComponent::execStartDefending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDefending_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UACFDefenseStanceComponent_StartDefending = FName(TEXT("StartDefending"));
	void UACFDefenseStanceComponent::StartDefending()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFDefenseStanceComponent_StartDefending),NULL);
	}
	static FName NAME_UACFDefenseStanceComponent_StopDefending = FName(TEXT("StopDefending"));
	void UACFDefenseStanceComponent::StopDefending()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFDefenseStanceComponent_StopDefending),NULL);
	}
	void UACFDefenseStanceComponent::StaticRegisterNativesUACFDefenseStanceComponent()
	{
		UClass* Class = UACFDefenseStanceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBlockDamage", &UACFDefenseStanceComponent::execCanBlockDamage },
			{ "CanCounterAttack", &UACFDefenseStanceComponent::execCanCounterAttack },
			{ "CanStartDefensePosition", &UACFDefenseStanceComponent::execCanStartDefensePosition },
			{ "DisableCounterAttackWindow", &UACFDefenseStanceComponent::execDisableCounterAttackWindow },
			{ "EnableCounterAttackWindow", &UACFDefenseStanceComponent::execEnableCounterAttackWindow },
			{ "GetBlockAction", &UACFDefenseStanceComponent::execGetBlockAction },
			{ "GetCurrentBlockComp", &UACFDefenseStanceComponent::execGetCurrentBlockComp },
			{ "GetDamagedStatistic", &UACFDefenseStanceComponent::execGetDamagedStatistic },
			{ "HandleEquipmentChanged", &UACFDefenseStanceComponent::execHandleEquipmentChanged },
			{ "IsInDefensePosition", &UACFDefenseStanceComponent::execIsInDefensePosition },
			{ "OnRep_DefPos", &UACFDefenseStanceComponent::execOnRep_DefPos },
			{ "StartDefending", &UACFDefenseStanceComponent::execStartDefending },
			{ "StopDefending", &UACFDefenseStanceComponent::execStopDefending },
			{ "TryBlockIncomingDamage", &UACFDefenseStanceComponent::execTryBlockIncomingDamage },
			{ "TryCounterAttack", &UACFDefenseStanceComponent::execTryCounterAttack },
			{ "TryGetBestBlockComp", &UACFDefenseStanceComponent::execTryGetBestBlockComp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics
	{
		struct ACFDefenseStanceComponent_eventCanBlockDamage_Parms
		{
			FACFDamageEvent damageEvent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventCanBlockDamage_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	void Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDefenseStanceComponent_eventCanBlockDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDefenseStanceComponent_eventCanBlockDamage_Parms), &Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_damageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "CanBlockDamage", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::ACFDefenseStanceComponent_eventCanBlockDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::ACFDefenseStanceComponent_eventCanBlockDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics
	{
		struct ACFDefenseStanceComponent_eventCanCounterAttack_Parms
		{
			FACFDamageEvent incomingDamage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_incomingDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_incomingDamage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_incomingDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_incomingDamage = { "incomingDamage", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventCanCounterAttack_Parms, incomingDamage), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_incomingDamage_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_incomingDamage_MetaData) }; // 4032775443
	void Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDefenseStanceComponent_eventCanCounterAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDefenseStanceComponent_eventCanCounterAttack_Parms), &Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_incomingDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "CanCounterAttack", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::ACFDefenseStanceComponent_eventCanCounterAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::ACFDefenseStanceComponent_eventCanCounterAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics
	{
		struct ACFDefenseStanceComponent_eventCanStartDefensePosition_Parms
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
	void Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDefenseStanceComponent_eventCanStartDefensePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDefenseStanceComponent_eventCanStartDefensePosition_Parms), &Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "CanStartDefensePosition", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::ACFDefenseStanceComponent_eventCanStartDefensePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::ACFDefenseStanceComponent_eventCanStartDefensePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "DisableCounterAttackWindow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If the owner can block while unarmed*///     UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ACF)\n//     bool CanBlockWhenUnarmed = false;\n" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
		{ "ToolTip", "If the owner can block while unarmed//     UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ACF)\n//     bool CanBlockWhenUnarmed = false;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "EnableCounterAttackWindow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics
	{
		struct ACFDefenseStanceComponent_eventGetBlockAction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventGetBlockAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "GetBlockAction", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::ACFDefenseStanceComponent_eventGetBlockAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::ACFDefenseStanceComponent_eventGetBlockAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics
	{
		struct ACFDefenseStanceComponent_eventGetCurrentBlockComp_Parms
		{
			UACFBlockComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventGetCurrentBlockComp_Parms, ReturnValue), Z_Construct_UClass_UACFBlockComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "GetCurrentBlockComp", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::ACFDefenseStanceComponent_eventGetCurrentBlockComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::ACFDefenseStanceComponent_eventGetCurrentBlockComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics
	{
		struct ACFDefenseStanceComponent_eventGetDamagedStatistic_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventGetDamagedStatistic_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "GetDamagedStatistic", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::ACFDefenseStanceComponent_eventGetDamagedStatistic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::ACFDefenseStanceComponent_eventGetDamagedStatistic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics
	{
		struct ACFDefenseStanceComponent_eventHandleEquipmentChanged_Parms
		{
			FEquipment Equipment;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Equipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventHandleEquipmentChanged_Parms, Equipment), Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::NewProp_Equipment_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::NewProp_Equipment_MetaData) }; // 1335708750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::NewProp_Equipment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "HandleEquipmentChanged", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::ACFDefenseStanceComponent_eventHandleEquipmentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::ACFDefenseStanceComponent_eventHandleEquipmentChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics
	{
		struct ACFDefenseStanceComponent_eventIsInDefensePosition_Parms
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
	void Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDefenseStanceComponent_eventIsInDefensePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDefenseStanceComponent_eventIsInDefensePosition_Parms), &Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "IsInDefensePosition", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::ACFDefenseStanceComponent_eventIsInDefensePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::ACFDefenseStanceComponent_eventIsInDefensePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "OnRep_DefPos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "StartDefending", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "StopDefending", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics
	{
		struct ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms
		{
			FACFDamageEvent damageEvent;
			float damageToBlock;
			FGameplayTag outAction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageToBlock;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageToBlock = { "damageToBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms, damageToBlock), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_outAction = { "outAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms, outAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms), &Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_damageToBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_outAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "TryBlockIncomingDamage", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::ACFDefenseStanceComponent_eventTryBlockIncomingDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics
	{
		struct ACFDefenseStanceComponent_eventTryCounterAttack_Parms
		{
			FACFDamageEvent incomingDamage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_incomingDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_incomingDamage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_incomingDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_incomingDamage = { "incomingDamage", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventTryCounterAttack_Parms, incomingDamage), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_incomingDamage_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_incomingDamage_MetaData) }; // 4032775443
	void Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDefenseStanceComponent_eventTryCounterAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDefenseStanceComponent_eventTryCounterAttack_Parms), &Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_incomingDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "TryCounterAttack", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::ACFDefenseStanceComponent_eventTryCounterAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::ACFDefenseStanceComponent_eventTryCounterAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics
	{
		struct ACFDefenseStanceComponent_eventTryGetBestBlockComp_Parms
		{
			UACFBlockComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDefenseStanceComponent_eventTryGetBestBlockComp_Parms, ReturnValue), Z_Construct_UClass_UACFBlockComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDefenseStanceComponent, nullptr, "TryGetBestBlockComp", nullptr, nullptr, Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::ACFDefenseStanceComponent_eventTryGetBestBlockComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::ACFDefenseStanceComponent_eventTryGetBestBlockComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDefenseStanceComponent);
	UClass* Z_Construct_UClass_UACFDefenseStanceComponent_NoRegister()
	{
		return UACFDefenseStanceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFDefenseStanceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDefenseStanceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDefenseStanceChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCounterAttackTriggered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCounterAttackTriggered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDamageStatisticToStartBlocking_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDamageStatisticToStartBlocking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionToBeTriggeredOnBlock_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionToBeTriggeredOnBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionToBeTriggeredOnDefenceBreak_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionToBeTriggeredOnDefenceBreak;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedStatistic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagedStatistic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CounterAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CounterAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDefensePosition_MetaData[];
#endif
		static void NewProp_bIsInDefensePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDefensePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDefenseStanceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFDefenseStanceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_CanBlockDamage, "CanBlockDamage" }, // 1661286783
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_CanCounterAttack, "CanCounterAttack" }, // 1293601125
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_CanStartDefensePosition, "CanStartDefensePosition" }, // 2225243528
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_DisableCounterAttackWindow, "DisableCounterAttackWindow" }, // 3305485275
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_EnableCounterAttackWindow, "EnableCounterAttackWindow" }, // 2744593877
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_GetBlockAction, "GetBlockAction" }, // 110239866
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_GetCurrentBlockComp, "GetCurrentBlockComp" }, // 9718817
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_GetDamagedStatistic, "GetDamagedStatistic" }, // 1981332645
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_HandleEquipmentChanged, "HandleEquipmentChanged" }, // 4013678164
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_IsInDefensePosition, "IsInDefensePosition" }, // 1913591631
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_OnRep_DefPos, "OnRep_DefPos" }, // 3502216441
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_StartDefending, "StartDefending" }, // 2012732827
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_StopDefending, "StopDefending" }, // 4012647018
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_TryBlockIncomingDamage, "TryBlockIncomingDamage" }, // 129958580
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_TryCounterAttack, "TryCounterAttack" }, // 4057671951
		{ &Z_Construct_UFunction_UACFDefenseStanceComponent_TryGetBestBlockComp, "TryGetBestBlockComp" }, // 1106539484
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFDefenseStanceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnDefenseStanceChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnDefenseStanceChanged = { "OnDefenseStanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, OnDefenseStanceChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDefenseStanceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnDefenseStanceChanged_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnDefenseStanceChanged_MetaData) }; // 808663493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnCounterAttackTriggered_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnCounterAttackTriggered = { "OnCounterAttackTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, OnCounterAttackTriggered), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCounterAttackTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnCounterAttackTriggered_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnCounterAttackTriggered_MetaData) }; // 2927515231
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_MinimumDamageStatisticToStartBlocking_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*To start go in DefenseMode, minimum value of the DamagedStatistic to start defense mode*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
		{ "ToolTip", "To start go in DefenseMode, minimum value of the DamagedStatistic to start defense mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_MinimumDamageStatisticToStartBlocking = { "MinimumDamageStatisticToStartBlocking", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, MinimumDamageStatisticToStartBlocking), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_MinimumDamageStatisticToStartBlocking_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_MinimumDamageStatisticToStartBlocking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnBlock_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Action triggered on the owner of this component when an hit is successfully blocked*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
		{ "ToolTip", "Action triggered on the owner of this component when an hit is successfully blocked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnBlock = { "ActionToBeTriggeredOnBlock", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, ActionToBeTriggeredOnBlock), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnBlock_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnBlock_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnDefenceBreak_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Action triggered on the owner of this component when the defence is broken*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
		{ "ToolTip", "Action triggered on the owner of this component when the defence is broken" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnDefenceBreak = { "ActionToBeTriggeredOnDefenceBreak", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, ActionToBeTriggeredOnDefenceBreak), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnDefenceBreak_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnDefenceBreak_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_DamagedStatistic_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Damage received during Defense will be  removed from this statistic.\n    When this statistic reaches 0, defense will be broken\n    Usually, damaged statistic is Stamina*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
		{ "ToolTip", "Damage received during Defense will be  removed from this statistic.\n    When this statistic reaches 0, defense will be broken\n    Usually, damaged statistic is Stamina" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_DamagedStatistic = { "DamagedStatistic", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, DamagedStatistic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_DamagedStatistic_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_DamagedStatistic_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_CounterAttackAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Action triggered on the owner of this component when an hit is successfully countered*/" },
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
		{ "ToolTip", "Action triggered on the owner of this component when an hit is successfully countered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_CounterAttackAction = { "CounterAttackAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDefenseStanceComponent, CounterAttackAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_CounterAttackAction_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_CounterAttackAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFDefenseStanceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition_SetBit(void* Obj)
	{
		((UACFDefenseStanceComponent*)Obj)->bIsInDefensePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition = { "bIsInDefensePosition", "OnRep_DefPos", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFDefenseStanceComponent), &Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition_MetaData), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDefenseStanceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnDefenseStanceChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_OnCounterAttackTriggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_MinimumDamageStatisticToStartBlocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_ActionToBeTriggeredOnDefenceBreak,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_DamagedStatistic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_CounterAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDefenseStanceComponent_Statics::NewProp_bIsInDefensePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDefenseStanceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDefenseStanceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDefenseStanceComponent_Statics::ClassParams = {
		&UACFDefenseStanceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFDefenseStanceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDefenseStanceComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDefenseStanceComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFDefenseStanceComponent()
	{
		if (!Z_Registration_Info_UClass_UACFDefenseStanceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDefenseStanceComponent.OuterSingleton, Z_Construct_UClass_UACFDefenseStanceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDefenseStanceComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDefenseStanceComponent>()
	{
		return UACFDefenseStanceComponent::StaticClass();
	}

	void UACFDefenseStanceComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsInDefensePosition(TEXT("bIsInDefensePosition"));

		const bool bIsValid = true
			&& Name_bIsInDefensePosition == ClassReps[(int32)ENetFields_Private::bIsInDefensePosition].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFDefenseStanceComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDefenseStanceComponent);
	UACFDefenseStanceComponent::~UACFDefenseStanceComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDefenseStanceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDefenseStanceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDefenseStanceComponent, UACFDefenseStanceComponent::StaticClass, TEXT("UACFDefenseStanceComponent"), &Z_Registration_Info_UClass_UACFDefenseStanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDefenseStanceComponent), 3050296769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDefenseStanceComponent_h_1850963181(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDefenseStanceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFDefenseStanceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

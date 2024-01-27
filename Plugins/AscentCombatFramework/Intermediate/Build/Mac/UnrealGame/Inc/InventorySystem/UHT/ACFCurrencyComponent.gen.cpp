// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFCurrencyComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCurrencyComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFCurrencyComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFCurrencyComponent_NoRegister();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnCurrencyValueChanged_Parms
		{
			float newValue;
			float variation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_variation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnCurrencyValueChanged_Parms, newValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::NewProp_variation = { "variation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnCurrencyValueChanged_Parms, variation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::NewProp_newValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::NewProp_variation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnCurrencyValueChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnCurrencyValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnCurrencyValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCurrencyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyValueChanged, float newValue, float variation)
{
	struct _Script_InventorySystem_eventOnCurrencyValueChanged_Parms
	{
		float newValue;
		float variation;
	};
	_Script_InventorySystem_eventOnCurrencyValueChanged_Parms Parms;
	Parms.newValue=newValue;
	Parms.variation=variation;
	OnCurrencyValueChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFCurrencyComponent::execOnRep_Currency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Currency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCurrencyComponent::execHandleStatReachedZero)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_stat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStatReachedZero(Z_Param_stat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCurrencyComponent::execGetCurrentCurrencyAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentCurrencyAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCurrencyComponent::execHasEnoughCurrency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEnoughCurrency(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCurrencyComponent::execSetCurrency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrency_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCurrencyComponent::execRemoveCurrency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->RemoveCurrency_Validate(Z_Param_amount))
		{
			RPC_ValidateFailed(TEXT("RemoveCurrency_Validate"));
			return;
		}
		P_THIS->RemoveCurrency_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCurrencyComponent::execAddCurrency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->AddCurrency_Validate(Z_Param_amount))
		{
			RPC_ValidateFailed(TEXT("AddCurrency_Validate"));
			return;
		}
		P_THIS->AddCurrency_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	struct ACFCurrencyComponent_eventAddCurrency_Parms
	{
		float amount;
	};
	struct ACFCurrencyComponent_eventRemoveCurrency_Parms
	{
		float amount;
	};
	struct ACFCurrencyComponent_eventSetCurrency_Parms
	{
		float amount;
	};
	static FName NAME_UACFCurrencyComponent_AddCurrency = FName(TEXT("AddCurrency"));
	void UACFCurrencyComponent::AddCurrency(float amount)
	{
		ACFCurrencyComponent_eventAddCurrency_Parms Parms;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_UACFCurrencyComponent_AddCurrency),&Parms);
	}
	static FName NAME_UACFCurrencyComponent_RemoveCurrency = FName(TEXT("RemoveCurrency"));
	void UACFCurrencyComponent::RemoveCurrency(float amount)
	{
		ACFCurrencyComponent_eventRemoveCurrency_Parms Parms;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_UACFCurrencyComponent_RemoveCurrency),&Parms);
	}
	static FName NAME_UACFCurrencyComponent_SetCurrency = FName(TEXT("SetCurrency"));
	void UACFCurrencyComponent::SetCurrency(float amount)
	{
		ACFCurrencyComponent_eventSetCurrency_Parms Parms;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_UACFCurrencyComponent_SetCurrency),&Parms);
	}
	void UACFCurrencyComponent::StaticRegisterNativesUACFCurrencyComponent()
	{
		UClass* Class = UACFCurrencyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCurrency", &UACFCurrencyComponent::execAddCurrency },
			{ "GetCurrentCurrencyAmount", &UACFCurrencyComponent::execGetCurrentCurrencyAmount },
			{ "HandleStatReachedZero", &UACFCurrencyComponent::execHandleStatReachedZero },
			{ "HasEnoughCurrency", &UACFCurrencyComponent::execHasEnoughCurrency },
			{ "OnRep_Currency", &UACFCurrencyComponent::execOnRep_Currency },
			{ "RemoveCurrency", &UACFCurrencyComponent::execRemoveCurrency },
			{ "SetCurrency", &UACFCurrencyComponent::execSetCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCurrencyComponent_eventAddCurrency_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "AddCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::PropPointers), sizeof(ACFCurrencyComponent_eventAddCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCurrencyComponent_eventAddCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics
	{
		struct ACFCurrencyComponent_eventGetCurrentCurrencyAmount_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCurrencyComponent_eventGetCurrentCurrencyAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "GetCurrentCurrencyAmount", nullptr, nullptr, Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::ACFCurrencyComponent_eventGetCurrentCurrencyAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::ACFCurrencyComponent_eventGetCurrentCurrencyAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics
	{
		struct ACFCurrencyComponent_eventHandleStatReachedZero_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCurrencyComponent_eventHandleStatReachedZero_Parms, stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::NewProp_stat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "HandleStatReachedZero", nullptr, nullptr, Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::ACFCurrencyComponent_eventHandleStatReachedZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::ACFCurrencyComponent_eventHandleStatReachedZero_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics
	{
		struct ACFCurrencyComponent_eventHasEnoughCurrency_Parms
		{
			float amount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCurrencyComponent_eventHasEnoughCurrency_Parms, amount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCurrencyComponent_eventHasEnoughCurrency_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCurrencyComponent_eventHasEnoughCurrency_Parms), &Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "HasEnoughCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::ACFCurrencyComponent_eventHasEnoughCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::ACFCurrencyComponent_eventHasEnoughCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "OnRep_Currency", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCurrencyComponent_eventRemoveCurrency_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "RemoveCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::PropPointers), sizeof(ACFCurrencyComponent_eventRemoveCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCurrencyComponent_eventRemoveCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCurrencyComponent_eventSetCurrency_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Override Current Currency value*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
		{ "ToolTip", "Override Current Currency value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCurrencyComponent, nullptr, "SetCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::PropPointers), sizeof(ACFCurrencyComponent_eventSetCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCurrencyComponent_eventSetCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCurrencyComponent);
	UClass* Z_Construct_UClass_UACFCurrencyComponent_NoRegister()
	{
		return UACFCurrencyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCurrencyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrencyChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrencyChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrencyAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropCurrencyOnOwnerDeath_MetaData[];
#endif
		static void NewProp_bDropCurrencyOnOwnerDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropCurrencyOnOwnerDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyDropVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrencyDropVariation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCurrencyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCurrencyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCurrencyComponent_AddCurrency, "AddCurrency" }, // 1449655943
		{ &Z_Construct_UFunction_UACFCurrencyComponent_GetCurrentCurrencyAmount, "GetCurrentCurrencyAmount" }, // 1280652978
		{ &Z_Construct_UFunction_UACFCurrencyComponent_HandleStatReachedZero, "HandleStatReachedZero" }, // 1705795778
		{ &Z_Construct_UFunction_UACFCurrencyComponent_HasEnoughCurrency, "HasEnoughCurrency" }, // 780682303
		{ &Z_Construct_UFunction_UACFCurrencyComponent_OnRep_Currency, "OnRep_Currency" }, // 1627298542
		{ &Z_Construct_UFunction_UACFCurrencyComponent_RemoveCurrency, "RemoveCurrency" }, // 557309381
		{ &Z_Construct_UFunction_UACFCurrencyComponent_SetCurrency, "SetCurrency" }, // 340709019
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCurrencyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFCurrencyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_OnCurrencyChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_OnCurrencyChanged = { "OnCurrencyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCurrencyComponent, OnCurrencyChanged), Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_OnCurrencyChanged_MetaData), Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_OnCurrencyChanged_MetaData) }; // 1224344279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyAmount_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyAmount = { "CurrencyAmount", "OnRep_Currency", (EPropertyFlags)0x0020080101000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCurrencyComponent, CurrencyAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyAmount_MetaData), Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If set to true, if the entity owner is killed by a Player controlled character,\n    all the currency will be added to that controller*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
		{ "ToolTip", "If set to true, if the entity owner is killed by a Player controlled character,\n    all the currency will be added to that controller" },
	};
#endif
	void Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath_SetBit(void* Obj)
	{
		((UACFCurrencyComponent*)Obj)->bDropCurrencyOnOwnerDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath = { "bDropCurrencyOnOwnerDeath", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFCurrencyComponent), &Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath_MetaData), Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyDropVariation_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The randomic variation on the CurrencyAmount dropped on this owner death*/" },
		{ "EditCondition", "bDropCurrencyOnOwnerDeath" },
		{ "ModuleRelativePath", "Public/Components/ACFCurrencyComponent.h" },
		{ "ToolTip", "The randomic variation on the CurrencyAmount dropped on this owner death" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyDropVariation = { "CurrencyDropVariation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCurrencyComponent, CurrencyDropVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyDropVariation_MetaData), Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyDropVariation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCurrencyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_OnCurrencyChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_bDropCurrencyOnOwnerDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCurrencyComponent_Statics::NewProp_CurrencyDropVariation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCurrencyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCurrencyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCurrencyComponent_Statics::ClassParams = {
		&UACFCurrencyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCurrencyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCurrencyComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCurrencyComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCurrencyComponent()
	{
		if (!Z_Registration_Info_UClass_UACFCurrencyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCurrencyComponent.OuterSingleton, Z_Construct_UClass_UACFCurrencyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCurrencyComponent.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFCurrencyComponent>()
	{
		return UACFCurrencyComponent::StaticClass();
	}

	void UACFCurrencyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrencyAmount(TEXT("CurrencyAmount"));

		const bool bIsValid = true
			&& Name_CurrencyAmount == ClassReps[(int32)ENetFields_Private::CurrencyAmount].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFCurrencyComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCurrencyComponent);
	UACFCurrencyComponent::~UACFCurrencyComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCurrencyComponent, UACFCurrencyComponent::StaticClass, TEXT("UACFCurrencyComponent"), &Z_Registration_Info_UClass_UACFCurrencyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCurrencyComponent), 2445955062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_1999366619(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

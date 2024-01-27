// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedRPGSystem/Public/ARSStatisticsComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSStatisticsComponent() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSLevelingSystemDataAsset_NoRegister();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	ADVANCEDRPGSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType();
	ADVANCEDRPGSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSet();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatistic();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics
	{
		struct _Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms
		{
			FGameplayTag Stat;
			FStatistic value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms, value), Z_Construct_UScriptStruct_FStatistic, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_value_MetaData), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_value_MetaData) }; // 828729460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_Stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem, nullptr, "OnStatValueChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStatValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatValueChanged, FGameplayTag Stat, FStatistic const& value)
{
	struct _Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms
	{
		FGameplayTag Stat;
		FStatistic value;
	};
	_Script_AdvancedRPGSystem_eventOnStatValueChanged_Parms Parms;
	Parms.Stat=Stat;
	Parms.value=value;
	OnStatValueChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem, nullptr, "OnAttributeSetModified__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttributeSetModified_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeSetModified)
{
	OnAttributeSetModified.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics
	{
		struct _Script_AdvancedRPGSystem_eventOnStatisticReachesZero_Parms
		{
			FGameplayTag Stat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnStatisticReachesZero_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem, nullptr, "OnStatisticReachesZero__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnStatisticReachesZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnStatisticReachesZero_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStatisticReachesZero_DelegateWrapper(const FMulticastScriptDelegate& OnStatisticReachesZero, FGameplayTag Stat)
{
	struct _Script_AdvancedRPGSystem_eventOnStatisticReachesZero_Parms
	{
		FGameplayTag Stat;
	};
	_Script_AdvancedRPGSystem_eventOnStatisticReachesZero_Parms Parms;
	Parms.Stat=Stat;
	OnStatisticReachesZero.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics
	{
		struct _Script_AdvancedRPGSystem_eventOnCharacterLevelUp_Parms
		{
			int32 NewLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnCharacterLevelUp_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::NewProp_NewLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem, nullptr, "OnCharacterLevelUp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnCharacterLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnCharacterLevelUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCharacterLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterLevelUp, int32 NewLevel)
{
	struct _Script_AdvancedRPGSystem_eventOnCharacterLevelUp_Parms
	{
		int32 NewLevel;
	};
	_Script_AdvancedRPGSystem_eventOnCharacterLevelUp_Parms Parms;
	Parms.NewLevel=NewLevel;
	OnCharacterLevelUp.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics
	{
		struct _Script_AdvancedRPGSystem_eventOnCurrentExpValueChanged_Parms
		{
			int32 newCurrentExp;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_newCurrentExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::NewProp_newCurrentExp = { "newCurrentExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnCurrentExpValueChanged_Parms, newCurrentExp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::NewProp_newCurrentExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem, nullptr, "OnCurrentExpValueChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnCurrentExpValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnCurrentExpValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCurrentExpValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentExpValueChanged, int32 newCurrentExp)
{
	struct _Script_AdvancedRPGSystem_eventOnCurrentExpValueChanged_Parms
	{
		int32 newCurrentExp;
	};
	_Script_AdvancedRPGSystem_eventOnCurrentExpValueChanged_Parms Parms;
	Parms.newCurrentExp=newCurrentExp;
	OnCurrentExpValueChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics
	{
		struct _Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms
		{
			FGameplayTag Stat;
			float OldValue;
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_Stat_MetaData), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_Stat_MetaData) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_Stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem, nullptr, "OnStatisticValueChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::_Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStatisticValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatisticValueChanged, FGameplayTag const& Stat, float OldValue, float NewValue)
{
	struct _Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms
	{
		FGameplayTag Stat;
		float OldValue;
		float NewValue;
	};
	_Script_AdvancedRPGSystem_eventOnStatisticValueChanged_Parms Parms;
	Parms.Stat=Stat;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	OnStatisticValueChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UARSStatisticsComponent::execOnComponentSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentSaved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execOnComponentLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execHasValidPrimaryAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_att);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidPrimaryAttribute(Z_Param_att);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execHasValidAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidAttribute(Z_Param_param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execHasValidStatistic)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_stat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidStatistic(Z_Param_stat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetAvailablePerks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAvailablePerks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execAssignPerkToPrimaryAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_attributeTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_numPerks);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->AssignPerkToPrimaryAttribute_Validate(Z_Param_attributeTag,Z_Param_numPerks))
		{
			RPC_ValidateFailed(TEXT("AssignPerkToPrimaryAttribute_Validate"));
			return;
		}
		P_THIS->AssignPerkToPrimaryAttribute_Implementation(Z_Param_attributeTag,Z_Param_numPerks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetExpOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExpOnDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execCanLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanLevelUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentExptsFromPreviousLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentExptsFromPreviousLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetExpsForLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExpsForLevel(Z_Param_level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetTotalExpsForLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalExpsForLevel(Z_Param_level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentExp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentExp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetTotaleExpToNextLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotaleExpToNextLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execPermanentlyModifyPrimaryAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PermanentlyModifyPrimaryAttribute_Implementation(Z_Param_attribute,Z_Param_deltaValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execSetNewLevelAndReinitialize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewLevelAndReinitialize_Implementation(Z_Param_newLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execReinitializeAttributeSetFromNewDefault)
	{
		P_GET_STRUCT(FAttributesSet,Z_Param_newDefault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeAttributeSetFromNewDefault_Implementation(Z_Param_newDefault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execAddTimedAttributeSetModifier)
	{
		P_GET_STRUCT(FAttributesSetModifier,Z_Param__modifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTimedAttributeSetModifier_Implementation(Z_Param__modifier,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetBaseAttributeSetWithoutModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributesSet*)Z_Param__Result=P_THIS->GetBaseAttributeSetWithoutModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentAttributeSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributesSet*)Z_Param__Result=P_THIS->GetCurrentAttributeSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentAttributeValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_attributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAttributeValue(Z_Param_attributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentPrimaryAttributeValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_attributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPrimaryAttributeValue(Z_Param_attributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetNormalizedValueForStatitstic)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_statTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedValueForStatitstic(Z_Param_statTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetMaxValueForStatitstic)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_stat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxValueForStatitstic(Z_Param_stat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetCurrentValueForStatitstic)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_stat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentValueForStatitstic(Z_Param_stat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execModifyStat)
	{
		P_GET_STRUCT(FStatisticValue,Z_Param_StatMod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyStat_Implementation(Z_Param_StatMod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execModifyStatistic)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyStatistic(Z_Param_Stat,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execConsumeStatistics)
	{
		P_GET_TARRAY_REF(FStatisticValue,Z_Param_Out_Costs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeStatistics(Z_Param_Out_Costs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execCheckCost)
	{
		P_GET_STRUCT_REF(FStatisticValue,Z_Param_Out_Cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCost(Z_Param_Out_Cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execCheckPrimaryAttributesRequirements)
	{
		P_GET_TARRAY_REF(FAttribute,Z_Param_Out_attributeRequirements);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckPrimaryAttributesRequirements(Z_Param_Out_attributeRequirements);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execCheckCosts)
	{
		P_GET_TARRAY_REF(FStatisticValue,Z_Param_Out_Costs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCosts(Z_Param_Out_Costs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetConsumptionMultiplierByStatistic)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_statisticTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetConsumptionMultiplierByStatistic(Z_Param_statisticTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execAddStatisticConsumptionMultiplier)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_statisticTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStatisticConsumptionMultiplier_Implementation(Z_Param_statisticTag,Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execRemoveAttributeSetModifier)
	{
		P_GET_STRUCT(FAttributesSetModifier,Z_Param__modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttributeSetModifier_Implementation(Z_Param__modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execAddAttributeSetModifier)
	{
		P_GET_STRUCT(FAttributesSetModifier,Z_Param__modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttributeSetModifier_Implementation(Z_Param__modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execAddExp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_exp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExp_Implementation(Z_Param_exp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execStopRegeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRegeneration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execInitializeAttributeSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAttributeSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execStartRegeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRegeneration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGenerateStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execInternal_AddModifier)
	{
		P_GET_STRUCT_REF(FAttributesSetModifier,Z_Param_Out_modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_AddModifier(Z_Param_Out_modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execInternal_ModifyStat)
	{
		P_GET_STRUCT_REF(FStatisticValue,Z_Param_Out_StatMod);
		P_GET_UBOOL(Z_Param_bResetDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_ModifyStat(Z_Param_Out_StatMod,Z_Param_bResetDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execOnLevelUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newlevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_remainingExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelUp_Implementation(Z_Param_newlevel,Z_Param_remainingExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execInitilizeLevelData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitilizeLevelData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execOnRep_AttributeSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttributeSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSStatisticsComponent::execGetPrimitiveAttributesForCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAttribute>*)Z_Param__Result=P_THIS->GetPrimitiveAttributesForCurrentLevel();
		P_NATIVE_END;
	}
	struct ARSStatisticsComponent_eventAddAttributeSetModifier_Parms
	{
		FAttributesSetModifier _modifier;
	};
	struct ARSStatisticsComponent_eventAddExp_Parms
	{
		int32 exp;
	};
	struct ARSStatisticsComponent_eventAddStatisticConsumptionMultiplier_Parms
	{
		FGameplayTag statisticTag;
		float multiplier;
	};
	struct ARSStatisticsComponent_eventAddTimedAttributeSetModifier_Parms
	{
		FAttributesSetModifier _modifier;
		float duration;
	};
	struct ARSStatisticsComponent_eventAssignPerkToPrimaryAttribute_Parms
	{
		FGameplayTag attributeTag;
		int32 numPerks;
	};
	struct ARSStatisticsComponent_eventModifyStat_Parms
	{
		FStatisticValue StatMod;
	};
	struct ARSStatisticsComponent_eventOnLevelUp_Parms
	{
		int32 newlevel;
		int32 remainingExp;
	};
	struct ARSStatisticsComponent_eventPermanentlyModifyPrimaryAttribute_Parms
	{
		FGameplayTag attribute;
		float deltaValue;
	};
	struct ARSStatisticsComponent_eventReinitializeAttributeSetFromNewDefault_Parms
	{
		FAttributesSet newDefault;
	};
	struct ARSStatisticsComponent_eventRemoveAttributeSetModifier_Parms
	{
		FAttributesSetModifier _modifier;
	};
	struct ARSStatisticsComponent_eventSetNewLevelAndReinitialize_Parms
	{
		int32 newLevel;
	};
	static FName NAME_UARSStatisticsComponent_AddAttributeSetModifier = FName(TEXT("AddAttributeSetModifier"));
	void UARSStatisticsComponent::AddAttributeSetModifier(FAttributesSetModifier const& _modifier)
	{
		ARSStatisticsComponent_eventAddAttributeSetModifier_Parms Parms;
		Parms._modifier=_modifier;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_AddAttributeSetModifier),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_AddExp = FName(TEXT("AddExp"));
	void UARSStatisticsComponent::AddExp(int32 exp)
	{
		ARSStatisticsComponent_eventAddExp_Parms Parms;
		Parms.exp=exp;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_AddExp),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_AddStatisticConsumptionMultiplier = FName(TEXT("AddStatisticConsumptionMultiplier"));
	void UARSStatisticsComponent::AddStatisticConsumptionMultiplier(FGameplayTag statisticTag, float multiplier)
	{
		ARSStatisticsComponent_eventAddStatisticConsumptionMultiplier_Parms Parms;
		Parms.statisticTag=statisticTag;
		Parms.multiplier=multiplier;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_AddStatisticConsumptionMultiplier),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_AddTimedAttributeSetModifier = FName(TEXT("AddTimedAttributeSetModifier"));
	void UARSStatisticsComponent::AddTimedAttributeSetModifier(FAttributesSetModifier const& _modifier, float duration)
	{
		ARSStatisticsComponent_eventAddTimedAttributeSetModifier_Parms Parms;
		Parms._modifier=_modifier;
		Parms.duration=duration;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_AddTimedAttributeSetModifier),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_AssignPerkToPrimaryAttribute = FName(TEXT("AssignPerkToPrimaryAttribute"));
	void UARSStatisticsComponent::AssignPerkToPrimaryAttribute(FGameplayTag const& attributeTag, int32 numPerks)
	{
		ARSStatisticsComponent_eventAssignPerkToPrimaryAttribute_Parms Parms;
		Parms.attributeTag=attributeTag;
		Parms.numPerks=numPerks;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_AssignPerkToPrimaryAttribute),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_ModifyStat = FName(TEXT("ModifyStat"));
	void UARSStatisticsComponent::ModifyStat(FStatisticValue const& StatMod)
	{
		ARSStatisticsComponent_eventModifyStat_Parms Parms;
		Parms.StatMod=StatMod;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_ModifyStat),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_OnComponentLoaded = FName(TEXT("OnComponentLoaded"));
	void UARSStatisticsComponent::OnComponentLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_OnComponentLoaded),NULL);
	}
	static FName NAME_UARSStatisticsComponent_OnComponentSaved = FName(TEXT("OnComponentSaved"));
	void UARSStatisticsComponent::OnComponentSaved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_OnComponentSaved),NULL);
	}
	static FName NAME_UARSStatisticsComponent_OnLevelUp = FName(TEXT("OnLevelUp"));
	void UARSStatisticsComponent::OnLevelUp(int32 newlevel, int32 remainingExp)
	{
		ARSStatisticsComponent_eventOnLevelUp_Parms Parms;
		Parms.newlevel=newlevel;
		Parms.remainingExp=remainingExp;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_OnLevelUp),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute = FName(TEXT("PermanentlyModifyPrimaryAttribute"));
	void UARSStatisticsComponent::PermanentlyModifyPrimaryAttribute(FGameplayTag const& attribute, float deltaValue)
	{
		ARSStatisticsComponent_eventPermanentlyModifyPrimaryAttribute_Parms Parms;
		Parms.attribute=attribute;
		Parms.deltaValue=deltaValue;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault = FName(TEXT("ReinitializeAttributeSetFromNewDefault"));
	void UARSStatisticsComponent::ReinitializeAttributeSetFromNewDefault(FAttributesSet const& newDefault)
	{
		ARSStatisticsComponent_eventReinitializeAttributeSetFromNewDefault_Parms Parms;
		Parms.newDefault=newDefault;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_RemoveAttributeSetModifier = FName(TEXT("RemoveAttributeSetModifier"));
	void UARSStatisticsComponent::RemoveAttributeSetModifier(FAttributesSetModifier const& _modifier)
	{
		ARSStatisticsComponent_eventRemoveAttributeSetModifier_Parms Parms;
		Parms._modifier=_modifier;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_RemoveAttributeSetModifier),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_SetNewLevelAndReinitialize = FName(TEXT("SetNewLevelAndReinitialize"));
	void UARSStatisticsComponent::SetNewLevelAndReinitialize(int32 newLevel)
	{
		ARSStatisticsComponent_eventSetNewLevelAndReinitialize_Parms Parms;
		Parms.newLevel=newLevel;
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_SetNewLevelAndReinitialize),&Parms);
	}
	static FName NAME_UARSStatisticsComponent_StartRegeneration = FName(TEXT("StartRegeneration"));
	void UARSStatisticsComponent::StartRegeneration()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_StartRegeneration),NULL);
	}
	static FName NAME_UARSStatisticsComponent_StopRegeneration = FName(TEXT("StopRegeneration"));
	void UARSStatisticsComponent::StopRegeneration()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARSStatisticsComponent_StopRegeneration),NULL);
	}
	void UARSStatisticsComponent::StaticRegisterNativesUARSStatisticsComponent()
	{
		UClass* Class = UARSStatisticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttributeSetModifier", &UARSStatisticsComponent::execAddAttributeSetModifier },
			{ "AddExp", &UARSStatisticsComponent::execAddExp },
			{ "AddStatisticConsumptionMultiplier", &UARSStatisticsComponent::execAddStatisticConsumptionMultiplier },
			{ "AddTimedAttributeSetModifier", &UARSStatisticsComponent::execAddTimedAttributeSetModifier },
			{ "AssignPerkToPrimaryAttribute", &UARSStatisticsComponent::execAssignPerkToPrimaryAttribute },
			{ "CanLevelUp", &UARSStatisticsComponent::execCanLevelUp },
			{ "CheckCost", &UARSStatisticsComponent::execCheckCost },
			{ "CheckCosts", &UARSStatisticsComponent::execCheckCosts },
			{ "CheckPrimaryAttributesRequirements", &UARSStatisticsComponent::execCheckPrimaryAttributesRequirements },
			{ "ConsumeStatistics", &UARSStatisticsComponent::execConsumeStatistics },
			{ "GenerateStats", &UARSStatisticsComponent::execGenerateStats },
			{ "GetAvailablePerks", &UARSStatisticsComponent::execGetAvailablePerks },
			{ "GetBaseAttributeSetWithoutModifiers", &UARSStatisticsComponent::execGetBaseAttributeSetWithoutModifiers },
			{ "GetConsumptionMultiplierByStatistic", &UARSStatisticsComponent::execGetConsumptionMultiplierByStatistic },
			{ "GetCurrentAttributeSet", &UARSStatisticsComponent::execGetCurrentAttributeSet },
			{ "GetCurrentAttributeValue", &UARSStatisticsComponent::execGetCurrentAttributeValue },
			{ "GetCurrentExp", &UARSStatisticsComponent::execGetCurrentExp },
			{ "GetCurrentExptsFromPreviousLevel", &UARSStatisticsComponent::execGetCurrentExptsFromPreviousLevel },
			{ "GetCurrentLevel", &UARSStatisticsComponent::execGetCurrentLevel },
			{ "GetCurrentPrimaryAttributeValue", &UARSStatisticsComponent::execGetCurrentPrimaryAttributeValue },
			{ "GetCurrentValueForStatitstic", &UARSStatisticsComponent::execGetCurrentValueForStatitstic },
			{ "GetExpOnDeath", &UARSStatisticsComponent::execGetExpOnDeath },
			{ "GetExpsForLevel", &UARSStatisticsComponent::execGetExpsForLevel },
			{ "GetMaxValueForStatitstic", &UARSStatisticsComponent::execGetMaxValueForStatitstic },
			{ "GetNormalizedValueForStatitstic", &UARSStatisticsComponent::execGetNormalizedValueForStatitstic },
			{ "GetPrimitiveAttributesForCurrentLevel", &UARSStatisticsComponent::execGetPrimitiveAttributesForCurrentLevel },
			{ "GetTotaleExpToNextLevel", &UARSStatisticsComponent::execGetTotaleExpToNextLevel },
			{ "GetTotalExpsForLevel", &UARSStatisticsComponent::execGetTotalExpsForLevel },
			{ "HasValidAttribute", &UARSStatisticsComponent::execHasValidAttribute },
			{ "HasValidPrimaryAttribute", &UARSStatisticsComponent::execHasValidPrimaryAttribute },
			{ "HasValidStatistic", &UARSStatisticsComponent::execHasValidStatistic },
			{ "InitializeAttributeSet", &UARSStatisticsComponent::execInitializeAttributeSet },
			{ "InitilizeLevelData", &UARSStatisticsComponent::execInitilizeLevelData },
			{ "Internal_AddModifier", &UARSStatisticsComponent::execInternal_AddModifier },
			{ "Internal_ModifyStat", &UARSStatisticsComponent::execInternal_ModifyStat },
			{ "ModifyStat", &UARSStatisticsComponent::execModifyStat },
			{ "ModifyStatistic", &UARSStatisticsComponent::execModifyStatistic },
			{ "OnComponentLoaded", &UARSStatisticsComponent::execOnComponentLoaded },
			{ "OnComponentSaved", &UARSStatisticsComponent::execOnComponentSaved },
			{ "OnLevelUp", &UARSStatisticsComponent::execOnLevelUp },
			{ "OnRep_AttributeSet", &UARSStatisticsComponent::execOnRep_AttributeSet },
			{ "PermanentlyModifyPrimaryAttribute", &UARSStatisticsComponent::execPermanentlyModifyPrimaryAttribute },
			{ "ReinitializeAttributeSetFromNewDefault", &UARSStatisticsComponent::execReinitializeAttributeSetFromNewDefault },
			{ "RemoveAttributeSetModifier", &UARSStatisticsComponent::execRemoveAttributeSetModifier },
			{ "SetNewLevelAndReinitialize", &UARSStatisticsComponent::execSetNewLevelAndReinitialize },
			{ "StartRegeneration", &UARSStatisticsComponent::execStartRegeneration },
			{ "StopRegeneration", &UARSStatisticsComponent::execStopRegeneration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__modifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::NewProp__modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::NewProp__modifier = { "_modifier", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAddAttributeSetModifier_Parms, _modifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::NewProp__modifier_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::NewProp__modifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::NewProp__modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Adds a Modifier for the current AttributeSet of the character*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Adds a Modifier for the current AttributeSet of the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "AddAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventAddAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventAddAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_exp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::NewProp_exp = { "exp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAddExp_Parms, exp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::NewProp_exp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*used to add exp to the current character and evaluetes levelling up.\n        Server Side*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "used to add exp to the current character and evaluetes levelling up.\n        Server Side" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "AddExp", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventAddExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventAddExp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_AddExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_AddExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_statisticTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::NewProp_statisticTag = { "statisticTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAddStatisticConsumptionMultiplier_Parms, statisticTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAddStatisticConsumptionMultiplier_Parms, multiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::NewProp_statisticTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Everytime the StatisticTag Statistic will be modified, the amount of\n        modifier will be multiplied by this value*/" },
		{ "CPP_Default_multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Everytime the StatisticTag Statistic will be modified, the amount of\n        modifier will be multiplied by this value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "AddStatisticConsumptionMultiplier", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventAddStatisticConsumptionMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventAddStatisticConsumptionMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__modifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__modifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp__modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp__modifier = { "_modifier", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAddTimedAttributeSetModifier_Parms, _modifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp__modifier_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp__modifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAddTimedAttributeSetModifier_Parms, duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp__modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Adds a Modifier for the current AttributeSet of the character for a limited amount of time*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Adds a Modifier for the current AttributeSet of the character for a limited amount of time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "AddTimedAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventAddTimedAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventAddTimedAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attributeTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numPerks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_attributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_attributeTag = { "attributeTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAssignPerkToPrimaryAttribute_Parms, attributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_attributeTag_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_attributeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_numPerks = { "numPerks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventAssignPerkToPrimaryAttribute_Parms, numPerks), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_attributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::NewProp_numPerks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Uses numPerks of perks to increment the Attribute attributeTag by numPerks amount.\n        Does nothing you don't have enough perks*/" },
		{ "CPP_Default_numPerks", "1" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Uses numPerks of perks to increment the Attribute attributeTag by numPerks amount.\n        Does nothing you don't have enough perks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "AssignPerkToPrimaryAttribute", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventAssignPerkToPrimaryAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventAssignPerkToPrimaryAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics
	{
		struct ARSStatisticsComponent_eventCanLevelUp_Parms
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
	void Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventCanLevelUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventCanLevelUp_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns current level of the character*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns current level of the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "CanLevelUp", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::ARSStatisticsComponent_eventCanLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::ARSStatisticsComponent_eventCanLevelUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics
	{
		struct ARSStatisticsComponent_eventCheckCost_Parms
		{
			FStatisticValue Cost;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cost;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_Cost_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventCheckCost_Parms, Cost), Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_Cost_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_Cost_MetaData) }; // 2111676830
	void Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventCheckCost_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventCheckCost_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Checks if current Statistic is enough to apply this Cost*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Checks if current Statistic is enough to apply this Cost" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "CheckCost", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::ARSStatisticsComponent_eventCheckCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::ARSStatisticsComponent_eventCheckCost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_CheckCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_CheckCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics
	{
		struct ARSStatisticsComponent_eventCheckCosts_Parms
		{
			TArray<FStatisticValue> Costs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Costs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Costs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Costs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs_Inner = { "Costs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs = { "Costs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventCheckCosts_Parms, Costs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs_MetaData) }; // 2111676830
	void Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventCheckCosts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventCheckCosts_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_Costs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Checks if current Statistics are enough for apply those Costs*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Checks if current Statistics are enough for apply those Costs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "CheckCosts", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::ARSStatisticsComponent_eventCheckCosts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::ARSStatisticsComponent_eventCheckCosts_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics
	{
		struct ARSStatisticsComponent_eventCheckPrimaryAttributesRequirements_Parms
		{
			TArray<FAttribute> attributeRequirements;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_attributeRequirements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attributeRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_attributeRequirements;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements_Inner = { "attributeRequirements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements = { "attributeRequirements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventCheckPrimaryAttributesRequirements_Parms, attributeRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements_MetaData) }; // 262406853
	void Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventCheckPrimaryAttributesRequirements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventCheckPrimaryAttributesRequirements_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_attributeRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Checks if your current Attributes are higher of the one passed as an argument,\n        returns true only if all the actual attributes of the character are higher then the one passed as\n        parameter*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Checks if your current Attributes are higher of the one passed as an argument,\n        returns true only if all the actual attributes of the character are higher then the one passed as\n        parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "CheckPrimaryAttributesRequirements", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::ARSStatisticsComponent_eventCheckPrimaryAttributesRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::ARSStatisticsComponent_eventCheckPrimaryAttributesRequirements_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics
	{
		struct ARSStatisticsComponent_eventConsumeStatistics_Parms
		{
			TArray<FStatisticValue> Costs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Costs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Costs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Costs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs_Inner = { "Costs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs = { "Costs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventConsumeStatistics_Parms, Costs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs_MetaData) }; // 2111676830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::NewProp_Costs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Remove the Statistic modifier from the actual Statistic*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Remove the Statistic modifier from the actual Statistic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "ConsumeStatistics", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::ARSStatisticsComponent_eventConsumeStatistics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::ARSStatisticsComponent_eventConsumeStatistics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "// Regenerate Stats\n" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Regenerate Stats" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GenerateStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics
	{
		struct ARSStatisticsComponent_eventGetAvailablePerks_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetAvailablePerks_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns current amount of available perks*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns current amount of available perks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetAvailablePerks", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::ARSStatisticsComponent_eventGetAvailablePerks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::ARSStatisticsComponent_eventGetAvailablePerks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics
	{
		struct ARSStatisticsComponent_eventGetBaseAttributeSetWithoutModifiers_Parms
		{
			FAttributesSet ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetBaseAttributeSetWithoutModifiers_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(0, nullptr) }; // 98634780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter for the entire Base AttributeSet without Modifiers.\n    WARNING: current values for statistics are NOT updated here*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter for the entire Base AttributeSet without Modifiers.\n    WARNING: current values for statistics are NOT updated here" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetBaseAttributeSetWithoutModifiers", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::ARSStatisticsComponent_eventGetBaseAttributeSetWithoutModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::ARSStatisticsComponent_eventGetBaseAttributeSetWithoutModifiers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics
	{
		struct ARSStatisticsComponent_eventGetConsumptionMultiplierByStatistic_Parms
		{
			FGameplayTag statisticTag;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_statisticTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::NewProp_statisticTag = { "statisticTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetConsumptionMultiplierByStatistic_Parms, statisticTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetConsumptionMultiplierByStatistic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::NewProp_statisticTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetConsumptionMultiplierByStatistic", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::ARSStatisticsComponent_eventGetConsumptionMultiplierByStatistic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::ARSStatisticsComponent_eventGetConsumptionMultiplierByStatistic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentAttributeSet_Parms
		{
			FAttributesSet ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentAttributeSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(0, nullptr) }; // 98634780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter for the entire AttributeSet */" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter for the entire AttributeSet" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentAttributeSet", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::ARSStatisticsComponent_eventGetCurrentAttributeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::ARSStatisticsComponent_eventGetCurrentAttributeSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentAttributeValue_Parms
		{
			FGameplayTag attributeTag;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_attributeTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::NewProp_attributeTag = { "attributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentAttributeValue_Parms, attributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::NewProp_attributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter for current Attribute Value*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter for current Attribute Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::ARSStatisticsComponent_eventGetCurrentAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::ARSStatisticsComponent_eventGetCurrentAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentExp_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentExp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns the amount of exp gained since last level up*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns the amount of exp gained since last level up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentExp", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::ARSStatisticsComponent_eventGetCurrentExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::ARSStatisticsComponent_eventGetCurrentExp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentExptsFromPreviousLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentExptsFromPreviousLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns Current total exps - Exps from previous level, useful for UI*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns Current total exps - Exps from previous level, useful for UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentExptsFromPreviousLevel", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::ARSStatisticsComponent_eventGetCurrentExptsFromPreviousLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::ARSStatisticsComponent_eventGetCurrentExptsFromPreviousLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns current level of the character*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns current level of the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::ARSStatisticsComponent_eventGetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::ARSStatisticsComponent_eventGetCurrentLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentPrimaryAttributeValue_Parms
		{
			FGameplayTag attributeTag;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_attributeTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::NewProp_attributeTag = { "attributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentPrimaryAttributeValue_Parms, attributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentPrimaryAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::NewProp_attributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter for current Primary Attribute Value*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter for current Primary Attribute Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentPrimaryAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::ARSStatisticsComponent_eventGetCurrentPrimaryAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::ARSStatisticsComponent_eventGetCurrentPrimaryAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics
	{
		struct ARSStatisticsComponent_eventGetCurrentValueForStatitstic_Parms
		{
			FGameplayTag stat;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_stat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentValueForStatitstic_Parms, stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetCurrentValueForStatitstic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::NewProp_stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter Current value for Statistic*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter Current value for Statistic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetCurrentValueForStatitstic", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::ARSStatisticsComponent_eventGetCurrentValueForStatitstic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::ARSStatisticsComponent_eventGetCurrentValueForStatitstic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics
	{
		struct ARSStatisticsComponent_eventGetExpOnDeath_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetExpOnDeath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns current level of the character*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns current level of the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetExpOnDeath", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::ARSStatisticsComponent_eventGetExpOnDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::ARSStatisticsComponent_eventGetExpOnDeath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics
	{
		struct ARSStatisticsComponent_eventGetExpsForLevel_Parms
		{
			int32 level;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetExpsForLevel_Parms, level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetExpsForLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns the total exps required to reach the provided level from previous level*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns the total exps required to reach the provided level from previous level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetExpsForLevel", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::ARSStatisticsComponent_eventGetExpsForLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::ARSStatisticsComponent_eventGetExpsForLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics
	{
		struct ARSStatisticsComponent_eventGetMaxValueForStatitstic_Parms
		{
			FGameplayTag stat;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_stat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetMaxValueForStatitstic_Parms, stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetMaxValueForStatitstic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::NewProp_stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter Max value for Statistic*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter Max value for Statistic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetMaxValueForStatitstic", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::ARSStatisticsComponent_eventGetMaxValueForStatitstic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::ARSStatisticsComponent_eventGetMaxValueForStatitstic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics
	{
		struct ARSStatisticsComponent_eventGetNormalizedValueForStatitstic_Parms
		{
			FGameplayTag statTag;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_statTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::NewProp_statTag = { "statTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetNormalizedValueForStatitstic_Parms, statTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetNormalizedValueForStatitstic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::NewProp_statTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Getter Current value/ Max Value for Statistic*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Getter Current value/ Max Value for Statistic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetNormalizedValueForStatitstic", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::ARSStatisticsComponent_eventGetNormalizedValueForStatitstic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::ARSStatisticsComponent_eventGetNormalizedValueForStatitstic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics
	{
		struct ARSStatisticsComponent_eventGetPrimitiveAttributesForCurrentLevel_Parms
		{
			TArray<FAttribute> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetPrimitiveAttributesForCurrentLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 262406853
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetPrimitiveAttributesForCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::ARSStatisticsComponent_eventGetPrimitiveAttributesForCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::ARSStatisticsComponent_eventGetPrimitiveAttributesForCurrentLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics
	{
		struct ARSStatisticsComponent_eventGetTotaleExpToNextLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetTotaleExpToNextLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns the amount of totale experience necessary for level up*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns the amount of totale experience necessary for level up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetTotaleExpToNextLevel", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::ARSStatisticsComponent_eventGetTotaleExpToNextLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::ARSStatisticsComponent_eventGetTotaleExpToNextLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics
	{
		struct ARSStatisticsComponent_eventGetTotalExpsForLevel_Parms
		{
			int32 level;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetTotalExpsForLevel_Parms, level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventGetTotalExpsForLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns the total exps required to reach the provided level from level 0*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Returns the total exps required to reach the provided level from level 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "GetTotalExpsForLevel", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::ARSStatisticsComponent_eventGetTotalExpsForLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::ARSStatisticsComponent_eventGetTotalExpsForLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics
	{
		struct ARSStatisticsComponent_eventHasValidAttribute_Parms
		{
			FGameplayTag param;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_param;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventHasValidAttribute_Parms, param), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventHasValidAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventHasValidAttribute_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::NewProp_param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "HasValidAttribute", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::ARSStatisticsComponent_eventHasValidAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::ARSStatisticsComponent_eventHasValidAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics
	{
		struct ARSStatisticsComponent_eventHasValidPrimaryAttribute_Parms
		{
			FGameplayTag att;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_att;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::NewProp_att = { "att", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventHasValidPrimaryAttribute_Parms, att), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventHasValidPrimaryAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventHasValidPrimaryAttribute_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::NewProp_att,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "HasValidPrimaryAttribute", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::ARSStatisticsComponent_eventHasValidPrimaryAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::ARSStatisticsComponent_eventHasValidPrimaryAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics
	{
		struct ARSStatisticsComponent_eventHasValidStatistic_Parms
		{
			FGameplayTag stat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_stat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventHasValidStatistic_Parms, stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventHasValidStatistic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventHasValidStatistic_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::NewProp_stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Indicates if there is a statistic with this tag in the AttributeSet*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Indicates if there is a statistic with this tag in the AttributeSet" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "HasValidStatistic", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::ARSStatisticsComponent_eventHasValidStatistic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::ARSStatisticsComponent_eventHasValidStatistic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/* this function should be called ONLY ON SERVER,*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "this function should be called ONLY ON SERVER," },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "InitializeAttributeSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "InitilizeLevelData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics
	{
		struct ARSStatisticsComponent_eventInternal_AddModifier_Parms
		{
			FAttributesSetModifier modifier;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::NewProp_modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::NewProp_modifier = { "modifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventInternal_AddModifier_Parms, modifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::NewProp_modifier_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::NewProp_modifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::NewProp_modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "Internal_AddModifier", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::ARSStatisticsComponent_eventInternal_AddModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::ARSStatisticsComponent_eventInternal_AddModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics
	{
		struct ARSStatisticsComponent_eventInternal_ModifyStat_Parms
		{
			FStatisticValue StatMod;
			bool bResetDelay;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatMod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatMod;
		static void NewProp_bResetDelay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_StatMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_StatMod = { "StatMod", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventInternal_ModifyStat_Parms, StatMod), Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_StatMod_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_StatMod_MetaData) }; // 2111676830
	void Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_bResetDelay_SetBit(void* Obj)
	{
		((ARSStatisticsComponent_eventInternal_ModifyStat_Parms*)Obj)->bResetDelay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_bResetDelay = { "bResetDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSStatisticsComponent_eventInternal_ModifyStat_Parms), &Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_bResetDelay_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_StatMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::NewProp_bResetDelay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "Internal_ModifyStat", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::ARSStatisticsComponent_eventInternal_ModifyStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::ARSStatisticsComponent_eventInternal_ModifyStat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatMod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatMod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::NewProp_StatMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::NewProp_StatMod = { "StatMod", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventModifyStat_Parms, StatMod), Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::NewProp_StatMod_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::NewProp_StatMod_MetaData) }; // 2111676830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::NewProp_StatMod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "// called to add to subtract given value from statistics based on param stat\n" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "called to add to subtract given value from statistics based on param stat" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "ModifyStat", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventModifyStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventModifyStat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics
	{
		struct ARSStatisticsComponent_eventModifyStatistic_Parms
		{
			FGameplayTag Stat;
			float value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventModifyStatistic_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventModifyStatistic_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::NewProp_Stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Modifies the actual Statistic \"stat\" adding to it \"value\" to the CurrentValue\n        Server Side*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Modifies the actual Statistic \"stat\" adding to it \"value\" to the CurrentValue\n        Server Side" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "ModifyStatistic", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::ARSStatisticsComponent_eventModifyStatistic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::ARSStatisticsComponent_eventModifyStatistic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "OnComponentLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "OnComponentSaved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_newlevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_remainingExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::NewProp_newlevel = { "newlevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventOnLevelUp_Parms, newlevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::NewProp_remainingExp = { "remainingExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventOnLevelUp_Parms, remainingExp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::NewProp_newlevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::NewProp_remainingExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "OnLevelUp", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventOnLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventOnLevelUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "OnRep_AttributeSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_attribute = { "attribute", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventPermanentlyModifyPrimaryAttribute_Parms, attribute), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_attribute_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_attribute_MetaData) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_deltaValue = { "deltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventPermanentlyModifyPrimaryAttribute_Parms, deltaValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::NewProp_deltaValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*use this to  properly reinitialize your attributeset from a saved level*/" },
		{ "CPP_Default_deltaValue", "1.000000" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "use this to  properly reinitialize your attributeset from a saved level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "PermanentlyModifyPrimaryAttribute", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventPermanentlyModifyPrimaryAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventPermanentlyModifyPrimaryAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newDefault_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_newDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::NewProp_newDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::NewProp_newDefault = { "newDefault", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventReinitializeAttributeSetFromNewDefault_Parms, newDefault), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::NewProp_newDefault_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::NewProp_newDefault_MetaData) }; // 98634780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::NewProp_newDefault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*use this to Load an attribute set from savegame and properly reinitialize your attributeset*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "use this to Load an attribute set from savegame and properly reinitialize your attributeset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "ReinitializeAttributeSetFromNewDefault", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventReinitializeAttributeSetFromNewDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventReinitializeAttributeSetFromNewDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__modifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::NewProp__modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::NewProp__modifier = { "_modifier", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventRemoveAttributeSetModifier_Parms, _modifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::NewProp__modifier_MetaData), Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::NewProp__modifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::NewProp__modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Adds a Modifier for the current AttributeSet of the character*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Adds a Modifier for the current AttributeSet of the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "RemoveAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventRemoveAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventRemoveAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_newLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::NewProp_newLevel = { "newLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSStatisticsComponent_eventSetNewLevelAndReinitialize_Parms, newLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::NewProp_newLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*use this to  properly reinitialize your attributeset from a saved level*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "use this to  properly reinitialize your attributeset from a saved level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "SetNewLevelAndReinitialize", nullptr, nullptr, Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::PropPointers), sizeof(ARSStatisticsComponent_eventSetNewLevelAndReinitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARSStatisticsComponent_eventSetNewLevelAndReinitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Starts to regenerate all the Statistics with a regeneration value != 0.f.\n        Server Side*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Starts to regenerate all the Statistics with a regeneration value != 0.f.\n        Server Side" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "StartRegeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Stops to regenerate all the Statistics with a regeneration value != 0.f.\n        Server Side*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Stops to regenerate all the Statistics with a regeneration value != 0.f.\n        Server Side" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSStatisticsComponent, nullptr, "StopRegeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSStatisticsComponent);
	UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister()
	{
		return UARSStatisticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARSStatisticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInitialize_MetaData[];
#endif
		static void NewProp_bAutoInitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInitialize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatsLoadMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatsLoadMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatsLoadMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAttributeSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LevelingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesByLevelConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesByLevelConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpForNextLevelCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpForNextLevelCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpToGiveOnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpToGiveOnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerksObtainedOnLevelUp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerksObtainedOnLevelUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpToGiveOnDeathByCurrentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpToGiveOnDeathByCurrentLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StatisticConsumptionMultiplier_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatisticConsumptionMultiplier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticConsumptionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StatisticConsumptionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegenerateStatistics_MetaData[];
#endif
		static void NewProp_bCanRegenerateStatistics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegenerateStatistics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegenerationTimeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenerationTimeInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentExps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpToNextLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpToNextLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegenTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegenTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRegenerationStarted_MetaData[];
#endif
		static void NewProp_bIsRegenerationStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRegenerationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Perks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseAttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_baseAttributeSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_activeModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_activeModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_activeModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterLevelUp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterLevelUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeSetModified_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeSetModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentExpValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentExpValueChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStatisiticReachesZero_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatisiticReachesZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStatisticChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatisticChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSStatisticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSStatisticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSStatisticsComponent_AddAttributeSetModifier, "AddAttributeSetModifier" }, // 2516928647
		{ &Z_Construct_UFunction_UARSStatisticsComponent_AddExp, "AddExp" }, // 2721923378
		{ &Z_Construct_UFunction_UARSStatisticsComponent_AddStatisticConsumptionMultiplier, "AddStatisticConsumptionMultiplier" }, // 2869338086
		{ &Z_Construct_UFunction_UARSStatisticsComponent_AddTimedAttributeSetModifier, "AddTimedAttributeSetModifier" }, // 3017313680
		{ &Z_Construct_UFunction_UARSStatisticsComponent_AssignPerkToPrimaryAttribute, "AssignPerkToPrimaryAttribute" }, // 1248715225
		{ &Z_Construct_UFunction_UARSStatisticsComponent_CanLevelUp, "CanLevelUp" }, // 755038943
		{ &Z_Construct_UFunction_UARSStatisticsComponent_CheckCost, "CheckCost" }, // 351266201
		{ &Z_Construct_UFunction_UARSStatisticsComponent_CheckCosts, "CheckCosts" }, // 674175267
		{ &Z_Construct_UFunction_UARSStatisticsComponent_CheckPrimaryAttributesRequirements, "CheckPrimaryAttributesRequirements" }, // 1182057301
		{ &Z_Construct_UFunction_UARSStatisticsComponent_ConsumeStatistics, "ConsumeStatistics" }, // 1564524014
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GenerateStats, "GenerateStats" }, // 2179165605
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetAvailablePerks, "GetAvailablePerks" }, // 711716924
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetBaseAttributeSetWithoutModifiers, "GetBaseAttributeSetWithoutModifiers" }, // 2525836484
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetConsumptionMultiplierByStatistic, "GetConsumptionMultiplierByStatistic" }, // 2637027509
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeSet, "GetCurrentAttributeSet" }, // 998928299
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentAttributeValue, "GetCurrentAttributeValue" }, // 2879361550
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExp, "GetCurrentExp" }, // 2766726505
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentExptsFromPreviousLevel, "GetCurrentExptsFromPreviousLevel" }, // 3034910728
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentLevel, "GetCurrentLevel" }, // 1174672361
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentPrimaryAttributeValue, "GetCurrentPrimaryAttributeValue" }, // 1059841102
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetCurrentValueForStatitstic, "GetCurrentValueForStatitstic" }, // 2395213468
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetExpOnDeath, "GetExpOnDeath" }, // 252589658
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetExpsForLevel, "GetExpsForLevel" }, // 1785457892
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetMaxValueForStatitstic, "GetMaxValueForStatitstic" }, // 611079008
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetNormalizedValueForStatitstic, "GetNormalizedValueForStatitstic" }, // 1467884295
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetPrimitiveAttributesForCurrentLevel, "GetPrimitiveAttributesForCurrentLevel" }, // 301655953
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetTotaleExpToNextLevel, "GetTotaleExpToNextLevel" }, // 1539866550
		{ &Z_Construct_UFunction_UARSStatisticsComponent_GetTotalExpsForLevel, "GetTotalExpsForLevel" }, // 2146098785
		{ &Z_Construct_UFunction_UARSStatisticsComponent_HasValidAttribute, "HasValidAttribute" }, // 2483252327
		{ &Z_Construct_UFunction_UARSStatisticsComponent_HasValidPrimaryAttribute, "HasValidPrimaryAttribute" }, // 3011786229
		{ &Z_Construct_UFunction_UARSStatisticsComponent_HasValidStatistic, "HasValidStatistic" }, // 475945782
		{ &Z_Construct_UFunction_UARSStatisticsComponent_InitializeAttributeSet, "InitializeAttributeSet" }, // 2721623196
		{ &Z_Construct_UFunction_UARSStatisticsComponent_InitilizeLevelData, "InitilizeLevelData" }, // 2362625031
		{ &Z_Construct_UFunction_UARSStatisticsComponent_Internal_AddModifier, "Internal_AddModifier" }, // 3600139164
		{ &Z_Construct_UFunction_UARSStatisticsComponent_Internal_ModifyStat, "Internal_ModifyStat" }, // 2217069304
		{ &Z_Construct_UFunction_UARSStatisticsComponent_ModifyStat, "ModifyStat" }, // 2213683082
		{ &Z_Construct_UFunction_UARSStatisticsComponent_ModifyStatistic, "ModifyStatistic" }, // 2950104430
		{ &Z_Construct_UFunction_UARSStatisticsComponent_OnComponentLoaded, "OnComponentLoaded" }, // 1237126867
		{ &Z_Construct_UFunction_UARSStatisticsComponent_OnComponentSaved, "OnComponentSaved" }, // 2557942457
		{ &Z_Construct_UFunction_UARSStatisticsComponent_OnLevelUp, "OnLevelUp" }, // 1188264859
		{ &Z_Construct_UFunction_UARSStatisticsComponent_OnRep_AttributeSet, "OnRep_AttributeSet" }, // 1740025211
		{ &Z_Construct_UFunction_UARSStatisticsComponent_PermanentlyModifyPrimaryAttribute, "PermanentlyModifyPrimaryAttribute" }, // 818023975
		{ &Z_Construct_UFunction_UARSStatisticsComponent_ReinitializeAttributeSetFromNewDefault, "ReinitializeAttributeSetFromNewDefault" }, // 502058318
		{ &Z_Construct_UFunction_UARSStatisticsComponent_RemoveAttributeSetModifier, "RemoveAttributeSetModifier" }, // 562670289
		{ &Z_Construct_UFunction_UARSStatisticsComponent_SetNewLevelAndReinitialize, "SetNewLevelAndReinitialize" }, // 2064426168
		{ &Z_Construct_UFunction_UARSStatisticsComponent_StartRegeneration, "StartRegeneration" }, // 3158487133
		{ &Z_Construct_UFunction_UARSStatisticsComponent_StopRegeneration, "StopRegeneration" }, // 920910630
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ARSStatisticsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize_MetaData[] = {
		{ "Category", "ARS | AttributeSet" },
		{ "Comment", "/*If this is set to true, InitializeAttributeSet is called automatically On BeginPlay serverside.\n        If false you have to manually initialize this component when needed*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "If this is set to true, InitializeAttributeSet is called automatically On BeginPlay serverside.\n        If false you have to manually initialize this component when needed" },
	};
#endif
	void Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize_SetBit(void* Obj)
	{
		((UARSStatisticsComponent*)Obj)->bAutoInitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize = { "bAutoInitialize", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UARSStatisticsComponent), &Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod_MetaData[] = {
		{ "Category", "ARS | AttributeSet" },
		{ "Comment", "/*Define how your Statistics and Attributes are generated:\n        Default Without Generation: No generation is applied, Default value are used\n    Generate From Default Attributes: Define your Attributes in DefaultAttributeSet, Attributes and Statistic will be generated following the rules\n        defined in ProjectSettings - ARS Settings\n        Load By Level From Curve: Define the level of the character and Generate stats from AttributesByLevelCurves */" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Define how your Statistics and Attributes are generated:\n        Default Without Generation: No generation is applied, Default value are used\n    Generate From Default Attributes: Define your Attributes in DefaultAttributeSet, Attributes and Statistic will be generated following the rules\n        defined in ProjectSettings - ARS Settings\n        Load By Level From Curve: Define the level of the character and Generate stats from AttributesByLevelCurves" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod = { "StatsLoadMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, StatsLoadMethod), Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod_MetaData) }; // 747079071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_DefaultAttributeSet_MetaData[] = {
		{ "Category", "ARS | Default AttributeSet" },
		{ "Comment", "/*Attribute set used if you select No Generation or Generate From Default Values\n        In the first case it is used as is, in the second one, your Attribute will be\n        used to generate your Statistics and Attributes following your ARS Settings.*/" },
		{ "EditCondition", "StatsLoadMethod != EStatsLoadMethod::ELoadByLevel" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Attribute set used if you select No Generation or Generate From Default Values\n        In the first case it is used as is, in the second one, your Attribute will be\n        used to generate your Statistics and Attributes following your ARS Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_DefaultAttributeSet = { "DefaultAttributeSet", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, DefaultAttributeSet), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_DefaultAttributeSet_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_DefaultAttributeSet_MetaData) }; // 98634780
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*Indicates if this character can gain exp and level up and how the stats increase is handles:\n        EGenerateNewStatsFromCurves  After leveling up, new stats are generated from AttributesByLevelCurves\n        EAssignPerksManually\x09*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Indicates if this character can gain exp and level up and how the stats increase is handles:\n        EGenerateNewStatsFromCurves  After leveling up, new stats are generated from AttributesByLevelCurves\n        EAssignPerksManually" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType = { "LevelingType", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, LevelingType), Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType_MetaData) }; // 1678673353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributesByLevelConfig_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*Implement Rules to generate your ATTRIBUTES starting from your Level.\n        For each Curve on X you have the Level, on Y the actual value of the Attribute for that Level\n        Is used when StatLoadMethod is set to LoadByLevel and your LevelingType is GenerateNewStatsFromCurves*/" },
		{ "EditCondition", "LevelingType == ELevelingType::EGenerateNewStatsFromCurves && StatsLoadMethod == EStatsLoadMethod::ELoadByLevel" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Implement Rules to generate your ATTRIBUTES starting from your Level.\n        For each Curve on X you have the Level, on Y the actual value of the Attribute for that Level\n        Is used when StatLoadMethod is set to LoadByLevel and your LevelingType is GenerateNewStatsFromCurves" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributesByLevelConfig = { "AttributesByLevelConfig", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, AttributesByLevelConfig), Z_Construct_UClass_UARSLevelingSystemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributesByLevelConfig_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributesByLevelConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*Character Level used for generation if you select Load By Level From Curve or Load By Level and Class From Datatable*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Character Level used for generation if you select Load By Level From Curve or Load By Level and Class From Datatable" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, CharacterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CharacterLevel_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CharacterLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpForNextLevelCurve_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*For Each level the amount of Exp necessary to Lvl Up*/" },
		{ "EditCondition", "LevelingType != ELevelingType::ECantLevelUp" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "For Each level the amount of Exp necessary to Lvl Up" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpForNextLevelCurve = { "ExpForNextLevelCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, ExpForNextLevelCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpForNextLevelCurve_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpForNextLevelCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeath_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*Exp to be given when this character dies it has not */" },
		{ "EditCondition", "LevelingType == ELevelingType::ECantLevelUp" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Exp to be given when this character dies it has not" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeath = { "ExpToGiveOnDeath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, ExpToGiveOnDeath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeath_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_PerksObtainedOnLevelUp_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*The amount of perks received for each level up*/" },
		{ "EditCondition", "LevelingType == ELevelingType::EAssignPerksManually" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "The amount of perks received for each level up" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_PerksObtainedOnLevelUp = { "PerksObtainedOnLevelUp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, PerksObtainedOnLevelUp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_PerksObtainedOnLevelUp_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_PerksObtainedOnLevelUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeathByCurrentLevel_MetaData[] = {
		{ "Category", "ARS | Leveling System" },
		{ "Comment", "/*For Each level the amount of Exp given to the killer. Used Only if this character can level up*/" },
		{ "EditCondition", "LevelingType != ELevelingType::ECantLevelUp" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "For Each level the amount of Exp given to the killer. Used Only if this character can level up" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeathByCurrentLevel = { "ExpToGiveOnDeathByCurrentLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, ExpToGiveOnDeathByCurrentLevel), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeathByCurrentLevel_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeathByCurrentLevel_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_ValueProp = { "StatisticConsumptionMultiplier", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_Key_KeyProp = { "StatisticConsumptionMultiplier_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_MetaData[] = {
		{ "Category", "ARS | AttributeSet" },
		{ "Comment", "/*Multiplier applied everytime you modify CurrentValue of the target Statistics.\n        Could be useful to implement logics like: if your inventory is full, Stamina consumption is\n        multiplied by 1.5 for every action*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Multiplier applied everytime you modify CurrentValue of the target Statistics.\n        Could be useful to implement logics like: if your inventory is full, Stamina consumption is\n        multiplied by 1.5 for every action" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier = { "StatisticConsumptionMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, StatisticConsumptionMultiplier), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics_MetaData[] = {
		{ "Category", "ARS | StatRegen" },
		{ "Comment", "/*Turn off regeneration for this Character for optimization*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Turn off regeneration for this Character for optimization" },
	};
#endif
	void Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics_SetBit(void* Obj)
	{
		((UARSStatisticsComponent*)Obj)->bCanRegenerateStatistics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics = { "bCanRegenerateStatistics", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UARSStatisticsComponent), &Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenerationTimeInterval_MetaData[] = {
		{ "Category", "ARS | StatRegen" },
		{ "Comment", "/*Regeneration time interval, set high values for optimization*/" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
		{ "ToolTip", "Regeneration time interval, set high values for optimization" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenerationTimeInterval = { "RegenerationTimeInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, RegenerationTimeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenerationTimeInterval_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenerationTimeInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CurrentExps_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CurrentExps = { "CurrentExps", nullptr, (EPropertyFlags)0x0040000001000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, CurrentExps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CurrentExps_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CurrentExps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToNextLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToNextLevel = { "ExpToNextLevel", nullptr, (EPropertyFlags)0x0040000001000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, ExpToNextLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToNextLevel_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToNextLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((UARSStatisticsComponent*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UARSStatisticsComponent), &Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenTimer = { "RegenTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, RegenTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenTimer_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted_SetBit(void* Obj)
	{
		((UARSStatisticsComponent*)Obj)->bIsRegenerationStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted = { "bIsRegenerationStarted", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UARSStatisticsComponent), &Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributeSet = { "AttributeSet", "OnRep_AttributeSet", (EPropertyFlags)0x0040000101000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, AttributeSet), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributeSet_MetaData) }; // 98634780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_Perks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_Perks = { "Perks", nullptr, (EPropertyFlags)0x0040000001000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, Perks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_Perks_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_Perks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_baseAttributeSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_baseAttributeSet = { "baseAttributeSet", nullptr, (EPropertyFlags)0x0040000001000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, baseAttributeSet), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_baseAttributeSet_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_baseAttributeSet_MetaData) }; // 98634780
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers_Inner = { "activeModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(0, nullptr) }; // 1351211516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers = { "activeModifiers", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, activeModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers_MetaData) }; // 1351211516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCharacterLevelUp_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCharacterLevelUp = { "OnCharacterLevelUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, OnCharacterLevelUp), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCharacterLevelUp_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCharacterLevelUp_MetaData) }; // 2826497530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnAttributeSetModified_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnAttributeSetModified = { "OnAttributeSetModified", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, OnAttributeSetModified), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnAttributeSetModified_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnAttributeSetModified_MetaData) }; // 2149211512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCurrentExpValueChanged_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCurrentExpValueChanged = { "OnCurrentExpValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, OnCurrentExpValueChanged), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCurrentExpValueChanged_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCurrentExpValueChanged_MetaData) }; // 1863407928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisiticReachesZero_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisiticReachesZero = { "OnStatisiticReachesZero", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, OnStatisiticReachesZero), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisiticReachesZero_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisiticReachesZero_MetaData) }; // 1704792194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisticChanged_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSStatisticsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisticChanged = { "OnStatisticChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSStatisticsComponent, OnStatisticChanged), Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisticChanged_MetaData), Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisticChanged_MetaData) }; // 618034643
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSStatisticsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bAutoInitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatsLoadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_DefaultAttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_LevelingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributesByLevelConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CharacterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpForNextLevelCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_PerksObtainedOnLevelUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToGiveOnDeathByCurrentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_StatisticConsumptionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bCanRegenerateStatistics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenerationTimeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_CurrentExps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_ExpToNextLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_RegenTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_bIsRegenerationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_Perks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_baseAttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_activeModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCharacterLevelUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnAttributeSetModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnCurrentExpValueChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisiticReachesZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSStatisticsComponent_Statics::NewProp_OnStatisticChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSStatisticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSStatisticsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSStatisticsComponent_Statics::ClassParams = {
		&UARSStatisticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSStatisticsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UARSStatisticsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSStatisticsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UARSStatisticsComponent()
	{
		if (!Z_Registration_Info_UClass_UARSStatisticsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSStatisticsComponent.OuterSingleton, Z_Construct_UClass_UARSStatisticsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSStatisticsComponent.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<UARSStatisticsComponent>()
	{
		return UARSStatisticsComponent::StaticClass();
	}

	void UARSStatisticsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentExps(TEXT("CurrentExps"));
		static const FName Name_ExpToNextLevel(TEXT("ExpToNextLevel"));
		static const FName Name_AttributeSet(TEXT("AttributeSet"));
		static const FName Name_Perks(TEXT("Perks"));
		static const FName Name_baseAttributeSet(TEXT("baseAttributeSet"));

		const bool bIsValid = true
			&& Name_CurrentExps == ClassReps[(int32)ENetFields_Private::CurrentExps].Property->GetFName()
			&& Name_ExpToNextLevel == ClassReps[(int32)ENetFields_Private::ExpToNextLevel].Property->GetFName()
			&& Name_AttributeSet == ClassReps[(int32)ENetFields_Private::AttributeSet].Property->GetFName()
			&& Name_Perks == ClassReps[(int32)ENetFields_Private::Perks].Property->GetFName()
			&& Name_baseAttributeSet == ClassReps[(int32)ENetFields_Private::baseAttributeSet].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARSStatisticsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSStatisticsComponent);
	UARSStatisticsComponent::~UARSStatisticsComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSStatisticsComponent, UARSStatisticsComponent::StaticClass, TEXT("UARSStatisticsComponent"), &Z_Registration_Info_UClass_UARSStatisticsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSStatisticsComponent), 45012383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_568988863(TEXT("/Script/AdvancedRPGSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

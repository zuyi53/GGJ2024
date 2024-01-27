// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFBlockComponent.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFBlockComponent() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFBlockComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFBlockComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EActionDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFBlockComponent::execSetCounterableDamages)
	{
		P_GET_TARRAY(TSubclassOf<UDamageType> ,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCounterableDamages(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execGetCounterableDamages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UDamageType> >*)Z_Param__Result=P_THIS->GetCounterableDamages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execSetDamagedStatisticMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamagedStatisticMultiplier(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execGetDamagedStatisticMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDamagedStatisticMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execSetBlockableDamages)
	{
		P_GET_TARRAY(TSubclassOf<UDamageType> ,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockableDamages(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execGetBlockableDamages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UDamageType> >*)Z_Param__Result=P_THIS->GetBlockableDamages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execSetBlockDirection)
	{
		P_GET_ENUM(EActionDirection,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockDirection(EActionDirection(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execGetBlockDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EActionDirection*)Z_Param__Result=P_THIS->GetBlockDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execSetDefendingModifier)
	{
		P_GET_STRUCT_REF(FAttributesSetModifier,Z_Param_Out_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefendingModifier(Z_Param_Out_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBlockComponent::execGetDefendingModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributesSetModifier*)Z_Param__Result=P_THIS->GetDefendingModifier();
		P_NATIVE_END;
	}
	void UACFBlockComponent::StaticRegisterNativesUACFBlockComponent()
	{
		UClass* Class = UACFBlockComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlockableDamages", &UACFBlockComponent::execGetBlockableDamages },
			{ "GetBlockDirection", &UACFBlockComponent::execGetBlockDirection },
			{ "GetCounterableDamages", &UACFBlockComponent::execGetCounterableDamages },
			{ "GetDamagedStatisticMultiplier", &UACFBlockComponent::execGetDamagedStatisticMultiplier },
			{ "GetDefendingModifier", &UACFBlockComponent::execGetDefendingModifier },
			{ "SetBlockableDamages", &UACFBlockComponent::execSetBlockableDamages },
			{ "SetBlockDirection", &UACFBlockComponent::execSetBlockDirection },
			{ "SetCounterableDamages", &UACFBlockComponent::execSetCounterableDamages },
			{ "SetDamagedStatisticMultiplier", &UACFBlockComponent::execSetDamagedStatisticMultiplier },
			{ "SetDefendingModifier", &UACFBlockComponent::execSetDefendingModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics
	{
		struct ACFBlockComponent_eventGetBlockableDamages_Parms
		{
			TArray<TSubclassOf<UDamageType> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventGetBlockableDamages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "GetBlockableDamages", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::ACFBlockComponent_eventGetBlockableDamages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::ACFBlockComponent_eventGetBlockableDamages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics
	{
		struct ACFBlockComponent_eventGetBlockDirection_Parms
		{
			EActionDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventGetBlockDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCombatFramework_EActionDirection, METADATA_PARAMS(0, nullptr) }; // 320668792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "GetBlockDirection", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::ACFBlockComponent_eventGetBlockDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::ACFBlockComponent_eventGetBlockDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics
	{
		struct ACFBlockComponent_eventGetCounterableDamages_Parms
		{
			TArray<TSubclassOf<UDamageType> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventGetCounterableDamages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "GetCounterableDamages", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::ACFBlockComponent_eventGetCounterableDamages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::ACFBlockComponent_eventGetCounterableDamages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics
	{
		struct ACFBlockComponent_eventGetDamagedStatisticMultiplier_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventGetDamagedStatisticMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "GetDamagedStatisticMultiplier", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::ACFBlockComponent_eventGetDamagedStatisticMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::ACFBlockComponent_eventGetDamagedStatisticMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics
	{
		struct ACFBlockComponent_eventGetDefendingModifier_Parms
		{
			FAttributesSetModifier ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventGetDefendingModifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(0, nullptr) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "GetDefendingModifier", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::ACFBlockComponent_eventGetDefendingModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::ACFBlockComponent_eventGetDefendingModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics
	{
		struct ACFBlockComponent_eventSetBlockableDamages_Parms
		{
			TArray<TSubclassOf<UDamageType> > val;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_val_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::NewProp_val_Inner = { "val", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventSetBlockableDamages_Parms, val), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::NewProp_val_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "SetBlockableDamages", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::ACFBlockComponent_eventSetBlockableDamages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::ACFBlockComponent_eventSetBlockableDamages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics
	{
		struct ACFBlockComponent_eventSetBlockDirection_Parms
		{
			EActionDirection val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventSetBlockDirection_Parms, val), Z_Construct_UEnum_AscentCombatFramework_EActionDirection, METADATA_PARAMS(0, nullptr) }; // 320668792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::NewProp_val_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "SetBlockDirection", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::ACFBlockComponent_eventSetBlockDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::ACFBlockComponent_eventSetBlockDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics
	{
		struct ACFBlockComponent_eventSetCounterableDamages_Parms
		{
			TArray<TSubclassOf<UDamageType> > val;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_val_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::NewProp_val_Inner = { "val", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventSetCounterableDamages_Parms, val), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::NewProp_val_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "SetCounterableDamages", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::ACFBlockComponent_eventSetCounterableDamages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::ACFBlockComponent_eventSetCounterableDamages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics
	{
		struct ACFBlockComponent_eventSetDamagedStatisticMultiplier_Parms
		{
			float val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventSetDamagedStatisticMultiplier_Parms, val), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "SetDamagedStatisticMultiplier", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::ACFBlockComponent_eventSetDamagedStatisticMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::ACFBlockComponent_eventSetDamagedStatisticMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics
	{
		struct ACFBlockComponent_eventSetDefendingModifier_Parms
		{
			FAttributesSetModifier val;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::NewProp_val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBlockComponent_eventSetDefendingModifier_Parms, val), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::NewProp_val_MetaData), Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::NewProp_val_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBlockComponent, nullptr, "SetDefendingModifier", nullptr, nullptr, Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::ACFBlockComponent_eventSetDefendingModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::ACFBlockComponent_eventSetDefendingModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFBlockComponent);
	UClass* Z_Construct_UClass_UACFBlockComponent_NoRegister()
	{
		return UACFBlockComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFBlockComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefendingModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefendingModifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockDirection;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlockableDamages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockableDamages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockableDamages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedStatisticMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagedStatisticMultiplier;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CounterableDamages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CounterableDamages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CounterableDamages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFBlockComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFBlockComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFBlockComponent_GetBlockableDamages, "GetBlockableDamages" }, // 3983698286
		{ &Z_Construct_UFunction_UACFBlockComponent_GetBlockDirection, "GetBlockDirection" }, // 2886924881
		{ &Z_Construct_UFunction_UACFBlockComponent_GetCounterableDamages, "GetCounterableDamages" }, // 3810285685
		{ &Z_Construct_UFunction_UACFBlockComponent_GetDamagedStatisticMultiplier, "GetDamagedStatisticMultiplier" }, // 168872956
		{ &Z_Construct_UFunction_UACFBlockComponent_GetDefendingModifier, "GetDefendingModifier" }, // 1477828622
		{ &Z_Construct_UFunction_UACFBlockComponent_SetBlockableDamages, "SetBlockableDamages" }, // 1525218918
		{ &Z_Construct_UFunction_UACFBlockComponent_SetBlockDirection, "SetBlockDirection" }, // 2595694639
		{ &Z_Construct_UFunction_UACFBlockComponent_SetCounterableDamages, "SetCounterableDamages" }, // 1006489773
		{ &Z_Construct_UFunction_UACFBlockComponent_SetDamagedStatisticMultiplier, "SetDamagedStatisticMultiplier" }, // 3153267664
		{ &Z_Construct_UFunction_UACFBlockComponent_SetDefendingModifier, "SetDefendingModifier" }, // 3978955954
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBlockComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFBlockComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DefendingModifier_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Modifier applied while defending*/" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
		{ "ToolTip", "Modifier applied while defending" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DefendingModifier = { "DefendingModifier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBlockComponent, DefendingModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DefendingModifier_MetaData), Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DefendingModifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Directions in which incoming hits are blocked*/" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
		{ "ToolTip", "Directions in which incoming hits are blocked" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection = { "BlockDirection", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBlockComponent, BlockDirection), Z_Construct_UEnum_AscentCombatFramework_EActionDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection_MetaData), Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection_MetaData) }; // 320668792
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages_Inner = { "BlockableDamages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Types of damages that can be blocked*/" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
		{ "ToolTip", "Types of damages that can be blocked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages = { "BlockableDamages", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBlockComponent, BlockableDamages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages_MetaData), Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DamagedStatisticMultiplier_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Multiplier for the damaged applied to the DamagedStatistic at every damage*/" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
		{ "ToolTip", "Multiplier for the damaged applied to the DamagedStatistic at every damage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DamagedStatisticMultiplier = { "DamagedStatisticMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBlockComponent, DamagedStatisticMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DamagedStatisticMultiplier_MetaData), Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DamagedStatisticMultiplier_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages_Inner = { "CounterableDamages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Types of damages that can be countered*/" },
		{ "ModuleRelativePath", "Public/Components/ACFBlockComponent.h" },
		{ "ToolTip", "Types of damages that can be countered" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages = { "CounterableDamages", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBlockComponent, CounterableDamages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages_MetaData), Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFBlockComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DefendingModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_BlockableDamages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_DamagedStatisticMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBlockComponent_Statics::NewProp_CounterableDamages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFBlockComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFBlockComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFBlockComponent_Statics::ClassParams = {
		&UACFBlockComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFBlockComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFBlockComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBlockComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFBlockComponent()
	{
		if (!Z_Registration_Info_UClass_UACFBlockComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFBlockComponent.OuterSingleton, Z_Construct_UClass_UACFBlockComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFBlockComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFBlockComponent>()
	{
		return UACFBlockComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFBlockComponent);
	UACFBlockComponent::~UACFBlockComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFBlockComponent, UACFBlockComponent::StaticClass, TEXT("UACFBlockComponent"), &Z_Registration_Info_UClass_UACFBlockComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFBlockComponent), 2150678842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_3528746275(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

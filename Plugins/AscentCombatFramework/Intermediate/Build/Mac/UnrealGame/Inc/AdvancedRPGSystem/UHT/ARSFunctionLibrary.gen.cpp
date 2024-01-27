// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedRPGSystem/Public/ARSFunctionLibrary.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSFunctionLibrary() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSFunctionLibrary();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSFunctionLibrary_NoRegister();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSGenerationRulesDataAsset_NoRegister();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGenerationRule();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatistic();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem();
// End Cross Module References
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetNewCurrentValueForNewMaxValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_oldCurrentValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_oldMaxValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newMaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UARSFunctionLibrary::GetNewCurrentValueForNewMaxValue(Z_Param_oldCurrentValue,Z_Param_oldMaxValue,Z_Param_newMaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetMaxLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UARSFunctionLibrary::GetMaxLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execIsValidParameterTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARSFunctionLibrary::IsValidParameterTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execIsValidAttributeTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARSFunctionLibrary::IsValidAttributeTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execIsValidStatisticTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARSFunctionLibrary::IsValidStatisticTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execTryGetStatisticFromArray)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_statTag);
		P_GET_TARRAY_REF(FStatistic,Z_Param_Out_statsArray);
		P_GET_STRUCT_REF(FStatistic,Z_Param_Out_outStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARSFunctionLibrary::TryGetStatisticFromArray(Z_Param_statTag,Z_Param_Out_statsArray,Z_Param_Out_outStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execTryGetAttributeFromArray)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_attributeTag);
		P_GET_TARRAY_REF(FAttribute,Z_Param_Out_attributesArray);
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_outAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARSFunctionLibrary::TryGetAttributeFromArray(Z_Param_attributeTag,Z_Param_Out_attributesArray,Z_Param_Out_outAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetHealthTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UARSFunctionLibrary::GetHealthTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetStatisticsTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UARSFunctionLibrary::GetStatisticsTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetParametersTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UARSFunctionLibrary::GetParametersTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetAttributesTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UARSFunctionLibrary::GetAttributesTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execGetGenerationRulesData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSGenerationRulesDataAsset**)Z_Param__Result=UARSFunctionLibrary::GetGenerationRulesData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSFunctionLibrary::execTryGetGenerationRuleByPrimaryAttributeType)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PrimaryAttributeTag);
		P_GET_STRUCT_REF(FGenerationRule,Z_Param_Out_outRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARSFunctionLibrary::TryGetGenerationRuleByPrimaryAttributeType(Z_Param_Out_PrimaryAttributeTag,Z_Param_Out_outRule);
		P_NATIVE_END;
	}
	void UARSFunctionLibrary::StaticRegisterNativesUARSFunctionLibrary()
	{
		UClass* Class = UARSFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributesTagRoot", &UARSFunctionLibrary::execGetAttributesTagRoot },
			{ "GetGenerationRulesData", &UARSFunctionLibrary::execGetGenerationRulesData },
			{ "GetHealthTag", &UARSFunctionLibrary::execGetHealthTag },
			{ "GetMaxLevel", &UARSFunctionLibrary::execGetMaxLevel },
			{ "GetNewCurrentValueForNewMaxValue", &UARSFunctionLibrary::execGetNewCurrentValueForNewMaxValue },
			{ "GetParametersTagRoot", &UARSFunctionLibrary::execGetParametersTagRoot },
			{ "GetStatisticsTagRoot", &UARSFunctionLibrary::execGetStatisticsTagRoot },
			{ "IsValidAttributeTag", &UARSFunctionLibrary::execIsValidAttributeTag },
			{ "IsValidParameterTag", &UARSFunctionLibrary::execIsValidParameterTag },
			{ "IsValidStatisticTag", &UARSFunctionLibrary::execIsValidStatisticTag },
			{ "TryGetAttributeFromArray", &UARSFunctionLibrary::execTryGetAttributeFromArray },
			{ "TryGetGenerationRuleByPrimaryAttributeType", &UARSFunctionLibrary::execTryGetGenerationRuleByPrimaryAttributeType },
			{ "TryGetStatisticFromArray", &UARSFunctionLibrary::execTryGetStatisticFromArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics
	{
		struct ARSFunctionLibrary_eventGetAttributesTagRoot_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetAttributesTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Gets the root GameplayTag for Attributes, the one specified in RPGSettings*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Gets the root GameplayTag for Attributes, the one specified in RPGSettings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetAttributesTagRoot", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::ARSFunctionLibrary_eventGetAttributesTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::ARSFunctionLibrary_eventGetAttributesTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics
	{
		struct ARSFunctionLibrary_eventGetGenerationRulesData_Parms
		{
			UARSGenerationRulesDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetGenerationRulesData_Parms, ReturnValue), Z_Construct_UClass_UARSGenerationRulesDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Gets the data assets with all the generation rules*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Gets the data assets with all the generation rules" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetGenerationRulesData", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::ARSFunctionLibrary_eventGetGenerationRulesData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::ARSFunctionLibrary_eventGetGenerationRulesData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics
	{
		struct ARSFunctionLibrary_eventGetHealthTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetHealthTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "Comment", "/*Gets the default GameplayTag for Health Statistic*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Gets the default GameplayTag for Health Statistic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetHealthTag", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::ARSFunctionLibrary_eventGetHealthTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::ARSFunctionLibrary_eventGetHealthTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics
	{
		struct ARSFunctionLibrary_eventGetMaxLevel_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetMaxLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns the max available level as  specified in the RPGSettings*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Returns the max available level as  specified in the RPGSettings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetMaxLevel", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::ARSFunctionLibrary_eventGetMaxLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::ARSFunctionLibrary_eventGetMaxLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics
	{
		struct ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms
		{
			float oldCurrentValue;
			float oldMaxValue;
			float newMaxValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_oldCurrentValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_oldMaxValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newMaxValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_oldCurrentValue = { "oldCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms, oldCurrentValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_oldMaxValue = { "oldMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms, oldMaxValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_newMaxValue = { "newMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms, newMaxValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_oldCurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_oldMaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_newMaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Normalize the current value of a statistic when the max value changes, so that the actual\n    statistic percentage remains the same*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Normalize the current value of a statistic when the max value changes, so that the actual\n    statistic percentage remains the same" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetNewCurrentValueForNewMaxValue", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::ARSFunctionLibrary_eventGetNewCurrentValueForNewMaxValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics
	{
		struct ARSFunctionLibrary_eventGetParametersTagRoot_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetParametersTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Gets the root GameplayTag for Parameters, the one specified in RPGSettings*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Gets the root GameplayTag for Parameters, the one specified in RPGSettings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetParametersTagRoot", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::ARSFunctionLibrary_eventGetParametersTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::ARSFunctionLibrary_eventGetParametersTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics
	{
		struct ARSFunctionLibrary_eventGetStatisticsTagRoot_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventGetStatisticsTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Gets the root GameplayTag for Statistics, the one specified in RPGSettings*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Gets the root GameplayTag for Statistics, the one specified in RPGSettings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "GetStatisticsTagRoot", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::ARSFunctionLibrary_eventGetStatisticsTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::ARSFunctionLibrary_eventGetStatisticsTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics
	{
		struct ARSFunctionLibrary_eventIsValidAttributeTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventIsValidAttributeTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSFunctionLibrary_eventIsValidAttributeTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSFunctionLibrary_eventIsValidAttributeTag_Parms), &Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns true if TagToCheck is a ChildTag of AttributeTag Root*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Returns true if TagToCheck is a ChildTag of AttributeTag Root" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "IsValidAttributeTag", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::ARSFunctionLibrary_eventIsValidAttributeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::ARSFunctionLibrary_eventIsValidAttributeTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics
	{
		struct ARSFunctionLibrary_eventIsValidParameterTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventIsValidParameterTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSFunctionLibrary_eventIsValidParameterTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSFunctionLibrary_eventIsValidParameterTag_Parms), &Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns true if TagToCheck is a ChildTag of ParameterTag Root*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Returns true if TagToCheck is a ChildTag of ParameterTag Root" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "IsValidParameterTag", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::ARSFunctionLibrary_eventIsValidParameterTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::ARSFunctionLibrary_eventIsValidParameterTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics
	{
		struct ARSFunctionLibrary_eventIsValidStatisticTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventIsValidStatisticTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSFunctionLibrary_eventIsValidStatisticTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSFunctionLibrary_eventIsValidStatisticTag_Parms), &Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Returns true if TagToCheck is a ChildTag of StatisticTag Root*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Returns true if TagToCheck is a ChildTag of StatisticTag Root" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "IsValidStatisticTag", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::ARSFunctionLibrary_eventIsValidStatisticTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::ARSFunctionLibrary_eventIsValidStatisticTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics
	{
		struct ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms
		{
			FGameplayTag attributeTag;
			TArray<FAttribute> attributesArray;
			FAttribute outAttribute;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_attributeTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_attributesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attributesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_attributesArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAttribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributeTag = { "attributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms, attributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray_Inner = { "attributesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray = { "attributesArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms, attributesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray_MetaData), Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray_MetaData) }; // 262406853
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_outAttribute = { "outAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms, outAttribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
	void Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms), &Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_attributesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_outAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Tries to find an attribute with the provided tag in the given array*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Tries to find an attribute with the provided tag in the given array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "TryGetAttributeFromArray", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::ARSFunctionLibrary_eventTryGetAttributeFromArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics
	{
		struct ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms
		{
			FGameplayTag PrimaryAttributeTag;
			FGenerationRule outRule;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAttributeTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outRule;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_PrimaryAttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_PrimaryAttributeTag = { "PrimaryAttributeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms, PrimaryAttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_PrimaryAttributeTag_MetaData), Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_PrimaryAttributeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_outRule = { "outRule", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms, outRule), Z_Construct_UScriptStruct_FGenerationRule, METADATA_PARAMS(0, nullptr) }; // 3582667755
	void Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms), &Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_PrimaryAttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_outRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Gets all the generations rules related to this Attributes, if PrimaryattributeTag is\n    actually a Valid PrimaryAttribute*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Gets all the generations rules related to this Attributes, if PrimaryattributeTag is\n    actually a Valid PrimaryAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "TryGetGenerationRuleByPrimaryAttributeType", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::ARSFunctionLibrary_eventTryGetGenerationRuleByPrimaryAttributeType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics
	{
		struct ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms
		{
			FGameplayTag statTag;
			TArray<FStatistic> statsArray;
			FStatistic outStat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_statTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_statsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_statsArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outStat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statTag = { "statTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms, statTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray_Inner = { "statsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatistic, METADATA_PARAMS(0, nullptr) }; // 828729460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray = { "statsArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms, statsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray_MetaData), Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray_MetaData) }; // 828729460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_outStat = { "outStat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms, outStat), Z_Construct_UScriptStruct_FStatistic, METADATA_PARAMS(0, nullptr) }; // 828729460
	void Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms), &Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_statsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_outStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Tries to find a Statistic with the provided tag in the given array*/" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
		{ "ToolTip", "Tries to find a Statistic with the provided tag in the given array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSFunctionLibrary, nullptr, "TryGetStatisticFromArray", nullptr, nullptr, Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::ARSFunctionLibrary_eventTryGetStatisticFromArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSFunctionLibrary);
	UClass* Z_Construct_UClass_UARSFunctionLibrary_NoRegister()
	{
		return UARSFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UARSFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetAttributesTagRoot, "GetAttributesTagRoot" }, // 1109046929
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetGenerationRulesData, "GetGenerationRulesData" }, // 1707943291
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetHealthTag, "GetHealthTag" }, // 1832035961
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetMaxLevel, "GetMaxLevel" }, // 1007287341
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetNewCurrentValueForNewMaxValue, "GetNewCurrentValueForNewMaxValue" }, // 154620043
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetParametersTagRoot, "GetParametersTagRoot" }, // 2212077185
		{ &Z_Construct_UFunction_UARSFunctionLibrary_GetStatisticsTagRoot, "GetStatisticsTagRoot" }, // 256185631
		{ &Z_Construct_UFunction_UARSFunctionLibrary_IsValidAttributeTag, "IsValidAttributeTag" }, // 1190513530
		{ &Z_Construct_UFunction_UARSFunctionLibrary_IsValidParameterTag, "IsValidParameterTag" }, // 3309552379
		{ &Z_Construct_UFunction_UARSFunctionLibrary_IsValidStatisticTag, "IsValidStatisticTag" }, // 2504034199
		{ &Z_Construct_UFunction_UARSFunctionLibrary_TryGetAttributeFromArray, "TryGetAttributeFromArray" }, // 2105595783
		{ &Z_Construct_UFunction_UARSFunctionLibrary_TryGetGenerationRuleByPrimaryAttributeType, "TryGetGenerationRuleByPrimaryAttributeType" }, // 1379299497
		{ &Z_Construct_UFunction_UARSFunctionLibrary_TryGetStatisticFromArray, "TryGetStatisticFromArray" }, // 3283688571
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ARSFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ARSFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSFunctionLibrary_Statics::ClassParams = {
		&UARSFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UARSFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UARSFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UARSFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSFunctionLibrary.OuterSingleton, Z_Construct_UClass_UARSFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSFunctionLibrary.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<UARSFunctionLibrary>()
	{
		return UARSFunctionLibrary::StaticClass();
	}
	UARSFunctionLibrary::UARSFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSFunctionLibrary);
	UARSFunctionLibrary::~UARSFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSFunctionLibrary, UARSFunctionLibrary::StaticClass, TEXT("UARSFunctionLibrary"), &Z_Registration_Info_UClass_UARSFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSFunctionLibrary), 2143919466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_2857782283(TEXT("/Script/AdvancedRPGSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

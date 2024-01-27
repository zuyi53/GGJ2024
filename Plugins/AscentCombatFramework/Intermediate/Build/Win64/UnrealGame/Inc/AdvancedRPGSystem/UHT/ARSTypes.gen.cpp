// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSTypes() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSTypes();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSTypes_NoRegister();
	ADVANCEDRPGSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType();
	ADVANCEDRPGSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EModifierType();
	ADVANCEDRPGSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType();
	ADVANCEDRPGSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeInfluence();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesByLevel();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSet();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGenerationRule();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatInfluence();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatistic();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticsModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedAttributeSetModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifierType;
	static UEnum* EModifierType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModifierType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModifierType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedRPGSystem_EModifierType, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("EModifierType"));
		}
		return Z_Registration_Info_UEnum_EModifierType.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UEnum* StaticEnum<EModifierType>()
	{
		return EModifierType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::Enumerators[] = {
		{ "EModifierType::EAdditive", (int64)EModifierType::EAdditive },
		{ "EModifierType::EPercentage", (int64)EModifierType::EPercentage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "EAdditive.Comment", "/**\n *\n */" },
		{ "EAdditive.DisplayName", "Additive" },
		{ "EAdditive.Name", "EModifierType::EAdditive" },
		{ "EPercentage.Comment", "/**\n *\n */" },
		{ "EPercentage.DisplayName", "Percentage" },
		{ "EPercentage.Name", "EModifierType::EPercentage" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		"EModifierType",
		"EModifierType",
		Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EModifierType()
	{
		if (!Z_Registration_Info_UEnum_EModifierType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifierType.InnerSingleton, Z_Construct_UEnum_AdvancedRPGSystem_EModifierType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModifierType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatsLoadMethod;
	static UEnum* EStatsLoadMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStatsLoadMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStatsLoadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("EStatsLoadMethod"));
		}
		return Z_Registration_Info_UEnum_EStatsLoadMethod.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UEnum* StaticEnum<EStatsLoadMethod>()
	{
		return EStatsLoadMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::Enumerators[] = {
		{ "EStatsLoadMethod::EUseDefaultsWithoutGeneration", (int64)EStatsLoadMethod::EUseDefaultsWithoutGeneration },
		{ "EStatsLoadMethod::EGenerateFromDefaultsPrimary", (int64)EStatsLoadMethod::EGenerateFromDefaultsPrimary },
		{ "EStatsLoadMethod::ELoadByLevel", (int64)EStatsLoadMethod::ELoadByLevel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGenerateFromDefaultsPrimary.DisplayName", "Generate From Default Attributes" },
		{ "EGenerateFromDefaultsPrimary.Name", "EStatsLoadMethod::EGenerateFromDefaultsPrimary" },
		{ "ELoadByLevel.DisplayName", "Load By Actual Level From Curves" },
		{ "ELoadByLevel.Name", "EStatsLoadMethod::ELoadByLevel" },
		{ "EUseDefaultsWithoutGeneration.DisplayName", "Use Defaults Without Generation" },
		{ "EUseDefaultsWithoutGeneration.Name", "EStatsLoadMethod::EUseDefaultsWithoutGeneration" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		"EStatsLoadMethod",
		"EStatsLoadMethod",
		Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod()
	{
		if (!Z_Registration_Info_UEnum_EStatsLoadMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatsLoadMethod.InnerSingleton, Z_Construct_UEnum_AdvancedRPGSystem_EStatsLoadMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStatsLoadMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelingType;
	static UEnum* ELevelingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("ELevelingType"));
		}
		return Z_Registration_Info_UEnum_ELevelingType.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UEnum* StaticEnum<ELevelingType>()
	{
		return ELevelingType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::Enumerators[] = {
		{ "ELevelingType::ECantLevelUp", (int64)ELevelingType::ECantLevelUp },
		{ "ELevelingType::EGenerateNewStatsFromCurves", (int64)ELevelingType::EGenerateNewStatsFromCurves },
		{ "ELevelingType::EAssignPerksManually", (int64)ELevelingType::EAssignPerksManually },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAssignPerksManually.DisplayName", "Assign Perks Manually" },
		{ "EAssignPerksManually.Name", "ELevelingType::EAssignPerksManually" },
		{ "ECantLevelUp.DisplayName", "Do not use Leveling System" },
		{ "ECantLevelUp.Name", "ELevelingType::ECantLevelUp" },
		{ "EGenerateNewStatsFromCurves.DisplayName", "Generate Stats From Curves" },
		{ "EGenerateNewStatsFromCurves.Name", "ELevelingType::EGenerateNewStatsFromCurves" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		"ELevelingType",
		"ELevelingType",
		Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType()
	{
		if (!Z_Registration_Info_UEnum_ELevelingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelingType.InnerSingleton, Z_Construct_UEnum_AdvancedRPGSystem_ELevelingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatisticsType;
	static UEnum* EStatisticsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStatisticsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStatisticsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("EStatisticsType"));
		}
		return Z_Registration_Info_UEnum_EStatisticsType.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UEnum* StaticEnum<EStatisticsType>()
	{
		return EStatisticsType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::Enumerators[] = {
		{ "EStatisticsType::EStatistic", (int64)EStatisticsType::EStatistic },
		{ "EStatisticsType::EPrimaryAttribute", (int64)EStatisticsType::EPrimaryAttribute },
		{ "EStatisticsType::ESecondaryAttribute", (int64)EStatisticsType::ESecondaryAttribute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPrimaryAttribute.DisplayName", "Primary Attributes" },
		{ "EPrimaryAttribute.Name", "EStatisticsType::EPrimaryAttribute" },
		{ "ESecondaryAttribute.DisplayName", "Attributes" },
		{ "ESecondaryAttribute.Name", "EStatisticsType::ESecondaryAttribute" },
		{ "EStatistic.DisplayName", "Statistic" },
		{ "EStatistic.Name", "EStatisticsType::EStatistic" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		"EStatisticsType",
		"EStatisticsType",
		Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType()
	{
		if (!Z_Registration_Info_UEnum_EStatisticsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatisticsType.InnerSingleton, Z_Construct_UEnum_AdvancedRPGSystem_EStatisticsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStatisticsType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseModifier;
class UScriptStruct* FBaseModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseModifier, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("BaseModifier"));
	}
	return Z_Registration_Info_UScriptStruct_BaseModifier.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FBaseModifier>()
{
	return FBaseModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_AttributeType_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseModifier, AttributeType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_AttributeType_MetaData), Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_AttributeType_MetaData) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType = { "ModType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseModifier, ModType), Z_Construct_UEnum_AdvancedRPGSystem_EModifierType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType_MetaData), Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType_MetaData) }; // 3062616909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_AttributeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseModifier_Statics::NewProp_ModType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"BaseModifier",
		Z_Construct_UScriptStruct_FBaseModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseModifier_Statics::PropPointers),
		sizeof(FBaseModifier),
		alignof(FBaseModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseModifier.InnerSingleton, Z_Construct_UScriptStruct_FBaseModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseModifier.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAttributeModifier>() == std::is_polymorphic<FBaseModifier>(), "USTRUCT FAttributeModifier cannot be polymorphic unless super FBaseModifier is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeModifier;
class UScriptStruct* FAttributeModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeModifier, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("AttributeModifier"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FAttributeModifier>()
{
	return FAttributeModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeModifier, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		Z_Construct_UScriptStruct_FBaseModifier,
		&NewStructOps,
		"AttributeModifier",
		Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers),
		sizeof(FAttributeModifier),
		alignof(FAttributeModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton, Z_Construct_UScriptStruct_FAttributeModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStatisticsModifier>() == std::is_polymorphic<FBaseModifier>(), "USTRUCT FStatisticsModifier cannot be polymorphic unless super FBaseModifier is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatisticsModifier;
class UScriptStruct* FStatisticsModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatisticsModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatisticsModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatisticsModifier, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("StatisticsModifier"));
	}
	return Z_Registration_Info_UScriptStruct_StatisticsModifier.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FStatisticsModifier>()
{
	return FStatisticsModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStatisticsModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegenValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatisticsModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatisticsModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatisticsModifier, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_RegenValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_RegenValue = { "RegenValue", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatisticsModifier, RegenValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_RegenValue_MetaData), Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_RegenValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatisticsModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewProp_RegenValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatisticsModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		Z_Construct_UScriptStruct_FBaseModifier,
		&NewStructOps,
		"StatisticsModifier",
		Z_Construct_UScriptStruct_FStatisticsModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticsModifier_Statics::PropPointers),
		sizeof(FStatisticsModifier),
		alignof(FStatisticsModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticsModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatisticsModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticsModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStatisticsModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_StatisticsModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatisticsModifier.InnerSingleton, Z_Construct_UScriptStruct_FStatisticsModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StatisticsModifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Statistic;
class UScriptStruct* FStatistic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Statistic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Statistic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatistic, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("Statistic"));
	}
	return Z_Registration_Info_UScriptStruct_Statistic.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FStatistic>()
{
	return FStatistic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStatistic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasRegeneration_MetaData[];
#endif
		static void NewProp_HasRegeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasRegeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromZero_MetaData[];
#endif
		static void NewProp_bStartFromZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegenValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegenDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatistic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatistic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_StatType_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatistic, StatType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_StatType_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_StatType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "// maximum stat value\n" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "maximum stat value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatistic, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "ClampMin", "0" },
		{ "Comment", "// current stat value\n" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "current stat value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatistic, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_CurrentValue_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_CurrentValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Indicates if this stat can regenerate over time*/" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "Indicates if this stat can regenerate over time" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration_SetBit(void* Obj)
	{
		((FStatistic*)Obj)->HasRegeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration = { "HasRegeneration", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStatistic), &Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero_SetBit(void* Obj)
	{
		((FStatistic*)Obj)->bStartFromZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero = { "bStartFromZero", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStatistic), &Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "// value added to stat with every timer tick if HasRegeneration is enabled\n" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "value added to stat with every timer tick if HasRegeneration is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenValue = { "RegenValue", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatistic, RegenValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenValue_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenDelay_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "// time you have to wait after the statistic is modified to let regeneration start\n" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "time you have to wait after the statistic is modified to let regeneration start" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenDelay = { "RegenDelay", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatistic, RegenDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenDelay_MetaData), Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenDelay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_CurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_HasRegeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_bStartFromZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatistic_Statics::NewProp_RegenDelay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatistic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"Statistic",
		Z_Construct_UScriptStruct_FStatistic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::PropPointers),
		sizeof(FStatistic),
		alignof(FStatistic),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatistic_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatistic_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStatistic()
	{
		if (!Z_Registration_Info_UScriptStruct_Statistic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Statistic.InnerSingleton, Z_Construct_UScriptStruct_FStatistic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Statistic.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Attribute;
class UScriptStruct* FAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttribute, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("Attribute"));
	}
	return Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FAttribute>()
{
	return FAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_AttributeType_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttribute, AttributeType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_AttributeType_MetaData), Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_AttributeType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "// current stat value\n" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "current stat value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_AttributeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"Attribute",
		Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers),
		sizeof(FAttribute),
		alignof(FAttribute),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton, Z_Construct_UScriptStruct_FAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAttributesSet>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAttributesSet cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributesSet;
class UScriptStruct* FAttributesSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributesSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributesSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesSet, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("AttributesSet"));
	}
	return Z_Registration_Info_UScriptStruct_AttributesSet.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FAttributesSet>()
{
	return FAttributesSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributesSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Statistics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Statistics;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributesSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "ARS | Base Attributes" },
		{ "DisplayName", "PrimaryAttributes" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "TitleProperty", "AttributeType" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSet, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes_MetaData), Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes_MetaData) }; // 262406853
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatistic, METADATA_PARAMS(0, nullptr) }; // 828729460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics_MetaData[] = {
		{ "Category", "ARS | Derived Attributes" },
		{ "DisplayName", "Statistics" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "TitleProperty", "StatType" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSet, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics_MetaData), Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics_MetaData) }; // 828729460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "ARS | Derived Attributes" },
		{ "DisplayName", "Attributes" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "TitleProperty", "AttributeType" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSet, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters_MetaData) }; // 262406853
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributesSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Statistics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSet_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AttributesSet",
		Z_Construct_UScriptStruct_FAttributesSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSet_Statics::PropPointers),
		sizeof(FAttributesSet),
		alignof(FAttributesSet),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributesSet_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSet_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttributesSet()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributesSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributesSet.InnerSingleton, Z_Construct_UScriptStruct_FAttributesSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributesSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributesSetModifier;
class UScriptStruct* FAttributesSetModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributesSetModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributesSetModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesSetModifier, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("AttributesSetModifier"));
	}
	return Z_Registration_Info_UScriptStruct_AttributesSetModifier.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FAttributesSetModifier>()
{
	return FAttributesSetModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributesSetModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAttributesMod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributesMod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAttributesMod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatisticsMod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticsMod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatisticsMod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesMod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesMod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesMod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesSetModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSetModifier, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_Guid_MetaData), Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod_Inner = { "PrimaryAttributesMod", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeModifier, METADATA_PARAMS(0, nullptr) }; // 3288183399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod_MetaData[] = {
		{ "Category", "ARS | Base Attributes" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod = { "PrimaryAttributesMod", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSetModifier, PrimaryAttributesMod), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod_MetaData), Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod_MetaData) }; // 3288183399
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod_Inner = { "StatisticsMod", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticsModifier, METADATA_PARAMS(0, nullptr) }; // 2659369599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod_MetaData[] = {
		{ "Category", "ARS | Derived Attributes" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod = { "StatisticsMod", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSetModifier, StatisticsMod), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod_MetaData), Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod_MetaData) }; // 2659369599
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod_Inner = { "AttributesMod", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeModifier, METADATA_PARAMS(0, nullptr) }; // 3288183399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod_MetaData[] = {
		{ "Category", "ARS | Derived Attributes" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod = { "AttributesMod", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesSetModifier, AttributesMod), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod_MetaData), Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod_MetaData) }; // 3288183399
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_PrimaryAttributesMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_StatisticsMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewProp_AttributesMod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"AttributesSetModifier",
		Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::PropPointers),
		sizeof(FAttributesSetModifier),
		alignof(FAttributesSetModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributesSetModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributesSetModifier.InnerSingleton, Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributesSetModifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatisticValue;
class UScriptStruct* FStatisticValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatisticValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatisticValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatisticValue, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("StatisticValue"));
	}
	return Z_Registration_Info_UScriptStruct_StatisticValue.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FStatisticValue>()
{
	return FStatisticValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStatisticValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statistic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Statistic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatisticValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatisticValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatisticValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Statistic_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Statistic = { "Statistic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatisticValue, Statistic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Statistic_MetaData), Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Statistic_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatisticValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatisticValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Statistic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatisticValue_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatisticValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"StatisticValue",
		Z_Construct_UScriptStruct_FStatisticValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticValue_Statics::PropPointers),
		sizeof(FStatisticValue),
		alignof(FStatisticValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatisticValue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatisticValue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue()
	{
		if (!Z_Registration_Info_UScriptStruct_StatisticValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatisticValue.InnerSingleton, Z_Construct_UScriptStruct_FStatisticValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StatisticValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeInfluence;
class UScriptStruct* FAttributeInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeInfluence, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("AttributeInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeInfluence.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FAttributeInfluence>()
{
	return FAttributeInfluence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeInfluence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeInfluence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeInfluence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeInfluence, CurveValue), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_CurveValue_MetaData), Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_CurveValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_TargetParameter_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_TargetParameter = { "TargetParameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeInfluence, TargetParameter), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_TargetParameter_MetaData), Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_TargetParameter_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeInfluence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewProp_TargetParameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeInfluence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"AttributeInfluence",
		Z_Construct_UScriptStruct_FAttributeInfluence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeInfluence_Statics::PropPointers),
		sizeof(FAttributeInfluence),
		alignof(FAttributeInfluence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeInfluence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeInfluence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeInfluence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeInfluence()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeInfluence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeInfluence.InnerSingleton, Z_Construct_UScriptStruct_FAttributeInfluence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeInfluence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatInfluence;
class UScriptStruct* FStatInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatInfluence, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("StatInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_StatInfluence.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FStatInfluence>()
{
	return FStatInfluence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStatInfluence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveRegenValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveRegenValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveMaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveMaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInfluence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatInfluence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatInfluence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveRegenValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveRegenValue = { "CurveRegenValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatInfluence, CurveRegenValue), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveRegenValue_MetaData), Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveRegenValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveMaxValue_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveMaxValue = { "CurveMaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatInfluence, CurveMaxValue), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveMaxValue_MetaData), Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveMaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_TargetStat_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_TargetStat = { "TargetStat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatInfluence, TargetStat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_TargetStat_MetaData), Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_TargetStat_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatInfluence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveRegenValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_CurveMaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInfluence_Statics::NewProp_TargetStat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatInfluence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"StatInfluence",
		Z_Construct_UScriptStruct_FStatInfluence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfluence_Statics::PropPointers),
		sizeof(FStatInfluence),
		alignof(FStatInfluence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfluence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatInfluence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfluence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStatInfluence()
	{
		if (!Z_Registration_Info_UScriptStruct_StatInfluence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatInfluence.InnerSingleton, Z_Construct_UScriptStruct_FStatInfluence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StatInfluence.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGenerationRule>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGenerationRule cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerationRule;
class UScriptStruct* FGenerationRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerationRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerationRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerationRule, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("GenerationRule"));
	}
	return Z_Registration_Info_UScriptStruct_GenerationRule.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FGenerationRule>()
{
	return FGenerationRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerationRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributesTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAttributesTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InfluencedStatistics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluencedStatistics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InfluencedStatistics;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InfluencedParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluencedParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InfluencedParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerationRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerationRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerationRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_PrimaryAttributesTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_PrimaryAttributesTag = { "PrimaryAttributesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerationRule, PrimaryAttributesTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_PrimaryAttributesTag_MetaData), Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_PrimaryAttributesTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics_Inner = { "InfluencedStatistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatInfluence, METADATA_PARAMS(0, nullptr) }; // 4229763859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics = { "InfluencedStatistics", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerationRule, InfluencedStatistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics_MetaData), Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics_MetaData) }; // 4229763859
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters_Inner = { "InfluencedParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeInfluence, METADATA_PARAMS(0, nullptr) }; // 3918211753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters = { "InfluencedParameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerationRule, InfluencedParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters_MetaData), Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters_MetaData) }; // 3918211753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerationRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_PrimaryAttributesTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedStatistics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerationRule_Statics::NewProp_InfluencedParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerationRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GenerationRule",
		Z_Construct_UScriptStruct_FGenerationRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerationRule_Statics::PropPointers),
		sizeof(FGenerationRule),
		alignof(FGenerationRule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerationRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenerationRule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerationRule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGenerationRule()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerationRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerationRule.InnerSingleton, Z_Construct_UScriptStruct_FGenerationRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerationRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributesByLevel;
class UScriptStruct* FAttributesByLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributesByLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributesByLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesByLevel, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("AttributesByLevel"));
	}
	return Z_Registration_Info_UScriptStruct_AttributesByLevel.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FAttributesByLevel>()
{
	return FAttributesByLevel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributesByLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributesTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAttributesTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueByLevelCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueByLevelCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesByLevel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesByLevel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_PrimaryAttributesTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_PrimaryAttributesTag = { "PrimaryAttributesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesByLevel, PrimaryAttributesTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_PrimaryAttributesTag_MetaData), Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_PrimaryAttributesTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_ValueByLevelCurve_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*A curve that has on the X axis the actual level of the character and on the Y\n    axis the value of the related Primary Attribute*/" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
		{ "ToolTip", "A curve that has on the X axis the actual level of the character and on the Y\n    axis the value of the related Primary Attribute" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_ValueByLevelCurve = { "ValueByLevelCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributesByLevel, ValueByLevelCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_ValueByLevelCurve_MetaData), Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_ValueByLevelCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributesByLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_PrimaryAttributesTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewProp_ValueByLevelCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesByLevel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"AttributesByLevel",
		Z_Construct_UScriptStruct_FAttributesByLevel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesByLevel_Statics::PropPointers),
		sizeof(FAttributesByLevel),
		alignof(FAttributesByLevel),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesByLevel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributesByLevel_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesByLevel_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttributesByLevel()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributesByLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributesByLevel.InnerSingleton, Z_Construct_UScriptStruct_FAttributesByLevel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributesByLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier;
class UScriptStruct* FTimedAttributeSetModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedAttributeSetModifier, (UObject*)Z_Construct_UPackage__Script_AdvancedRPGSystem(), TEXT("TimedAttributeSetModifier"));
	}
	return Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier.OuterSingleton;
}
template<> ADVANCEDRPGSYSTEM_API UScriptStruct* StaticStruct<FTimedAttributeSetModifier>()
{
	return FTimedAttributeSetModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_modifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedAttributeSetModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_modifier_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_modifier = { "modifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedAttributeSetModifier, modifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_modifier_MetaData), Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_modifier_MetaData) }; // 1351211516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedAttributeSetModifier, duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_duration_MetaData), Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_duration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewProp_duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
		nullptr,
		&NewStructOps,
		"TimedAttributeSetModifier",
		Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::PropPointers),
		sizeof(FTimedAttributeSetModifier),
		alignof(FTimedAttributeSetModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTimedAttributeSetModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier.InnerSingleton, Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier.InnerSingleton;
	}
	void UARSTypes::StaticRegisterNativesUARSTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSTypes);
	UClass* Z_Construct_UClass_UARSTypes_NoRegister()
	{
		return UARSTypes::StaticClass();
	}
	struct Z_Construct_UClass_UARSTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARSTypes.h" },
		{ "ModuleRelativePath", "Public/ARSTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSTypes_Statics::ClassParams = {
		&UARSTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UARSTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UARSTypes()
	{
		if (!Z_Registration_Info_UClass_UARSTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSTypes.OuterSingleton, Z_Construct_UClass_UARSTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSTypes.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<UARSTypes>()
	{
		return UARSTypes::StaticClass();
	}
	UARSTypes::UARSTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSTypes);
	UARSTypes::~UARSTypes() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::EnumInfo[] = {
		{ EModifierType_StaticEnum, TEXT("EModifierType"), &Z_Registration_Info_UEnum_EModifierType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3062616909U) },
		{ EStatsLoadMethod_StaticEnum, TEXT("EStatsLoadMethod"), &Z_Registration_Info_UEnum_EStatsLoadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 747079071U) },
		{ ELevelingType_StaticEnum, TEXT("ELevelingType"), &Z_Registration_Info_UEnum_ELevelingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1678673353U) },
		{ EStatisticsType_StaticEnum, TEXT("EStatisticsType"), &Z_Registration_Info_UEnum_EStatisticsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2009869594U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::ScriptStructInfo[] = {
		{ FBaseModifier::StaticStruct, Z_Construct_UScriptStruct_FBaseModifier_Statics::NewStructOps, TEXT("BaseModifier"), &Z_Registration_Info_UScriptStruct_BaseModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseModifier), 2256365713U) },
		{ FAttributeModifier::StaticStruct, Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewStructOps, TEXT("AttributeModifier"), &Z_Registration_Info_UScriptStruct_AttributeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeModifier), 3288183399U) },
		{ FStatisticsModifier::StaticStruct, Z_Construct_UScriptStruct_FStatisticsModifier_Statics::NewStructOps, TEXT("StatisticsModifier"), &Z_Registration_Info_UScriptStruct_StatisticsModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatisticsModifier), 2659369599U) },
		{ FStatistic::StaticStruct, Z_Construct_UScriptStruct_FStatistic_Statics::NewStructOps, TEXT("Statistic"), &Z_Registration_Info_UScriptStruct_Statistic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatistic), 828729460U) },
		{ FAttribute::StaticStruct, Z_Construct_UScriptStruct_FAttribute_Statics::NewStructOps, TEXT("Attribute"), &Z_Registration_Info_UScriptStruct_Attribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttribute), 262406853U) },
		{ FAttributesSet::StaticStruct, Z_Construct_UScriptStruct_FAttributesSet_Statics::NewStructOps, TEXT("AttributesSet"), &Z_Registration_Info_UScriptStruct_AttributesSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributesSet), 98634780U) },
		{ FAttributesSetModifier::StaticStruct, Z_Construct_UScriptStruct_FAttributesSetModifier_Statics::NewStructOps, TEXT("AttributesSetModifier"), &Z_Registration_Info_UScriptStruct_AttributesSetModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributesSetModifier), 1351211516U) },
		{ FStatisticValue::StaticStruct, Z_Construct_UScriptStruct_FStatisticValue_Statics::NewStructOps, TEXT("StatisticValue"), &Z_Registration_Info_UScriptStruct_StatisticValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatisticValue), 2111676830U) },
		{ FAttributeInfluence::StaticStruct, Z_Construct_UScriptStruct_FAttributeInfluence_Statics::NewStructOps, TEXT("AttributeInfluence"), &Z_Registration_Info_UScriptStruct_AttributeInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeInfluence), 3918211753U) },
		{ FStatInfluence::StaticStruct, Z_Construct_UScriptStruct_FStatInfluence_Statics::NewStructOps, TEXT("StatInfluence"), &Z_Registration_Info_UScriptStruct_StatInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatInfluence), 4229763859U) },
		{ FGenerationRule::StaticStruct, Z_Construct_UScriptStruct_FGenerationRule_Statics::NewStructOps, TEXT("GenerationRule"), &Z_Registration_Info_UScriptStruct_GenerationRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerationRule), 3582667755U) },
		{ FAttributesByLevel::StaticStruct, Z_Construct_UScriptStruct_FAttributesByLevel_Statics::NewStructOps, TEXT("AttributesByLevel"), &Z_Registration_Info_UScriptStruct_AttributesByLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributesByLevel), 3034392841U) },
		{ FTimedAttributeSetModifier::StaticStruct, Z_Construct_UScriptStruct_FTimedAttributeSetModifier_Statics::NewStructOps, TEXT("TimedAttributeSetModifier"), &Z_Registration_Info_UScriptStruct_TimedAttributeSetModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedAttributeSetModifier), 1745705883U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSTypes, UARSTypes::StaticClass, TEXT("UARSTypes"), &Z_Registration_Info_UClass_UARSTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSTypes), 1228535143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_3676807142(TEXT("/Script/AdvancedRPGSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

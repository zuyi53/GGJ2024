// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFDamageTypeCalculator.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDamageTypeCalculator() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageCalculation();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageTypeCalculator();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageTypeCalculator_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageZone();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfluence();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfluences();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFDamageTypeCalculator::StaticRegisterNativesUACFDamageTypeCalculator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDamageTypeCalculator);
	UClass* Z_Construct_UClass_UACFDamageTypeCalculator_NoRegister()
	{
		return UACFDamageTypeCalculator::StaticClass();
	}
	struct Z_Construct_UClass_UACFDamageTypeCalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitResponseActionMultiplier_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResponseActionMultiplier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResponseActionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitResponseActionMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CritChancePercentageByParameter_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CritChancePercentageByParameter_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CritChancePercentageByParameter_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CritChancePercentageByParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_critMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_critMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaggerResistanceStastistic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaggerResistanceStastistic;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageInfluencesByParameter_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageInfluencesByParameter_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageInfluencesByParameter_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamageInfluencesByParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRandomDamageDeviationPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultRandomDamageDeviationPercentage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageZoneToDamageMultiplier_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageZoneToDamageMultiplier_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageZoneToDamageMultiplier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageZoneToDamageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamageZoneToDamageMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefenseStanceParameterWhenBlocked_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseStanceParameterWhenBlocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDamageTypeCalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFDamageCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Game/ACFDamageTypeCalculator.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_ValueProp = { "HitResponseActionMultiplier", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_Key_KeyProp = { "HitResponseActionMultiplier_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_MetaData[] = {
		{ "Category", "ACF|Hit Responses" },
		{ "Comment", "/*For every hitresponse you can define a multiplier to be applied to the final damage*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "For every hitresponse you can define a multiplier to be applied to the final damage" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier = { "HitResponseActionMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, HitResponseActionMultiplier), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_ValueProp = { "CritChancePercentageByParameter", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDamageInfluence, METADATA_PARAMS(0, nullptr) }; // 1353765568
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_Key_KeyProp = { "CritChancePercentageByParameter_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_MetaData[] = {
		{ "Category", "ACF| Critical Damage Config" },
		{ "Comment", "/*For every damagetype, the parameter to be used to calculate crit chance. 100 means always crit*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "For every damagetype, the parameter to be used to calculate crit chance. 100 means always crit" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter = { "CritChancePercentageByParameter", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, CritChancePercentageByParameter), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_MetaData) }; // 1353765568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_critMultiplier_MetaData[] = {
		{ "Category", "ACF| Critical Damage Config" },
		{ "Comment", "/*Multiplier applied when an hit is Critical*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "Multiplier applied when an hit is Critical" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_critMultiplier = { "critMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_critMultiplier_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_critMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_StaggerResistanceStastistic_MetaData[] = {
		{ "Category", "ACF|Hit Responses" },
		{ "Comment", "/*This statistic is used to prevent the owner to go on Hit Action ( = being staggered).\n    If set, this statistic will be reduced by the actual damage at every hit and the owner\n    will only be staggered when this statistic reaches 0. (make sure regen is activate, otherwise\n    the AI after the first stagger, will be always be staggered) */" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "This statistic is used to prevent the owner to go on Hit Action ( = being staggered).\n    If set, this statistic will be reduced by the actual damage at every hit and the owner\n    will only be staggered when this statistic reaches 0. (make sure regen is activate, otherwise\n    the AI after the first stagger, will be always be staggered)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_StaggerResistanceStastistic = { "StaggerResistanceStastistic", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, StaggerResistanceStastistic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_StaggerResistanceStastistic_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_StaggerResistanceStastistic_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_ValueProp = { "DamageInfluencesByParameter", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDamageInfluences, METADATA_PARAMS(0, nullptr) }; // 1997177557
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_Key_KeyProp = { "DamageInfluencesByParameter_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*DEFENSE PARAMETER PERCENTAGES are the parameters that will be used from the DAMAGE RECEIVER to\n    REDUCE the incoming damage and a scaling factor.\n    Total Damage will be reduced by the sum of all the influences * scalingfactor,  in percentages.\n    if the sum of all those parameters scaled is 30, incoming damage will be reduced by 30%.\n    If this number is >= 100, damage will be reduced to 0*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "DEFENSE PARAMETER PERCENTAGES are the parameters that will be used from the DAMAGE RECEIVER to\n    REDUCE the incoming damage and a scaling factor.\n    Total Damage will be reduced by the sum of all the influences * scalingfactor,  in percentages.\n    if the sum of all those parameters scaled is 30, incoming damage will be reduced by 30%.\n    If this number is >= 100, damage will be reduced to 0" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter = { "DamageInfluencesByParameter", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, DamageInfluencesByParameter), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_MetaData) }; // 1997177557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefaultRandomDamageDeviationPercentage_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Random deviation in percentage added to final damage. % means that final damage will be randomized\n    in the range -5% , +5%*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "Random deviation in percentage added to final damage. % means that final damage will be randomized\n    in the range -5% , +5%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefaultRandomDamageDeviationPercentage = { "DefaultRandomDamageDeviationPercentage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, DefaultRandomDamageDeviationPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefaultRandomDamageDeviationPercentage_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefaultRandomDamageDeviationPercentage_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_ValueProp = { "DamageZoneToDamageMultiplier", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_Key_KeyProp = { "DamageZoneToDamageMultiplier_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCombatFramework_EDamageZone, METADATA_PARAMS(0, nullptr) }; // 3143454798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Multiplier applied depending on the damaged zone of the receiver*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "Multiplier applied depending on the damaged zone of the receiver" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier = { "DamageZoneToDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, DamageZoneToDamageMultiplier), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_MetaData) }; // 3143454798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefenseStanceParameterWhenBlocked_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The parameter to be used to reduce incoming damage when in Defense State*/" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageTypeCalculator.h" },
		{ "ToolTip", "The parameter to be used to reduce incoming damage when in Defense State" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefenseStanceParameterWhenBlocked = { "DefenseStanceParameterWhenBlocked", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDamageTypeCalculator, DefenseStanceParameterWhenBlocked), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefenseStanceParameterWhenBlocked_MetaData), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefenseStanceParameterWhenBlocked_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDamageTypeCalculator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_HitResponseActionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_CritChancePercentageByParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_critMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_StaggerResistanceStastistic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageInfluencesByParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefaultRandomDamageDeviationPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DamageZoneToDamageMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDamageTypeCalculator_Statics::NewProp_DefenseStanceParameterWhenBlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDamageTypeCalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDamageTypeCalculator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDamageTypeCalculator_Statics::ClassParams = {
		&UACFDamageTypeCalculator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFDamageTypeCalculator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDamageTypeCalculator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageTypeCalculator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFDamageTypeCalculator()
	{
		if (!Z_Registration_Info_UClass_UACFDamageTypeCalculator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDamageTypeCalculator.OuterSingleton, Z_Construct_UClass_UACFDamageTypeCalculator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDamageTypeCalculator.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDamageTypeCalculator>()
	{
		return UACFDamageTypeCalculator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDamageTypeCalculator);
	UACFDamageTypeCalculator::~UACFDamageTypeCalculator() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageTypeCalculator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageTypeCalculator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDamageTypeCalculator, UACFDamageTypeCalculator::StaticClass, TEXT("UACFDamageTypeCalculator"), &Z_Registration_Info_UClass_UACFDamageTypeCalculator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDamageTypeCalculator), 2501033566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageTypeCalculator_h_4119343067(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageTypeCalculator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageTypeCalculator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

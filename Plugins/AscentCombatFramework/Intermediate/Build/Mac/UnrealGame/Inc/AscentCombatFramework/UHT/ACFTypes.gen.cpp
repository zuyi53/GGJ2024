// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "CollisionsManager/Public/ACMTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFTypes() {}
// Cross Module References
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EActionPriority();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFTypes();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFTypes_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EActionDirection();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EBattleState();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_ECombatType();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageZone();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDeathType();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EHitDirection();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActionChances();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActionsChances();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfluence();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfluences();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEffectByDamageType();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FImpactEffect();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FOnHitActionChances();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRagdollImpulse();
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FACFStruct();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeathType;
	static UEnum* EDeathType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeathType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_EDeathType, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EDeathType"));
		}
		return Z_Registration_Info_UEnum_EDeathType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<EDeathType>()
	{
		return EDeathType_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::Enumerators[] = {
		{ "EDeathType::EGoRagdoll", (int64)EDeathType::EGoRagdoll },
		{ "EDeathType::EDeathAction", (int64)EDeathType::EDeathAction },
		{ "EDeathType::EDoNothing", (int64)EDeathType::EDoNothing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "EDeathAction.Comment", "/**\n *\n */" },
		{ "EDeathAction.DisplayName", "Trigger Death Action" },
		{ "EDeathAction.Name", "EDeathType::EDeathAction" },
		{ "EDoNothing.Comment", "/**\n *\n */" },
		{ "EDoNothing.DisplayName", "Do Nothing" },
		{ "EDoNothing.Name", "EDeathType::EDoNothing" },
		{ "EGoRagdoll.Comment", "/**\n *\n */" },
		{ "EGoRagdoll.DisplayName", "Go Ragdoll" },
		{ "EGoRagdoll.Name", "EDeathType::EGoRagdoll" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"EDeathType",
		"EDeathType",
		Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_EDeathType()
	{
		if (!Z_Registration_Info_UEnum_EDeathType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeathType.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_EDeathType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeathType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageInfluence;
class UScriptStruct* FDamageInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageInfluence, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("DamageInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_DamageInfluence.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FDamageInfluence>()
{
	return FDamageInfluence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageInfluence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfluence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageInfluence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfluence, Parameter), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_Parameter_MetaData), Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_Parameter_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfluence, ScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_ScalingFactor_MetaData), Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_ScalingFactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageInfluence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewProp_ScalingFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageInfluence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		&NewStructOps,
		"DamageInfluence",
		Z_Construct_UScriptStruct_FDamageInfluence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluence_Statics::PropPointers),
		sizeof(FDamageInfluence),
		alignof(FDamageInfluence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageInfluence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDamageInfluence()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageInfluence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageInfluence.InnerSingleton, Z_Construct_UScriptStruct_FDamageInfluence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageInfluence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageInfluences;
class UScriptStruct* FDamageInfluences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageInfluences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageInfluences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageInfluences, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("DamageInfluences"));
	}
	return Z_Registration_Info_UScriptStruct_DamageInfluences.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FDamageInfluences>()
{
	return FDamageInfluences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageInfluences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackParametersInfluence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackParametersInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackParametersInfluence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseParametersPercentages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefenseParametersPercentages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefenseParametersPercentages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfluences_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageInfluences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence_Inner = { "AttackParametersInfluence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDamageInfluence, METADATA_PARAMS(0, nullptr) }; // 1353765568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence = { "AttackParametersInfluence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfluences, AttackParametersInfluence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence_MetaData), Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence_MetaData) }; // 1353765568
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages_Inner = { "DefenseParametersPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDamageInfluence, METADATA_PARAMS(0, nullptr) }; // 1353765568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages = { "DefenseParametersPercentages", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfluences, DefenseParametersPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages_MetaData), Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages_MetaData) }; // 1353765568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageInfluences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_AttackParametersInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewProp_DefenseParametersPercentages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageInfluences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		&NewStructOps,
		"DamageInfluences",
		Z_Construct_UScriptStruct_FDamageInfluences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluences_Statics::PropPointers),
		sizeof(FDamageInfluences),
		alignof(FDamageInfluences),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluences_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageInfluences_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfluences_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDamageInfluences()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageInfluences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageInfluences.InnerSingleton, Z_Construct_UScriptStruct_FDamageInfluences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageInfluences.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageActivationType;
	static UEnum* EDamageActivationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageActivationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageActivationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EDamageActivationType"));
		}
		return Z_Registration_Info_UEnum_EDamageActivationType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<EDamageActivationType>()
	{
		return EDamageActivationType_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::Enumerators[] = {
		{ "EDamageActivationType::ERight", (int64)EDamageActivationType::ERight },
		{ "EDamageActivationType::ELeft", (int64)EDamageActivationType::ELeft },
		{ "EDamageActivationType::EBoth", (int64)EDamageActivationType::EBoth },
		{ "EDamageActivationType::EPhysical", (int64)EDamageActivationType::EPhysical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBoth.DisplayName", "Left And Right Weapon" },
		{ "EBoth.Name", "EDamageActivationType::EBoth" },
		{ "ELeft.DisplayName", "Left Weapon Only" },
		{ "ELeft.Name", "EDamageActivationType::ELeft" },
		{ "EPhysical.DisplayName", "Physical Damage" },
		{ "EPhysical.Name", "EDamageActivationType::EPhysical" },
		{ "ERight.DisplayName", "Right Weapon Only" },
		{ "ERight.Name", "EDamageActivationType::ERight" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"EDamageActivationType",
		"EDamageActivationType",
		Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType()
	{
		if (!Z_Registration_Info_UEnum_EDamageActivationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageActivationType.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageActivationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBattleState;
	static UEnum* EBattleState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBattleState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBattleState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_EBattleState, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EBattleState"));
		}
		return Z_Registration_Info_UEnum_EBattleState.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<EBattleState>()
	{
		return EBattleState_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::Enumerators[] = {
		{ "EBattleState::EExploration", (int64)EBattleState::EExploration },
		{ "EBattleState::EBattle", (int64)EBattleState::EBattle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBattle.DisplayName", "Battle" },
		{ "EBattle.Name", "EBattleState::EBattle" },
		{ "EExploration.DisplayName", "Exploration" },
		{ "EExploration.Name", "EBattleState::EExploration" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"EBattleState",
		"EBattleState",
		Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_EBattleState()
	{
		if (!Z_Registration_Info_UEnum_EBattleState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBattleState.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_EBattleState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBattleState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageZone;
	static UEnum* EDamageZone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageZone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageZone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_EDamageZone, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EDamageZone"));
		}
		return Z_Registration_Info_UEnum_EDamageZone.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<EDamageZone>()
	{
		return EDamageZone_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::Enumerators[] = {
		{ "EDamageZone::ENormal", (int64)EDamageZone::ENormal },
		{ "EDamageZone::EImmune", (int64)EDamageZone::EImmune },
		{ "EDamageZone::EHighDefense", (int64)EDamageZone::EHighDefense },
		{ "EDamageZone::EHighDamage", (int64)EDamageZone::EHighDamage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EHighDamage.DisplayName", "High Damage Zone" },
		{ "EHighDamage.Name", "EDamageZone::EHighDamage" },
		{ "EHighDefense.DisplayName", "High Defense Zone" },
		{ "EHighDefense.Name", "EDamageZone::EHighDefense" },
		{ "EImmune.DisplayName", "Zero Damage Zone" },
		{ "EImmune.Name", "EDamageZone::EImmune" },
		{ "ENormal.DisplayName", "Normal Zone" },
		{ "ENormal.Name", "EDamageZone::ENormal" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"EDamageZone",
		"EDamageZone",
		Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageZone()
	{
		if (!Z_Registration_Info_UEnum_EDamageZone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageZone.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_EDamageZone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageZone.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RagdollImpulse;
class UScriptStruct* FRagdollImpulse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RagdollImpulse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RagdollImpulse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRagdollImpulse, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("RagdollImpulse"));
	}
	return Z_Registration_Info_UScriptStruct_RagdollImpulse.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FRagdollImpulse>()
{
	return FRagdollImpulse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRagdollImpulse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpulseDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRagdollImpulse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRagdollImpulse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseIntensity_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseIntensity = { "ImpulseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRagdollImpulse, ImpulseIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseIntensity_MetaData), Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseDirection_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseDirection = { "ImpulseDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRagdollImpulse, ImpulseDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseDirection_MetaData), Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRagdollImpulse, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_BoneName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRagdollImpulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_ImpulseDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRagdollImpulse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		&NewStructOps,
		"RagdollImpulse",
		Z_Construct_UScriptStruct_FRagdollImpulse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRagdollImpulse_Statics::PropPointers),
		sizeof(FRagdollImpulse),
		alignof(FRagdollImpulse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRagdollImpulse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRagdollImpulse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRagdollImpulse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRagdollImpulse()
	{
		if (!Z_Registration_Info_UScriptStruct_RagdollImpulse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RagdollImpulse.InnerSingleton, Z_Construct_UScriptStruct_FRagdollImpulse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RagdollImpulse.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitDirection;
	static UEnum* EHitDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHitDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_EHitDirection, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EHitDirection"));
		}
		return Z_Registration_Info_UEnum_EHitDirection.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<EHitDirection>()
	{
		return EHitDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::Enumerators[] = {
		{ "EHitDirection::EFront", (int64)EHitDirection::EFront },
		{ "EHitDirection::EFrontLeft", (int64)EHitDirection::EFrontLeft },
		{ "EHitDirection::EFrontRight", (int64)EHitDirection::EFrontRight },
		{ "EHitDirection::ELeftLeg", (int64)EHitDirection::ELeftLeg },
		{ "EHitDirection::ERightLeg", (int64)EHitDirection::ERightLeg },
		{ "EHitDirection::EHead", (int64)EHitDirection::EHead },
		{ "EHitDirection::ERight", (int64)EHitDirection::ERight },
		{ "EHitDirection::ELeft", (int64)EHitDirection::ELeft },
		{ "EHitDirection::EBack", (int64)EHitDirection::EBack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBack.Name", "EHitDirection::EBack" },
		{ "EFront.Name", "EHitDirection::EFront" },
		{ "EFrontLeft.Name", "EHitDirection::EFrontLeft" },
		{ "EFrontRight.Name", "EHitDirection::EFrontRight" },
		{ "EHead.Name", "EHitDirection::EHead" },
		{ "ELeft.Name", "EHitDirection::ELeft" },
		{ "ELeftLeg.Name", "EHitDirection::ELeftLeg" },
		{ "ERight.Name", "EHitDirection::ERight" },
		{ "ERightLeg.Name", "EHitDirection::ERightLeg" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"EHitDirection",
		"EHitDirection",
		Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_EHitDirection()
	{
		if (!Z_Registration_Info_UEnum_EHitDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitDirection.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_EHitDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHitDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionDirection;
	static UEnum* EActionDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActionDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActionDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_EActionDirection, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EActionDirection"));
		}
		return Z_Registration_Info_UEnum_EActionDirection.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<EActionDirection>()
	{
		return EActionDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::Enumerators[] = {
		{ "EActionDirection::Front", (int64)EActionDirection::Front },
		{ "EActionDirection::Back", (int64)EActionDirection::Back },
		{ "EActionDirection::Left", (int64)EActionDirection::Left },
		{ "EActionDirection::Right", (int64)EActionDirection::Right },
		{ "EActionDirection::EveryDirection", (int64)EActionDirection::EveryDirection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "Back Only" },
		{ "Back.Name", "EActionDirection::Back" },
		{ "BlueprintType", "true" },
		{ "EveryDirection.DisplayName", "Every Direction" },
		{ "EveryDirection.Name", "EActionDirection::EveryDirection" },
		{ "Front.DisplayName", "Front Only" },
		{ "Front.Name", "EActionDirection::Front" },
		{ "Left.DisplayName", "Left Only" },
		{ "Left.Name", "EActionDirection::Left" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
		{ "Right.DisplayName", "Right Only" },
		{ "Right.Name", "EActionDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"EActionDirection",
		"EActionDirection",
		Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_EActionDirection()
	{
		if (!Z_Registration_Info_UEnum_EActionDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionDirection.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_EActionDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActionDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImpactEffect;
class UScriptStruct* FImpactEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImpactEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImpactEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactEffect, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("ImpactEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ImpactEffect.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FImpactEffect>()
{
	return FImpactEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImpactEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldShakeCamera_MetaData[];
#endif
		static void NewProp_bShouldShakeCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldShakeCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMakeDamage_MetaData[];
#endif
		static void NewProp_bShouldMakeDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMakeDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTraceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DamageTraceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTraceDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTraceDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera_SetBit(void* Obj)
	{
		((FImpactEffect*)Obj)->bShouldShakeCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera = { "bShouldShakeCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImpactEffect), &Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bShouldShakeCamera" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactEffect, CameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_CameraShake_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_CameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeFalloff_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bShouldShakeCamera" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeFalloff = { "ShakeFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactEffect, ShakeFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeFalloff_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeFalloff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeRadius_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bShouldShakeCamera" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeRadius = { "ShakeRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactEffect, ShakeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeRadius_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage_SetBit(void* Obj)
	{
		((FImpactEffect*)Obj)->bShouldMakeDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage = { "bShouldMakeDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImpactEffect), &Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceName_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bShouldMakeDamage" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceName = { "DamageTraceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactEffect, DamageTraceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceName_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceDuration_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bShouldMakeDamage" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceDuration = { "DamageTraceDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactEffect, DamageTraceDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceDuration_MetaData), Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldShakeCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_CameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_ShakeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_bShouldMakeDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactEffect_Statics::NewProp_DamageTraceDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		&NewStructOps,
		"ImpactEffect",
		Z_Construct_UScriptStruct_FImpactEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::PropPointers),
		sizeof(FImpactEffect),
		alignof(FImpactEffect),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImpactEffect_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactEffect_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FImpactEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ImpactEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImpactEffect.InnerSingleton, Z_Construct_UScriptStruct_FImpactEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImpactEffect.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActionChances>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FActionChances cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionChances;
class UScriptStruct* FActionChances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionChances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionChances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionChances, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("ActionChances"));
	}
	return Z_Registration_Info_UScriptStruct_ActionChances.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FActionChances>()
{
	return FActionChances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionChances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedFromDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedFromDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedFromDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChancePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BTWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BTWaitTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionChances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionChances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionChances>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection = { "AllowedFromDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionChances, AllowedFromDirection), Z_Construct_UEnum_AscentCombatFramework_EActionDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection_MetaData), Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection_MetaData) }; // 320668792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ActionTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionChances, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ActionTag_MetaData), Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ChancePercentage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ChancePercentage = { "ChancePercentage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionChances, ChancePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ChancePercentage_MetaData), Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ChancePercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_BTWaitTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_BTWaitTime = { "BTWaitTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionChances, BTWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_BTWaitTime_MetaData), Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_BTWaitTime_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionChances, Priority), Z_Construct_UEnum_ActionsSystem_EActionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority_MetaData) }; // 675304996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionChances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_AllowedFromDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_ChancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_BTWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionChances_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionChances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ActionChances",
		Z_Construct_UScriptStruct_FActionChances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::PropPointers),
		sizeof(FActionChances),
		alignof(FActionChances),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionChances_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionChances_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionChances()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionChances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionChances.InnerSingleton, Z_Construct_UScriptStruct_FActionChances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionChances.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionsChances;
class UScriptStruct* FActionsChances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionsChances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionsChances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionsChances, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("ActionsChances"));
	}
	return Z_Registration_Info_UScriptStruct_ActionsChances.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FActionsChances>()
{
	return FActionsChances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionsChances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PossibleActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossibleActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PossibleActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsChances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionsChances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionsChances>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions_Inner = { "PossibleActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActionChances, METADATA_PARAMS(0, nullptr) }; // 1528728179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions = { "PossibleActions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionsChances, PossibleActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions_MetaData), Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions_MetaData) }; // 1528728179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionsChances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsChances_Statics::NewProp_PossibleActions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionsChances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		&NewStructOps,
		"ActionsChances",
		Z_Construct_UScriptStruct_FActionsChances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsChances_Statics::PropPointers),
		sizeof(FActionsChances),
		alignof(FActionsChances),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsChances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionsChances_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsChances_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionsChances()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionsChances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionsChances.InnerSingleton, Z_Construct_UScriptStruct_FActionsChances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionsChances.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOnHitActionChances>() == std::is_polymorphic<FActionChances>(), "USTRUCT FOnHitActionChances cannot be polymorphic unless super FActionChances is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnHitActionChances;
class UScriptStruct* FOnHitActionChances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnHitActionChances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnHitActionChances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnHitActionChances, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("OnHitActionChances"));
	}
	return Z_Registration_Info_UScriptStruct_OnHitActionChances.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FOnHitActionChances>()
{
	return FOnHitActionChances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnHitActionChances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedDamageTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDamageTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedDamageTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnHitActionChances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnHitActionChances>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes_Inner = { "AllowedDamageTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes = { "AllowedDamageTypes", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnHitActionChances, AllowedDamageTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes_MetaData), Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnHitActionChances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewProp_AllowedDamageTypes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnHitActionChances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		Z_Construct_UScriptStruct_FActionChances,
		&NewStructOps,
		"OnHitActionChances",
		Z_Construct_UScriptStruct_FOnHitActionChances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnHitActionChances_Statics::PropPointers),
		sizeof(FOnHitActionChances),
		alignof(FOnHitActionChances),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnHitActionChances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnHitActionChances_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnHitActionChances_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOnHitActionChances()
	{
		if (!Z_Registration_Info_UScriptStruct_OnHitActionChances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnHitActionChances.InnerSingleton, Z_Construct_UScriptStruct_FOnHitActionChances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnHitActionChances.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEffectByDamageType>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FEffectByDamageType cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectByDamageType;
class UScriptStruct* FEffectByDamageType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectByDamageType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectByDamageType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectByDamageType, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("EffectByDamageType"));
	}
	return Z_Registration_Info_UScriptStruct_EffectByDamageType.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FEffectByDamageType>()
{
	return FEffectByDamageType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectByDamageType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectByDamageType_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectByDamageType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectByDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EffectByDamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectByDamageType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectByDamageType>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_ValueProp = { "EffectByDamageType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBaseFX, METADATA_PARAMS(0, nullptr) }; // 974731263
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_Key_KeyProp = { "EffectByDamageType_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType = { "EffectByDamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectByDamageType, EffectByDamageType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_MetaData), Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_MetaData) }; // 974731263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectByDamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewProp_EffectByDamageType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectByDamageType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"EffectByDamageType",
		Z_Construct_UScriptStruct_FEffectByDamageType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectByDamageType_Statics::PropPointers),
		sizeof(FEffectByDamageType),
		alignof(FEffectByDamageType),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectByDamageType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectByDamageType_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectByDamageType_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEffectByDamageType()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectByDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectByDamageType.InnerSingleton, Z_Construct_UScriptStruct_FEffectByDamageType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectByDamageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatType;
	static UEnum* ECombatType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_ECombatType, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("ECombatType"));
		}
		return Z_Registration_Info_UEnum_ECombatType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<ECombatType>()
	{
		return ECombatType_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::Enumerators[] = {
		{ "ECombatType::EUnarmed", (int64)ECombatType::EUnarmed },
		{ "ECombatType::EMelee", (int64)ECombatType::EMelee },
		{ "ECombatType::ERanged", (int64)ECombatType::ERanged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMelee.DisplayName", "Melee" },
		{ "EMelee.Name", "ECombatType::EMelee" },
		{ "ERanged.DisplayName", "Ranged" },
		{ "ERanged.Name", "ECombatType::ERanged" },
		{ "EUnarmed.DisplayName", "Unarmed" },
		{ "EUnarmed.Name", "ECombatType::EUnarmed" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"ECombatType",
		"ECombatType",
		Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_ECombatType()
	{
		if (!Z_Registration_Info_UEnum_ECombatType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatType.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_ECombatType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatBehaviorType;
	static UEnum* ECombatBehaviorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatBehaviorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatBehaviorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("ECombatBehaviorType"));
		}
		return Z_Registration_Info_UEnum_ECombatBehaviorType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UEnum* StaticEnum<ECombatBehaviorType>()
	{
		return ECombatBehaviorType_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::Enumerators[] = {
		{ "ECombatBehaviorType::EMelee", (int64)ECombatBehaviorType::EMelee },
		{ "ECombatBehaviorType::ERanged", (int64)ECombatBehaviorType::ERanged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMelee.DisplayName", "Melee" },
		{ "EMelee.Name", "ECombatBehaviorType::EMelee" },
		{ "ERanged.DisplayName", "Ranged" },
		{ "ERanged.Name", "ECombatBehaviorType::ERanged" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		"ECombatBehaviorType",
		"ECombatBehaviorType",
		Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType()
	{
		if (!Z_Registration_Info_UEnum_ECombatBehaviorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatBehaviorType.InnerSingleton, Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatBehaviorType.InnerSingleton;
	}
	void UACFTypes::StaticRegisterNativesUACFTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFTypes);
	UClass* Z_Construct_UClass_UACFTypes_NoRegister()
	{
		return UACFTypes::StaticClass();
	}
	struct Z_Construct_UClass_UACFTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFTypes.h" },
		{ "ModuleRelativePath", "Public/Game/ACFTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTypes_Statics::ClassParams = {
		&UACFTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFTypes()
	{
		if (!Z_Registration_Info_UClass_UACFTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFTypes.OuterSingleton, Z_Construct_UClass_UACFTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFTypes.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFTypes>()
	{
		return UACFTypes::StaticClass();
	}
	UACFTypes::UACFTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTypes);
	UACFTypes::~UACFTypes() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::EnumInfo[] = {
		{ EDeathType_StaticEnum, TEXT("EDeathType"), &Z_Registration_Info_UEnum_EDeathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2322131908U) },
		{ EDamageActivationType_StaticEnum, TEXT("EDamageActivationType"), &Z_Registration_Info_UEnum_EDamageActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3742955585U) },
		{ EBattleState_StaticEnum, TEXT("EBattleState"), &Z_Registration_Info_UEnum_EBattleState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2786243359U) },
		{ EDamageZone_StaticEnum, TEXT("EDamageZone"), &Z_Registration_Info_UEnum_EDamageZone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3143454798U) },
		{ EHitDirection_StaticEnum, TEXT("EHitDirection"), &Z_Registration_Info_UEnum_EHitDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1482211941U) },
		{ EActionDirection_StaticEnum, TEXT("EActionDirection"), &Z_Registration_Info_UEnum_EActionDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 320668792U) },
		{ ECombatType_StaticEnum, TEXT("ECombatType"), &Z_Registration_Info_UEnum_ECombatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1410424927U) },
		{ ECombatBehaviorType_StaticEnum, TEXT("ECombatBehaviorType"), &Z_Registration_Info_UEnum_ECombatBehaviorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 275714024U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::ScriptStructInfo[] = {
		{ FDamageInfluence::StaticStruct, Z_Construct_UScriptStruct_FDamageInfluence_Statics::NewStructOps, TEXT("DamageInfluence"), &Z_Registration_Info_UScriptStruct_DamageInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageInfluence), 1353765568U) },
		{ FDamageInfluences::StaticStruct, Z_Construct_UScriptStruct_FDamageInfluences_Statics::NewStructOps, TEXT("DamageInfluences"), &Z_Registration_Info_UScriptStruct_DamageInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageInfluences), 1997177557U) },
		{ FRagdollImpulse::StaticStruct, Z_Construct_UScriptStruct_FRagdollImpulse_Statics::NewStructOps, TEXT("RagdollImpulse"), &Z_Registration_Info_UScriptStruct_RagdollImpulse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRagdollImpulse), 1734255984U) },
		{ FImpactEffect::StaticStruct, Z_Construct_UScriptStruct_FImpactEffect_Statics::NewStructOps, TEXT("ImpactEffect"), &Z_Registration_Info_UScriptStruct_ImpactEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImpactEffect), 1658141562U) },
		{ FActionChances::StaticStruct, Z_Construct_UScriptStruct_FActionChances_Statics::NewStructOps, TEXT("ActionChances"), &Z_Registration_Info_UScriptStruct_ActionChances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionChances), 1528728179U) },
		{ FActionsChances::StaticStruct, Z_Construct_UScriptStruct_FActionsChances_Statics::NewStructOps, TEXT("ActionsChances"), &Z_Registration_Info_UScriptStruct_ActionsChances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionsChances), 2154574099U) },
		{ FOnHitActionChances::StaticStruct, Z_Construct_UScriptStruct_FOnHitActionChances_Statics::NewStructOps, TEXT("OnHitActionChances"), &Z_Registration_Info_UScriptStruct_OnHitActionChances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnHitActionChances), 1039742790U) },
		{ FEffectByDamageType::StaticStruct, Z_Construct_UScriptStruct_FEffectByDamageType_Statics::NewStructOps, TEXT("EffectByDamageType"), &Z_Registration_Info_UScriptStruct_EffectByDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectByDamageType), 2737378365U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFTypes, UACFTypes::StaticClass, TEXT("UACFTypes"), &Z_Registration_Info_UClass_UACFTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFTypes), 3896636610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_27513715(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

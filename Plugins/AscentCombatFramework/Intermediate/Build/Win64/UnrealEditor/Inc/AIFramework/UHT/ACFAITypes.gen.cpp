// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFAITypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAITypes() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIGroupSpawner_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFActionCondition_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAITypes();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAITypes_NoRegister();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAgentRotation();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAICombatState();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAIState();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAIAgentsInfo();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAICombatStateConfig();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnInfo();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FBaseUnit();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FCommandChances();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FConditions();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolConfig();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWaveConfig();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActionChances();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PatrolConfig;
class UScriptStruct* FPatrolConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PatrolConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PatrolConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatrolConfig, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("PatrolConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PatrolConfig.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FPatrolConfig>()
{
	return FPatrolConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPatrolConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReversePath_MetaData[];
#endif
		static void NewProp_ReversePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReversePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitTimeAtPatrolPoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTimeAtPatrolPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatrolConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If true once the need of the path is reached, those AIs will try to come\n    back to the original point */" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
		{ "ToolTip", "If true once the need of the path is reached, those AIs will try to come\n    back to the original point" },
	};
#endif
	void Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath_SetBit(void* Obj)
	{
		((FPatrolConfig*)Obj)->ReversePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath = { "ReversePath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPatrolConfig), &Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath_MetaData), Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_WaitTimeAtPatrolPoint_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Amount of time this AI will stay at the patrol point*/" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
		{ "ToolTip", "Amount of time this AI will stay at the patrol point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_WaitTimeAtPatrolPoint = { "WaitTimeAtPatrolPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPatrolConfig, WaitTimeAtPatrolPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_WaitTimeAtPatrolPoint_MetaData), Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_WaitTimeAtPatrolPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatrolConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_ReversePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewProp_WaitTimeAtPatrolPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatrolConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		&NewStructOps,
		"PatrolConfig",
		Z_Construct_UScriptStruct_FPatrolConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolConfig_Statics::PropPointers),
		sizeof(FPatrolConfig),
		alignof(FPatrolConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPatrolConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPatrolConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PatrolConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PatrolConfig.InnerSingleton, Z_Construct_UScriptStruct_FPatrolConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PatrolConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgentRotation;
	static UEnum* EAgentRotation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAgentRotation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAgentRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIFramework_EAgentRotation, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("EAgentRotation"));
		}
		return Z_Registration_Info_UEnum_EAgentRotation.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UEnum* StaticEnum<EAgentRotation>()
	{
		return EAgentRotation_StaticEnum();
	}
	struct Z_Construct_UEnum_AIFramework_EAgentRotation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::Enumerators[] = {
		{ "EAgentRotation::EGroupForward", (int64)EAgentRotation::EGroupForward },
		{ "EAgentRotation::EGroupCenter", (int64)EAgentRotation::EGroupCenter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGroupCenter.DisplayName", "Look at Group Center" },
		{ "EGroupCenter.Name", "EAgentRotation::EGroupCenter" },
		{ "EGroupForward.DisplayName", "Group Forward" },
		{ "EGroupForward.Name", "EAgentRotation::EGroupForward" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		"EAgentRotation",
		"EAgentRotation",
		Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AIFramework_EAgentRotation()
	{
		if (!Z_Registration_Info_UEnum_EAgentRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgentRotation.InnerSingleton, Z_Construct_UEnum_AIFramework_EAgentRotation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAgentRotation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIState;
	static UEnum* EAIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIFramework_EAIState, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("EAIState"));
		}
		return Z_Registration_Info_UEnum_EAIState.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	struct Z_Construct_UEnum_AIFramework_EAIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIFramework_EAIState_Statics::Enumerators[] = {
		{ "EAIState::EPatrol", (int64)EAIState::EPatrol },
		{ "EAIState::EBattle", (int64)EAIState::EBattle },
		{ "EAIState::EFollowLeader", (int64)EAIState::EFollowLeader },
		{ "EAIState::EReturnHome", (int64)EAIState::EReturnHome },
		{ "EAIState::EWait", (int64)EAIState::EWait },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIFramework_EAIState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBattle.DisplayName", "Combat" },
		{ "EBattle.Name", "EAIState::EBattle" },
		{ "EFollowLeader.DisplayName", "Follow Lead Actor" },
		{ "EFollowLeader.Name", "EAIState::EFollowLeader" },
		{ "EPatrol.DisplayName", "Patrol" },
		{ "EPatrol.Name", "EAIState::EPatrol" },
		{ "EReturnHome.DisplayName", "Return Home" },
		{ "EReturnHome.Name", "EAIState::EReturnHome" },
		{ "EWait.DisplayName", "Wait" },
		{ "EWait.Name", "EAIState::EWait" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIFramework_EAIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		"EAIState",
		"EAIState",
		Z_Construct_UEnum_AIFramework_EAIState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EAIState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EAIState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIFramework_EAIState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AIFramework_EAIState()
	{
		if (!Z_Registration_Info_UEnum_EAIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIState.InnerSingleton, Z_Construct_UEnum_AIFramework_EAIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAICombatState;
	static UEnum* EAICombatState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAICombatState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAICombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIFramework_EAICombatState, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("EAICombatState"));
		}
		return Z_Registration_Info_UEnum_EAICombatState.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UEnum* StaticEnum<EAICombatState>()
	{
		return EAICombatState_StaticEnum();
	}
	struct Z_Construct_UEnum_AIFramework_EAICombatState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIFramework_EAICombatState_Statics::Enumerators[] = {
		{ "EAICombatState::EMeleeCombat", (int64)EAICombatState::EMeleeCombat },
		{ "EAICombatState::EChaseTarget", (int64)EAICombatState::EChaseTarget },
		{ "EAICombatState::ERangedCombat", (int64)EAICombatState::ERangedCombat },
		{ "EAICombatState::EStudyTarget", (int64)EAICombatState::EStudyTarget },
		{ "EAICombatState::EFlee", (int64)EAICombatState::EFlee },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIFramework_EAICombatState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EChaseTarget.DisplayName", "Chase Target" },
		{ "EChaseTarget.Name", "EAICombatState::EChaseTarget" },
		{ "EFlee.DisplayName", "Flee Away" },
		{ "EFlee.Name", "EAICombatState::EFlee" },
		{ "EMeleeCombat.DisplayName", "Melee Attacks" },
		{ "EMeleeCombat.Name", "EAICombatState::EMeleeCombat" },
		{ "ERangedCombat.DisplayName", "Ranged Attacks" },
		{ "ERangedCombat.Name", "EAICombatState::ERangedCombat" },
		{ "EStudyTarget.DisplayName", "Studytarget" },
		{ "EStudyTarget.Name", "EAICombatState::EStudyTarget" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIFramework_EAICombatState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		"EAICombatState",
		"EAICombatState",
		Z_Construct_UEnum_AIFramework_EAICombatState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EAICombatState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EAICombatState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIFramework_EAICombatState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AIFramework_EAICombatState()
	{
		if (!Z_Registration_Info_UEnum_EAICombatState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAICombatState.InnerSingleton, Z_Construct_UEnum_AIFramework_EAICombatState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAICombatState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIAgentsInfo;
class UScriptStruct* FAIAgentsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIAgentsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIAgentsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIAgentsInfo, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("AIAgentsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AIAgentsInfo.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FAIAgentsInfo>()
{
	return FAIAgentsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIAgentsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AICharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AICharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_characterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIAgentsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_AICharacter_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_AICharacter = { "AICharacter", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIAgentsInfo, AICharacter), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_AICharacter_MetaData), Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_AICharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_characterClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIAgentsInfo, characterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_characterClass_MetaData), Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_characterClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIAgentsInfo, Guid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_Guid_MetaData), Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_AICharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_characterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		&NewStructOps,
		"AIAgentsInfo",
		Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::PropPointers),
		sizeof(FAIAgentsInfo),
		alignof(FAIAgentsInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAIAgentsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AIAgentsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIAgentsInfo.InnerSingleton, Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIAgentsInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCommandChances>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCommandChances cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommandChances;
class UScriptStruct* FCommandChances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommandChances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommandChances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommandChances, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("CommandChances"));
	}
	return Z_Registration_Info_UScriptStruct_CommandChances.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FCommandChances>()
{
	return FCommandChances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommandChances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommandChances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommandChances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommandChances>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_CommandTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_CommandTag = { "CommandTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCommandChances, CommandTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_CommandTag_MetaData), Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_CommandTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCommandChances, Condition), Z_Construct_UClass_UACFActionCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_Condition_MetaData), Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_Condition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommandChances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_CommandTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommandChances_Statics::NewProp_Condition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommandChances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CommandChances",
		Z_Construct_UScriptStruct_FCommandChances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommandChances_Statics::PropPointers),
		sizeof(FCommandChances),
		alignof(FCommandChances),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommandChances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCommandChances_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommandChances_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCommandChances()
	{
		if (!Z_Registration_Info_UScriptStruct_CommandChances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommandChances.InnerSingleton, Z_Construct_UScriptStruct_FCommandChances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommandChances.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AICombatStateConfig;
class UScriptStruct* FAICombatStateConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AICombatStateConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AICombatStateConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAICombatStateConfig, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("AICombatStateConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AICombatStateConfig.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FAICombatStateConfig>()
{
	return FAICombatStateConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAICombatStateConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerChancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerChancePercentage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocomotionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAICombatStateConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState = { "CombatState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAICombatStateConfig, CombatState), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState_MetaData), Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState_MetaData) }; // 3461070315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UACFActionCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_Inner_MetaData), Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAICombatStateConfig, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_MetaData), Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_TriggerChancePercentage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_TriggerChancePercentage = { "TriggerChancePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAICombatStateConfig, TriggerChancePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_TriggerChancePercentage_MetaData), Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_TriggerChancePercentage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState = { "LocomotionState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAICombatStateConfig, LocomotionState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState_MetaData), Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState_MetaData) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_CombatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_Conditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_TriggerChancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewProp_LocomotionState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		&NewStructOps,
		"AICombatStateConfig",
		Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::PropPointers),
		sizeof(FAICombatStateConfig),
		alignof(FAICombatStateConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAICombatStateConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AICombatStateConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AICombatStateConfig.InnerSingleton, Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AICombatStateConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConditions>() == std::is_polymorphic<FActionChances>(), "USTRUCT FConditions cannot be polymorphic unless super FActionChances is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Conditions;
class UScriptStruct* FConditions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Conditions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Conditions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditions, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("Conditions"));
	}
	return Z_Registration_Info_UScriptStruct_Conditions.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FConditions>()
{
	return FConditions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditions_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConditions_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConditions, Condition), Z_Construct_UClass_UACFActionCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditions_Statics::NewProp_Condition_MetaData), Z_Construct_UScriptStruct_FConditions_Statics::NewProp_Condition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditions_Statics::NewProp_Condition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		Z_Construct_UScriptStruct_FActionChances,
		&NewStructOps,
		"Conditions",
		Z_Construct_UScriptStruct_FConditions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditions_Statics::PropPointers),
		sizeof(FConditions),
		alignof(FConditions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConditions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConditions()
	{
		if (!Z_Registration_Info_UScriptStruct_Conditions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Conditions.InnerSingleton, Z_Construct_UScriptStruct_FConditions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Conditions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseUnit;
class UScriptStruct* FBaseUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseUnit, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("BaseUnit"));
	}
	return Z_Registration_Info_UScriptStruct_BaseUnit.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FBaseUnit>()
{
	return FBaseUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIClassBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AIClassBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUnit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseUnit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_AIClassBP_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_AIClassBP = { "AIClassBP", nullptr, (EPropertyFlags)0x0014000001000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseUnit, AIClassBP), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_AIClassBP_MetaData), Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_AIClassBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_TotalNumber_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/** the number of this ai class in group*/" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
		{ "ToolTip", "the number of this ai class in group" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_TotalNumber = { "TotalNumber", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseUnit, TotalNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_TotalNumber_MetaData), Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_TotalNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_AIClassBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUnit_Statics::NewProp_TotalNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		&NewStructOps,
		"BaseUnit",
		Z_Construct_UScriptStruct_FBaseUnit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUnit_Statics::PropPointers),
		sizeof(FBaseUnit),
		alignof(FBaseUnit),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUnit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseUnit_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUnit_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseUnit.InnerSingleton, Z_Construct_UScriptStruct_FBaseUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseUnit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAISpawnInfo>() == std::is_polymorphic<FBaseUnit>(), "USTRUCT FAISpawnInfo cannot be polymorphic unless super FBaseUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISpawnInfo;
class UScriptStruct* FAISpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISpawnInfo, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("AISpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AISpawnInfo.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FAISpawnInfo>()
{
	return FAISpawnInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAISpawnInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISpawnInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAISpawnInfo, SpawnRotation), Z_Construct_UEnum_AIFramework_EAgentRotation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation_MetaData), Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation_MetaData) }; // 3696364924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISpawnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewProp_SpawnRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		Z_Construct_UScriptStruct_FBaseUnit,
		&NewStructOps,
		"AISpawnInfo",
		Z_Construct_UScriptStruct_FAISpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInfo_Statics::PropPointers),
		sizeof(FAISpawnInfo),
		alignof(FAISpawnInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAISpawnInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAISpawnInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AISpawnInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FAISpawnInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AISpawnInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveConfig;
class UScriptStruct* FWaveConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveConfig, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("WaveConfig"));
	}
	return Z_Registration_Info_UScriptStruct_WaveConfig.OuterSingleton;
}
template<> AIFRAMEWORK_API UScriptStruct* StaticStruct<FWaveConfig>()
{
	return FWaveConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupSpawner_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroupSpawner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveAgentsOverride_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAgentsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveAgentsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_secondsDelayToNextWave_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_secondsDelayToNextWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_GroupSpawner_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The spawner to be used for this wave */" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
		{ "ToolTip", "The spawner to be used for this wave" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_GroupSpawner = { "GroupSpawner", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveConfig, GroupSpawner), Z_Construct_UClass_AACFAIGroupSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_GroupSpawner_MetaData), Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_GroupSpawner_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride_Inner = { "WaveAgentsOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAISpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3249338304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The Agents To Be Used For This Wave. Overrides default spawner configuration*/" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
		{ "ToolTip", "The Agents To Be Used For This Wave. Overrides default spawner configuration" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride = { "WaveAgentsOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveConfig, WaveAgentsOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride_MetaData), Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride_MetaData) }; // 3249338304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_secondsDelayToNextWave_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_secondsDelayToNextWave = { "secondsDelayToNextWave", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveConfig, secondsDelayToNextWave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_secondsDelayToNextWave_MetaData), Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_secondsDelayToNextWave_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_GroupSpawner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_WaveAgentsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveConfig_Statics::NewProp_secondsDelayToNextWave,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		&NewStructOps,
		"WaveConfig",
		Z_Construct_UScriptStruct_FWaveConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveConfig_Statics::PropPointers),
		sizeof(FWaveConfig),
		alignof(FWaveConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWaveConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveConfig.InnerSingleton, Z_Construct_UScriptStruct_FWaveConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveConfig.InnerSingleton;
	}
	void UACFAITypes::StaticRegisterNativesUACFAITypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAITypes);
	UClass* Z_Construct_UClass_UACFAITypes_NoRegister()
	{
		return UACFAITypes::StaticClass();
	}
	struct Z_Construct_UClass_UACFAITypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAITypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAITypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAITypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFAITypes.h" },
		{ "ModuleRelativePath", "Public/ACFAITypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAITypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAITypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAITypes_Statics::ClassParams = {
		&UACFAITypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAITypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAITypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFAITypes()
	{
		if (!Z_Registration_Info_UClass_UACFAITypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAITypes.OuterSingleton, Z_Construct_UClass_UACFAITypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAITypes.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFAITypes>()
	{
		return UACFAITypes::StaticClass();
	}
	UACFAITypes::UACFAITypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAITypes);
	UACFAITypes::~UACFAITypes() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::EnumInfo[] = {
		{ EAgentRotation_StaticEnum, TEXT("EAgentRotation"), &Z_Registration_Info_UEnum_EAgentRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3696364924U) },
		{ EAIState_StaticEnum, TEXT("EAIState"), &Z_Registration_Info_UEnum_EAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1319398043U) },
		{ EAICombatState_StaticEnum, TEXT("EAICombatState"), &Z_Registration_Info_UEnum_EAICombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3461070315U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::ScriptStructInfo[] = {
		{ FPatrolConfig::StaticStruct, Z_Construct_UScriptStruct_FPatrolConfig_Statics::NewStructOps, TEXT("PatrolConfig"), &Z_Registration_Info_UScriptStruct_PatrolConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPatrolConfig), 549765083U) },
		{ FAIAgentsInfo::StaticStruct, Z_Construct_UScriptStruct_FAIAgentsInfo_Statics::NewStructOps, TEXT("AIAgentsInfo"), &Z_Registration_Info_UScriptStruct_AIAgentsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIAgentsInfo), 2558498719U) },
		{ FCommandChances::StaticStruct, Z_Construct_UScriptStruct_FCommandChances_Statics::NewStructOps, TEXT("CommandChances"), &Z_Registration_Info_UScriptStruct_CommandChances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommandChances), 988673568U) },
		{ FAICombatStateConfig::StaticStruct, Z_Construct_UScriptStruct_FAICombatStateConfig_Statics::NewStructOps, TEXT("AICombatStateConfig"), &Z_Registration_Info_UScriptStruct_AICombatStateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAICombatStateConfig), 313810226U) },
		{ FConditions::StaticStruct, Z_Construct_UScriptStruct_FConditions_Statics::NewStructOps, TEXT("Conditions"), &Z_Registration_Info_UScriptStruct_Conditions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditions), 1314434686U) },
		{ FBaseUnit::StaticStruct, Z_Construct_UScriptStruct_FBaseUnit_Statics::NewStructOps, TEXT("BaseUnit"), &Z_Registration_Info_UScriptStruct_BaseUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseUnit), 1237690347U) },
		{ FAISpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FAISpawnInfo_Statics::NewStructOps, TEXT("AISpawnInfo"), &Z_Registration_Info_UScriptStruct_AISpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISpawnInfo), 3249338304U) },
		{ FWaveConfig::StaticStruct, Z_Construct_UScriptStruct_FWaveConfig_Statics::NewStructOps, TEXT("WaveConfig"), &Z_Registration_Info_UScriptStruct_WaveConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveConfig), 1951793475U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAITypes, UACFAITypes::StaticClass, TEXT("UACFAITypes"), &Z_Registration_Info_UClass_UACFAITypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAITypes), 535762006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_1544071074(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

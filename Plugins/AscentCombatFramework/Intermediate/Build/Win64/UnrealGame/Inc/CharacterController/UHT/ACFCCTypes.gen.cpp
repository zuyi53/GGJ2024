// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFCCTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCCTypes() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCCTypes();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCCTypes_NoRegister();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_EMovementStance();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ERotationMode();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FACFLocomotionState();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAimOffset();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterGroundInfo();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMovStances();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayConfig();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAcceleration();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConfiguration();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationMode;
	static UEnum* ERotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CharacterController_ERotationMode, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("ERotationMode"));
		}
		return Z_Registration_Info_UEnum_ERotationMode.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UEnum* StaticEnum<ERotationMode>()
	{
		return ERotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CharacterController_ERotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CharacterController_ERotationMode_Statics::Enumerators[] = {
		{ "ERotationMode::EForwardFacing", (int64)ERotationMode::EForwardFacing },
		{ "ERotationMode::EStrafing", (int64)ERotationMode::EStrafing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CharacterController_ERotationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "EForwardFacing.Comment", "/**\n *\n */" },
		{ "EForwardFacing.DisplayName", "ForwardFacing" },
		{ "EForwardFacing.Name", "ERotationMode::EForwardFacing" },
		{ "EStrafing.Comment", "/**\n *\n */" },
		{ "EStrafing.DisplayName", "Strafing" },
		{ "EStrafing.Name", "ERotationMode::EStrafing" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CharacterController_ERotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		"ERotationMode",
		"ERotationMode",
		Z_Construct_UEnum_CharacterController_ERotationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CharacterController_ERotationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CharacterController_ERotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CharacterController_ERotationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CharacterController_ERotationMode()
	{
		if (!Z_Registration_Info_UEnum_ERotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationMode.InnerSingleton, Z_Construct_UEnum_CharacterController_ERotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocomotionState;
	static UEnum* ELocomotionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CharacterController_ELocomotionState, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("ELocomotionState"));
		}
		return Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UEnum* StaticEnum<ELocomotionState>()
	{
		return ELocomotionState_StaticEnum();
	}
	struct Z_Construct_UEnum_CharacterController_ELocomotionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::Enumerators[] = {
		{ "ELocomotionState::EIdle", (int64)ELocomotionState::EIdle },
		{ "ELocomotionState::EWalk", (int64)ELocomotionState::EWalk },
		{ "ELocomotionState::EJog", (int64)ELocomotionState::EJog },
		{ "ELocomotionState::ESprint", (int64)ELocomotionState::ESprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIdle.DisplayName", "Idle" },
		{ "EIdle.Name", "ELocomotionState::EIdle" },
		{ "EJog.DisplayName", "Jog" },
		{ "EJog.Name", "ELocomotionState::EJog" },
		{ "ESprint.DisplayName", "Sprint" },
		{ "ESprint.Name", "ELocomotionState::ESprint" },
		{ "EWalk.DisplayName", "Walk" },
		{ "EWalk.Name", "ELocomotionState::EWalk" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		"ELocomotionState",
		"ELocomotionState",
		Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState()
	{
		if (!Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton, Z_Construct_UEnum_CharacterController_ELocomotionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementStance;
	static UEnum* EMovementStance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementStance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementStance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CharacterController_EMovementStance, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("EMovementStance"));
		}
		return Z_Registration_Info_UEnum_EMovementStance.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UEnum* StaticEnum<EMovementStance>()
	{
		return EMovementStance_StaticEnum();
	}
	struct Z_Construct_UEnum_CharacterController_EMovementStance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CharacterController_EMovementStance_Statics::Enumerators[] = {
		{ "EMovementStance::EIdle", (int64)EMovementStance::EIdle },
		{ "EMovementStance::EAiming", (int64)EMovementStance::EAiming },
		{ "EMovementStance::EBlock", (int64)EMovementStance::EBlock },
		{ "EMovementStance::ECustom", (int64)EMovementStance::ECustom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CharacterController_EMovementStance_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAiming.DisplayName", "Aiming" },
		{ "EAiming.Name", "EMovementStance::EAiming" },
		{ "EBlock.DisplayName", "Blocking" },
		{ "EBlock.Name", "EMovementStance::EBlock" },
		{ "ECustom.DisplayName", "Custom" },
		{ "ECustom.Name", "EMovementStance::ECustom" },
		{ "EIdle.DisplayName", "Idle" },
		{ "EIdle.Name", "EMovementStance::EIdle" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CharacterController_EMovementStance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		"EMovementStance",
		"EMovementStance",
		Z_Construct_UEnum_CharacterController_EMovementStance_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CharacterController_EMovementStance_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CharacterController_EMovementStance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CharacterController_EMovementStance_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CharacterController_EMovementStance()
	{
		if (!Z_Registration_Info_UEnum_EMovementStance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementStance.InnerSingleton, Z_Construct_UEnum_CharacterController_EMovementStance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementStance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AimOffset;
class UScriptStruct* FAimOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AimOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AimOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimOffset, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("AimOffset"));
	}
	return Z_Registration_Info_UScriptStruct_AimOffset.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FAimOffset>()
{
	return FAimOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAimOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetYaw_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetYaw = { "AimOffsetYaw", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimOffset, AimOffsetYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetYaw_MetaData), Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetPitch_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetPitch = { "AimOffsetPitch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimOffset, AimOffsetPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetPitch_MetaData), Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetPitch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimOffset_Statics::NewProp_AimOffsetPitch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"AimOffset",
		Z_Construct_UScriptStruct_FAimOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimOffset_Statics::PropPointers),
		sizeof(FAimOffset),
		alignof(FAimOffset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAimOffset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAimOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_AimOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AimOffset.InnerSingleton, Z_Construct_UScriptStruct_FAimOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AimOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterGroundInfo;
class UScriptStruct* FCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterGroundInfo, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("CharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterGroundInfo.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FCharacterGroundInfo>()
{
	return FCharacterGroundInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopePitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeRoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n *\x09Information about the ground under the character.\n */" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
		{ "ToolTip", "Information about the ground under the character." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterGroundInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData), Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterGroundInfo, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData), Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopePitch_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopePitch = { "SlopePitch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterGroundInfo, SlopePitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopePitch_MetaData), Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopePitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopeRoll_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopeRoll = { "SlopeRoll", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterGroundInfo, SlopeRoll), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopeRoll_MetaData), Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopeRoll_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_GroundDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewProp_SlopeRoll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"CharacterGroundInfo",
		Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::PropPointers),
		sizeof(FCharacterGroundInfo),
		alignof(FCharacterGroundInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterGroundInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterGroundInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterGroundInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovStances;
class UScriptStruct* FMovStances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovStances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovStances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovStances, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("MovStances"));
	}
	return Z_Registration_Info_UScriptStruct_MovStances.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FMovStances>()
{
	return FMovStances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovStances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_locomotionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_locomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_locomotionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovStances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovStances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovStances>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance = { "MovementStance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovStances, MovementStance), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance_MetaData), Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance_MetaData) }; // 234945340
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState = { "locomotionState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovStances, locomotionState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState_MetaData), Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState_MetaData) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovStances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_MovementStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovStances_Statics::NewProp_locomotionState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovStances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"MovStances",
		Z_Construct_UScriptStruct_FMovStances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovStances_Statics::PropPointers),
		sizeof(FMovStances),
		alignof(FMovStances),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovStances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovStances_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovStances_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovStances()
	{
		if (!Z_Registration_Info_UScriptStruct_MovStances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovStances.InnerSingleton, Z_Construct_UScriptStruct_FMovStances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovStances.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverlayConfig;
class UScriptStruct* FOverlayConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverlayConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverlayConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlayConfig, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("OverlayConfig"));
	}
	return Z_Registration_Info_UScriptStruct_OverlayConfig.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FOverlayConfig>()
{
	return FOverlayConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOverlayConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlayConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_OverlayAnim_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_OverlayAnim = { "OverlayAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayConfig, OverlayAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_OverlayAnim_MetaData), Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_OverlayAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayConfig, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendTime_MetaData), Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendAlpha_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendAlpha = { "BlendAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayConfig, BlendAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendAlpha_MetaData), Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendAlpha_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverlayConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_OverlayAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewProp_BlendAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlayConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"OverlayConfig",
		Z_Construct_UScriptStruct_FOverlayConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayConfig_Statics::PropPointers),
		sizeof(FOverlayConfig),
		alignof(FOverlayConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverlayConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOverlayConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_OverlayConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverlayConfig.InnerSingleton, Z_Construct_UScriptStruct_FOverlayConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OverlayConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFLocomotionState;
class UScriptStruct* FACFLocomotionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFLocomotionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFLocomotionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFLocomotionState, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("ACFLocomotionState"));
	}
	return Z_Registration_Info_UScriptStruct_ACFLocomotionState.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FACFLocomotionState>()
{
	return FACFLocomotionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFLocomotionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStateSwimSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStateSwimSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFLocomotionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFLocomotionState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFLocomotionState, State), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State_MetaData) }; // 377914807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSpeed_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSpeed = { "MaxStateSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFLocomotionState, MaxStateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSpeed_MetaData), Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSwimSpeed_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSwimSpeed = { "MaxStateSwimSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFLocomotionState, MaxStateSwimSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSwimSpeed_MetaData), Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSwimSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_StateModifier_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_StateModifier = { "StateModifier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFLocomotionState, StateModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_StateModifier_MetaData), Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_StateModifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_MaxStateSwimSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewProp_StateModifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFLocomotionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"ACFLocomotionState",
		Z_Construct_UScriptStruct_FACFLocomotionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::PropPointers),
		sizeof(FACFLocomotionState),
		alignof(FACFLocomotionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFLocomotionState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFLocomotionState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFLocomotionState()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFLocomotionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFLocomotionState.InnerSingleton, Z_Construct_UScriptStruct_FACFLocomotionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFLocomotionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedAcceleration;
class UScriptStruct* FReplicatedAcceleration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedAcceleration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedAcceleration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedAcceleration, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("ReplicatedAcceleration"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedAcceleration.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FReplicatedAcceleration>()
{
	return FReplicatedAcceleration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYRadians_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYRadians;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelZ_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AccelZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Compressed representation of acceleration\n */" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
		{ "ToolTip", "Compressed representation of acceleration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedAcceleration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYRadians = { "AccelXYRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplicatedAcceleration, AccelXYRadians), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData), Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData[] = {
		{ "Comment", "// Direction of XY accel component, quantized to represent [0, 2*pi]\n" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
		{ "ToolTip", "Direction of XY accel component, quantized to represent [0, 2*pi]" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude = { "AccelXYMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplicatedAcceleration, AccelXYMagnitude), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData), Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData[] = {
		{ "Comment", "// Accel rate of XY component, quantized to represent [0, MaxAcceleration]\n" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
		{ "ToolTip", "Accel rate of XY component, quantized to represent [0, MaxAcceleration]" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelZ = { "AccelZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplicatedAcceleration, AccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData), Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYRadians,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewProp_AccelZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"ReplicatedAcceleration",
		Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::PropPointers),
		sizeof(FReplicatedAcceleration),
		alignof(FReplicatedAcceleration),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAcceleration()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedAcceleration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedAcceleration.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedAcceleration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConfiguration;
class UScriptStruct* FSnapConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConfiguration, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("SnapConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConfiguration.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FSnapConfiguration>()
{
	return FSnapConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_preferredDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_preferredDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSnapMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSnapMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateSnapMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRateSnapMult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TO BE DEPRECATED\n" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
		{ "ToolTip", "TO BE DEPRECATED" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_target_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConfiguration, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_target_MetaData), Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_preferredDistance_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_preferredDistance = { "preferredDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConfiguration, preferredDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_preferredDistance_MetaData), Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_preferredDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_maxSnapMultiplier_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_maxSnapMultiplier = { "maxSnapMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConfiguration, maxSnapMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_maxSnapMultiplier_MetaData), Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_maxSnapMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_RotationRateSnapMult_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_RotationRateSnapMult = { "RotationRateSnapMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConfiguration, RotationRateSnapMult), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_RotationRateSnapMult_MetaData), Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_RotationRateSnapMult_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_preferredDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_maxSnapMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewProp_RotationRateSnapMult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		nullptr,
		&NewStructOps,
		"SnapConfiguration",
		Z_Construct_UScriptStruct_FSnapConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::PropPointers),
		sizeof(FSnapConfiguration),
		alignof(FSnapConfiguration),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapConfiguration_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConfiguration_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSnapConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FSnapConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapConfiguration.InnerSingleton;
	}
	void UACFCCTypes::StaticRegisterNativesUACFCCTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCCTypes);
	UClass* Z_Construct_UClass_UACFCCTypes_NoRegister()
	{
		return UACFCCTypes::StaticClass();
	}
	struct Z_Construct_UClass_UACFCCTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCCTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCCTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFCCTypes.h" },
		{ "ModuleRelativePath", "Public/ACFCCTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCCTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCCTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCCTypes_Statics::ClassParams = {
		&UACFCCTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCCTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFCCTypes()
	{
		if (!Z_Registration_Info_UClass_UACFCCTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCCTypes.OuterSingleton, Z_Construct_UClass_UACFCCTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCCTypes.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFCCTypes>()
	{
		return UACFCCTypes::StaticClass();
	}
	UACFCCTypes::UACFCCTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCCTypes);
	UACFCCTypes::~UACFCCTypes() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::EnumInfo[] = {
		{ ERotationMode_StaticEnum, TEXT("ERotationMode"), &Z_Registration_Info_UEnum_ERotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2125798087U) },
		{ ELocomotionState_StaticEnum, TEXT("ELocomotionState"), &Z_Registration_Info_UEnum_ELocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 377914807U) },
		{ EMovementStance_StaticEnum, TEXT("EMovementStance"), &Z_Registration_Info_UEnum_EMovementStance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 234945340U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::ScriptStructInfo[] = {
		{ FAimOffset::StaticStruct, Z_Construct_UScriptStruct_FAimOffset_Statics::NewStructOps, TEXT("AimOffset"), &Z_Registration_Info_UScriptStruct_AimOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAimOffset), 1247321248U) },
		{ FCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FCharacterGroundInfo_Statics::NewStructOps, TEXT("CharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_CharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterGroundInfo), 152149194U) },
		{ FMovStances::StaticStruct, Z_Construct_UScriptStruct_FMovStances_Statics::NewStructOps, TEXT("MovStances"), &Z_Registration_Info_UScriptStruct_MovStances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovStances), 2402003718U) },
		{ FOverlayConfig::StaticStruct, Z_Construct_UScriptStruct_FOverlayConfig_Statics::NewStructOps, TEXT("OverlayConfig"), &Z_Registration_Info_UScriptStruct_OverlayConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverlayConfig), 273665174U) },
		{ FACFLocomotionState::StaticStruct, Z_Construct_UScriptStruct_FACFLocomotionState_Statics::NewStructOps, TEXT("ACFLocomotionState"), &Z_Registration_Info_UScriptStruct_ACFLocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFLocomotionState), 3857924038U) },
		{ FReplicatedAcceleration::StaticStruct, Z_Construct_UScriptStruct_FReplicatedAcceleration_Statics::NewStructOps, TEXT("ReplicatedAcceleration"), &Z_Registration_Info_UScriptStruct_ReplicatedAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedAcceleration), 2490072173U) },
		{ FSnapConfiguration::StaticStruct, Z_Construct_UScriptStruct_FSnapConfiguration_Statics::NewStructOps, TEXT("SnapConfiguration"), &Z_Registration_Info_UScriptStruct_SnapConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConfiguration), 3355177848U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCCTypes, UACFCCTypes::StaticClass, TEXT("UACFCCTypes"), &Z_Registration_Info_UClass_UACFCCTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCCTypes), 2481214310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_3894352589(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

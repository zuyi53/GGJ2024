// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFActionTypes.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionTypes() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsSet_NoRegister();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFAttackTypes();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFAttackTypes_NoRegister();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction_NoRegister();
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EActionPriority();
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EMontageReproductionType();
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EWarpTargetType();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFMontageInfo();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFWarpInfo();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFWarpReproductionInfo();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionConfig();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionsArray();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionsSet();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionState();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSections();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue();
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FACFStruct();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FActionEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageReproductionType;
	static UEnum* EMontageReproductionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMontageReproductionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMontageReproductionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("EMontageReproductionType"));
		}
		return Z_Registration_Info_UEnum_EMontageReproductionType.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UEnum* StaticEnum<EMontageReproductionType>()
	{
		return EMontageReproductionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::Enumerators[] = {
		{ "EMontageReproductionType::ERootMotion", (int64)EMontageReproductionType::ERootMotion },
		{ "EMontageReproductionType::ERootMotionScaled", (int64)EMontageReproductionType::ERootMotionScaled },
		{ "EMontageReproductionType::EMotionWarped", (int64)EMontageReproductionType::EMotionWarped },
		{ "EMontageReproductionType::ECurveOverrideSpeed", (int64)EMontageReproductionType::ECurveOverrideSpeed },
		{ "EMontageReproductionType::ECurveSnapsOnTarget", (int64)EMontageReproductionType::ECurveSnapsOnTarget },
		{ "EMontageReproductionType::ECurveOverrideSpeedAndDirection", (int64)EMontageReproductionType::ECurveOverrideSpeedAndDirection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ECurveOverrideSpeed.Comment", "/**\n *\n */" },
		{ "ECurveOverrideSpeed.DisplayName", "Override Speed with Curve_DEPRECATED" },
		{ "ECurveOverrideSpeed.Name", "EMontageReproductionType::ECurveOverrideSpeed" },
		{ "ECurveOverrideSpeedAndDirection.Comment", "/**\n *\n */" },
		{ "ECurveOverrideSpeedAndDirection.DisplayName", "Override Speed and Direction Vector_DEPRECATED" },
		{ "ECurveOverrideSpeedAndDirection.Name", "EMontageReproductionType::ECurveOverrideSpeedAndDirection" },
		{ "ECurveSnapsOnTarget.Comment", "/**\n *\n */" },
		{ "ECurveSnapsOnTarget.DisplayName", "Override Speed and Snaps To Target_DEPRECATED" },
		{ "ECurveSnapsOnTarget.Name", "EMontageReproductionType::ECurveSnapsOnTarget" },
		{ "EMotionWarped.Comment", "/**\n *\n */" },
		{ "EMotionWarped.DisplayName", "Root Motion Warped" },
		{ "EMotionWarped.Name", "EMontageReproductionType::EMotionWarped" },
		{ "ERootMotion.Comment", "/**\n *\n */" },
		{ "ERootMotion.DisplayName", "Root Motion" },
		{ "ERootMotion.Name", "EMontageReproductionType::ERootMotion" },
		{ "ERootMotionScaled.Comment", "/**\n *\n */" },
		{ "ERootMotionScaled.DisplayName", "Root Motion Scaled" },
		{ "ERootMotionScaled.Name", "EMontageReproductionType::ERootMotionScaled" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		"EMontageReproductionType",
		"EMontageReproductionType",
		Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ActionsSystem_EMontageReproductionType()
	{
		if (!Z_Registration_Info_UEnum_EMontageReproductionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageReproductionType.InnerSingleton, Z_Construct_UEnum_ActionsSystem_EMontageReproductionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMontageReproductionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpTargetType;
	static UEnum* EWarpTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWarpTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWarpTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActionsSystem_EWarpTargetType, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("EWarpTargetType"));
		}
		return Z_Registration_Info_UEnum_EWarpTargetType.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UEnum* StaticEnum<EWarpTargetType>()
	{
		return EWarpTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::Enumerators[] = {
		{ "EWarpTargetType::ETargetTransform", (int64)EWarpTargetType::ETargetTransform },
		{ "EWarpTargetType::ETargetComponent", (int64)EWarpTargetType::ETargetComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETargetComponent.DisplayName", "Target Component" },
		{ "ETargetComponent.Name", "EWarpTargetType::ETargetComponent" },
		{ "ETargetTransform.DisplayName", "Target Transform" },
		{ "ETargetTransform.Name", "EWarpTargetType::ETargetTransform" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		"EWarpTargetType",
		"EWarpTargetType",
		Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ActionsSystem_EWarpTargetType()
	{
		if (!Z_Registration_Info_UEnum_EWarpTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpTargetType.InnerSingleton, Z_Construct_UEnum_ActionsSystem_EWarpTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWarpTargetType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFWarpInfo;
class UScriptStruct* FACFWarpInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFWarpInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFWarpInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFWarpInfo, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ACFWarpInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ACFWarpInfo.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FACFWarpInfo>()
{
	return FACFWarpInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFWarpInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoWarp_MetaData[];
#endif
		static void NewProp_bAutoWarp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoWarp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SyncPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpRotationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpRotationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxis_MetaData[];
#endif
		static void NewProp_bIgnoreZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMagneticFollow_MetaData[];
#endif
		static void NewProp_bMagneticFollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMagneticFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWarpDebug_MetaData[];
#endif
		static void NewProp_bShowWarpDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWarpDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFWarpInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Turn this off if you want to use the anim notify instead*/" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
		{ "ToolTip", "Turn this off if you want to use the anim notify instead" },
	};
#endif
	void Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp_SetBit(void* Obj)
	{
		((FACFWarpInfo*)Obj)->bAutoWarp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp = { "bAutoWarp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FACFWarpInfo), &Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_SyncPoint_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_SyncPoint = { "SyncPoint", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpInfo, SyncPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_SyncPoint_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_SyncPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpStartTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bAutoWarp == true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpStartTime = { "WarpStartTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpInfo, WarpStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpStartTime_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpEndTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bAutoWarp == true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpEndTime = { "WarpEndTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpInfo, WarpEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpEndTime_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpEndTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpRotationTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpRotationTime = { "WarpRotationTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpInfo, WarpRotationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpRotationTime_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpRotationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis_SetBit(void* Obj)
	{
		((FACFWarpInfo*)Obj)->bIgnoreZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis = { "bIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FACFWarpInfo), &Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpInfo, RotationType), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType_MetaData) }; // 3405007097
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpInfo, TargetType), Z_Construct_UEnum_ActionsSystem_EWarpTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType_MetaData) }; // 1028776541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "TargetType == EWarpTargetType::ETargetComponent" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow_SetBit(void* Obj)
	{
		((FACFWarpInfo*)Obj)->bMagneticFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow = { "bMagneticFollow", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FACFWarpInfo), &Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug_SetBit(void* Obj)
	{
		((FACFWarpInfo*)Obj)->bShowWarpDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug = { "bShowWarpDebug", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FACFWarpInfo), &Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug_MetaData), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFWarpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bAutoWarp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_SyncPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_WarpRotationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bIgnoreZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_RotationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bMagneticFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewProp_bShowWarpDebug,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFWarpInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		&NewStructOps,
		"ACFWarpInfo",
		Z_Construct_UScriptStruct_FACFWarpInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::PropPointers),
		sizeof(FACFWarpInfo),
		alignof(FACFWarpInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFWarpInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFWarpInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFWarpInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFWarpInfo.InnerSingleton, Z_Construct_UScriptStruct_FACFWarpInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFWarpInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo;
class UScriptStruct* FACFWarpReproductionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFWarpReproductionInfo, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ACFWarpReproductionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FACFWarpReproductionInfo>()
{
	return FACFWarpReproductionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFWarpReproductionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpConfig = { "WarpConfig", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpReproductionInfo, WarpConfig), Z_Construct_UScriptStruct_FACFWarpInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpConfig_MetaData), Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpConfig_MetaData) }; // 3108820739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpLocation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpLocation = { "WarpLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpReproductionInfo, WarpLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpLocation_MetaData), Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpRotation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpRotation = { "WarpRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpReproductionInfo, WarpRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpRotation_MetaData), Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFWarpReproductionInfo, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_TargetComponent_MetaData), Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_TargetComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_WarpRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewProp_TargetComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		&NewStructOps,
		"ACFWarpReproductionInfo",
		Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::PropPointers),
		sizeof(FACFWarpReproductionInfo),
		alignof(FACFWarpReproductionInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFWarpReproductionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo.InnerSingleton, Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFMontageInfo;
class UScriptStruct* FACFMontageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFMontageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFMontageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFMontageInfo, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ACFMontageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ACFMontageInfo.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FACFMontageInfo>()
{
	return FACFMontageInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFMontageInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReproductionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReproductionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReproductionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReproductionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReproductionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFMontageInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_MontageAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_MontageAction = { "MontageAction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFMontageInfo, MontageAction), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_MontageAction_MetaData), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_MontageAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionSpeed_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionSpeed = { "ReproductionSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFMontageInfo, ReproductionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionSpeed_MetaData), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_StartSectionName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFMontageInfo, StartSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_StartSectionName_MetaData), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_StartSectionName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType = { "ReproductionType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFMontageInfo, ReproductionType), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType_MetaData), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType_MetaData) }; // 3954621547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_RootMotionScale_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "MontageReproductionType == EMontageReproductionType::ERootMotionScaled" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_RootMotionScale = { "RootMotionScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFMontageInfo, RootMotionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_RootMotionScale_MetaData), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_RootMotionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_WarpInfo_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "MontageReproductionType == EMontageReproductionType::EMotionWarped" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_WarpInfo = { "WarpInfo", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFMontageInfo, WarpInfo), Z_Construct_UScriptStruct_FACFWarpReproductionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_WarpInfo_MetaData), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_WarpInfo_MetaData) }; // 1843774883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFMontageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_MontageAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_StartSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_ReproductionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_RootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewProp_WarpInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFMontageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		&NewStructOps,
		"ACFMontageInfo",
		Z_Construct_UScriptStruct_FACFMontageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::PropPointers),
		sizeof(FACFMontageInfo),
		alignof(FACFMontageInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFMontageInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFMontageInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFMontageInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFMontageInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFMontageInfo.InnerSingleton, Z_Construct_UScriptStruct_FACFMontageInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFMontageInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActionState>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FActionState cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionState;
class UScriptStruct* FActionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionState, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ActionState"));
	}
	return Z_Registration_Info_UScriptStruct_ActionState.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FActionState>()
{
	return FActionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MontageAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionState_Statics::NewProp_MontageAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActionState_Statics::NewProp_MontageAction = { "MontageAction", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionState, MontageAction), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionState_Statics::NewProp_MontageAction_MetaData), Z_Construct_UScriptStruct_FActionState_Statics::NewProp_MontageAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionState_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActionState_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionState, Action), Z_Construct_UClass_UACFBaseAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionState_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FActionState_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionState_Statics::NewProp_MontageAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionState_Statics::NewProp_Action,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"ActionState",
		Z_Construct_UScriptStruct_FActionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionState_Statics::PropPointers),
		sizeof(FActionState),
		alignof(FActionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionState()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionState.InnerSingleton, Z_Construct_UScriptStruct_FActionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActionsSet>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FActionsSet cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionsSet;
class UScriptStruct* FActionsSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionsSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionsSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionsSet, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ActionsSet"));
	}
	return Z_Registration_Info_UScriptStruct_ActionsSet.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FActionsSet>()
{
	return FActionsSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionsSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionsSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionsSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionsSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsSet_Statics::NewProp_ActionsSet_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActionsSet_Statics::NewProp_ActionsSet = { "ActionsSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionsSet, ActionsSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFActionsSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsSet_Statics::NewProp_ActionsSet_MetaData), Z_Construct_UScriptStruct_FActionsSet_Statics::NewProp_ActionsSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionsSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsSet_Statics::NewProp_ActionsSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionsSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"ActionsSet",
		Z_Construct_UScriptStruct_FActionsSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsSet_Statics::PropPointers),
		sizeof(FActionsSet),
		alignof(FActionsSet),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionsSet_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsSet_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionsSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionsSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionsSet.InnerSingleton, Z_Construct_UScriptStruct_FActionsSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionsSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneSections;
class UScriptStruct* FBoneSections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneSections.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneSections.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSections, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("BoneSections"));
	}
	return Z_Registration_Info_UScriptStruct_BoneSections.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FBoneSections>()
{
	return FBoneSections::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneSections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSections_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneSections_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSections>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSections, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_SectionName_MetaData), Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_SectionName_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSections, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames_MetaData), Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSections_Statics::NewProp_BoneNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneSections_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		&NewStructOps,
		"BoneSections",
		Z_Construct_UScriptStruct_FBoneSections_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSections_Statics::PropPointers),
		sizeof(FBoneSections),
		alignof(FBoneSections),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSections_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneSections_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSections_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoneSections()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneSections.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneSections.InnerSingleton, Z_Construct_UScriptStruct_FBoneSections_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneSections.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActionsArray>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FActionsArray cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionsArray;
class UScriptStruct* FActionsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionsArray, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ActionsArray"));
	}
	return Z_Registration_Info_UScriptStruct_ActionsArray.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FActionsArray>()
{
	return FActionsArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionsArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionsArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionsArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(0, nullptr) }; // 3894552089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
		{ "TitleProperty", "TagName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionsArray, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions_MetaData), Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions_MetaData) }; // 3894552089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsArray_Statics::NewProp_Actions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionsArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"ActionsArray",
		Z_Construct_UScriptStruct_FActionsArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsArray_Statics::PropPointers),
		sizeof(FActionsArray),
		alignof(FActionsArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionsArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionsArray()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionsArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionsArray.InnerSingleton, Z_Construct_UScriptStruct_FActionsArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionsArray.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionPriority;
	static UEnum* EActionPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActionPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActionPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActionsSystem_EActionPriority, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("EActionPriority"));
		}
		return Z_Registration_Info_UEnum_EActionPriority.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UEnum* StaticEnum<EActionPriority>()
	{
		return EActionPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::Enumerators[] = {
		{ "EActionPriority::ENone", (int64)EActionPriority::ENone },
		{ "EActionPriority::ELow", (int64)EActionPriority::ELow },
		{ "EActionPriority::EMedium", (int64)EActionPriority::EMedium },
		{ "EActionPriority::EHigh", (int64)EActionPriority::EHigh },
		{ "EActionPriority::EHighest", (int64)EActionPriority::EHighest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EHigh.DisplayName", "High" },
		{ "EHigh.Name", "EActionPriority::EHigh" },
		{ "EHighest.DisplayName", "Highest" },
		{ "EHighest.Name", "EActionPriority::EHighest" },
		{ "ELow.DisplayName", "Low" },
		{ "ELow.Name", "EActionPriority::ELow" },
		{ "EMedium.DisplayName", "Medium" },
		{ "EMedium.Name", "EActionPriority::EMedium" },
		{ "ENone.DisplayName", "Very Low" },
		{ "ENone.Name", "EActionPriority::ENone" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		"EActionPriority",
		"EActionPriority",
		Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ActionsSystem_EActionPriority()
	{
		if (!Z_Registration_Info_UEnum_EActionPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionPriority.InnerSingleton, Z_Construct_UEnum_ActionsSystem_EActionPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActionPriority.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionConfig;
class UScriptStruct* FActionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionConfig, (UObject*)Z_Construct_UPackage__Script_ActionsSystem(), TEXT("ActionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ActionConfig.OuterSingleton;
}
template<> ACTIONSSYSTEM_API UScriptStruct* StaticStruct<FActionConfig>()
{
	return FActionConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionCost_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionCost_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionCost;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Requirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExecute_MetaData[];
#endif
		static void NewProp_bAutoExecute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExecute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontageReproductionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageReproductionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontageReproductionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayRandomMontageSection_MetaData[];
#endif
		static void NewProp_bPlayRandomMontageSection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayRandomMontageSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopBehavioralThree_MetaData[];
#endif
		static void NewProp_bStopBehavioralThree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBehavioralThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayEffectOnActionStart_MetaData[];
#endif
		static void NewProp_bPlayEffectOnActionStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayEffectOnActionStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionEffect;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerformableInMovementModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformableInMovementModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerformableInMovementModes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartCooldown_MetaData[];
#endif
		static void NewProp_bAutoStartCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionConfig>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost_Inner = { "ActionCost", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost_MetaData[] = {
		{ "Category", "ACFStatConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost = { "ActionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, ActionCost), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost_MetaData) }; // 2111676830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements_Inner = { "Requirements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements_MetaData[] = {
		{ "Category", "ACFStatConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, Requirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements_MetaData) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RequiredLevel_MetaData[] = {
		{ "Category", "ACFStatConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RequiredLevel = { "RequiredLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, RequiredLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RequiredLevel_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RequiredLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_AttributeModifier_MetaData[] = {
		{ "Category", "ACFStatConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_AttributeModifier = { "AttributeModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, AttributeModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_AttributeModifier_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_AttributeModifier_MetaData) }; // 1351211516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "Comment", "// Decide if the montage of the action is played automatically or you'll need to\n// call ExecuteAction\n" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
		{ "ToolTip", "Decide if the montage of the action is played automatically or you'll need to\ncall ExecuteAction" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute_SetBit(void* Obj)
	{
		((FActionConfig*)Obj)->bAutoExecute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute = { "bAutoExecute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionConfig), &Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType = { "MontageReproductionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, MontageReproductionType), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType_MetaData) }; // 3954621547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RootMotionScale_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "EditCondition", "MontageReproductionType == EMontageReproductionType::ERootMotionScaled" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RootMotionScale = { "RootMotionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, RootMotionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RootMotionScale_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RootMotionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_WarpInfo_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "EditCondition", "MontageReproductionType == EMontageReproductionType::EMotionWarped" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_WarpInfo = { "WarpInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, WarpInfo), Z_Construct_UScriptStruct_FACFWarpInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_WarpInfo_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_WarpInfo_MetaData) }; // 3108820739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection_SetBit(void* Obj)
	{
		((FActionConfig*)Obj)->bPlayRandomMontageSection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection = { "bPlayRandomMontageSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionConfig), &Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "Comment", "/*Decide if we have to stop AIController's BT during this action*/" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
		{ "ToolTip", "Decide if we have to stop AIController's BT during this action" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree_SetBit(void* Obj)
	{
		((FActionConfig*)Obj)->bStopBehavioralThree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree = { "bStopBehavioralThree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionConfig), &Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart_MetaData[] = {
		{ "Category", "ACFAnimConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart_SetBit(void* Obj)
	{
		((FActionConfig*)Obj)->bPlayEffectOnActionStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart = { "bPlayEffectOnActionStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionConfig), &Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionEffect_MetaData[] = {
		{ "Category", "ACFActionConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionEffect = { "ActionEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, ActionEffect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionEffect_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionEffect_MetaData) }; // 2181620844
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes_Inner = { "PerformableInMovementModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 613518137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes_MetaData[] = {
		{ "Category", "ACFActionConfig" },
		{ "Comment", "//\n//     UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ACFActionConfig)\n//     bool bPerformableInAir = false;\n" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ACFActionConfig)\nbool bPerformableInAir = false;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes = { "PerformableInMovementModes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, PerformableInMovementModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes_MetaData) }; // 613518137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown_MetaData[] = {
		{ "Category", "ACFActionConfig" },
		{ "Comment", "/*Whether the cooldown should start automatically on actionStart. Otherwise you can still\n    call StartCooldown within the action blueprint*/" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
		{ "ToolTip", "Whether the cooldown should start automatically on actionStart. Otherwise you can still\n    call StartCooldown within the action blueprint" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown_SetBit(void* Obj)
	{
		((FActionConfig*)Obj)->bAutoStartCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown = { "bAutoStartCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionConfig), &Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_CoolDownTime_MetaData[] = {
		{ "Category", "ACFActionConfig" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionConfig, CoolDownTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_CoolDownTime_MetaData), Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_CoolDownTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_Requirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RequiredLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_AttributeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_MontageReproductionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_RootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_WarpInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayRandomMontageSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bStopBehavioralThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bPlayEffectOnActionStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_ActionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_PerformableInMovementModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_bAutoStartCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionConfig_Statics::NewProp_CoolDownTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
		nullptr,
		&NewStructOps,
		"ActionConfig",
		Z_Construct_UScriptStruct_FActionConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::PropPointers),
		sizeof(FActionConfig),
		alignof(FActionConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionConfig.InnerSingleton, Z_Construct_UScriptStruct_FActionConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionConfig.InnerSingleton;
	}
	void UACFAttackTypes::StaticRegisterNativesUACFAttackTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAttackTypes);
	UClass* Z_Construct_UClass_UACFAttackTypes_NoRegister()
	{
		return UACFAttackTypes::StaticClass();
	}
	struct Z_Construct_UClass_UACFAttackTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAttackTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFActionTypes.h" },
		{ "ModuleRelativePath", "Public/ACFActionTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAttackTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAttackTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAttackTypes_Statics::ClassParams = {
		&UACFAttackTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAttackTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFAttackTypes()
	{
		if (!Z_Registration_Info_UClass_UACFAttackTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAttackTypes.OuterSingleton, Z_Construct_UClass_UACFAttackTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAttackTypes.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFAttackTypes>()
	{
		return UACFAttackTypes::StaticClass();
	}
	UACFAttackTypes::UACFAttackTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAttackTypes);
	UACFAttackTypes::~UACFAttackTypes() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::EnumInfo[] = {
		{ EMontageReproductionType_StaticEnum, TEXT("EMontageReproductionType"), &Z_Registration_Info_UEnum_EMontageReproductionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3954621547U) },
		{ EWarpTargetType_StaticEnum, TEXT("EWarpTargetType"), &Z_Registration_Info_UEnum_EWarpTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1028776541U) },
		{ EActionPriority_StaticEnum, TEXT("EActionPriority"), &Z_Registration_Info_UEnum_EActionPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 675304996U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::ScriptStructInfo[] = {
		{ FACFWarpInfo::StaticStruct, Z_Construct_UScriptStruct_FACFWarpInfo_Statics::NewStructOps, TEXT("ACFWarpInfo"), &Z_Registration_Info_UScriptStruct_ACFWarpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFWarpInfo), 3108820739U) },
		{ FACFWarpReproductionInfo::StaticStruct, Z_Construct_UScriptStruct_FACFWarpReproductionInfo_Statics::NewStructOps, TEXT("ACFWarpReproductionInfo"), &Z_Registration_Info_UScriptStruct_ACFWarpReproductionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFWarpReproductionInfo), 1843774883U) },
		{ FACFMontageInfo::StaticStruct, Z_Construct_UScriptStruct_FACFMontageInfo_Statics::NewStructOps, TEXT("ACFMontageInfo"), &Z_Registration_Info_UScriptStruct_ACFMontageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFMontageInfo), 3920625168U) },
		{ FActionState::StaticStruct, Z_Construct_UScriptStruct_FActionState_Statics::NewStructOps, TEXT("ActionState"), &Z_Registration_Info_UScriptStruct_ActionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionState), 3894552089U) },
		{ FActionsSet::StaticStruct, Z_Construct_UScriptStruct_FActionsSet_Statics::NewStructOps, TEXT("ActionsSet"), &Z_Registration_Info_UScriptStruct_ActionsSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionsSet), 1774918187U) },
		{ FBoneSections::StaticStruct, Z_Construct_UScriptStruct_FBoneSections_Statics::NewStructOps, TEXT("BoneSections"), &Z_Registration_Info_UScriptStruct_BoneSections, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneSections), 3243565428U) },
		{ FActionsArray::StaticStruct, Z_Construct_UScriptStruct_FActionsArray_Statics::NewStructOps, TEXT("ActionsArray"), &Z_Registration_Info_UScriptStruct_ActionsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionsArray), 1831664142U) },
		{ FActionConfig::StaticStruct, Z_Construct_UScriptStruct_FActionConfig_Statics::NewStructOps, TEXT("ActionConfig"), &Z_Registration_Info_UScriptStruct_ActionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionConfig), 1412304444U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAttackTypes, UACFAttackTypes::StaticClass, TEXT("UACFAttackTypes"), &Z_Registration_Info_UClass_UACFAttackTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAttackTypes), 720257414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_1030462286(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMTypes() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMCameraSplineComponent_NoRegister();
	CINEMATICCAMERAMANAGER_API UEnum* Z_Construct_UEnum_CinematicCameraManager_ELockType();
	CINEMATICCAMERAMANAGER_API UEnum* Z_Construct_UEnum_CinematicCameraManager_ETargetLockType();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraMovementSettings();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraSequenceSettings();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMSequenceEvent();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References

static_assert(std::is_polymorphic<FCCMCameraMovementSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCCMCameraMovementSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings;
class UScriptStruct* FCCMCameraMovementSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCCMCameraMovementSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCameraManager(), TEXT("CCMCameraMovementSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings.OuterSingleton;
}
template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<FCCMCameraMovementSettings>()
{
	return FCCMCameraMovementSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FovInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FovInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShakeLooping_MetaData[];
#endif
		static void NewProp_bShakeLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShakeLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCCMCameraMovementSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraMovementSettings, CameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_CameraOffset_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_CameraOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraMovementSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_InterpSpeed_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_InterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FovInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FovInterpSpeed = { "FovInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraMovementSettings, FovInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FovInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FovInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraMovementSettings, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FOV_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_Shake_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraMovementSettings, Shake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_Shake_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_Shake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_ShakeIntensity_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bIsWorldShaking" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_ShakeIntensity = { "ShakeIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraMovementSettings, ShakeIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_ShakeIntensity_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_ShakeIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping_SetBit(void* Obj)
	{
		((FCCMCameraMovementSettings*)Obj)->bShakeLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping = { "bShakeLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCCMCameraMovementSettings), &Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping_MetaData), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_CameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FovInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_Shake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_ShakeIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewProp_bShakeLooping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CCMCameraMovementSettings",
		Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::PropPointers),
		sizeof(FCCMCameraMovementSettings),
		alignof(FCCMCameraMovementSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraMovementSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings.InnerSingleton, Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurrentSequence;
class UScriptStruct* FCurrentSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurrentSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurrentSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrentSequence, (UObject*)Z_Construct_UPackage__Script_CinematicCameraManager(), TEXT("CurrentSequence"));
	}
	return Z_Registration_Info_UScriptStruct_CurrentSequence.OuterSingleton;
}
template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<FCurrentSequence>()
{
	return FCurrentSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurrentSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSequenceComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraSequenceComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSplinePos_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSplinePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrentSequence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_cameraSequenceComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_cameraSequenceComp = { "cameraSequenceComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentSequence, cameraSequenceComp), Z_Construct_UClass_UCCMCameraSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_cameraSequenceComp_MetaData), Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_cameraSequenceComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentTime_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentSequence, currentTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentTime_MetaData), Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentSplinePos_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentSplinePos = { "currentSplinePos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentSequence, currentSplinePos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentSplinePos_MetaData), Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentSplinePos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrentSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_cameraSequenceComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewProp_currentSplinePos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrentSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
		nullptr,
		&NewStructOps,
		"CurrentSequence",
		Z_Construct_UScriptStruct_FCurrentSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentSequence_Statics::PropPointers),
		sizeof(FCurrentSequence),
		alignof(FCurrentSequence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentSequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurrentSequence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentSequence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCurrentSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_CurrentSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurrentSequence.InnerSingleton, Z_Construct_UScriptStruct_FCurrentSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurrentSequence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CCMSequenceEvent;
class UScriptStruct* FCCMSequenceEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CCMSequenceEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CCMSequenceEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCCMSequenceEvent, (UObject*)Z_Construct_UPackage__Script_CinematicCameraManager(), TEXT("CCMSequenceEvent"));
	}
	return Z_Registration_Info_UScriptStruct_CCMSequenceEvent.OuterSingleton;
}
template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<FCCMSequenceEvent>()
{
	return FCCMSequenceEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditCameraSpeed_MetaData[];
#endif
		static void NewProp_bEditCameraSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditCameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditFov_MetaData[];
#endif
		static void NewProp_bEditFov_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditFov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFovOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFovOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FovOffsetInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FovOffsetInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwitchLookAt_MetaData[];
#endif
		static void NewProp_bSwitchLookAt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchLookAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChangeTimeDilation_MetaData[];
#endif
		static void NewProp_bChangeTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangeTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilatation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilatation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCCMSequenceEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed_SetBit(void* Obj)
	{
		((FCCMSequenceEvent*)Obj)->bEditCameraSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed = { "bEditCameraSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCCMSequenceEvent), &Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bEditCameraSpeed" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMSequenceEvent, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraSpeed_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov_SetBit(void* Obj)
	{
		((FCCMSequenceEvent*)Obj)->bEditFov = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov = { "bEditFov", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCCMSequenceEvent), &Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraFovOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bEditFov" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraFovOffset = { "CameraFovOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMSequenceEvent, CameraFovOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraFovOffset_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraFovOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_FovOffsetInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bEditFov" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_FovOffsetInterpSpeed = { "FovOffsetInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMSequenceEvent, FovOffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_FovOffsetInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_FovOffsetInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt_SetBit(void* Obj)
	{
		((FCCMSequenceEvent*)Obj)->bSwitchLookAt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt = { "bSwitchLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCCMSequenceEvent), &Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtPoint_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bSwitchLookAt" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtPoint = { "LookAtPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMSequenceEvent, LookAtPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtPoint_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtRotationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bSwitchLookAt" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtRotationSpeed = { "LookAtRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMSequenceEvent, LookAtRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtRotationSpeed_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtRotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation_SetBit(void* Obj)
	{
		((FCCMSequenceEvent*)Obj)->bChangeTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation = { "bChangeTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCCMSequenceEvent), &Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_TimeDilatation_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bChangeTimeDilation" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_TimeDilatation = { "TimeDilatation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMSequenceEvent, TimeDilatation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_TimeDilatation_MetaData), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_TimeDilatation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditCameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bEditFov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_CameraFovOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_FovOffsetInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bSwitchLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_LookAtRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_bChangeTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewProp_TimeDilatation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
		nullptr,
		&NewStructOps,
		"CCMSequenceEvent",
		Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::PropPointers),
		sizeof(FCCMSequenceEvent),
		alignof(FCCMSequenceEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCCMSequenceEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_CCMSequenceEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CCMSequenceEvent.InnerSingleton, Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CCMSequenceEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCCMCameraSequenceSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCCMCameraSequenceSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings;
class UScriptStruct* FCCMCameraSequenceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCameraManager(), TEXT("CCMCameraSequenceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings.OuterSingleton;
}
template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<FCCMCameraSequenceSettings>()
{
	return FCCMCameraSequenceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationsSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationsSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FovInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FovInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAtActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAtActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilatation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilatation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSettingsTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendSettingsTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutBlendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutBlendSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCCMCameraSequenceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraSpeed_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraRotationsSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraRotationsSpeed = { "CameraRotationsSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, CameraRotationsSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraRotationsSpeed_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraRotationsSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraFov_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraFov = { "CameraFov", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, CameraFov), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraFov_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraFov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_FovInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_FovInterpSpeed = { "FovInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, FovInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_FovInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_FovInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_lookAtActor_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_lookAtActor = { "lookAtActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, lookAtActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_lookAtActor_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_lookAtActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_LookAtPoint_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_LookAtPoint = { "LookAtPoint", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, LookAtPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_LookAtPoint_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_LookAtPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_TimeDilatation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_TimeDilatation = { "TimeDilatation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, TimeDilatation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_TimeDilatation_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_TimeDilatation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_BlendSettingsTime_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_BlendSettingsTime = { "BlendSettingsTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, BlendSettingsTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_BlendSettingsTime_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_BlendSettingsTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_OutBlendSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_OutBlendSettings = { "OutBlendSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCCMCameraSequenceSettings, OutBlendSettings), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_OutBlendSettings_MetaData), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_OutBlendSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraRotationsSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_CameraFov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_FovInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_lookAtActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_LookAtPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_TimeDilatation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_BlendSettingsTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewProp_OutBlendSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CCMCameraSequenceSettings",
		Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::PropPointers),
		sizeof(FCCMCameraSequenceSettings),
		alignof(FCCMCameraSequenceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraSequenceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings.InnerSingleton, Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELockType;
	static UEnum* ELockType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELockType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CinematicCameraManager_ELockType, (UObject*)Z_Construct_UPackage__Script_CinematicCameraManager(), TEXT("ELockType"));
		}
		return Z_Registration_Info_UEnum_ELockType.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UEnum* StaticEnum<ELockType>()
	{
		return ELockType_StaticEnum();
	}
	struct Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::Enumerators[] = {
		{ "ELockType::EYawOnly", (int64)ELockType::EYawOnly },
		{ "ELockType::EAllAxis", (int64)ELockType::EAllAxis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAllAxis.DisplayName", "Lock Yaw And Pitch" },
		{ "EAllAxis.Name", "ELockType::EAllAxis" },
		{ "EYawOnly.DisplayName", "Only Lock Yaw" },
		{ "EYawOnly.Name", "ELockType::EYawOnly" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CinematicCameraManager,
		nullptr,
		"ELockType",
		"ELockType",
		Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CinematicCameraManager_ELockType()
	{
		if (!Z_Registration_Info_UEnum_ELockType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELockType.InnerSingleton, Z_Construct_UEnum_CinematicCameraManager_ELockType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELockType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetLockType;
	static UEnum* ETargetLockType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetLockType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetLockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CinematicCameraManager_ETargetLockType, (UObject*)Z_Construct_UPackage__Script_CinematicCameraManager(), TEXT("ETargetLockType"));
		}
		return Z_Registration_Info_UEnum_ETargetLockType.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UEnum* StaticEnum<ETargetLockType>()
	{
		return ETargetLockType_StaticEnum();
	}
	struct Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::Enumerators[] = {
		{ "ETargetLockType::ENone", (int64)ETargetLockType::ENone },
		{ "ETargetLockType::EActor", (int64)ETargetLockType::EActor },
		{ "ETargetLockType::EComponent", (int64)ETargetLockType::EComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EActor.Name", "ETargetLockType::EActor" },
		{ "EComponent.Name", "ETargetLockType::EComponent" },
		{ "ENone.Name", "ETargetLockType::ENone" },
		{ "ModuleRelativePath", "Public/CCMTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CinematicCameraManager,
		nullptr,
		"ETargetLockType",
		"ETargetLockType",
		Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CinematicCameraManager_ETargetLockType()
	{
		if (!Z_Registration_Info_UEnum_ETargetLockType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetLockType.InnerSingleton, Z_Construct_UEnum_CinematicCameraManager_ETargetLockType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetLockType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics::EnumInfo[] = {
		{ ELockType_StaticEnum, TEXT("ELockType"), &Z_Registration_Info_UEnum_ELockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2423666668U) },
		{ ETargetLockType_StaticEnum, TEXT("ETargetLockType"), &Z_Registration_Info_UEnum_ETargetLockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3532725755U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics::ScriptStructInfo[] = {
		{ FCCMCameraMovementSettings::StaticStruct, Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics::NewStructOps, TEXT("CCMCameraMovementSettings"), &Z_Registration_Info_UScriptStruct_CCMCameraMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCCMCameraMovementSettings), 3274307025U) },
		{ FCurrentSequence::StaticStruct, Z_Construct_UScriptStruct_FCurrentSequence_Statics::NewStructOps, TEXT("CurrentSequence"), &Z_Registration_Info_UScriptStruct_CurrentSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurrentSequence), 1053218227U) },
		{ FCCMSequenceEvent::StaticStruct, Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics::NewStructOps, TEXT("CCMSequenceEvent"), &Z_Registration_Info_UScriptStruct_CCMSequenceEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCCMSequenceEvent), 584148919U) },
		{ FCCMCameraSequenceSettings::StaticStruct, Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics::NewStructOps, TEXT("CCMCameraSequenceSettings"), &Z_Registration_Info_UScriptStruct_CCMCameraSequenceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCCMCameraSequenceSettings), 2134631071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_1096414794(TEXT("/Script/CinematicCameraManager"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

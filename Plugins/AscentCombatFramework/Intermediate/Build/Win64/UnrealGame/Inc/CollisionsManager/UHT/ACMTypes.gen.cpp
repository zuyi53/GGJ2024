// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollisionsManager/Public/ACMTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMTypes() {}
// Cross Module References
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMTypes();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMTypes_NoRegister();
	COLLISIONSMANAGER_API UEnum* Z_Construct_UEnum_CollisionsManager_EDamageType();
	COLLISIONSMANAGER_API UEnum* Z_Construct_UEnum_CollisionsManager_EDebugType();
	COLLISIONSMANAGER_API UEnum* Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FActionEffect();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FAreaDamageInfo();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFX();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTraceInfo();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FHitActors();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactFX();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactsArray();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialImpactFX();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FTraceInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CollisionsManager();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AreaDamageInfo;
class UScriptStruct* FAreaDamageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AreaDamageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AreaDamageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAreaDamageInfo, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("AreaDamageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AreaDamageInfo.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FAreaDamageInfo>()
{
	return FAreaDamageInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAreaDamageInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaLoopTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaLoopTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAreaDamageInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAreaDamageInfo, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAreaDamageInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FAreaDamageInfo*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAreaDamageInfo), &Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive_MetaData), Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_AreaLoopTimer_MetaData[] = {
		{ "Comment", "// Timer used to handle looping damage\n" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
		{ "ToolTip", "Timer used to handle looping damage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_AreaLoopTimer = { "AreaLoopTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAreaDamageInfo, AreaLoopTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_AreaLoopTimer_MetaData), Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_AreaLoopTimer_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewProp_AreaLoopTimer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		&NewStructOps,
		"AreaDamageInfo",
		Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::PropPointers),
		sizeof(FAreaDamageInfo),
		alignof(FAreaDamageInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAreaDamageInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AreaDamageInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AreaDamageInfo.InnerSingleton, Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AreaDamageInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitActors;
class UScriptStruct* FHitActors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitActors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitActors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitActors, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("HitActors"));
	}
	return Z_Registration_Info_UScriptStruct_HitActors.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FHitActors>()
{
	return FHitActors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AlreadyHitActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyHitActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlreadyHitActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitActors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitActors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitActors>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors_Inner = { "AlreadyHitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors = { "AlreadyHitActors", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitActors, AlreadyHitActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors_MetaData), Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitActors_Statics::NewProp_AlreadyHitActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitActors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		&NewStructOps,
		"HitActors",
		Z_Construct_UScriptStruct_FHitActors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitActors_Statics::PropPointers),
		sizeof(FHitActors),
		alignof(FHitActors),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitActors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHitActors_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitActors_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHitActors()
	{
		if (!Z_Registration_Info_UScriptStruct_HitActors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitActors.InnerSingleton, Z_Construct_UScriptStruct_FHitActors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitActors.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugType;
	static UEnum* EDebugType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDebugType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDebugType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CollisionsManager_EDebugType, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("EDebugType"));
		}
		return Z_Registration_Info_UEnum_EDebugType.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UEnum* StaticEnum<EDebugType>()
	{
		return EDebugType_StaticEnum();
	}
	struct Z_Construct_UEnum_CollisionsManager_EDebugType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::Enumerators[] = {
		{ "EDebugType::EDontShowDebugInfos", (int64)EDebugType::EDontShowDebugInfos },
		{ "EDebugType::EShowInfoDuringSwing", (int64)EDebugType::EShowInfoDuringSwing },
		{ "EDebugType::EAlwaysShowDebug", (int64)EDebugType::EAlwaysShowDebug },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAlwaysShowDebug.DisplayName", "Always Show Debug Info" },
		{ "EAlwaysShowDebug.Name", "EDebugType::EAlwaysShowDebug" },
		{ "EDontShowDebugInfos.DisplayName", "Don't Show Debug Info" },
		{ "EDontShowDebugInfos.Name", "EDebugType::EDontShowDebugInfos" },
		{ "EShowInfoDuringSwing.DisplayName", "Show Info During Swing" },
		{ "EShowInfoDuringSwing.Name", "EDebugType::EShowInfoDuringSwing" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		"EDebugType",
		"EDebugType",
		Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CollisionsManager_EDebugType()
	{
		if (!Z_Registration_Info_UEnum_EDebugType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugType.InnerSingleton, Z_Construct_UEnum_CollisionsManager_EDebugType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDebugType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
	static UEnum* EDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CollisionsManager_EDamageType, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("EDamageType"));
		}
		return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_CollisionsManager_EDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::Enumerators[] = {
		{ "EDamageType::EPoint", (int64)EDamageType::EPoint },
		{ "EDamageType::EArea", (int64)EDamageType::EArea },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EArea.DisplayName", "Area Damage" },
		{ "EArea.Name", "EDamageType::EArea" },
		{ "EPoint.DisplayName", "Point Damage" },
		{ "EPoint.Name", "EDamageType::EPoint" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		"EDamageType",
		"EDamageType",
		Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CollisionsManager_EDamageType()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_CollisionsManager_EDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnFXLocation;
	static UEnum* ESpawnFXLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpawnFXLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpawnFXLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("ESpawnFXLocation"));
		}
		return Z_Registration_Info_UEnum_ESpawnFXLocation.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UEnum* StaticEnum<ESpawnFXLocation>()
	{
		return ESpawnFXLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::Enumerators[] = {
		{ "ESpawnFXLocation::ESpawnOnActorLocation", (int64)ESpawnFXLocation::ESpawnOnActorLocation },
		{ "ESpawnFXLocation::ESpawnAttachedToSocketOrBone", (int64)ESpawnFXLocation::ESpawnAttachedToSocketOrBone },
		{ "ESpawnFXLocation::ESpawnAtLocation", (int64)ESpawnFXLocation::ESpawnAtLocation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESpawnAtLocation.DisplayName", "Spawn On Provided Tranform" },
		{ "ESpawnAtLocation.Name", "ESpawnFXLocation::ESpawnAtLocation" },
		{ "ESpawnAttachedToSocketOrBone.DisplayName", "Attached to Socket / Bone" },
		{ "ESpawnAttachedToSocketOrBone.Name", "ESpawnFXLocation::ESpawnAttachedToSocketOrBone" },
		{ "ESpawnOnActorLocation.DisplayName", "Attached to Actor" },
		{ "ESpawnOnActorLocation.Name", "ESpawnFXLocation::ESpawnOnActorLocation" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		"ESpawnFXLocation",
		"ESpawnFXLocation",
		Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation()
	{
		if (!Z_Registration_Info_UEnum_ESpawnFXLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnFXLocation.InnerSingleton, Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpawnFXLocation.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBaseFX>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBaseFX cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseFX;
class UScriptStruct* FBaseFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseFX, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("BaseFX"));
	}
	return Z_Registration_Info_UScriptStruct_BaseFX.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FBaseFX>()
{
	return FBaseFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionSound_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionSound = { "ActionSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseFX, ActionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionSound_MetaData), Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_NiagaraParticle_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_NiagaraParticle = { "NiagaraParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseFX, NiagaraParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_NiagaraParticle_MetaData), Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_NiagaraParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionParticle_MetaData[] = {
		{ "Category", "ACF" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USE NIAGARA PARTICLE!!" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionParticle = { "ActionParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseFX, ActionParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionParticle_MetaData), Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionParticle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_NiagaraParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseFX_Statics::NewProp_ActionParticle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BaseFX",
		Z_Construct_UScriptStruct_FBaseFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFX_Statics::PropPointers),
		sizeof(FBaseFX),
		alignof(FBaseFX),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseFX_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFX_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseFX()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseFX.InnerSingleton, Z_Construct_UScriptStruct_FBaseFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseFX.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActionEffect>() == std::is_polymorphic<FBaseFX>(), "USTRUCT FActionEffect cannot be polymorphic unless super FBaseFX is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionEffect;
class UScriptStruct* FActionEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionEffect, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("ActionEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActionEffect.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FActionEffect>()
{
	return FActionEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseEmitted_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseEmitted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionEffect>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionEffect, SpawnLocation), Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation_MetaData), Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation_MetaData) }; // 2040338089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SocketOrBoneName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SocketOrBoneName = { "SocketOrBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionEffect, SocketOrBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SocketOrBoneName_MetaData), Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SocketOrBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_NoiseEmitted_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_NoiseEmitted = { "NoiseEmitted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionEffect, NoiseEmitted), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_NoiseEmitted_MetaData), Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_NoiseEmitted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionEffect, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_RelativeOffset_MetaData), Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_RelativeOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_SocketOrBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_NoiseEmitted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionEffect_Statics::NewProp_RelativeOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		Z_Construct_UScriptStruct_FBaseFX,
		&NewStructOps,
		"ActionEffect",
		Z_Construct_UScriptStruct_FActionEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::PropPointers),
		sizeof(FActionEffect),
		alignof(FActionEffect),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionEffect_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionEffect_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionEffect.InnerSingleton, Z_Construct_UScriptStruct_FActionEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionEffect.InnerSingleton;
	}

static_assert(std::is_polymorphic<FImpactFX>() == std::is_polymorphic<FBaseFX>(), "USTRUCT FImpactFX cannot be polymorphic unless super FBaseFX is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImpactFX;
class UScriptStruct* FImpactFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImpactFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImpactFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactFX, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("ImpactFX"));
	}
	return Z_Registration_Info_UScriptStruct_ImpactFX.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FImpactFX>()
{
	return FImpactFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImpactFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactFX_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImpactFX_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactFX, SpawnLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactFX_Statics::NewProp_SpawnLocation_MetaData), Z_Construct_UScriptStruct_FImpactFX_Statics::NewProp_SpawnLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactFX_Statics::NewProp_SpawnLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		Z_Construct_UScriptStruct_FBaseFX,
		&NewStructOps,
		"ImpactFX",
		Z_Construct_UScriptStruct_FImpactFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactFX_Statics::PropPointers),
		sizeof(FImpactFX),
		alignof(FImpactFX),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactFX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImpactFX_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactFX_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FImpactFX()
	{
		if (!Z_Registration_Info_UScriptStruct_ImpactFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImpactFX.InnerSingleton, Z_Construct_UScriptStruct_FImpactFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImpactFX.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialImpactFX>() == std::is_polymorphic<FBaseFX>(), "USTRUCT FMaterialImpactFX cannot be polymorphic unless super FBaseFX is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialImpactFX;
class UScriptStruct* FMaterialImpactFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialImpactFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialImpactFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialImpactFX, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("MaterialImpactFX"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialImpactFX.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FMaterialImpactFX>()
{
	return FMaterialImpactFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialImpactFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialImpactFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewProp_ImpactMaterial_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewProp_ImpactMaterial = { "ImpactMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialImpactFX, ImpactMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewProp_ImpactMaterial_MetaData), Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewProp_ImpactMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewProp_ImpactMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		Z_Construct_UScriptStruct_FBaseFX,
		&NewStructOps,
		"MaterialImpactFX",
		Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::PropPointers),
		sizeof(FMaterialImpactFX),
		alignof(FMaterialImpactFX),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialImpactFX()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialImpactFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialImpactFX.InnerSingleton, Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialImpactFX.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImpactsArray;
class UScriptStruct* FImpactsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImpactsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImpactsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactsArray, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("ImpactsArray"));
	}
	return Z_Registration_Info_UScriptStruct_ImpactsArray.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FImpactsArray>()
{
	return FImpactsArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImpactsArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactsFX_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactsFX_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImpactsFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactsArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactsArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactsArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX_Inner = { "ImpactsFX", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialImpactFX, METADATA_PARAMS(0, nullptr) }; // 2532374234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX = { "ImpactsFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactsArray, ImpactsFX), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX_MetaData), Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX_MetaData) }; // 2532374234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactsArray_Statics::NewProp_ImpactsFX,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactsArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		&NewStructOps,
		"ImpactsArray",
		Z_Construct_UScriptStruct_FImpactsArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactsArray_Statics::PropPointers),
		sizeof(FImpactsArray),
		alignof(FImpactsArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactsArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImpactsArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactsArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FImpactsArray()
	{
		if (!Z_Registration_Info_UScriptStruct_ImpactsArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImpactsArray.InnerSingleton, Z_Construct_UScriptStruct_FImpactsArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImpactsArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseTraceInfo;
class UScriptStruct* FBaseTraceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseTraceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseTraceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseTraceInfo, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("BaseTraceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BaseTraceInfo.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FBaseTraceInfo>()
{
	return FBaseTraceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseTraceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseTraceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "ACM" },
		{ "Comment", "/** The type of damage applied*/" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
		{ "ToolTip", "The type of damage applied" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseTraceInfo, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageTypeClass_MetaData), Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageTypeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "ACM" },
		{ "Comment", "/** The base damage to apply to the actor (Can be modified in you TakeDamage Implementation)*/" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
		{ "ToolTip", "The base damage to apply to the actor (Can be modified in you TakeDamage Implementation)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseTraceInfo, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_BaseDamage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "ACM" },
		{ "Comment", "/** Select if it's Area or Point Damage*/" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
		{ "ToolTip", "Select if it's Area or Point Damage" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseTraceInfo, DamageType), Z_Construct_UEnum_CollisionsManager_EDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType_MetaData), Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType_MetaData) }; // 2342280817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewProp_DamageType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		nullptr,
		&NewStructOps,
		"BaseTraceInfo",
		Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::PropPointers),
		sizeof(FBaseTraceInfo),
		alignof(FBaseTraceInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseTraceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseTraceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseTraceInfo.InnerSingleton, Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseTraceInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTraceInfo>() == std::is_polymorphic<FBaseTraceInfo>(), "USTRUCT FTraceInfo cannot be polymorphic unless super FBaseTraceInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceInfo;
class UScriptStruct* FTraceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceInfo, (UObject*)Z_Construct_UPackage__Script_CollisionsManager(), TEXT("TraceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TraceInfo.OuterSingleton;
}
template<> COLLISIONSMANAGER_API UScriptStruct* StaticStruct<FTraceInfo>()
{
	return FTraceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTraceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraTrail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraTrail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrossframeAccuracy_MetaData[];
#endif
		static void NewProp_bCrossframeAccuracy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrossframeAccuracy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_TrailLength_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_TrailLength = { "TrailLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, TrailLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_TrailLength_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_TrailLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackSound_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackSound = { "AttackSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, AttackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackSound_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackParticle_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackParticle = { "AttackParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, AttackParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackParticle_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_NiagaraTrail_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_NiagaraTrail = { "NiagaraTrail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, NiagaraTrail), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_NiagaraTrail_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_NiagaraTrail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_StartSocket_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_StartSocket = { "StartSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, StartSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_StartSocket_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_StartSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_EndSocket_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_EndSocket = { "EndSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceInfo, EndSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_EndSocket_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_EndSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy_SetBit(void* Obj)
	{
		((FTraceInfo*)Obj)->bCrossframeAccuracy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy = { "bCrossframeAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceInfo), &Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy_MetaData), Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_TrailLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_AttackParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_NiagaraTrail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_StartSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_EndSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceInfo_Statics::NewProp_bCrossframeAccuracy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
		Z_Construct_UScriptStruct_FBaseTraceInfo,
		&NewStructOps,
		"TraceInfo",
		Z_Construct_UScriptStruct_FTraceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::PropPointers),
		sizeof(FTraceInfo),
		alignof(FTraceInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTraceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TraceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceInfo.InnerSingleton, Z_Construct_UScriptStruct_FTraceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TraceInfo.InnerSingleton;
	}
	void UACMTypes::StaticRegisterNativesUACMTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMTypes);
	UClass* Z_Construct_UClass_UACMTypes_NoRegister()
	{
		return UACMTypes::StaticClass();
	}
	struct Z_Construct_UClass_UACMTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACMTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACMTypes.h" },
		{ "ModuleRelativePath", "Public/ACMTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACMTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMTypes_Statics::ClassParams = {
		&UACMTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACMTypes()
	{
		if (!Z_Registration_Info_UClass_UACMTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMTypes.OuterSingleton, Z_Construct_UClass_UACMTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACMTypes.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UClass* StaticClass<UACMTypes>()
	{
		return UACMTypes::StaticClass();
	}
	UACMTypes::UACMTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACMTypes);
	UACMTypes::~UACMTypes() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::EnumInfo[] = {
		{ EDebugType_StaticEnum, TEXT("EDebugType"), &Z_Registration_Info_UEnum_EDebugType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2140564541U) },
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2342280817U) },
		{ ESpawnFXLocation_StaticEnum, TEXT("ESpawnFXLocation"), &Z_Registration_Info_UEnum_ESpawnFXLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2040338089U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::ScriptStructInfo[] = {
		{ FAreaDamageInfo::StaticStruct, Z_Construct_UScriptStruct_FAreaDamageInfo_Statics::NewStructOps, TEXT("AreaDamageInfo"), &Z_Registration_Info_UScriptStruct_AreaDamageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAreaDamageInfo), 2479451916U) },
		{ FHitActors::StaticStruct, Z_Construct_UScriptStruct_FHitActors_Statics::NewStructOps, TEXT("HitActors"), &Z_Registration_Info_UScriptStruct_HitActors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitActors), 2134942261U) },
		{ FBaseFX::StaticStruct, Z_Construct_UScriptStruct_FBaseFX_Statics::NewStructOps, TEXT("BaseFX"), &Z_Registration_Info_UScriptStruct_BaseFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseFX), 974731263U) },
		{ FActionEffect::StaticStruct, Z_Construct_UScriptStruct_FActionEffect_Statics::NewStructOps, TEXT("ActionEffect"), &Z_Registration_Info_UScriptStruct_ActionEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionEffect), 2181620844U) },
		{ FImpactFX::StaticStruct, Z_Construct_UScriptStruct_FImpactFX_Statics::NewStructOps, TEXT("ImpactFX"), &Z_Registration_Info_UScriptStruct_ImpactFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImpactFX), 1796853546U) },
		{ FMaterialImpactFX::StaticStruct, Z_Construct_UScriptStruct_FMaterialImpactFX_Statics::NewStructOps, TEXT("MaterialImpactFX"), &Z_Registration_Info_UScriptStruct_MaterialImpactFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialImpactFX), 2532374234U) },
		{ FImpactsArray::StaticStruct, Z_Construct_UScriptStruct_FImpactsArray_Statics::NewStructOps, TEXT("ImpactsArray"), &Z_Registration_Info_UScriptStruct_ImpactsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImpactsArray), 2184133029U) },
		{ FBaseTraceInfo::StaticStruct, Z_Construct_UScriptStruct_FBaseTraceInfo_Statics::NewStructOps, TEXT("BaseTraceInfo"), &Z_Registration_Info_UScriptStruct_BaseTraceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseTraceInfo), 1770095764U) },
		{ FTraceInfo::StaticStruct, Z_Construct_UScriptStruct_FTraceInfo_Statics::NewStructOps, TEXT("TraceInfo"), &Z_Registration_Info_UScriptStruct_TraceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceInfo), 2049366361U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACMTypes, UACMTypes::StaticClass, TEXT("UACMTypes"), &Z_Registration_Info_UClass_UACMTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMTypes), 4029354618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_964152238(TEXT("/Script/CollisionsManager"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

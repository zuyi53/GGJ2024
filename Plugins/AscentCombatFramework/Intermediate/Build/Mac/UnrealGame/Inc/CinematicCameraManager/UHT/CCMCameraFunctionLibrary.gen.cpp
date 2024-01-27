// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMCameraFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMCameraFunctionLibrary() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_ACCMPlayerCameraManager_NoRegister();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMCameraFunctionLibrary();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMCameraFunctionLibrary_NoRegister();
	CINEMATICCAMERAMANAGER_API UEnum* Z_Construct_UEnum_CinematicCameraManager_ELockType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execResetCameraPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bInstantReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::ResetCameraPosition(Z_Param_WorldContextObject,Z_Param_bInstantReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execLockCameraOnComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentLookAt);
		P_GET_ENUM(ELockType,Z_Param_locktype);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lockStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::LockCameraOnComponent(Z_Param_WorldContextObject,Z_Param_ComponentLookAt,ELockType(Z_Param_locktype),Z_Param_lockStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execStopLockingCameraOnActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::StopLockingCameraOnActor(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execLockCameraOnActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_ActorLookAt);
		P_GET_ENUM(ELockType,Z_Param_locktype);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lockStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::LockCameraOnActor(Z_Param_WorldContextObject,Z_Param_ActorLookAt,ELockType(Z_Param_locktype),Z_Param_lockStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execStopCameraEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::StopCameraEvent(Z_Param_WorldContextObject,Z_Param_CameraEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execTriggerTimedCameraEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::TriggerTimedCameraEvent(Z_Param_WorldContextObject,Z_Param_CameraEventName,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execTriggerCameraEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCCMCameraFunctionLibrary::TriggerCameraEvent(Z_Param_WorldContextObject,Z_Param_CameraEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraFunctionLibrary::execGetLocalCinematicCameraManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACCMPlayerCameraManager**)Z_Param__Result=UCCMCameraFunctionLibrary::GetLocalCinematicCameraManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UCCMCameraFunctionLibrary::StaticRegisterNativesUCCMCameraFunctionLibrary()
	{
		UClass* Class = UCCMCameraFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalCinematicCameraManager", &UCCMCameraFunctionLibrary::execGetLocalCinematicCameraManager },
			{ "LockCameraOnActor", &UCCMCameraFunctionLibrary::execLockCameraOnActor },
			{ "LockCameraOnComponent", &UCCMCameraFunctionLibrary::execLockCameraOnComponent },
			{ "ResetCameraPosition", &UCCMCameraFunctionLibrary::execResetCameraPosition },
			{ "StopCameraEvent", &UCCMCameraFunctionLibrary::execStopCameraEvent },
			{ "StopLockingCameraOnActor", &UCCMCameraFunctionLibrary::execStopLockingCameraOnActor },
			{ "TriggerCameraEvent", &UCCMCameraFunctionLibrary::execTriggerCameraEvent },
			{ "TriggerTimedCameraEvent", &UCCMCameraFunctionLibrary::execTriggerTimedCameraEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics
	{
		struct CCMCameraFunctionLibrary_eventGetLocalCinematicCameraManager_Parms
		{
			const UObject* WorldContextObject;
			ACCMPlayerCameraManager* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventGetLocalCinematicCameraManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventGetLocalCinematicCameraManager_Parms, ReturnValue), Z_Construct_UClass_ACCMPlayerCameraManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "GetLocalCinematicCameraManager", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::CCMCameraFunctionLibrary_eventGetLocalCinematicCameraManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::CCMCameraFunctionLibrary_eventGetLocalCinematicCameraManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics
	{
		struct CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms
		{
			const UObject* WorldContextObject;
			AActor* ActorLookAt;
			ELockType locktype;
			float lockStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorLookAt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_locktype_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_locktype;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lockStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_ActorLookAt = { "ActorLookAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms, ActorLookAt), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_locktype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_locktype = { "locktype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms, locktype), Z_Construct_UEnum_CinematicCameraManager_ELockType, METADATA_PARAMS(0, nullptr) }; // 2423666668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_lockStrength = { "lockStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms, lockStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_ActorLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_locktype_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_locktype,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::NewProp_lockStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "CPP_Default_lockStrength", "5.000000" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "LockCameraOnActor", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::CCMCameraFunctionLibrary_eventLockCameraOnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics
	{
		struct CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms
		{
			const UObject* WorldContextObject;
			USceneComponent* ComponentLookAt;
			ELockType locktype;
			float lockStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLookAt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentLookAt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_locktype_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_locktype;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lockStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_ComponentLookAt_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_ComponentLookAt = { "ComponentLookAt", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms, ComponentLookAt), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_ComponentLookAt_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_ComponentLookAt_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_locktype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_locktype = { "locktype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms, locktype), Z_Construct_UEnum_CinematicCameraManager_ELockType, METADATA_PARAMS(0, nullptr) }; // 2423666668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_lockStrength = { "lockStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms, lockStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_ComponentLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_locktype_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_locktype,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::NewProp_lockStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "LockCameraOnComponent", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::CCMCameraFunctionLibrary_eventLockCameraOnComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics
	{
		struct CCMCameraFunctionLibrary_eventResetCameraPosition_Parms
		{
			const UObject* WorldContextObject;
			bool bInstantReset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bInstantReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventResetCameraPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_bInstantReset_SetBit(void* Obj)
	{
		((CCMCameraFunctionLibrary_eventResetCameraPosition_Parms*)Obj)->bInstantReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_bInstantReset = { "bInstantReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CCMCameraFunctionLibrary_eventResetCameraPosition_Parms), &Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_bInstantReset_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::NewProp_bInstantReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "CPP_Default_bInstantReset", "false" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "ResetCameraPosition", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::CCMCameraFunctionLibrary_eventResetCameraPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::CCMCameraFunctionLibrary_eventResetCameraPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics
	{
		struct CCMCameraFunctionLibrary_eventStopCameraEvent_Parms
		{
			const UObject* WorldContextObject;
			FName CameraEventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventStopCameraEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventStopCameraEvent_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::NewProp_CameraEventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "StopCameraEvent", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::CCMCameraFunctionLibrary_eventStopCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::CCMCameraFunctionLibrary_eventStopCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics
	{
		struct CCMCameraFunctionLibrary_eventStopLockingCameraOnActor_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventStopLockingCameraOnActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "StopLockingCameraOnActor", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::CCMCameraFunctionLibrary_eventStopLockingCameraOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::CCMCameraFunctionLibrary_eventStopLockingCameraOnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics
	{
		struct CCMCameraFunctionLibrary_eventTriggerCameraEvent_Parms
		{
			const UObject* WorldContextObject;
			FName CameraEventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventTriggerCameraEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventTriggerCameraEvent_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::NewProp_CameraEventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "TriggerCameraEvent", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::CCMCameraFunctionLibrary_eventTriggerCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::CCMCameraFunctionLibrary_eventTriggerCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics
	{
		struct CCMCameraFunctionLibrary_eventTriggerTimedCameraEvent_Parms
		{
			const UObject* WorldContextObject;
			FName CameraEventName;
			float duration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEventName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventTriggerTimedCameraEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_CameraEventName = { "CameraEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventTriggerTimedCameraEvent_Parms, CameraEventName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraFunctionLibrary_eventTriggerTimedCameraEvent_Parms, duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_CameraEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraFunctionLibrary, nullptr, "TriggerTimedCameraEvent", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::CCMCameraFunctionLibrary_eventTriggerTimedCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::CCMCameraFunctionLibrary_eventTriggerTimedCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCCMCameraFunctionLibrary);
	UClass* Z_Construct_UClass_UCCMCameraFunctionLibrary_NoRegister()
	{
		return UCCMCameraFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_GetLocalCinematicCameraManager, "GetLocalCinematicCameraManager" }, // 3025376214
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnActor, "LockCameraOnActor" }, // 2203963192
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_LockCameraOnComponent, "LockCameraOnComponent" }, // 2522153736
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_ResetCameraPosition, "ResetCameraPosition" }, // 910435107
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopCameraEvent, "StopCameraEvent" }, // 128821990
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_StopLockingCameraOnActor, "StopLockingCameraOnActor" }, // 1366240939
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerCameraEvent, "TriggerCameraEvent" }, // 2560570916
		{ &Z_Construct_UFunction_UCCMCameraFunctionLibrary_TriggerTimedCameraEvent, "TriggerTimedCameraEvent" }, // 396011930
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CCMCameraFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/CCMCameraFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCCMCameraFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::ClassParams = {
		&UCCMCameraFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCCMCameraFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCCMCameraFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCCMCameraFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCCMCameraFunctionLibrary.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<UCCMCameraFunctionLibrary>()
	{
		return UCCMCameraFunctionLibrary::StaticClass();
	}
	UCCMCameraFunctionLibrary::UCCMCameraFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCCMCameraFunctionLibrary);
	UCCMCameraFunctionLibrary::~UCCMCameraFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCCMCameraFunctionLibrary, UCCMCameraFunctionLibrary::StaticClass, TEXT("UCCMCameraFunctionLibrary"), &Z_Registration_Info_UClass_UCCMCameraFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCCMCameraFunctionLibrary), 3861980241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_350521088(TEXT("/Script/CinematicCameraManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

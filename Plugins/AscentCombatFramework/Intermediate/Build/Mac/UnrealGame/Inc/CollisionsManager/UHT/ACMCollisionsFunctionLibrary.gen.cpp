// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollisionsManager/Public/ACMCollisionsFunctionLibrary.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMCollisionsFunctionLibrary() {}
// Cross Module References
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionsFunctionLibrary();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionsFunctionLibrary_NoRegister();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CollisionsManager();
// End Cross Module References
	DEFINE_FUNCTION(UACMCollisionsFunctionLibrary::execPlayEffectLocally)
	{
		P_GET_STRUCT_REF(FImpactFX,Z_Param_Out_FXtoPlay);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACMCollisionsFunctionLibrary::PlayEffectLocally(Z_Param_Out_FXtoPlay,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionsFunctionLibrary::execPlayReplicatedEffect)
	{
		P_GET_STRUCT_REF(FImpactFX,Z_Param_Out_FXtoPlay);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACMCollisionsFunctionLibrary::PlayReplicatedEffect(Z_Param_Out_FXtoPlay,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionsFunctionLibrary::execPlayImpactEffect)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UDamageType> ,Z_Param_Out_damageImpacting);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_materialImpacted);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_impactLocation);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACMCollisionsFunctionLibrary::PlayImpactEffect(Z_Param_Out_damageImpacting,Z_Param_materialImpacted,Z_Param_Out_impactLocation,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMCollisionsFunctionLibrary::execGetEffectDispatcher)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACMEffectsDispatcherComponent**)Z_Param__Result=UACMCollisionsFunctionLibrary::GetEffectDispatcher(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UACMCollisionsFunctionLibrary::StaticRegisterNativesUACMCollisionsFunctionLibrary()
	{
		UClass* Class = UACMCollisionsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectDispatcher", &UACMCollisionsFunctionLibrary::execGetEffectDispatcher },
			{ "PlayEffectLocally", &UACMCollisionsFunctionLibrary::execPlayEffectLocally },
			{ "PlayImpactEffect", &UACMCollisionsFunctionLibrary::execPlayImpactEffect },
			{ "PlayReplicatedEffect", &UACMCollisionsFunctionLibrary::execPlayReplicatedEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics
	{
		struct ACMCollisionsFunctionLibrary_eventGetEffectDispatcher_Parms
		{
			const UObject* WorldContextObject;
			UACMEffectsDispatcherComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventGetEffectDispatcher_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventGetEffectDispatcher_Parms, ReturnValue), Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionsFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionsFunctionLibrary, nullptr, "GetEffectDispatcher", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::ACMCollisionsFunctionLibrary_eventGetEffectDispatcher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::ACMCollisionsFunctionLibrary_eventGetEffectDispatcher_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics
	{
		struct ACMCollisionsFunctionLibrary_eventPlayEffectLocally_Parms
		{
			FImpactFX FXtoPlay;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXtoPlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FXtoPlay;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_FXtoPlay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_FXtoPlay = { "FXtoPlay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayEffectLocally_Parms, FXtoPlay), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_FXtoPlay_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_FXtoPlay_MetaData) }; // 1796853546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayEffectLocally_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_FXtoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionsFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionsFunctionLibrary, nullptr, "PlayEffectLocally", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::ACMCollisionsFunctionLibrary_eventPlayEffectLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::ACMCollisionsFunctionLibrary_eventPlayEffectLocally_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics
	{
		struct ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms
		{
			const TSubclassOf<UDamageType>  damageImpacting;
			UPhysicalMaterial* materialImpacted;
			FVector impactLocation;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageImpacting_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_damageImpacting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialImpacted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impactLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_impactLocation;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_damageImpacting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_damageImpacting = { "damageImpacting", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms, damageImpacting), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_damageImpacting_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_damageImpacting_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_materialImpacted = { "materialImpacted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms, materialImpacted), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation = { "impactLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms, impactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_damageImpacting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_materialImpacted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionsFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionsFunctionLibrary, nullptr, "PlayImpactEffect", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::ACMCollisionsFunctionLibrary_eventPlayImpactEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics
	{
		struct ACMCollisionsFunctionLibrary_eventPlayReplicatedEffect_Parms
		{
			FImpactFX FXtoPlay;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXtoPlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FXtoPlay;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_FXtoPlay = { "FXtoPlay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayReplicatedEffect_Parms, FXtoPlay), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData) }; // 1796853546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMCollisionsFunctionLibrary_eventPlayReplicatedEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_FXtoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMCollisionsFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMCollisionsFunctionLibrary, nullptr, "PlayReplicatedEffect", nullptr, nullptr, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::ACMCollisionsFunctionLibrary_eventPlayReplicatedEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::ACMCollisionsFunctionLibrary_eventPlayReplicatedEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMCollisionsFunctionLibrary);
	UClass* Z_Construct_UClass_UACMCollisionsFunctionLibrary_NoRegister()
	{
		return UACMCollisionsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACMCollisionsFunctionLibrary_GetEffectDispatcher, "GetEffectDispatcher" }, // 161031519
		{ &Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayEffectLocally, "PlayEffectLocally" }, // 2159041308
		{ &Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayImpactEffect, "PlayImpactEffect" }, // 1957042543
		{ &Z_Construct_UFunction_UACMCollisionsFunctionLibrary_PlayReplicatedEffect, "PlayReplicatedEffect" }, // 3902776941
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACMCollisionsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ACMCollisionsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMCollisionsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::ClassParams = {
		&UACMCollisionsFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACMCollisionsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UACMCollisionsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMCollisionsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UACMCollisionsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACMCollisionsFunctionLibrary.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UClass* StaticClass<UACMCollisionsFunctionLibrary>()
	{
		return UACMCollisionsFunctionLibrary::StaticClass();
	}
	UACMCollisionsFunctionLibrary::UACMCollisionsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACMCollisionsFunctionLibrary);
	UACMCollisionsFunctionLibrary::~UACMCollisionsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACMCollisionsFunctionLibrary, UACMCollisionsFunctionLibrary::StaticClass, TEXT("UACMCollisionsFunctionLibrary"), &Z_Registration_Info_UClass_UACMCollisionsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMCollisionsFunctionLibrary), 2816991373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionsFunctionLibrary_h_476991184(TEXT("/Script/CollisionsManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

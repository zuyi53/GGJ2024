// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFPatrolPath.h"
#include "ACFAITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPatrolPath() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFPatrolPath();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFPatrolPath_NoRegister();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFPatrolPath::execSetSplinePoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_worldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePoints(Z_Param_Out_worldPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPatrolPath::execAddSplinePoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSplinePoint(Z_Param_Out_worldPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPatrolPath::execSetPatrolConfig)
	{
		P_GET_STRUCT_REF(FPatrolConfig,Z_Param_Out_inPatrolConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolConfig(Z_Param_Out_inPatrolConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPatrolPath::execGetPatrolConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPatrolConfig*)Z_Param__Result=P_THIS->GetPatrolConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPatrolPath::execGetSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent();
		P_NATIVE_END;
	}
	void AACFPatrolPath::StaticRegisterNativesAACFPatrolPath()
	{
		UClass* Class = AACFPatrolPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSplinePoint", &AACFPatrolPath::execAddSplinePoint },
			{ "GetPatrolConfig", &AACFPatrolPath::execGetPatrolConfig },
			{ "GetSplineComponent", &AACFPatrolPath::execGetSplineComponent },
			{ "SetPatrolConfig", &AACFPatrolPath::execSetPatrolConfig },
			{ "SetSplinePoints", &AACFPatrolPath::execSetSplinePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics
	{
		struct ACFPatrolPath_eventAddSplinePoint_Parms
		{
			FVector worldPos;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_worldPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::NewProp_worldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::NewProp_worldPos = { "worldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPatrolPath_eventAddSplinePoint_Parms, worldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::NewProp_worldPos_MetaData), Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::NewProp_worldPos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::NewProp_worldPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPatrolPath, nullptr, "AddSplinePoint", nullptr, nullptr, Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::ACFPatrolPath_eventAddSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::ACFPatrolPath_eventAddSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics
	{
		struct ACFPatrolPath_eventGetPatrolConfig_Parms
		{
			FPatrolConfig ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPatrolPath_eventGetPatrolConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FPatrolConfig, METADATA_PARAMS(0, nullptr) }; // 549765083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPatrolPath, nullptr, "GetPatrolConfig", nullptr, nullptr, Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::ACFPatrolPath_eventGetPatrolConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::ACFPatrolPath_eventGetPatrolConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics
	{
		struct ACFPatrolPath_eventGetSplineComponent_Parms
		{
			USplineComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPatrolPath_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPatrolPath, nullptr, "GetSplineComponent", nullptr, nullptr, Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::ACFPatrolPath_eventGetSplineComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::ACFPatrolPath_eventGetSplineComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics
	{
		struct ACFPatrolPath_eventSetPatrolConfig_Parms
		{
			FPatrolConfig inPatrolConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inPatrolConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inPatrolConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::NewProp_inPatrolConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::NewProp_inPatrolConfig = { "inPatrolConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPatrolPath_eventSetPatrolConfig_Parms, inPatrolConfig), Z_Construct_UScriptStruct_FPatrolConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::NewProp_inPatrolConfig_MetaData), Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::NewProp_inPatrolConfig_MetaData) }; // 549765083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::NewProp_inPatrolConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPatrolPath, nullptr, "SetPatrolConfig", nullptr, nullptr, Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::ACFPatrolPath_eventSetPatrolConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::ACFPatrolPath_eventSetPatrolConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics
	{
		struct ACFPatrolPath_eventSetSplinePoints_Parms
		{
			TArray<FVector> worldPos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_worldPos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldPos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_worldPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos_Inner = { "worldPos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos = { "worldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPatrolPath_eventSetSplinePoints_Parms, worldPos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos_MetaData), Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::NewProp_worldPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPatrolPath, nullptr, "SetSplinePoints", nullptr, nullptr, Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::ACFPatrolPath_eventSetSplinePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::ACFPatrolPath_eventSetSplinePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFPatrolPath);
	UClass* Z_Construct_UClass_AACFPatrolPath_NoRegister()
	{
		return AACFPatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_AACFPatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFPatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFPatrolPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFPatrolPath_AddSplinePoint, "AddSplinePoint" }, // 1348144429
		{ &Z_Construct_UFunction_AACFPatrolPath_GetPatrolConfig, "GetPatrolConfig" }, // 198607774
		{ &Z_Construct_UFunction_AACFPatrolPath_GetSplineComponent, "GetSplineComponent" }, // 300631554
		{ &Z_Construct_UFunction_AACFPatrolPath_SetPatrolConfig, "SetPatrolConfig" }, // 656107218
		{ &Z_Construct_UFunction_AACFPatrolPath_SetSplinePoints, "SetSplinePoints" }, // 3913824707
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFPatrolPath.h" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_SplineComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPatrolPath, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_SplineComp_MetaData), Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_SplineComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_PatrolConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_PatrolConfig = { "PatrolConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPatrolPath, PatrolConfig), Z_Construct_UScriptStruct_FPatrolConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_PatrolConfig_MetaData), Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_PatrolConfig_MetaData) }; // 549765083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPatrolPath_Statics::NewProp_PatrolConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFPatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFPatrolPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFPatrolPath_Statics::ClassParams = {
		&AACFPatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFPatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFPatrolPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPatrolPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFPatrolPath()
	{
		if (!Z_Registration_Info_UClass_AACFPatrolPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFPatrolPath.OuterSingleton, Z_Construct_UClass_AACFPatrolPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFPatrolPath.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFPatrolPath>()
	{
		return AACFPatrolPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFPatrolPath);
	AACFPatrolPath::~AACFPatrolPath() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFPatrolPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFPatrolPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFPatrolPath, AACFPatrolPath::StaticClass, TEXT("AACFPatrolPath"), &Z_Registration_Info_UClass_AACFPatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFPatrolPath), 3982183439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFPatrolPath_h_2862578799(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFPatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFPatrolPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

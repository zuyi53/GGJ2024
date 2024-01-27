// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSFunctionLibrary() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSFunctionLibrary();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSFunctionLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	DEFINE_FUNCTION(UALSFunctionLibrary::execExecuteFunctionsOnSavableComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_actorOwner);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_functionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UALSFunctionLibrary::ExecuteFunctionsOnSavableComponents(Z_Param_actorOwner,Z_Param_Out_functionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSFunctionLibrary::execIsSpecialActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSFunctionLibrary::IsSpecialActor(Z_Param_WorldContextObject,Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSFunctionLibrary::execIsNewGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSFunctionLibrary::IsNewGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSFunctionLibrary::execShouldSaveActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSFunctionLibrary::ShouldSaveActor(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSFunctionLibrary::execGetScreenshotByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UALSFunctionLibrary::GetScreenshotByName(Z_Param_fileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSFunctionLibrary::execTrySaveSceenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSFunctionLibrary::TrySaveSceenshot(Z_Param_fileName,Z_Param_width,Z_Param_height);
		P_NATIVE_END;
	}
	void UALSFunctionLibrary::StaticRegisterNativesUALSFunctionLibrary()
	{
		UClass* Class = UALSFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteFunctionsOnSavableComponents", &UALSFunctionLibrary::execExecuteFunctionsOnSavableComponents },
			{ "GetScreenshotByName", &UALSFunctionLibrary::execGetScreenshotByName },
			{ "IsNewGame", &UALSFunctionLibrary::execIsNewGame },
			{ "IsSpecialActor", &UALSFunctionLibrary::execIsSpecialActor },
			{ "ShouldSaveActor", &UALSFunctionLibrary::execShouldSaveActor },
			{ "TrySaveSceenshot", &UALSFunctionLibrary::execTrySaveSceenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics
	{
		struct ALSFunctionLibrary_eventExecuteFunctionsOnSavableComponents_Parms
		{
			const AActor* actorOwner;
			FName functionName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_functionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_functionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_actorOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_actorOwner = { "actorOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventExecuteFunctionsOnSavableComponents_Parms, actorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_actorOwner_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_actorOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_functionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_functionName = { "functionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventExecuteFunctionsOnSavableComponents_Parms, functionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_functionName_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_functionName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_actorOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::NewProp_functionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSFunctionLibrary, nullptr, "ExecuteFunctionsOnSavableComponents", nullptr, nullptr, Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::ALSFunctionLibrary_eventExecuteFunctionsOnSavableComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::ALSFunctionLibrary_eventExecuteFunctionsOnSavableComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics
	{
		struct ALSFunctionLibrary_eventGetScreenshotByName_Parms
		{
			FString fileName;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventGetScreenshotByName_Parms, fileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_fileName_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_fileName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventGetScreenshotByName_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSFunctionLibrary, nullptr, "GetScreenshotByName", nullptr, nullptr, Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::ALSFunctionLibrary_eventGetScreenshotByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::ALSFunctionLibrary_eventGetScreenshotByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics
	{
		struct ALSFunctionLibrary_eventIsNewGame_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventIsNewGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSFunctionLibrary_eventIsNewGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSFunctionLibrary_eventIsNewGame_Parms), &Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSFunctionLibrary, nullptr, "IsNewGame", nullptr, nullptr, Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::ALSFunctionLibrary_eventIsNewGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::ALSFunctionLibrary_eventIsNewGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics
	{
		struct ALSFunctionLibrary_eventIsSpecialActor_Parms
		{
			const UObject* WorldContextObject;
			const AActor* actor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventIsSpecialActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventIsSpecialActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_actor_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_actor_MetaData) };
	void Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSFunctionLibrary_eventIsSpecialActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSFunctionLibrary_eventIsSpecialActor_Parms), &Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSFunctionLibrary, nullptr, "IsSpecialActor", nullptr, nullptr, Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::ALSFunctionLibrary_eventIsSpecialActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::ALSFunctionLibrary_eventIsSpecialActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics
	{
		struct ALSFunctionLibrary_eventShouldSaveActor_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventShouldSaveActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSFunctionLibrary_eventShouldSaveActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSFunctionLibrary_eventShouldSaveActor_Parms), &Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSFunctionLibrary, nullptr, "ShouldSaveActor", nullptr, nullptr, Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::ALSFunctionLibrary_eventShouldSaveActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::ALSFunctionLibrary_eventShouldSaveActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics
	{
		struct ALSFunctionLibrary_eventTrySaveSceenshot_Parms
		{
			FString fileName;
			int32 width;
			int32 height;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_height;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventTrySaveSceenshot_Parms, fileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_fileName_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_fileName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_width_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventTrySaveSceenshot_Parms, width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_width_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSFunctionLibrary_eventTrySaveSceenshot_Parms, height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_height_MetaData), Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_height_MetaData) };
	void Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSFunctionLibrary_eventTrySaveSceenshot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSFunctionLibrary_eventTrySaveSceenshot_Parms), &Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "CPP_Default_height", "480" },
		{ "CPP_Default_width", "640" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSFunctionLibrary, nullptr, "TrySaveSceenshot", nullptr, nullptr, Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::ALSFunctionLibrary_eventTrySaveSceenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::ALSFunctionLibrary_eventTrySaveSceenshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSFunctionLibrary);
	UClass* Z_Construct_UClass_UALSFunctionLibrary_NoRegister()
	{
		return UALSFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UALSFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSFunctionLibrary_ExecuteFunctionsOnSavableComponents, "ExecuteFunctionsOnSavableComponents" }, // 1968686946
		{ &Z_Construct_UFunction_UALSFunctionLibrary_GetScreenshotByName, "GetScreenshotByName" }, // 1301185306
		{ &Z_Construct_UFunction_UALSFunctionLibrary_IsNewGame, "IsNewGame" }, // 1483596529
		{ &Z_Construct_UFunction_UALSFunctionLibrary_IsSpecialActor, "IsSpecialActor" }, // 2896661130
		{ &Z_Construct_UFunction_UALSFunctionLibrary_ShouldSaveActor, "ShouldSaveActor" }, // 2398831156
		{ &Z_Construct_UFunction_UALSFunctionLibrary_TrySaveSceenshot, "TrySaveSceenshot" }, // 1581470687
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ALSFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ALSFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSFunctionLibrary_Statics::ClassParams = {
		&UALSFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UALSFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UALSFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSFunctionLibrary.OuterSingleton, Z_Construct_UClass_UALSFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSFunctionLibrary.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSFunctionLibrary>()
	{
		return UALSFunctionLibrary::StaticClass();
	}
	UALSFunctionLibrary::UALSFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSFunctionLibrary);
	UALSFunctionLibrary::~UALSFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSFunctionLibrary, UALSFunctionLibrary::StaticClass, TEXT("UALSFunctionLibrary"), &Z_Registration_Info_UClass_UALSFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSFunctionLibrary), 1515700344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSFunctionLibrary_h_992328881(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

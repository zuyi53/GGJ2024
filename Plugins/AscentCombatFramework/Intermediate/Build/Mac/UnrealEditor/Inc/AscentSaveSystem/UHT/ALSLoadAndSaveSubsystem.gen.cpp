// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSLoadAndSaveSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "AscentSaveSystem/Public/ALSSaveInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSLoadAndSaveSubsystem() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSLoadAndSaveSubsystem();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSLoadAndSaveSubsystem_NoRegister();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveGame_NoRegister();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveInfo_NoRegister();
	ASCENTSAVESYSTEM_API UEnum* Z_Construct_UEnum_AscentSaveSystem_ELoadingState();
	ASCENTSAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_AscentSaveSystem_OnLoadFinished__DelegateSignature();
	ASCENTSAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSSaveMetadata();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadingState;
	static UEnum* ELoadingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentSaveSystem_ELoadingState, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ELoadingState"));
		}
		return Z_Registration_Info_UEnum_ELoadingState.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UEnum* StaticEnum<ELoadingState>()
	{
		return ELoadingState_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::Enumerators[] = {
		{ "ELoadingState::EIdle", (int64)ELoadingState::EIdle },
		{ "ELoadingState::ESaving", (int64)ELoadingState::ESaving },
		{ "ELoadingState::ELoading", (int64)ELoadingState::ELoading },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "EIdle.Comment", "/**\n *\n */" },
		{ "EIdle.Name", "ELoadingState::EIdle" },
		{ "ELoading.Comment", "/**\n *\n */" },
		{ "ELoading.Name", "ELoadingState::ELoading" },
		{ "ESaving.Comment", "/**\n *\n */" },
		{ "ESaving.Name", "ELoadingState::ESaving" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		nullptr,
		"ELoadingState",
		"ELoadingState",
		Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentSaveSystem_ELoadingState()
	{
		if (!Z_Registration_Info_UEnum_ELoadingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadingState.InnerSingleton, Z_Construct_UEnum_AscentSaveSystem_ELoadingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadingState.InnerSingleton;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execHandleLoadCompleted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_GET_OBJECT(USaveGame,Z_Param_LoadedSaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLoadCompleted(Z_Param_SaveSlot,Z_Param_UserIndex,Z_Param_LoadedSaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execHandleLoadingFinished)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLoadingFinished(Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execGetCurrentSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UALSSaveGame**)Z_Param__Result=P_THIS->GetCurrentSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execGetCurrentSaveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentSaveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execGetSystemState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELoadingState*)Z_Param__Result=P_THIS->GetSystemState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execGetScreenshotForSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_saveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetScreenshotForSave(Z_Param_saveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execHasAnySaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnySaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execGetAllSaveGames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FALSSaveMetadata>*)Z_Param__Result=P_THIS->GetAllSaveGames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadOrCreateSaveInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UALSSaveInfo**)Z_Param__Result=P_THIS->LoadOrCreateSaveInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadOrCreateSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UALSSaveGame**)Z_Param__Result=P_THIS->LoadOrCreateSaveGame(Z_Param_slotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execTryGetSaveMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_STRUCT_REF(FALSSaveMetadata,Z_Param_Out_outSaveMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetSaveMetadata(Z_Param_slotName,Z_Param_Out_outSaveMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execIsNewGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNewGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execSetNewGame)
	{
		P_GET_UBOOL(Z_Param_inNewGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewGame(Z_Param_inNewGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerID);
		P_GET_OBJECT(APlayerController,Z_Param_playerToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPlayer(Z_Param_slotName,Z_Param_playerID,Z_Param_playerToLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execSavePlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerID);
		P_GET_OBJECT(APlayerController,Z_Param_playerToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePlayer(Z_Param_slotName,Z_Param_playerID,Z_Param_playerToSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadLocalPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLocalPlayer(Z_Param_slotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execSaveLocalPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveLocalPlayer(Z_Param_slotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadLevelFromSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_levelName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_loadCallback);
		P_GET_UBOOL(Z_Param_bReloadLocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevelFromSaveGame(Z_Param_slotName,Z_Param_levelName,FOnLoadFinished(Z_Param_Out_loadCallback),Z_Param_bReloadLocalPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadCurrentLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_loadCallback);
		P_GET_UBOOL(Z_Param_bReloadLocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCurrentLevel(Z_Param_slotName,FOnLoadFinished(Z_Param_Out_loadCallback),Z_Param_bReloadLocalPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execLoadGameWorld)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_loadCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGameWorld(Z_Param_slotName,FOnLoadFinished(Z_Param_Out_loadCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSLoadAndSaveSubsystem::execSaveGameWorld)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_saveCallback);
		P_GET_UBOOL(Z_Param_bSaveLocalPlayer);
		P_GET_UBOOL(Z_Param_bSaveScreenshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGameWorld(Z_Param_slotName,FOnSaveFinished(Z_Param_Out_saveCallback),Z_Param_bSaveLocalPlayer,Z_Param_bSaveScreenshot);
		P_NATIVE_END;
	}
	void UALSLoadAndSaveSubsystem::StaticRegisterNativesUALSLoadAndSaveSubsystem()
	{
		UClass* Class = UALSLoadAndSaveSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSaveGames", &UALSLoadAndSaveSubsystem::execGetAllSaveGames },
			{ "GetCurrentSaveGame", &UALSLoadAndSaveSubsystem::execGetCurrentSaveGame },
			{ "GetCurrentSaveName", &UALSLoadAndSaveSubsystem::execGetCurrentSaveName },
			{ "GetScreenshotForSave", &UALSLoadAndSaveSubsystem::execGetScreenshotForSave },
			{ "GetSystemState", &UALSLoadAndSaveSubsystem::execGetSystemState },
			{ "HandleLoadCompleted", &UALSLoadAndSaveSubsystem::execHandleLoadCompleted },
			{ "HandleLoadingFinished", &UALSLoadAndSaveSubsystem::execHandleLoadingFinished },
			{ "HasAnySaveGame", &UALSLoadAndSaveSubsystem::execHasAnySaveGame },
			{ "IsNewGame", &UALSLoadAndSaveSubsystem::execIsNewGame },
			{ "LoadCurrentLevel", &UALSLoadAndSaveSubsystem::execLoadCurrentLevel },
			{ "LoadGameWorld", &UALSLoadAndSaveSubsystem::execLoadGameWorld },
			{ "LoadLevelFromSaveGame", &UALSLoadAndSaveSubsystem::execLoadLevelFromSaveGame },
			{ "LoadLocalPlayer", &UALSLoadAndSaveSubsystem::execLoadLocalPlayer },
			{ "LoadOrCreateSaveGame", &UALSLoadAndSaveSubsystem::execLoadOrCreateSaveGame },
			{ "LoadOrCreateSaveInfo", &UALSLoadAndSaveSubsystem::execLoadOrCreateSaveInfo },
			{ "LoadPlayer", &UALSLoadAndSaveSubsystem::execLoadPlayer },
			{ "SaveGameWorld", &UALSLoadAndSaveSubsystem::execSaveGameWorld },
			{ "SaveLocalPlayer", &UALSLoadAndSaveSubsystem::execSaveLocalPlayer },
			{ "SavePlayer", &UALSLoadAndSaveSubsystem::execSavePlayer },
			{ "SetNewGame", &UALSLoadAndSaveSubsystem::execSetNewGame },
			{ "TryGetSaveMetadata", &UALSLoadAndSaveSubsystem::execTryGetSaveMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventGetAllSaveGames_Parms
		{
			TArray<FALSSaveMetadata> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FALSSaveMetadata, METADATA_PARAMS(0, nullptr) }; // 1414948734
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventGetAllSaveGames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1414948734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "GetAllSaveGames", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::ALSLoadAndSaveSubsystem_eventGetAllSaveGames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::ALSLoadAndSaveSubsystem_eventGetAllSaveGames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventGetCurrentSaveGame_Parms
		{
			UALSSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventGetCurrentSaveGame_Parms, ReturnValue), Z_Construct_UClass_UALSSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "GetCurrentSaveGame", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::ALSLoadAndSaveSubsystem_eventGetCurrentSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::ALSLoadAndSaveSubsystem_eventGetCurrentSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventGetCurrentSaveName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventGetCurrentSaveName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "GetCurrentSaveName", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::ALSLoadAndSaveSubsystem_eventGetCurrentSaveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::ALSLoadAndSaveSubsystem_eventGetCurrentSaveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventGetScreenshotForSave_Parms
		{
			FString saveName;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_saveName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_saveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_saveName = { "saveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventGetScreenshotForSave_Parms, saveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_saveName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_saveName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventGetScreenshotForSave_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_saveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "GetScreenshotForSave", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::ALSLoadAndSaveSubsystem_eventGetScreenshotForSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::ALSLoadAndSaveSubsystem_eventGetScreenshotForSave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventGetSystemState_Parms
		{
			ELoadingState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventGetSystemState_Parms, ReturnValue), Z_Construct_UEnum_AscentSaveSystem_ELoadingState, METADATA_PARAMS(0, nullptr) }; // 1742283679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "GetSystemState", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::ALSLoadAndSaveSubsystem_eventGetSystemState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::ALSLoadAndSaveSubsystem_eventGetSystemState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventHandleLoadCompleted_Parms
		{
			FString SaveSlot;
			int32 UserIndex;
			USaveGame* LoadedSaveData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedSaveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_SaveSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventHandleLoadCompleted_Parms, SaveSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_SaveSlot_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_SaveSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventHandleLoadCompleted_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_UserIndex_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_UserIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_LoadedSaveData = { "LoadedSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventHandleLoadCompleted_Parms, LoadedSaveData), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_SaveSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::NewProp_LoadedSaveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "HandleLoadCompleted", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::ALSLoadAndSaveSubsystem_eventHandleLoadCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::ALSLoadAndSaveSubsystem_eventHandleLoadCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventHandleLoadingFinished_Parms
		{
			UWorld* world;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventHandleLoadingFinished_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "HandleLoadingFinished", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::ALSLoadAndSaveSubsystem_eventHandleLoadingFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::ALSLoadAndSaveSubsystem_eventHandleLoadingFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventHasAnySaveGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventHasAnySaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventHasAnySaveGame_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "HasAnySaveGame", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::ALSLoadAndSaveSubsystem_eventHasAnySaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::ALSLoadAndSaveSubsystem_eventHasAnySaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventIsNewGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventIsNewGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventIsNewGame_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "IsNewGame", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::ALSLoadAndSaveSubsystem_eventIsNewGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::ALSLoadAndSaveSubsystem_eventIsNewGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms
		{
			FString slotName;
			FScriptDelegate loadCallback;
			bool bReloadLocalPlayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_loadCallback;
		static void NewProp_bReloadLocalPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadLocalPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_loadCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_loadCallback = { "loadCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms, loadCallback), Z_Construct_UDelegateFunction_AscentSaveSystem_OnLoadFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_loadCallback_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_loadCallback_MetaData) }; // 78895592
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_bReloadLocalPlayer_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms*)Obj)->bReloadLocalPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_bReloadLocalPlayer = { "bReloadLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_bReloadLocalPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_loadCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::NewProp_bReloadLocalPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Reloads current level from the provided slot*/" },
		{ "CPP_Default_bReloadLocalPlayer", "true" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Reloads current level from the provided slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::ALSLoadAndSaveSubsystem_eventLoadCurrentLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadGameWorld_Parms
		{
			FString slotName;
			FScriptDelegate loadCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_loadCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadGameWorld_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_loadCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_loadCallback = { "loadCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadGameWorld_Parms, loadCallback), Z_Construct_UDelegateFunction_AscentSaveSystem_OnLoadFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_loadCallback_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_loadCallback_MetaData) }; // 78895592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::NewProp_loadCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Load the provided slot and open the saved map*/" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Load the provided slot and open the saved map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadGameWorld", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::ALSLoadAndSaveSubsystem_eventLoadGameWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::ALSLoadAndSaveSubsystem_eventLoadGameWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms
		{
			FString slotName;
			FString levelName;
			FScriptDelegate loadCallback;
			bool bReloadLocalPlayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_levelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_loadCallback;
		static void NewProp_bReloadLocalPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadLocalPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_levelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms, levelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_levelName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_levelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_loadCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_loadCallback = { "loadCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms, loadCallback), Z_Construct_UDelegateFunction_AscentSaveSystem_OnLoadFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_loadCallback_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_loadCallback_MetaData) }; // 78895592
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_bReloadLocalPlayer_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms*)Obj)->bReloadLocalPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_bReloadLocalPlayer = { "bReloadLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_bReloadLocalPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_levelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_loadCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::NewProp_bReloadLocalPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Loads the provided level from the provided slot*/" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Loads the provided level from the provided slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadLevelFromSaveGame", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::ALSLoadAndSaveSubsystem_eventLoadLevelFromSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadLocalPlayer_Parms
		{
			FString slotName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadLocalPlayer_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::NewProp_slotName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::NewProp_slotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Reloads the player from the provided slot*/" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Reloads the player from the provided slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::ALSLoadAndSaveSubsystem_eventLoadLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::ALSLoadAndSaveSubsystem_eventLoadLocalPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveGame_Parms
		{
			FString slotName;
			UALSSaveGame* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveGame_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_slotName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveGame_Parms, ReturnValue), Z_Construct_UClass_UALSSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadOrCreateSaveGame", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveInfo_Parms
		{
			UALSSaveInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveInfo_Parms, ReturnValue), Z_Construct_UClass_UALSSaveInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadOrCreateSaveInfo", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::ALSLoadAndSaveSubsystem_eventLoadOrCreateSaveInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventLoadPlayer_Parms
		{
			FString slotName;
			FString playerID;
			APlayerController* playerToLoad;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerToLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadPlayer_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerID = { "playerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadPlayer_Parms, playerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerID_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerToLoad = { "playerToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventLoadPlayer_Parms, playerToLoad), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::NewProp_playerToLoad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Reloads the player from the provided slot Usefull for multiplayer Games */" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Reloads the player from the provided slot Usefull for multiplayer Games" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "LoadPlayer", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::ALSLoadAndSaveSubsystem_eventLoadPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::ALSLoadAndSaveSubsystem_eventLoadPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms
		{
			FString slotName;
			FScriptDelegate saveCallback;
			bool bSaveLocalPlayer;
			bool bSaveScreenshot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_saveCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveLocalPlayer_MetaData[];
#endif
		static void NewProp_bSaveLocalPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveLocalPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveScreenshot_MetaData[];
#endif
		static void NewProp_bSaveScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveScreenshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_saveCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_saveCallback = { "saveCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms, saveCallback), Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_saveCallback_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_saveCallback_MetaData) }; // 2817047030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms*)Obj)->bSaveLocalPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer = { "bSaveLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms*)Obj)->bSaveScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot = { "bSaveScreenshot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_saveCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveLocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::NewProp_bSaveScreenshot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Saves all the game world ina s ave game*/" },
		{ "CPP_Default_bSaveLocalPlayer", "true" },
		{ "CPP_Default_bSaveScreenshot", "true" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Saves all the game world ina s ave game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "SaveGameWorld", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::ALSLoadAndSaveSubsystem_eventSaveGameWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventSaveLocalPlayer_Parms
		{
			FString slotName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventSaveLocalPlayer_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::NewProp_slotName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::NewProp_slotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Save Current Player Controller & Pawn in provided slot*/" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Save Current Player Controller & Pawn in provided slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "SaveLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::ALSLoadAndSaveSubsystem_eventSaveLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::ALSLoadAndSaveSubsystem_eventSaveLocalPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventSavePlayer_Parms
		{
			FString slotName;
			FString playerID;
			APlayerController* playerToSave;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerToSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventSavePlayer_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerID = { "playerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventSavePlayer_Parms, playerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerID_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerToSave = { "playerToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventSavePlayer_Parms, playerToSave), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::NewProp_playerToSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "/*Save Player Controller & Pawn in provided slot. Usefull for multiplayer Games*/" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
		{ "ToolTip", "Save Player Controller & Pawn in provided slot. Usefull for multiplayer Games" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "SavePlayer", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::ALSLoadAndSaveSubsystem_eventSavePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::ALSLoadAndSaveSubsystem_eventSavePlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventSetNewGame_Parms
		{
			bool inNewGame;
		};
		static void NewProp_inNewGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inNewGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::NewProp_inNewGame_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventSetNewGame_Parms*)Obj)->inNewGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::NewProp_inNewGame = { "inNewGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventSetNewGame_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::NewProp_inNewGame_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::NewProp_inNewGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "SetNewGame", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::ALSLoadAndSaveSubsystem_eventSetNewGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::ALSLoadAndSaveSubsystem_eventSetNewGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics
	{
		struct ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms
		{
			FString slotName;
			FALSSaveMetadata outSaveMetadata;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outSaveMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_slotName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_outSaveMetadata = { "outSaveMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms, outSaveMetadata), Z_Construct_UScriptStruct_FALSSaveMetadata, METADATA_PARAMS(0, nullptr) }; // 1414948734
	void Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms), &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_outSaveMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSLoadAndSaveSubsystem, nullptr, "TryGetSaveMetadata", nullptr, nullptr, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::ALSLoadAndSaveSubsystem_eventTryGetSaveMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSLoadAndSaveSubsystem);
	UClass* Z_Construct_UClass_UALSLoadAndSaveSubsystem_NoRegister()
	{
		return UALSLoadAndSaveSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_systemState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_systemState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_systemState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSavegame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentSavegame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetAllSaveGames, "GetAllSaveGames" }, // 514363074
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveGame, "GetCurrentSaveGame" }, // 3741495778
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetCurrentSaveName, "GetCurrentSaveName" }, // 2979970968
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetScreenshotForSave, "GetScreenshotForSave" }, // 1465390384
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_GetSystemState, "GetSystemState" }, // 1000989871
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadCompleted, "HandleLoadCompleted" }, // 1172573582
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HandleLoadingFinished, "HandleLoadingFinished" }, // 2141869261
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_HasAnySaveGame, "HasAnySaveGame" }, // 3180122150
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_IsNewGame, "IsNewGame" }, // 3193182767
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadCurrentLevel, "LoadCurrentLevel" }, // 4019104209
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadGameWorld, "LoadGameWorld" }, // 3104454166
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLevelFromSaveGame, "LoadLevelFromSaveGame" }, // 3209651984
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadLocalPlayer, "LoadLocalPlayer" }, // 1889721059
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveGame, "LoadOrCreateSaveGame" }, // 2491997147
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadOrCreateSaveInfo, "LoadOrCreateSaveInfo" }, // 3663947969
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_LoadPlayer, "LoadPlayer" }, // 1852986258
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveGameWorld, "SaveGameWorld" }, // 2361788255
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SaveLocalPlayer, "SaveLocalPlayer" }, // 377962167
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SavePlayer, "SavePlayer" }, // 4092807586
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_SetNewGame, "SetNewGame" }, // 853610332
		{ &Z_Construct_UFunction_UALSLoadAndSaveSubsystem_TryGetSaveMetadata, "TryGetSaveMetadata" }, // 3997875453
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ALSLoadAndSaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState = { "systemState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSLoadAndSaveSubsystem, systemState), Z_Construct_UEnum_AscentSaveSystem_ELoadingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState_MetaData), Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState_MetaData) }; // 1742283679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_currentSavegame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSLoadAndSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_currentSavegame = { "currentSavegame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSLoadAndSaveSubsystem, currentSavegame), Z_Construct_UClass_UALSSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_currentSavegame_MetaData), Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_currentSavegame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_systemState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::NewProp_currentSavegame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSLoadAndSaveSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::ClassParams = {
		&UALSLoadAndSaveSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSLoadAndSaveSubsystem()
	{
		if (!Z_Registration_Info_UClass_UALSLoadAndSaveSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSLoadAndSaveSubsystem.OuterSingleton, Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSLoadAndSaveSubsystem.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSLoadAndSaveSubsystem>()
	{
		return UALSLoadAndSaveSubsystem::StaticClass();
	}
	UALSLoadAndSaveSubsystem::UALSLoadAndSaveSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSLoadAndSaveSubsystem);
	UALSLoadAndSaveSubsystem::~UALSLoadAndSaveSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics::EnumInfo[] = {
		{ ELoadingState_StaticEnum, TEXT("ELoadingState"), &Z_Registration_Info_UEnum_ELoadingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1742283679U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSLoadAndSaveSubsystem, UALSLoadAndSaveSubsystem::StaticClass, TEXT("UALSLoadAndSaveSubsystem"), &Z_Registration_Info_UClass_UALSLoadAndSaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSLoadAndSaveSubsystem), 1169439085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_1060009600(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSSaveGame.h"
#include "AscentSaveSystem/Public/ALSSaveTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSSaveGame() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveGame();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveGame_NoRegister();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSActorData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSLevelData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSPlayerData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	DEFINE_FUNCTION(UALSSaveGame::execOnLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSSaveGame::execOnSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaved_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UALSSaveGame_OnLoaded = FName(TEXT("OnLoaded"));
	void UALSSaveGame::OnLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UALSSaveGame_OnLoaded),NULL);
	}
	static FName NAME_UALSSaveGame_OnSaved = FName(TEXT("OnSaved"));
	void UALSSaveGame::OnSaved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UALSSaveGame_OnSaved),NULL);
	}
	void UALSSaveGame::StaticRegisterNativesUALSSaveGame()
	{
		UClass* Class = UALSSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoaded", &UALSSaveGame::execOnLoaded },
			{ "OnSaved", &UALSSaveGame::execOnSaved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSSaveGame_OnLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSaveGame_OnLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "//Called after loading this slot\n" },
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
		{ "ToolTip", "Called after loading this slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSSaveGame_OnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSSaveGame, nullptr, "OnLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSaveGame_OnLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSSaveGame_OnLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSSaveGame_OnLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSSaveGame_OnLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSSaveGame_OnSaved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSaveGame_OnSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "//Called before saving this slot\n" },
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
		{ "ToolTip", "Called before saving this slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSSaveGame_OnSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSSaveGame, nullptr, "OnSaved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSaveGame_OnSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSSaveGame_OnSaved_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSSaveGame_OnSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSSaveGame_OnSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSSaveGame);
	UClass* Z_Construct_UClass_UALSSaveGame_NoRegister()
	{
		return UALSSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UALSSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Levels_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Levels_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Levels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Players_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Players_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPlayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraActors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSSaveGame_OnLoaded, "OnLoaded" }, // 1593936885
		{ &Z_Construct_UFunction_UALSSaveGame_OnSaved, "OnSaved" }, // 777583210
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ALSSaveGame.h" },
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_ValueProp = { "Levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FALSLevelData, METADATA_PARAMS(0, nullptr) }; // 3047046923
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_Key_KeyProp = { "Levels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGame, Levels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_MetaData), Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_MetaData) }; // 3047046923
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_ValueProp = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FALSPlayerData, METADATA_PARAMS(0, nullptr) }; // 1608635447
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_Key_KeyProp = { "Players_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGame, Players), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_MetaData), Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_MetaData) }; // 1608635447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGame_Statics::NewProp_LocalPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGame, LocalPlayer), Z_Construct_UScriptStruct_FALSPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::NewProp_LocalPlayer_MetaData), Z_Construct_UClass_UALSSaveGame_Statics::NewProp_LocalPlayer_MetaData) }; // 1608635447
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_ValueProp = { "ExtraActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FALSActorData, METADATA_PARAMS(0, nullptr) }; // 1096397488
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_Key_KeyProp = { "ExtraActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors = { "ExtraActors", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGame, ExtraActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_MetaData), Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_MetaData) }; // 1096397488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_LocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGame_Statics::NewProp_ExtraActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSSaveGame_Statics::ClassParams = {
		&UALSSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSSaveGame()
	{
		if (!Z_Registration_Info_UClass_UALSSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSSaveGame.OuterSingleton, Z_Construct_UClass_UALSSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSSaveGame.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSSaveGame>()
	{
		return UALSSaveGame::StaticClass();
	}
	UALSSaveGame::UALSSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSSaveGame);
	UALSSaveGame::~UALSSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSSaveGame, UALSSaveGame::StaticClass, TEXT("UALSSaveGame"), &Z_Registration_Info_UClass_UALSSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSSaveGame), 254018139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGame_h_1538390975(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

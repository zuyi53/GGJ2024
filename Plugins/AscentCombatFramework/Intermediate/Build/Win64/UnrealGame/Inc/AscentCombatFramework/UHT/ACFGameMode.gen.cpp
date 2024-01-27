// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGameMode() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFGameMode();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFGameMode_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFPlayerController_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollMasterComponent_NoRegister();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionsMasterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFGameMode::execGetAllPlayerControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AACFPlayerController*>*)Z_Param__Result=P_THIS->GetAllPlayerControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFGameMode::execGetCollisionsManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACMCollisionsMasterComponent**)Z_Param__Result=P_THIS->GetCollisionsManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFGameMode::execGetRagdollManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFRagdollMasterComponent**)Z_Param__Result=P_THIS->GetRagdollManager();
		P_NATIVE_END;
	}
	void AACFGameMode::StaticRegisterNativesAACFGameMode()
	{
		UClass* Class = AACFGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllPlayerControllers", &AACFGameMode::execGetAllPlayerControllers },
			{ "GetCollisionsManager", &AACFGameMode::execGetCollisionsManager },
			{ "GetRagdollManager", &AACFGameMode::execGetRagdollManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics
	{
		struct ACFGameMode_eventGetAllPlayerControllers_Parms
		{
			TArray<AACFPlayerController*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AACFPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGameMode_eventGetAllPlayerControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// \n// \x09UFUNCTION(BlueprintCallable, Category = ACF)\n// \x09void SpawnPlayersCompanions();\n" },
		{ "ModuleRelativePath", "Public/Game/ACFGameMode.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = ACF)\nvoid SpawnPlayersCompanions();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGameMode, nullptr, "GetAllPlayerControllers", nullptr, nullptr, Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::ACFGameMode_eventGetAllPlayerControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::ACFGameMode_eventGetAllPlayerControllers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics
	{
		struct ACFGameMode_eventGetCollisionsManager_Parms
		{
			UACMCollisionsMasterComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGameMode_eventGetCollisionsManager_Parms, ReturnValue), Z_Construct_UClass_UACMCollisionsMasterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGameMode, nullptr, "GetCollisionsManager", nullptr, nullptr, Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::ACFGameMode_eventGetCollisionsManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::ACFGameMode_eventGetCollisionsManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGameMode_GetCollisionsManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGameMode_GetCollisionsManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics
	{
		struct ACFGameMode_eventGetRagdollManager_Parms
		{
			UACFRagdollMasterComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGameMode_eventGetRagdollManager_Parms, ReturnValue), Z_Construct_UClass_UACFRagdollMasterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGameMode, nullptr, "GetRagdollManager", nullptr, nullptr, Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::ACFGameMode_eventGetRagdollManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::ACFGameMode_eventGetRagdollManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGameMode_GetRagdollManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGameMode_GetRagdollManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFGameMode);
	UClass* Z_Construct_UClass_AACFGameMode_NoRegister()
	{
		return AACFGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AACFGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RagdollManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFGameMode_GetAllPlayerControllers, "GetAllPlayerControllers" }, // 488905057
		{ &Z_Construct_UFunction_AACFGameMode_GetCollisionsManager, "GetCollisionsManager" }, // 2774347882
		{ &Z_Construct_UFunction_AACFGameMode_GetRagdollManager, "GetRagdollManager" }, // 3827101487
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/ACFGameMode.h" },
		{ "ModuleRelativePath", "Public/Game/ACFGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameMode_Statics::NewProp_RagdollManager_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFGameMode_Statics::NewProp_RagdollManager = { "RagdollManager", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameMode, RagdollManager), Z_Construct_UClass_UACFRagdollMasterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::NewProp_RagdollManager_MetaData), Z_Construct_UClass_AACFGameMode_Statics::NewProp_RagdollManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameMode_Statics::NewProp_CollisionManager_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFGameMode_Statics::NewProp_CollisionManager = { "CollisionManager", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameMode, CollisionManager), Z_Construct_UClass_UACMCollisionsMasterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::NewProp_CollisionManager_MetaData), Z_Construct_UClass_AACFGameMode_Statics::NewProp_CollisionManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameMode_Statics::NewProp_RagdollManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameMode_Statics::NewProp_CollisionManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFGameMode_Statics::ClassParams = {
		&AACFGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFGameMode()
	{
		if (!Z_Registration_Info_UClass_AACFGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFGameMode.OuterSingleton, Z_Construct_UClass_AACFGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFGameMode.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<AACFGameMode>()
	{
		return AACFGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFGameMode);
	AACFGameMode::~AACFGameMode() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFGameMode, AACFGameMode::StaticClass, TEXT("AACFGameMode"), &Z_Registration_Info_UClass_AACFGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFGameMode), 2855554712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameMode_h_4151742726(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

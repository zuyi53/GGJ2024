// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFBaseAIController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFBaseAIController() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFBaseAIController();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFBaseAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFBaseAIController::execSetCombatTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_newTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetCombatTeam_Validate(ETeam(Z_Param_newTeam)))
		{
			RPC_ValidateFailed(TEXT("SetCombatTeam_Validate"));
			return;
		}
		P_THIS->SetCombatTeam_Implementation(ETeam(Z_Param_newTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFBaseAIController::execGetCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetCombatTeam();
		P_NATIVE_END;
	}
	struct ACFBaseAIController_eventSetCombatTeam_Parms
	{
		ETeam newTeam;
	};
	static FName NAME_AACFBaseAIController_SetCombatTeam = FName(TEXT("SetCombatTeam"));
	void AACFBaseAIController::SetCombatTeam(ETeam const& newTeam)
	{
		ACFBaseAIController_eventSetCombatTeam_Parms Parms;
		Parms.newTeam=newTeam;
		ProcessEvent(FindFunctionChecked(NAME_AACFBaseAIController_SetCombatTeam),&Parms);
	}
	void AACFBaseAIController::StaticRegisterNativesAACFBaseAIController()
	{
		UClass* Class = AACFBaseAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatTeam", &AACFBaseAIController::execGetCombatTeam },
			{ "SetCombatTeam", &AACFBaseAIController::execSetCombatTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics
	{
		struct ACFBaseAIController_eventGetCombatTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAIController_eventGetCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFBaseAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFBaseAIController, nullptr, "GetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::ACFBaseAIController_eventGetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::ACFBaseAIController_eventGetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_newTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam = { "newTeam", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseAIController_eventSetCombatTeam_Parms, newTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam_MetaData), Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam_MetaData) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::NewProp_newTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFBaseAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFBaseAIController, nullptr, "SetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::PropPointers), sizeof(ACFBaseAIController_eventSetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseAIController_eventSetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFBaseAIController);
	UClass* Z_Construct_UClass_AACFBaseAIController_NoRegister()
	{
		return AACFBaseAIController::StaticClass();
	}
	struct Z_Construct_UClass_AACFBaseAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFBaseAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFBaseAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFBaseAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFBaseAIController_GetCombatTeam, "GetCombatTeam" }, // 3711779522
		{ &Z_Construct_UFunction_AACFBaseAIController_SetCombatTeam, "SetCombatTeam" }, // 2076416797
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFBaseAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFBaseAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ACFBaseAIController.h" },
		{ "ModuleRelativePath", "Public/ACFBaseAIController.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Combat team of the controlled ai*/" },
		{ "ModuleRelativePath", "Public/ACFBaseAIController.h" },
		{ "ToolTip", "Combat team of the controlled ai" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFBaseAIController, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFBaseAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFBaseAIController_Statics::NewProp_CombatTeam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFBaseAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFBaseAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFBaseAIController_Statics::ClassParams = {
		&AACFBaseAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFBaseAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFBaseAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFBaseAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFBaseAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFBaseAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFBaseAIController()
	{
		if (!Z_Registration_Info_UClass_AACFBaseAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFBaseAIController.OuterSingleton, Z_Construct_UClass_AACFBaseAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFBaseAIController.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFBaseAIController>()
	{
		return AACFBaseAIController::StaticClass();
	}
	AACFBaseAIController::AACFBaseAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFBaseAIController);
	AACFBaseAIController::~AACFBaseAIController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFBaseAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFBaseAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFBaseAIController, AACFBaseAIController::StaticClass, TEXT("AACFBaseAIController"), &Z_Registration_Info_UClass_AACFBaseAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFBaseAIController), 1851821390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFBaseAIController_h_2670832942(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFBaseAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFBaseAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

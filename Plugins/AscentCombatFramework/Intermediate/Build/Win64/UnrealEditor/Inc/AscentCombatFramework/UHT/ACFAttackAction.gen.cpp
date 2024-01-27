// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFAttackAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAttackAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFAttackAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFAttackAction_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFAttackAction::execResetComboCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetComboCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttackAction::execGetComboCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetComboCounter();
		P_NATIVE_END;
	}
	void UACFAttackAction::StaticRegisterNativesUACFAttackAction()
	{
		UClass* Class = UACFAttackAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComboCounter", &UACFAttackAction::execGetComboCounter },
			{ "ResetComboCounter", &UACFAttackAction::execResetComboCounter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics
	{
		struct ACFAttackAction_eventGetComboCounter_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAttackAction_eventGetComboCounter_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttackAction, nullptr, "GetComboCounter", nullptr, nullptr, Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::ACFAttackAction_eventGetComboCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::ACFAttackAction_eventGetComboCounter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAttackAction_GetComboCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAttackAction_GetComboCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttackAction_ResetComboCounter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttackAction_ResetComboCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttackAction_ResetComboCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttackAction, nullptr, "ResetComboCounter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttackAction_ResetComboCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAttackAction_ResetComboCounter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAttackAction_ResetComboCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAttackAction_ResetComboCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAttackAction);
	UClass* Z_Construct_UClass_UACFAttackAction_NoRegister()
	{
		return UACFAttackAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFAttackAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageToActivate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageToActivate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckWarpConditions_MetaData[];
#endif
		static void NewProp_bCheckWarpConditions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckWarpConditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxWarpDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxWarpDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minWarpDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minWarpDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxWarpAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxWarpAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinuousUpdate_MetaData[];
#endif
		static void NewProp_bContinuousUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuousUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpMagnetismStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpMagnetismStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAttackAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAttackAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAttackAction_GetComboCounter, "GetComboCounter" }, // 1557026680
		{ &Z_Construct_UFunction_UACFAttackAction_ResetComboCounter, "ResetComboCounter" }, // 935820903
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/ACFAttackAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate = { "DamageToActivate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAttackAction, DamageToActivate), Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate_MetaData) }; // 3742955585
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels_Inner = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAttackAction, TraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions_SetBit(void* Obj)
	{
		((UACFAttackAction*)Obj)->bCheckWarpConditions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions = { "bCheckWarpConditions", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAttackAction), &Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpDistance_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bCheckWarpConditions" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpDistance = { "maxWarpDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAttackAction, maxWarpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpDistance_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_minWarpDistance_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bCheckWarpConditions" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_minWarpDistance = { "minWarpDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAttackAction, minWarpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_minWarpDistance_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_minWarpDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpAngle_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bCheckWarpConditions" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpAngle = { "maxWarpAngle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAttackAction, maxWarpAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpAngle_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate_SetBit(void* Obj)
	{
		((UACFAttackAction*)Obj)->bContinuousUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate = { "bContinuousUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAttackAction), &Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttackAction_Statics::NewProp_WarpMagnetismStrength_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bContinuousUpdate" },
		{ "ModuleRelativePath", "Public/Actions/ACFAttackAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAttackAction_Statics::NewProp_WarpMagnetismStrength = { "WarpMagnetismStrength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAttackAction, WarpMagnetismStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::NewProp_WarpMagnetismStrength_MetaData), Z_Construct_UClass_UACFAttackAction_Statics::NewProp_WarpMagnetismStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAttackAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_DamageToActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_TraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bCheckWarpConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_minWarpDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_maxWarpAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_bContinuousUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttackAction_Statics::NewProp_WarpMagnetismStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAttackAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAttackAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAttackAction_Statics::ClassParams = {
		&UACFAttackAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAttackAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAttackAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttackAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFAttackAction()
	{
		if (!Z_Registration_Info_UClass_UACFAttackAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAttackAction.OuterSingleton, Z_Construct_UClass_UACFAttackAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAttackAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFAttackAction>()
	{
		return UACFAttackAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAttackAction);
	UACFAttackAction::~UACFAttackAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAttackAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAttackAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAttackAction, UACFAttackAction::StaticClass, TEXT("UACFAttackAction"), &Z_Registration_Info_UClass_UACFAttackAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAttackAction), 3595792809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAttackAction_h_2218109743(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAttackAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAttackAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

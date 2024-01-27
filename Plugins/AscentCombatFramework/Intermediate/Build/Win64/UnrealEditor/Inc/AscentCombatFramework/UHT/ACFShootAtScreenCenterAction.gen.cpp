// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFShootAtScreenCenterAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFShootAtScreenCenterAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFShootAtScreenCenterAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFShootAtScreenCenterAction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFShootAtScreenCenterAction::execShootAtScreenCenter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootAtScreenCenter(Z_Param_charge);
		P_NATIVE_END;
	}
	void UACFShootAtScreenCenterAction::StaticRegisterNativesUACFShootAtScreenCenterAction()
	{
		UClass* Class = UACFShootAtScreenCenterAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShootAtScreenCenter", &UACFShootAtScreenCenterAction::execShootAtScreenCenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics
	{
		struct ACFShootAtScreenCenterAction_eventShootAtScreenCenter_Parms
		{
			float charge;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_charge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_charge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::NewProp_charge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootAtScreenCenterAction_eventShootAtScreenCenter_Parms, charge), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::NewProp_charge_MetaData), Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::NewProp_charge_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::NewProp_charge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_charge", "1.000000" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootAtScreenCenterAction, nullptr, "ShootAtScreenCenter", nullptr, nullptr, Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::ACFShootAtScreenCenterAction_eventShootAtScreenCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::ACFShootAtScreenCenterAction_eventShootAtScreenCenter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFShootAtScreenCenterAction);
	UClass* Z_Construct_UClass_UACFShootAtScreenCenterAction_NoRegister()
	{
		return UACFShootAtScreenCenterAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFShootAtScreenCenterAction_ShootAtScreenCenter, "ShootAtScreenCenter" }, // 4183692407
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/ACFShootAtScreenCenterAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ShootTraceLength_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ShootTraceLength = { "ShootTraceLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAtScreenCenterAction, ShootTraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ShootTraceLength_MetaData), Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ShootTraceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAtScreenCenterAction, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_TraceChannel_MetaData), Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_TraceChannel_MetaData) }; // 2725057287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAtScreenCenterAction, Debug), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_Debug_MetaData), Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_Debug_MetaData) }; // 739760662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ProjectileOverride_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ProjectileOverride = { "ProjectileOverride", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAtScreenCenterAction, ProjectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ProjectileOverride_MetaData), Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ProjectileOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAtScreenCenterAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAtScreenCenterAction, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ScreenPosition_MetaData), Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ScreenPosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ShootTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ProjectileOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::NewProp_ScreenPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFShootAtScreenCenterAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::ClassParams = {
		&UACFShootAtScreenCenterAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFShootAtScreenCenterAction()
	{
		if (!Z_Registration_Info_UClass_UACFShootAtScreenCenterAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFShootAtScreenCenterAction.OuterSingleton, Z_Construct_UClass_UACFShootAtScreenCenterAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFShootAtScreenCenterAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFShootAtScreenCenterAction>()
	{
		return UACFShootAtScreenCenterAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFShootAtScreenCenterAction);
	UACFShootAtScreenCenterAction::~UACFShootAtScreenCenterAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAtScreenCenterAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAtScreenCenterAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFShootAtScreenCenterAction, UACFShootAtScreenCenterAction::StaticClass, TEXT("UACFShootAtScreenCenterAction"), &Z_Registration_Info_UClass_UACFShootAtScreenCenterAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFShootAtScreenCenterAction), 2399914462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAtScreenCenterAction_h_3669247049(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAtScreenCenterAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAtScreenCenterAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

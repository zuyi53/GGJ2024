// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFDirectionalDodgeAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDirectionalDodgeAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDirectionalDodgeAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDirectionalDodgeAction_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFDirectionalDodgeAction::execGetDodgeDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=P_THIS->GetDodgeDirection();
		P_NATIVE_END;
	}
	void UACFDirectionalDodgeAction::StaticRegisterNativesUACFDirectionalDodgeAction()
	{
		UClass* Class = UACFDirectionalDodgeAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDodgeDirection", &UACFDirectionalDodgeAction::execGetDodgeDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics
	{
		struct ACFDirectionalDodgeAction_eventGetDodgeDirection_Parms
		{
			EACFDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDirectionalDodgeAction_eventGetDodgeDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFDirectionalDodgeAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDirectionalDodgeAction, nullptr, "GetDodgeDirection", nullptr, nullptr, Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::ACFDirectionalDodgeAction_eventGetDodgeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::ACFDirectionalDodgeAction_eventGetDodgeDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDirectionalDodgeAction);
	UClass* Z_Construct_UClass_UACFDirectionalDodgeAction_NoRegister()
	{
		return UACFDirectionalDodgeAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFDirectionalDodgeAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DodgeDirectionToMontageSectionMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DodgeDirectionToMontageSectionMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DodgeDirectionToMontageSectionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeDirectionToMontageSectionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DodgeDirectionToMontageSectionMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeLength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_defaultDodgeDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultDodgeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_defaultDodgeDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFDirectionalDodgeAction_GetDodgeDirection, "GetDodgeDirection" }, // 3766542733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Actions/ACFDirectionalDodgeAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFDirectionalDodgeAction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_ValueProp = { "DodgeDirectionToMontageSectionMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_Key_KeyProp = { "DodgeDirectionToMontageSectionMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFDirectionalDodgeAction.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap = { "DodgeDirectionToMontageSectionMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDirectionalDodgeAction, DodgeDirectionToMontageSectionMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_MetaData), Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_MetaData) }; // 1707824474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeLength_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bShouldWarp" },
		{ "ModuleRelativePath", "Public/Actions/ACFDirectionalDodgeAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeLength = { "DodgeLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDirectionalDodgeAction, DodgeLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeLength_MetaData), Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeLength_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bShouldWarp" },
		{ "ModuleRelativePath", "Public/Actions/ACFDirectionalDodgeAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection = { "defaultDodgeDirection", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDirectionalDodgeAction, defaultDodgeDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection_MetaData), Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection_MetaData) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeDirectionToMontageSectionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_DodgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::NewProp_defaultDodgeDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDirectionalDodgeAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::ClassParams = {
		&UACFDirectionalDodgeAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFDirectionalDodgeAction()
	{
		if (!Z_Registration_Info_UClass_UACFDirectionalDodgeAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDirectionalDodgeAction.OuterSingleton, Z_Construct_UClass_UACFDirectionalDodgeAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDirectionalDodgeAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDirectionalDodgeAction>()
	{
		return UACFDirectionalDodgeAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDirectionalDodgeAction);
	UACFDirectionalDodgeAction::~UACFDirectionalDodgeAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFDirectionalDodgeAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFDirectionalDodgeAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDirectionalDodgeAction, UACFDirectionalDodgeAction::StaticClass, TEXT("UACFDirectionalDodgeAction"), &Z_Registration_Info_UClass_UACFDirectionalDodgeAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDirectionalDodgeAction), 1498126714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFDirectionalDodgeAction_h_2276808634(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFDirectionalDodgeAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFDirectionalDodgeAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

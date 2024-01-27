// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedRPGSystem/Public/ARSGenerationRulesDataAsset.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSGenerationRulesDataAsset() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSGenerationRulesDataAsset();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSGenerationRulesDataAsset_NoRegister();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGenerationRule();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem();
// End Cross Module References
	DEFINE_FUNCTION(UARSGenerationRulesDataAsset::execTryGetGenerationRulesForPrimaryAttributes)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_primaryAttribute);
		P_GET_STRUCT_REF(FGenerationRule,Z_Param_Out_outRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetGenerationRulesForPrimaryAttributes(Z_Param_Out_primaryAttribute,Z_Param_Out_outRule);
		P_NATIVE_END;
	}
	void UARSGenerationRulesDataAsset::StaticRegisterNativesUARSGenerationRulesDataAsset()
	{
		UClass* Class = UARSGenerationRulesDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryGetGenerationRulesForPrimaryAttributes", &UARSGenerationRulesDataAsset::execTryGetGenerationRulesForPrimaryAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics
	{
		struct ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms
		{
			FGameplayTag primaryAttribute;
			FGenerationRule outRule;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_primaryAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_primaryAttribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outRule;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_primaryAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_primaryAttribute = { "primaryAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms, primaryAttribute), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_primaryAttribute_MetaData), Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_primaryAttribute_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_outRule = { "outRule", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms, outRule), Z_Construct_UScriptStruct_FGenerationRule, METADATA_PARAMS(0, nullptr) }; // 3582667755
	void Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms), &Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_primaryAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_outRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSGenerationRulesDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSGenerationRulesDataAsset, nullptr, "TryGetGenerationRulesForPrimaryAttributes", nullptr, nullptr, Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::ARSGenerationRulesDataAsset_eventTryGetGenerationRulesForPrimaryAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSGenerationRulesDataAsset);
	UClass* Z_Construct_UClass_UARSGenerationRulesDataAsset_NoRegister()
	{
		return UARSGenerationRulesDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesGenerationRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesGenerationRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesGenerationRules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSGenerationRulesDataAsset_TryGetGenerationRulesForPrimaryAttributes, "TryGetGenerationRulesForPrimaryAttributes" }, // 3617099597
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ARSGenerationRulesDataAsset.h" },
		{ "ModuleRelativePath", "Public/ARSGenerationRulesDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules_Inner = { "AttributesGenerationRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenerationRule, METADATA_PARAMS(0, nullptr) }; // 3582667755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Define with Curves how your Attributes generates your Parameters and your Statistics */" },
		{ "ModuleRelativePath", "Public/ARSGenerationRulesDataAsset.h" },
		{ "TitleProperty", "PrimaryAttributesTag" },
		{ "ToolTip", "Define with Curves how your Attributes generates your Parameters and your Statistics" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules = { "AttributesGenerationRules", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSGenerationRulesDataAsset, AttributesGenerationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules_MetaData), Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules_MetaData) }; // 3582667755
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::NewProp_AttributesGenerationRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSGenerationRulesDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::ClassParams = {
		&UARSGenerationRulesDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UARSGenerationRulesDataAsset()
	{
		if (!Z_Registration_Info_UClass_UARSGenerationRulesDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSGenerationRulesDataAsset.OuterSingleton, Z_Construct_UClass_UARSGenerationRulesDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSGenerationRulesDataAsset.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<UARSGenerationRulesDataAsset>()
	{
		return UARSGenerationRulesDataAsset::StaticClass();
	}
	UARSGenerationRulesDataAsset::UARSGenerationRulesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSGenerationRulesDataAsset);
	UARSGenerationRulesDataAsset::~UARSGenerationRulesDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSGenerationRulesDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSGenerationRulesDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSGenerationRulesDataAsset, UARSGenerationRulesDataAsset::StaticClass, TEXT("UARSGenerationRulesDataAsset"), &Z_Registration_Info_UClass_UARSGenerationRulesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSGenerationRulesDataAsset), 152749759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSGenerationRulesDataAsset_h_2549692065(TEXT("/Script/AdvancedRPGSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSGenerationRulesDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSGenerationRulesDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

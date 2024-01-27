// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFConsumable.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFConsumable() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedAttributeSetModifier();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FActionEffect();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFConsumable();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFConsumable_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFConsumable::execOnItemUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFConsumable::execGetTimedModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimedAttributeSetModifier>*)Z_Param__Result=P_THIS->GetTimedModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFConsumable::execGetStatsModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FStatisticValue>*)Z_Param__Result=P_THIS->GetStatsModifiers();
		P_NATIVE_END;
	}
	static FName NAME_AACFConsumable_OnItemUsed = FName(TEXT("OnItemUsed"));
	void AACFConsumable::OnItemUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFConsumable_OnItemUsed),NULL);
	}
	void AACFConsumable::StaticRegisterNativesAACFConsumable()
	{
		UClass* Class = AACFConsumable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStatsModifiers", &AACFConsumable::execGetStatsModifiers },
			{ "GetTimedModifiers", &AACFConsumable::execGetTimedModifiers },
			{ "OnItemUsed", &AACFConsumable::execOnItemUsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics
	{
		struct ACFConsumable_eventGetStatsModifiers_Parms
		{
			TArray<FStatisticValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFConsumable_eventGetStatsModifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111676830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFConsumable, nullptr, "GetStatsModifiers", nullptr, nullptr, Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::ACFConsumable_eventGetStatsModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::ACFConsumable_eventGetStatsModifiers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFConsumable_GetStatsModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFConsumable_GetStatsModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics
	{
		struct ACFConsumable_eventGetTimedModifiers_Parms
		{
			TArray<FTimedAttributeSetModifier> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimedAttributeSetModifier, METADATA_PARAMS(0, nullptr) }; // 1745705883
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFConsumable_eventGetTimedModifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1745705883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFConsumable, nullptr, "GetTimedModifiers", nullptr, nullptr, Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::ACFConsumable_eventGetTimedModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::ACFConsumable_eventGetTimedModifiers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFConsumable_GetTimedModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFConsumable_GetTimedModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFConsumable_OnItemUsed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFConsumable_OnItemUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFConsumable_OnItemUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFConsumable, nullptr, "OnItemUsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFConsumable_OnItemUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFConsumable_OnItemUsed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFConsumable_OnItemUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFConsumable_OnItemUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFConsumable);
	UClass* Z_Construct_UClass_AACFConsumable_NoRegister()
	{
		return AACFConsumable::StaticClass();
	}
	struct Z_Construct_UClass_AACFConsumable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatModifier_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatModifier_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatModifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimedAttributeSetModifier_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimedAttributeSetModifier_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimedAttributeSetModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUsedEffect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnUsedEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeOnUse_MetaData[];
#endif
		static void NewProp_bConsumeOnUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeOnUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFConsumable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFConsumable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFConsumable_GetStatsModifiers, "GetStatsModifiers" }, // 3594691209
		{ &Z_Construct_UFunction_AACFConsumable_GetTimedModifiers, "GetTimedModifiers" }, // 2868569205
		{ &Z_Construct_UFunction_AACFConsumable_OnItemUsed, "OnItemUsed" }, // 350143747
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFConsumable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Items/ACFConsumable.h" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier_Inner = { "StatModifier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier_MetaData[] = {
		{ "Category", "ACF | Consumable" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier = { "StatModifier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFConsumable, StatModifier), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier_MetaData), Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier_MetaData) }; // 2111676830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier_Inner = { "TimedAttributeSetModifier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimedAttributeSetModifier, METADATA_PARAMS(0, nullptr) }; // 1745705883
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier_MetaData[] = {
		{ "Category", "ACF | Consumable" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier = { "TimedAttributeSetModifier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFConsumable, TimedAttributeSetModifier), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier_MetaData), Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier_MetaData) }; // 1745705883
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFConsumable_Statics::NewProp_OnUsedEffect_MetaData[] = {
		{ "Category", "ACF | Consumable" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFConsumable_Statics::NewProp_OnUsedEffect = { "OnUsedEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFConsumable, OnUsedEffect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::NewProp_OnUsedEffect_MetaData), Z_Construct_UClass_AACFConsumable_Statics::NewProp_OnUsedEffect_MetaData) }; // 2181620844
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse_MetaData[] = {
		{ "Category", "ACF | Consumable" },
		{ "ModuleRelativePath", "Public/Items/ACFConsumable.h" },
	};
#endif
	void Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse_SetBit(void* Obj)
	{
		((AACFConsumable*)Obj)->bConsumeOnUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse = { "bConsumeOnUse", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFConsumable), &Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse_MetaData), Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFConsumable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFConsumable_Statics::NewProp_StatModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFConsumable_Statics::NewProp_TimedAttributeSetModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFConsumable_Statics::NewProp_OnUsedEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFConsumable_Statics::NewProp_bConsumeOnUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFConsumable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFConsumable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFConsumable_Statics::ClassParams = {
		&AACFConsumable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFConsumable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFConsumable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFConsumable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFConsumable()
	{
		if (!Z_Registration_Info_UClass_AACFConsumable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFConsumable.OuterSingleton, Z_Construct_UClass_AACFConsumable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFConsumable.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFConsumable>()
	{
		return AACFConsumable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFConsumable);
	AACFConsumable::~AACFConsumable() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFConsumable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFConsumable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFConsumable, AACFConsumable::StaticClass, TEXT("AACFConsumable"), &Z_Registration_Info_UClass_AACFConsumable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFConsumable), 2528236551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFConsumable_h_488345485(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFConsumable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFConsumable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

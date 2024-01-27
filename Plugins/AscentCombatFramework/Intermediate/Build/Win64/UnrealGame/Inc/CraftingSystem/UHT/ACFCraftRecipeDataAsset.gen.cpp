// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingSystem/Public/ACFCraftRecipeDataAsset.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCraftRecipeDataAsset() {}
// Cross Module References
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFCraftRecipeDataAsset();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFCraftRecipeDataAsset_NoRegister();
	CRAFTINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFCraftingRecipe();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	UPackage* Z_Construct_UPackage__Script_CraftingSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FACFCraftingRecipe>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FACFCraftingRecipe cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFCraftingRecipe;
class UScriptStruct* FACFCraftingRecipe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFCraftingRecipe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFCraftingRecipe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFCraftingRecipe, (UObject*)Z_Construct_UPackage__Script_CraftingSystem(), TEXT("ACFCraftingRecipe"));
	}
	return Z_Registration_Info_UScriptStruct_ACFCraftingRecipe.OuterSingleton;
}
template<> CRAFTINGSYSTEM_API UScriptStruct* StaticStruct<FACFCraftingRecipe>()
{
	return FACFCraftingRecipe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraftingCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraftingCost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFCraftingRecipe>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems_Inner = { "RequiredItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems = { "RequiredItems", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFCraftingRecipe, RequiredItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems_MetaData), Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_OutputItem_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_OutputItem = { "OutputItem", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFCraftingRecipe, OutputItem), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_OutputItem_MetaData), Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_OutputItem_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_CraftingCost_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_CraftingCost = { "CraftingCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFCraftingRecipe, CraftingCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_CraftingCost_MetaData), Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_CraftingCost_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_RequiredItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_OutputItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewProp_CraftingCost,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ACFCraftingRecipe",
		Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::PropPointers),
		sizeof(FACFCraftingRecipe),
		alignof(FACFCraftingRecipe),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFCraftingRecipe()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFCraftingRecipe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFCraftingRecipe.InnerSingleton, Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFCraftingRecipe.InnerSingleton;
	}
	DEFINE_FUNCTION(UACFCraftRecipeDataAsset::execGetCraftingRecipe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FACFCraftingRecipe*)Z_Param__Result=P_THIS->GetCraftingRecipe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftRecipeDataAsset::execSetCraftingRecipe)
	{
		P_GET_STRUCT_REF(FACFCraftingRecipe,Z_Param_Out_inRecipe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCraftingRecipe(Z_Param_Out_inRecipe);
		P_NATIVE_END;
	}
	void UACFCraftRecipeDataAsset::StaticRegisterNativesUACFCraftRecipeDataAsset()
	{
		UClass* Class = UACFCraftRecipeDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCraftingRecipe", &UACFCraftRecipeDataAsset::execGetCraftingRecipe },
			{ "SetCraftingRecipe", &UACFCraftRecipeDataAsset::execSetCraftingRecipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics
	{
		struct ACFCraftRecipeDataAsset_eventGetCraftingRecipe_Parms
		{
			FACFCraftingRecipe ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftRecipeDataAsset_eventGetCraftingRecipe_Parms, ReturnValue), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(0, nullptr) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftRecipeDataAsset, nullptr, "GetCraftingRecipe", nullptr, nullptr, Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::ACFCraftRecipeDataAsset_eventGetCraftingRecipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::ACFCraftRecipeDataAsset_eventGetCraftingRecipe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics
	{
		struct ACFCraftRecipeDataAsset_eventSetCraftingRecipe_Parms
		{
			FACFCraftingRecipe inRecipe;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inRecipe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inRecipe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::NewProp_inRecipe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::NewProp_inRecipe = { "inRecipe", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftRecipeDataAsset_eventSetCraftingRecipe_Parms, inRecipe), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::NewProp_inRecipe_MetaData), Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::NewProp_inRecipe_MetaData) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::NewProp_inRecipe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftRecipeDataAsset, nullptr, "SetCraftingRecipe", nullptr, nullptr, Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::ACFCraftRecipeDataAsset_eventSetCraftingRecipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::ACFCraftRecipeDataAsset_eventSetCraftingRecipe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCraftRecipeDataAsset);
	UClass* Z_Construct_UClass_UACFCraftRecipeDataAsset_NoRegister()
	{
		return UACFCraftRecipeDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecipeConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCraftRecipeDataAsset_GetCraftingRecipe, "GetCraftingRecipe" }, // 2120749778
		{ &Z_Construct_UFunction_UACFCraftRecipeDataAsset_SetCraftingRecipe, "SetCraftingRecipe" }, // 158467731
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFCraftRecipeDataAsset.h" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::NewProp_RecipeConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCraftRecipeDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::NewProp_RecipeConfig = { "RecipeConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCraftRecipeDataAsset, RecipeConfig), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::NewProp_RecipeConfig_MetaData), Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::NewProp_RecipeConfig_MetaData) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::NewProp_RecipeConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCraftRecipeDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::ClassParams = {
		&UACFCraftRecipeDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCraftRecipeDataAsset()
	{
		if (!Z_Registration_Info_UClass_UACFCraftRecipeDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCraftRecipeDataAsset.OuterSingleton, Z_Construct_UClass_UACFCraftRecipeDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCraftRecipeDataAsset.OuterSingleton;
	}
	template<> CRAFTINGSYSTEM_API UClass* StaticClass<UACFCraftRecipeDataAsset>()
	{
		return UACFCraftRecipeDataAsset::StaticClass();
	}
	UACFCraftRecipeDataAsset::UACFCraftRecipeDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCraftRecipeDataAsset);
	UACFCraftRecipeDataAsset::~UACFCraftRecipeDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FACFCraftingRecipe::StaticStruct, Z_Construct_UScriptStruct_FACFCraftingRecipe_Statics::NewStructOps, TEXT("ACFCraftingRecipe"), &Z_Registration_Info_UScriptStruct_ACFCraftingRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFCraftingRecipe), 3303687441U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCraftRecipeDataAsset, UACFCraftRecipeDataAsset::StaticClass, TEXT("UACFCraftRecipeDataAsset"), &Z_Registration_Info_UClass_UACFCraftRecipeDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCraftRecipeDataAsset), 3104019937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_1891406515(TEXT("/Script/CraftingSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftRecipeDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

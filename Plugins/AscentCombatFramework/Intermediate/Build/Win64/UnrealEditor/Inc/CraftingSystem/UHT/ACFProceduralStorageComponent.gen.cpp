// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingSystem/Public/ACFProceduralStorageComponent.h"
#include "ACFItemTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFProceduralStorageComponent() {}
// Cross Module References
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFItemsManagerComponent_NoRegister();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFProceduralStorageComponent();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFProceduralStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFStorageComponent();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFItemGenerationRule();
	UPackage* Z_Construct_UPackage__Script_CraftingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFProceduralStorageComponent::execGetItemsManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFItemsManagerComponent**)Z_Param__Result=P_THIS->GetItemsManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFProceduralStorageComponent::execGenerateStorageItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->GenerateStorageItems_Validate())
		{
			RPC_ValidateFailed(TEXT("GenerateStorageItems_Validate"));
			return;
		}
		P_THIS->GenerateStorageItems_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UACFProceduralStorageComponent_GenerateStorageItems = FName(TEXT("GenerateStorageItems"));
	void UACFProceduralStorageComponent::GenerateStorageItems()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFProceduralStorageComponent_GenerateStorageItems),NULL);
	}
	void UACFProceduralStorageComponent::StaticRegisterNativesUACFProceduralStorageComponent()
	{
		UClass* Class = UACFProceduralStorageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateStorageItems", &UACFProceduralStorageComponent::execGenerateStorageItems },
			{ "GetItemsManager", &UACFProceduralStorageComponent::execGetItemsManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Call this to fill the storage with the provided generation rules*/" },
		{ "ModuleRelativePath", "Public/ACFProceduralStorageComponent.h" },
		{ "ToolTip", "Call this to fill the storage with the provided generation rules" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFProceduralStorageComponent, nullptr, "GenerateStorageItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics
	{
		struct ACFProceduralStorageComponent_eventGetItemsManager_Parms
		{
			UACFItemsManagerComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProceduralStorageComponent_eventGetItemsManager_Parms, ReturnValue), Z_Construct_UClass_UACFItemsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFProceduralStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFProceduralStorageComponent, nullptr, "GetItemsManager", nullptr, nullptr, Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::ACFProceduralStorageComponent_eventGetItemsManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::ACFProceduralStorageComponent_eventGetItemsManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFProceduralStorageComponent);
	UClass* Z_Construct_UClass_UACFProceduralStorageComponent_NoRegister()
	{
		return UACFProceduralStorageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFProceduralStorageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemGenerationRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemGenerationRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemGenerationRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerated_MetaData[];
#endif
		static void NewProp_bGenerated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFProceduralStorageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFStorageComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFProceduralStorageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFProceduralStorageComponent_GenerateStorageItems, "GenerateStorageItems" }, // 1413032673
		{ &Z_Construct_UFunction_UACFProceduralStorageComponent_GetItemsManager, "GetItemsManager" }, // 3721773776
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFProceduralStorageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ACFProceduralStorageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFProceduralStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules_Inner = { "ItemGenerationRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FACFItemGenerationRule, METADATA_PARAMS(0, nullptr) }; // 2976150633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFProceduralStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules = { "ItemGenerationRules", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFProceduralStorageComponent, ItemGenerationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules_MetaData), Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules_MetaData) }; // 2976150633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFProceduralStorageComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated_SetBit(void* Obj)
	{
		((UACFProceduralStorageComponent*)Obj)->bGenerated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated = { "bGenerated", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFProceduralStorageComponent), &Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated_MetaData), Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFProceduralStorageComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_ItemGenerationRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFProceduralStorageComponent_Statics::NewProp_bGenerated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFProceduralStorageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFProceduralStorageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFProceduralStorageComponent_Statics::ClassParams = {
		&UACFProceduralStorageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFProceduralStorageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFProceduralStorageComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFProceduralStorageComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFProceduralStorageComponent()
	{
		if (!Z_Registration_Info_UClass_UACFProceduralStorageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFProceduralStorageComponent.OuterSingleton, Z_Construct_UClass_UACFProceduralStorageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFProceduralStorageComponent.OuterSingleton;
	}
	template<> CRAFTINGSYSTEM_API UClass* StaticClass<UACFProceduralStorageComponent>()
	{
		return UACFProceduralStorageComponent::StaticClass();
	}
	UACFProceduralStorageComponent::UACFProceduralStorageComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFProceduralStorageComponent);
	UACFProceduralStorageComponent::~UACFProceduralStorageComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFProceduralStorageComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFProceduralStorageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFProceduralStorageComponent, UACFProceduralStorageComponent::StaticClass, TEXT("UACFProceduralStorageComponent"), &Z_Registration_Info_UClass_UACFProceduralStorageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFProceduralStorageComponent), 1659387250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFProceduralStorageComponent_h_2781053966(TEXT("/Script/CraftingSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFProceduralStorageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFProceduralStorageComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

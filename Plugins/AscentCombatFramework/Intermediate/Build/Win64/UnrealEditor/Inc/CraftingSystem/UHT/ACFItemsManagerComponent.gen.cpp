// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingSystem/Public/ACFItemsManagerComponent.h"
#include "ACFItemTypes.h"
#include "Components/ACFEquipmentComponent.h"
#include "CraftingSystem/Public/ACFCraftRecipeDataAsset.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFItemsManagerComponent() {}
// Cross Module References
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFCraftingComponent_NoRegister();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFItemsManagerComponent();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFItemsManagerComponent_NoRegister();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFVendorComponent_NoRegister();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature();
	CRAFTINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFCraftingRecipe();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFItemGenerationRule();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemGenerationSlot();
	UPackage* Z_Construct_UPackage__Script_CraftingSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics
	{
		struct _Script_CraftingSystem_eventOnItemCrafted_Parms
		{
			FACFCraftingRecipe recipe;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recipe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_recipe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::NewProp_recipe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CraftingSystem_eventOnItemCrafted_Parms, recipe), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::NewProp_recipe_MetaData), Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::NewProp_recipe_MetaData) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CraftingSystem, nullptr, "OnItemCrafted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemCrafted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemCrafted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemCrafted_DelegateWrapper(const FMulticastScriptDelegate& OnItemCrafted, FACFCraftingRecipe const& recipe)
{
	struct _Script_CraftingSystem_eventOnItemCrafted_Parms
	{
		FACFCraftingRecipe recipe;
	};
	_Script_CraftingSystem_eventOnItemCrafted_Parms Parms;
	Parms.recipe=recipe;
	OnItemCrafted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics
	{
		struct _Script_CraftingSystem_eventOnItemSold_Parms
		{
			FInventoryItem item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CraftingSystem_eventOnItemSold_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::NewProp_item_MetaData), Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::NewProp_item_MetaData) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CraftingSystem, nullptr, "OnItemSold__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemSold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemSold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemSold_DelegateWrapper(const FMulticastScriptDelegate& OnItemSold, FInventoryItem const& item)
{
	struct _Script_CraftingSystem_eventOnItemSold_Parms
	{
		FInventoryItem item;
	};
	_Script_CraftingSystem_eventOnItemSold_Parms Parms;
	Parms.item=item;
	OnItemSold.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics
	{
		struct _Script_CraftingSystem_eventOnItemPurchased_Parms
		{
			FBaseItem item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CraftingSystem_eventOnItemPurchased_Parms, item), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::NewProp_item_MetaData), Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::NewProp_item_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CraftingSystem, nullptr, "OnItemPurchased__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemPurchased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemPurchased_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemPurchased_DelegateWrapper(const FMulticastScriptDelegate& OnItemPurchased, FBaseItem const& item)
{
	struct _Script_CraftingSystem_eventOnItemPurchased_Parms
	{
		FBaseItem item;
	};
	_Script_CraftingSystem_eventOnItemPurchased_Parms Parms;
	Parms.item=item;
	OnItemPurchased.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics
	{
		struct _Script_CraftingSystem_eventOnItemUpgraded_Parms
		{
			FInventoryItem item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CraftingSystem_eventOnItemUpgraded_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::NewProp_item_MetaData), Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::NewProp_item_MetaData) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CraftingSystem, nullptr, "OnItemUpgraded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemUpgraded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::_Script_CraftingSystem_eventOnItemUpgraded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemUpgraded_DelegateWrapper(const FMulticastScriptDelegate& OnItemUpgraded, FInventoryItem const& item)
{
	struct _Script_CraftingSystem_eventOnItemUpgraded_Parms
	{
		FInventoryItem item;
	};
	_Script_CraftingSystem_eventOnItemUpgraded_Parms Parms;
	Parms.item=item;
	OnItemUpgraded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execUpgradeItem)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_itemToUpgrade);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_GET_OBJECT(UACFCraftingComponent,Z_Param_craftingComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeItem_Implementation(Z_Param_itemToUpgrade,Z_Param_instigator,Z_Param_craftingComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execCraftItem)
	{
		P_GET_STRUCT(FACFCraftingRecipe,Z_Param_ItemToCraft);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_GET_OBJECT(UACFCraftingComponent,Z_Param_craftingComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CraftItem_Implementation(Z_Param_ItemToCraft,Z_Param_instigator,Z_Param_craftingComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execSellItemsToVendor)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_itemTobeSold);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_OBJECT(UACFVendorComponent,Z_Param_vendorComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SellItemsToVendor_Implementation(Z_Param_itemTobeSold,Z_Param_instigator,Z_Param_count,Z_Param_vendorComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execBuyItems)
	{
		P_GET_STRUCT(FBaseItem,Z_Param_item);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_GET_OBJECT(UACFVendorComponent,Z_Param_vendorComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyItems_Implementation(Z_Param_item,Z_Param_instigator,Z_Param_vendorComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execDoesSlotMatchesRule)
	{
		P_GET_STRUCT_REF(FACFItemGenerationRule,Z_Param_Out_generationRules);
		P_GET_STRUCT_REF(FItemGenerationSlot,Z_Param_Out_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesSlotMatchesRule(Z_Param_Out_generationRules,Z_Param_Out_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execGenerateItemFromRule)
	{
		P_GET_STRUCT_REF(FACFItemGenerationRule,Z_Param_Out_generationRules);
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateItemFromRule(Z_Param_Out_generationRules,Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemsManagerComponent::execGenerateItemsFromRules)
	{
		P_GET_TARRAY_REF(FACFItemGenerationRule,Z_Param_Out_generationRules);
		P_GET_TARRAY_REF(FBaseItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateItemsFromRules(Z_Param_Out_generationRules,Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	struct ACFItemsManagerComponent_eventBuyItems_Parms
	{
		FBaseItem item;
		APawn* instigator;
		UACFVendorComponent* vendorComp;
	};
	struct ACFItemsManagerComponent_eventCraftItem_Parms
	{
		FACFCraftingRecipe ItemToCraft;
		APawn* instigator;
		UACFCraftingComponent* craftingComp;
	};
	struct ACFItemsManagerComponent_eventSellItemsToVendor_Parms
	{
		FInventoryItem itemTobeSold;
		APawn* instigator;
		int32 count;
		UACFVendorComponent* vendorComp;
	};
	struct ACFItemsManagerComponent_eventUpgradeItem_Parms
	{
		FInventoryItem itemToUpgrade;
		APawn* instigator;
		UACFCraftingComponent* craftingComp;
	};
	static FName NAME_UACFItemsManagerComponent_BuyItems = FName(TEXT("BuyItems"));
	void UACFItemsManagerComponent::BuyItems(FBaseItem const& item, APawn* instigator, UACFVendorComponent* vendorComp)
	{
		ACFItemsManagerComponent_eventBuyItems_Parms Parms;
		Parms.item=item;
		Parms.instigator=instigator;
		Parms.vendorComp=vendorComp;
		ProcessEvent(FindFunctionChecked(NAME_UACFItemsManagerComponent_BuyItems),&Parms);
	}
	static FName NAME_UACFItemsManagerComponent_CraftItem = FName(TEXT("CraftItem"));
	void UACFItemsManagerComponent::CraftItem(FACFCraftingRecipe const& ItemToCraft, APawn* instigator, UACFCraftingComponent* craftingComp)
	{
		ACFItemsManagerComponent_eventCraftItem_Parms Parms;
		Parms.ItemToCraft=ItemToCraft;
		Parms.instigator=instigator;
		Parms.craftingComp=craftingComp;
		ProcessEvent(FindFunctionChecked(NAME_UACFItemsManagerComponent_CraftItem),&Parms);
	}
	static FName NAME_UACFItemsManagerComponent_SellItemsToVendor = FName(TEXT("SellItemsToVendor"));
	void UACFItemsManagerComponent::SellItemsToVendor(FInventoryItem const& itemTobeSold, APawn* instigator, int32 count, UACFVendorComponent* vendorComp)
	{
		ACFItemsManagerComponent_eventSellItemsToVendor_Parms Parms;
		Parms.itemTobeSold=itemTobeSold;
		Parms.instigator=instigator;
		Parms.count=count;
		Parms.vendorComp=vendorComp;
		ProcessEvent(FindFunctionChecked(NAME_UACFItemsManagerComponent_SellItemsToVendor),&Parms);
	}
	static FName NAME_UACFItemsManagerComponent_UpgradeItem = FName(TEXT("UpgradeItem"));
	void UACFItemsManagerComponent::UpgradeItem(FInventoryItem const& itemToUpgrade, APawn* instigator, UACFCraftingComponent* craftingComp)
	{
		ACFItemsManagerComponent_eventUpgradeItem_Parms Parms;
		Parms.itemToUpgrade=itemToUpgrade;
		Parms.instigator=instigator;
		Parms.craftingComp=craftingComp;
		ProcessEvent(FindFunctionChecked(NAME_UACFItemsManagerComponent_UpgradeItem),&Parms);
	}
	void UACFItemsManagerComponent::StaticRegisterNativesUACFItemsManagerComponent()
	{
		UClass* Class = UACFItemsManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyItems", &UACFItemsManagerComponent::execBuyItems },
			{ "CraftItem", &UACFItemsManagerComponent::execCraftItem },
			{ "DoesSlotMatchesRule", &UACFItemsManagerComponent::execDoesSlotMatchesRule },
			{ "GenerateItemFromRule", &UACFItemsManagerComponent::execGenerateItemFromRule },
			{ "GenerateItemsFromRules", &UACFItemsManagerComponent::execGenerateItemsFromRules },
			{ "SellItemsToVendor", &UACFItemsManagerComponent::execSellItemsToVendor },
			{ "UpgradeItem", &UACFItemsManagerComponent::execUpgradeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vendorComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vendorComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventBuyItems_Parms, item), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_item_MetaData) }; // 2547535924
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventBuyItems_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_vendorComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_vendorComp = { "vendorComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventBuyItems_Parms, vendorComp), Z_Construct_UClass_UACFVendorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_vendorComp_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_vendorComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::NewProp_vendorComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*------------------- SERVER SIDE -----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
		{ "ToolTip", "------------------- SERVER SIDE -----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "BuyItems", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::PropPointers), sizeof(ACFItemsManagerComponent_eventBuyItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFItemsManagerComponent_eventBuyItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToCraft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToCraft;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_craftingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_craftingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_ItemToCraft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_ItemToCraft = { "ItemToCraft", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventCraftItem_Parms, ItemToCraft), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_ItemToCraft_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_ItemToCraft_MetaData) }; // 3303687441
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventCraftItem_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_craftingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_craftingComp = { "craftingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventCraftItem_Parms, craftingComp), Z_Construct_UClass_UACFCraftingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_craftingComp_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_craftingComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_ItemToCraft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::NewProp_craftingComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "CraftItem", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::PropPointers), sizeof(ACFItemsManagerComponent_eventCraftItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFItemsManagerComponent_eventCraftItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics
	{
		struct ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms
		{
			FACFItemGenerationRule generationRules;
			FItemGenerationSlot item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_generationRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_generationRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_generationRules_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_generationRules = { "generationRules", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms, generationRules), Z_Construct_UScriptStruct_FACFItemGenerationRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_generationRules_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_generationRules_MetaData) }; // 2976150633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms, item), Z_Construct_UScriptStruct_FItemGenerationSlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_item_MetaData) }; // 3795919290
	void Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms), &Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_generationRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Returns true if the provided itemSlot matches the provided slot rules*/" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
		{ "ToolTip", "Returns true if the provided itemSlot matches the provided slot rules" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "DoesSlotMatchesRule", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::ACFItemsManagerComponent_eventDoesSlotMatchesRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics
	{
		struct ACFItemsManagerComponent_eventGenerateItemFromRule_Parms
		{
			FACFItemGenerationRule generationRules;
			FBaseItem outItems;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_generationRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_generationRules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_generationRules_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_generationRules = { "generationRules", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventGenerateItemFromRule_Parms, generationRules), Z_Construct_UScriptStruct_FACFItemGenerationRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_generationRules_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_generationRules_MetaData) }; // 2976150633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventGenerateItemFromRule_Parms, outItems), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
	void Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemsManagerComponent_eventGenerateItemFromRule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemsManagerComponent_eventGenerateItemFromRule_Parms), &Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_generationRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_outItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Generates an  FBaseItem matching the provide rule by selecting it from the provided ItemsDB\n    returns true if at least one item is found*/" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
		{ "ToolTip", "Generates an  FBaseItem matching the provide rule by selecting it from the provided ItemsDB\n   returns true if at least one item is found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "GenerateItemFromRule", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::ACFItemsManagerComponent_eventGenerateItemFromRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::ACFItemsManagerComponent_eventGenerateItemFromRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics
	{
		struct ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms
		{
			TArray<FACFItemGenerationRule> generationRules;
			TArray<FBaseItem> outItems;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_generationRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_generationRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_generationRules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outItems;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules_Inner = { "generationRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FACFItemGenerationRule, METADATA_PARAMS(0, nullptr) }; // 2976150633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules = { "generationRules", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms, generationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules_MetaData) }; // 2976150633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_outItems_Inner = { "outItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms, outItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2547535924
	void Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms), &Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_generationRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_outItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_outItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Generates an array of FBaseItem matching the provided rules by selecting them from the provided ItemsDB\n    returns true only if we are able to find matching items for ALL the provided rules*/" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
		{ "ToolTip", "Generates an array of FBaseItem matching the provided rules by selecting them from the provided ItemsDB\n   returns true only if we are able to find matching items for ALL the provided rules" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "GenerateItemsFromRules", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::ACFItemsManagerComponent_eventGenerateItemsFromRules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemTobeSold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemTobeSold;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vendorComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vendorComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold = { "itemTobeSold", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventSellItemsToVendor_Parms, itemTobeSold), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold_MetaData) }; // 892597640
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventSellItemsToVendor_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventSellItemsToVendor_Parms, count), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_vendorComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_vendorComp = { "vendorComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventSellItemsToVendor_Parms, vendorComp), Z_Construct_UClass_UACFVendorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_vendorComp_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_vendorComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::NewProp_vendorComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "SellItemsToVendor", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::PropPointers), sizeof(ACFItemsManagerComponent_eventSellItemsToVendor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFItemsManagerComponent_eventSellItemsToVendor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemToUpgrade_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemToUpgrade;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_craftingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_craftingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_itemToUpgrade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_itemToUpgrade = { "itemToUpgrade", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventUpgradeItem_Parms, itemToUpgrade), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_itemToUpgrade_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_itemToUpgrade_MetaData) }; // 892597640
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventUpgradeItem_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_craftingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_craftingComp = { "craftingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemsManagerComponent_eventUpgradeItem_Parms, craftingComp), Z_Construct_UClass_UACFCraftingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_craftingComp_MetaData), Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_craftingComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_itemToUpgrade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::NewProp_craftingComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemsManagerComponent, nullptr, "UpgradeItem", nullptr, nullptr, Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::PropPointers), sizeof(ACFItemsManagerComponent_eventUpgradeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFItemsManagerComponent_eventUpgradeItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFItemsManagerComponent);
	UClass* Z_Construct_UClass_UACFItemsManagerComponent_NoRegister()
	{
		return UACFItemsManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFItemsManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsDB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsDB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemCrafted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemCrafted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemSold_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemSold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemPurchased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemPurchased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUpgraded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUpgraded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFItemsManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFItemsManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_BuyItems, "BuyItems" }, // 3920594200
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_CraftItem, "CraftItem" }, // 2199125414
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_DoesSlotMatchesRule, "DoesSlotMatchesRule" }, // 1213496403
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemFromRule, "GenerateItemFromRule" }, // 2703586159
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_GenerateItemsFromRules, "GenerateItemsFromRules" }, // 2534203997
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_SellItemsToVendor, "SellItemsToVendor" }, // 1144669015
		{ &Z_Construct_UFunction_UACFItemsManagerComponent_UpgradeItem, "UpgradeItem" }, // 2013429861
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemsManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFItemsManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_ItemsDB_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_ItemsDB = { "ItemsDB", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFItemsManagerComponent, ItemsDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_ItemsDB_MetaData), Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_ItemsDB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemCrafted_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemCrafted = { "OnItemCrafted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFItemsManagerComponent, OnItemCrafted), Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemCrafted_MetaData), Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemCrafted_MetaData) }; // 2273229299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemSold_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemSold = { "OnItemSold", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFItemsManagerComponent, OnItemSold), Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemSold_MetaData), Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemSold_MetaData) }; // 2806640393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemPurchased_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemPurchased = { "OnItemPurchased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFItemsManagerComponent, OnItemPurchased), Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemPurchased_MetaData), Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemPurchased_MetaData) }; // 1554479032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemUpgraded_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemUpgraded = { "OnItemUpgraded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFItemsManagerComponent, OnItemUpgraded), Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemUpgraded_MetaData), Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemUpgraded_MetaData) }; // 3350125597
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFItemsManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_ItemsDB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemCrafted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemSold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemPurchased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFItemsManagerComponent_Statics::NewProp_OnItemUpgraded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFItemsManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFItemsManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFItemsManagerComponent_Statics::ClassParams = {
		&UACFItemsManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFItemsManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFItemsManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemsManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFItemsManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFItemsManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFItemsManagerComponent.OuterSingleton, Z_Construct_UClass_UACFItemsManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFItemsManagerComponent.OuterSingleton;
	}
	template<> CRAFTINGSYSTEM_API UClass* StaticClass<UACFItemsManagerComponent>()
	{
		return UACFItemsManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFItemsManagerComponent);
	UACFItemsManagerComponent::~UACFItemsManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFItemsManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFItemsManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFItemsManagerComponent, UACFItemsManagerComponent::StaticClass, TEXT("UACFItemsManagerComponent"), &Z_Registration_Info_UClass_UACFItemsManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFItemsManagerComponent), 333479586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFItemsManagerComponent_h_85020607(TEXT("/Script/CraftingSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFItemsManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFItemsManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

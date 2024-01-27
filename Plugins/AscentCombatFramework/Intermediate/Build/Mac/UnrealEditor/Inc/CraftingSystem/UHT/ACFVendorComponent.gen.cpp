// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingSystem/Public/ACFVendorComponent.h"
#include "Components/ACFEquipmentComponent.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFVendorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFItemsManagerComponent_NoRegister();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFVendorComponent();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFVendorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFCurrencyComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFEquipmentComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFStorageComponent();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_CraftingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFVendorComponent::execTryGetItemDescriptorByClass)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_ItemClass);
		P_GET_STRUCT_REF(FItemDescriptor,Z_Param_Out_outItemDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetItemDescriptorByClass(Z_Param_Out_ItemClass,Z_Param_Out_outItemDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execTryGetItemDescriptor)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_item);
		P_GET_STRUCT_REF(FItemDescriptor,Z_Param_Out_outItemDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetItemDescriptor(Z_Param_Out_item,Z_Param_Out_outItemDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetItemCostPerUnit)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemCostPerUnit(Z_Param_Out_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execVendorUsesCurrency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->VendorUsesCurrency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetVendorPriceMultiplierOnSell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVendorPriceMultiplierOnSell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetVendorPriceMultiplierOnBuy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVendorPriceMultiplierOnBuy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetVendorCurrencyComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFCurrencyComponent**)Z_Param__Result=P_THIS->GetVendorCurrencyComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetVendorCurrency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVendorCurrency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetItemsManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFItemsManagerComponent**)Z_Param__Result=P_THIS->GetItemsManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetPawnInventory)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInventoryItem>*)Z_Param__Result=P_THIS->GetPawnInventory(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetPawnEquipment)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFEquipmentComponent**)Z_Param__Result=P_THIS->GetPawnEquipment(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execGetPawnCurrency)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPawnCurrency(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execSellItemsToVendor)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_itemTobeSold);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SellItemsToVendor(Z_Param_Out_itemTobeSold,Z_Param_instigator,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execBuyItems)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_item);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyItems(Z_Param_Out_item,Z_Param_instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execCanPawnSellItemFromHisInventory)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_itemTobeSold);
		P_GET_OBJECT(APawn,Z_Param_seller);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPawnSellItemFromHisInventory(Z_Param_Out_itemTobeSold,Z_Param_seller,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execCanPawnBuyItems)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_itemsToBuy);
		P_GET_OBJECT(APawn,Z_Param_buyer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPawnBuyItems(Z_Param_Out_itemsToBuy,Z_Param_buyer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execHowManyItemsCanSell)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_itemsToSell);
		P_GET_OBJECT(APawn,Z_Param_seller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->HowManyItemsCanSell(Z_Param_Out_itemsToSell,Z_Param_seller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVendorComponent::execHowManyItemsCanBuy)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_itemsToBuy);
		P_GET_OBJECT(APawn,Z_Param_buyer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->HowManyItemsCanBuy(Z_Param_Out_itemsToBuy,Z_Param_buyer);
		P_NATIVE_END;
	}
	void UACFVendorComponent::StaticRegisterNativesUACFVendorComponent()
	{
		UClass* Class = UACFVendorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyItems", &UACFVendorComponent::execBuyItems },
			{ "CanPawnBuyItems", &UACFVendorComponent::execCanPawnBuyItems },
			{ "CanPawnSellItemFromHisInventory", &UACFVendorComponent::execCanPawnSellItemFromHisInventory },
			{ "GetItemCostPerUnit", &UACFVendorComponent::execGetItemCostPerUnit },
			{ "GetItemsManager", &UACFVendorComponent::execGetItemsManager },
			{ "GetPawnCurrency", &UACFVendorComponent::execGetPawnCurrency },
			{ "GetPawnEquipment", &UACFVendorComponent::execGetPawnEquipment },
			{ "GetPawnInventory", &UACFVendorComponent::execGetPawnInventory },
			{ "GetVendorCurrency", &UACFVendorComponent::execGetVendorCurrency },
			{ "GetVendorCurrencyComp", &UACFVendorComponent::execGetVendorCurrencyComp },
			{ "GetVendorPriceMultiplierOnBuy", &UACFVendorComponent::execGetVendorPriceMultiplierOnBuy },
			{ "GetVendorPriceMultiplierOnSell", &UACFVendorComponent::execGetVendorPriceMultiplierOnSell },
			{ "HowManyItemsCanBuy", &UACFVendorComponent::execHowManyItemsCanBuy },
			{ "HowManyItemsCanSell", &UACFVendorComponent::execHowManyItemsCanSell },
			{ "SellItemsToVendor", &UACFVendorComponent::execSellItemsToVendor },
			{ "TryGetItemDescriptor", &UACFVendorComponent::execTryGetItemDescriptor },
			{ "TryGetItemDescriptorByClass", &UACFVendorComponent::execTryGetItemDescriptorByClass },
			{ "VendorUsesCurrency", &UACFVendorComponent::execVendorUsesCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics
	{
		struct ACFVendorComponent_eventBuyItems_Parms
		{
			FBaseItem item;
			APawn* instigator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventBuyItems_Parms, item), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_item_MetaData) }; // 2547535924
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventBuyItems_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Vendor" },
		{ "Comment", "/*------------------- SERVER SIDE -----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "------------------- SERVER SIDE -----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "BuyItems", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::ACFVendorComponent_eventBuyItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::ACFVendorComponent_eventBuyItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_BuyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_BuyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics
	{
		struct ACFVendorComponent_eventCanPawnBuyItems_Parms
		{
			FBaseItem itemsToBuy;
			const APawn* buyer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemsToBuy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemsToBuy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buyer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buyer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_itemsToBuy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_itemsToBuy = { "itemsToBuy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventCanPawnBuyItems_Parms, itemsToBuy), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_itemsToBuy_MetaData), Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_itemsToBuy_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_buyer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_buyer = { "buyer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventCanPawnBuyItems_Parms, buyer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_buyer_MetaData), Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_buyer_MetaData) };
	void Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVendorComponent_eventCanPawnBuyItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVendorComponent_eventCanPawnBuyItems_Parms), &Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_itemsToBuy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_buyer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "CanPawnBuyItems", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::ACFVendorComponent_eventCanPawnBuyItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::ACFVendorComponent_eventCanPawnBuyItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics
	{
		struct ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms
		{
			FInventoryItem itemTobeSold;
			const APawn* seller;
			int32 count;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemTobeSold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemTobeSold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_seller;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_itemTobeSold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_itemTobeSold = { "itemTobeSold", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms, itemTobeSold), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_itemTobeSold_MetaData), Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_itemTobeSold_MetaData) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_seller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_seller = { "seller", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms, seller), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_seller_MetaData), Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_seller_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms, count), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms), &Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_itemTobeSold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_seller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "CanPawnSellItemFromHisInventory", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::ACFVendorComponent_eventCanPawnSellItemFromHisInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics
	{
		struct ACFVendorComponent_eventGetItemCostPerUnit_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetItemCostPerUnit_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetItemCostPerUnit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetItemCostPerUnit", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::ACFVendorComponent_eventGetItemCostPerUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::ACFVendorComponent_eventGetItemCostPerUnit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics
	{
		struct ACFVendorComponent_eventGetItemsManager_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetItemsManager_Parms, ReturnValue), Z_Construct_UClass_UACFItemsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetItemsManager", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::ACFVendorComponent_eventGetItemsManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::ACFVendorComponent_eventGetItemsManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetItemsManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetItemsManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics
	{
		struct ACFVendorComponent_eventGetPawnCurrency_Parms
		{
			const APawn* pawn;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetPawnCurrency_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_pawn_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_pawn_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetPawnCurrency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "Comment", "/*-------------------PLAYER STUFF-----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "-------------------PLAYER STUFF-----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetPawnCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::ACFVendorComponent_eventGetPawnCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::ACFVendorComponent_eventGetPawnCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics
	{
		struct ACFVendorComponent_eventGetPawnEquipment_Parms
		{
			const APawn* pawn;
			UACFEquipmentComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawn;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetPawnEquipment_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_pawn_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_pawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetPawnEquipment_Parms, ReturnValue), Z_Construct_UClass_UACFEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetPawnEquipment", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::ACFVendorComponent_eventGetPawnEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::ACFVendorComponent_eventGetPawnEquipment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics
	{
		struct ACFVendorComponent_eventGetPawnInventory_Parms
		{
			const APawn* pawn;
			TArray<FInventoryItem> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetPawnInventory_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_pawn_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_pawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetPawnInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetPawnInventory", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::ACFVendorComponent_eventGetPawnInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::ACFVendorComponent_eventGetPawnInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics
	{
		struct ACFVendorComponent_eventGetVendorCurrency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetVendorCurrency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetVendorCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::ACFVendorComponent_eventGetVendorCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::ACFVendorComponent_eventGetVendorCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics
	{
		struct ACFVendorComponent_eventGetVendorCurrencyComp_Parms
		{
			UACFCurrencyComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetVendorCurrencyComp_Parms, ReturnValue), Z_Construct_UClass_UACFCurrencyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetVendorCurrencyComp", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::ACFVendorComponent_eventGetVendorCurrencyComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::ACFVendorComponent_eventGetVendorCurrencyComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics
	{
		struct ACFVendorComponent_eventGetVendorPriceMultiplierOnBuy_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetVendorPriceMultiplierOnBuy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetVendorPriceMultiplierOnBuy", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::ACFVendorComponent_eventGetVendorPriceMultiplierOnBuy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::ACFVendorComponent_eventGetVendorPriceMultiplierOnBuy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics
	{
		struct ACFVendorComponent_eventGetVendorPriceMultiplierOnSell_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventGetVendorPriceMultiplierOnSell_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "GetVendorPriceMultiplierOnSell", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::ACFVendorComponent_eventGetVendorPriceMultiplierOnSell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::ACFVendorComponent_eventGetVendorPriceMultiplierOnSell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics
	{
		struct ACFVendorComponent_eventHowManyItemsCanBuy_Parms
		{
			FBaseItem itemsToBuy;
			const APawn* buyer;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemsToBuy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemsToBuy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buyer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buyer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_itemsToBuy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_itemsToBuy = { "itemsToBuy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventHowManyItemsCanBuy_Parms, itemsToBuy), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_itemsToBuy_MetaData), Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_itemsToBuy_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_buyer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_buyer = { "buyer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventHowManyItemsCanBuy_Parms, buyer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_buyer_MetaData), Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_buyer_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventHowManyItemsCanBuy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_itemsToBuy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_buyer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "Comment", "/*Returns the maximum amount of itemsToBuy that Buyer can buy from this seller considering his currency amount*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "Returns the maximum amount of itemsToBuy that Buyer can buy from this seller considering his currency amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "HowManyItemsCanBuy", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::ACFVendorComponent_eventHowManyItemsCanBuy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::ACFVendorComponent_eventHowManyItemsCanBuy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics
	{
		struct ACFVendorComponent_eventHowManyItemsCanSell_Parms
		{
			FBaseItem itemsToSell;
			const APawn* seller;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemsToSell_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemsToSell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_seller;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_itemsToSell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_itemsToSell = { "itemsToSell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventHowManyItemsCanSell_Parms, itemsToSell), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_itemsToSell_MetaData), Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_itemsToSell_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_seller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_seller = { "seller", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventHowManyItemsCanSell_Parms, seller), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_seller_MetaData), Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_seller_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventHowManyItemsCanSell_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_itemsToSell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_seller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "Comment", "/*Returns the maximum amount of itemsToSell that Seller can sell considering to this seller's currency amount.\n    Always the player amount if UseVendorCurrencyComponent is set to false */" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "Returns the maximum amount of itemsToSell that Seller can sell considering to this seller's currency amount.\n    Always the player amount if UseVendorCurrencyComponent is set to false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "HowManyItemsCanSell", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::ACFVendorComponent_eventHowManyItemsCanSell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::ACFVendorComponent_eventHowManyItemsCanSell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics
	{
		struct ACFVendorComponent_eventSellItemsToVendor_Parms
		{
			FInventoryItem itemTobeSold;
			APawn* instigator;
			int32 count;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemTobeSold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemTobeSold;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold = { "itemTobeSold", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventSellItemsToVendor_Parms, itemTobeSold), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold_MetaData), Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold_MetaData) }; // 892597640
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventSellItemsToVendor_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventSellItemsToVendor_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_itemTobeSold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Vendor" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "SellItemsToVendor", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::ACFVendorComponent_eventSellItemsToVendor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::ACFVendorComponent_eventSellItemsToVendor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics
	{
		struct ACFVendorComponent_eventTryGetItemDescriptor_Parms
		{
			FBaseItem item;
			FItemDescriptor outItemDescriptor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItemDescriptor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventTryGetItemDescriptor_Parms, item), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_item_MetaData) }; // 2547535924
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_outItemDescriptor = { "outItemDescriptor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventTryGetItemDescriptor_Parms, outItemDescriptor), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(0, nullptr) }; // 3234246871
	void Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVendorComponent_eventTryGetItemDescriptor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVendorComponent_eventTryGetItemDescriptor_Parms), &Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_outItemDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Library" },
		{ "Comment", "/*------------------- FUNCTION LIBRAR WRAPPERS-----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "------------------- FUNCTION LIBRAR WRAPPERS-----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "TryGetItemDescriptor", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::ACFVendorComponent_eventTryGetItemDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::ACFVendorComponent_eventTryGetItemDescriptor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics
	{
		struct ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms
		{
			const TSubclassOf<AACFItem>  ItemClass;
			FItemDescriptor outItemDescriptor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItemDescriptor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ItemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ItemClass_MetaData), Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ItemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_outItemDescriptor = { "outItemDescriptor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms, outItemDescriptor), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(0, nullptr) }; // 3234246871
	void Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms), &Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_outItemDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Library" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "TryGetItemDescriptorByClass", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::ACFVendorComponent_eventTryGetItemDescriptorByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics
	{
		struct ACFVendorComponent_eventVendorUsesCurrency_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVendorComponent_eventVendorUsesCurrency_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVendorComponent_eventVendorUsesCurrency_Parms), &Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVendorComponent, nullptr, "VendorUsesCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::ACFVendorComponent_eventVendorUsesCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::ACFVendorComponent_eventVendorUsesCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFVendorComponent);
	UClass* Z_Construct_UClass_UACFVendorComponent_NoRegister()
	{
		return UACFVendorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFVendorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriceMultiplierOnSell_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriceMultiplierOnSell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVendorCurrencyComponent_MetaData[];
#endif
		static void NewProp_bUseVendorCurrencyComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVendorCurrencyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriceMultiplierOnBuy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriceMultiplierOnBuy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFVendorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFStorageComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFVendorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFVendorComponent_BuyItems, "BuyItems" }, // 3859348848
		{ &Z_Construct_UFunction_UACFVendorComponent_CanPawnBuyItems, "CanPawnBuyItems" }, // 121688721
		{ &Z_Construct_UFunction_UACFVendorComponent_CanPawnSellItemFromHisInventory, "CanPawnSellItemFromHisInventory" }, // 4182280361
		{ &Z_Construct_UFunction_UACFVendorComponent_GetItemCostPerUnit, "GetItemCostPerUnit" }, // 1610228750
		{ &Z_Construct_UFunction_UACFVendorComponent_GetItemsManager, "GetItemsManager" }, // 2496505669
		{ &Z_Construct_UFunction_UACFVendorComponent_GetPawnCurrency, "GetPawnCurrency" }, // 82547647
		{ &Z_Construct_UFunction_UACFVendorComponent_GetPawnEquipment, "GetPawnEquipment" }, // 3191970602
		{ &Z_Construct_UFunction_UACFVendorComponent_GetPawnInventory, "GetPawnInventory" }, // 3610711138
		{ &Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrency, "GetVendorCurrency" }, // 1111247104
		{ &Z_Construct_UFunction_UACFVendorComponent_GetVendorCurrencyComp, "GetVendorCurrencyComp" }, // 1546563495
		{ &Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnBuy, "GetVendorPriceMultiplierOnBuy" }, // 4042697984
		{ &Z_Construct_UFunction_UACFVendorComponent_GetVendorPriceMultiplierOnSell, "GetVendorPriceMultiplierOnSell" }, // 2670403212
		{ &Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanBuy, "HowManyItemsCanBuy" }, // 3611817679
		{ &Z_Construct_UFunction_UACFVendorComponent_HowManyItemsCanSell, "HowManyItemsCanSell" }, // 2352965304
		{ &Z_Construct_UFunction_UACFVendorComponent_SellItemsToVendor, "SellItemsToVendor" }, // 772690831
		{ &Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptor, "TryGetItemDescriptor" }, // 637885658
		{ &Z_Construct_UFunction_UACFVendorComponent_TryGetItemDescriptorByClass, "TryGetItemDescriptorByClass" }, // 1240227912
		{ &Z_Construct_UFunction_UACFVendorComponent_VendorUsesCurrency, "VendorUsesCurrency" }, // 3062784645
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVendorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ACFVendorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnSell_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*With this set to 0 this can be used as a chest that can be gathered without removing currencies*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "With this set to 0 this can be used as a chest that can be gathered without removing currencies" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnSell = { "PriceMultiplierOnSell", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFVendorComponent, PriceMultiplierOnSell), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnSell_MetaData), Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnSell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If this is set to false, this Vendor can purchase unlimited items from the interacting player*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "If this is set to false, this Vendor can purchase unlimited items from the interacting player" },
	};
#endif
	void Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent_SetBit(void* Obj)
	{
		((UACFVendorComponent*)Obj)->bUseVendorCurrencyComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent = { "bUseVendorCurrencyComponent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFVendorComponent), &Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent_MetaData), Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnBuy_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The multiplier this vendor is going to apply to the item value when buying from the player*/" },
		{ "ModuleRelativePath", "Public/ACFVendorComponent.h" },
		{ "ToolTip", "The multiplier this vendor is going to apply to the item value when buying from the player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnBuy = { "PriceMultiplierOnBuy", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFVendorComponent, PriceMultiplierOnBuy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnBuy_MetaData), Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnBuy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFVendorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnSell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_bUseVendorCurrencyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVendorComponent_Statics::NewProp_PriceMultiplierOnBuy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFVendorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFVendorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFVendorComponent_Statics::ClassParams = {
		&UACFVendorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFVendorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFVendorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVendorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFVendorComponent()
	{
		if (!Z_Registration_Info_UClass_UACFVendorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFVendorComponent.OuterSingleton, Z_Construct_UClass_UACFVendorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFVendorComponent.OuterSingleton;
	}
	template<> CRAFTINGSYSTEM_API UClass* StaticClass<UACFVendorComponent>()
	{
		return UACFVendorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFVendorComponent);
	UACFVendorComponent::~UACFVendorComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFVendorComponent, UACFVendorComponent::StaticClass, TEXT("UACFVendorComponent"), &Z_Registration_Info_UClass_UACFVendorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFVendorComponent), 533655854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_1680486857(TEXT("/Script/CraftingSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

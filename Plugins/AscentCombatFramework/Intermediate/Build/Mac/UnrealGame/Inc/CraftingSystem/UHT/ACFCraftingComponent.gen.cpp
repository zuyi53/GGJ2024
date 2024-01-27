// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingSystem/Public/ACFCraftingComponent.h"
#include "Components/ACFEquipmentComponent.h"
#include "CraftingSystem/Public/ACFCraftRecipeDataAsset.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCraftingComponent() {}
// Cross Module References
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFCraftingComponent();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFCraftingComponent_NoRegister();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFCraftRecipeDataAsset_NoRegister();
	CRAFTINGSYSTEM_API UClass* Z_Construct_UClass_UACFVendorComponent();
	CRAFTINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFCraftingRecipe();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_CraftingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFCraftingComponent::execAddNewRecipe)
	{
		P_GET_STRUCT_REF(FACFCraftingRecipe,Z_Param_Out_recipe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewRecipe(Z_Param_Out_recipe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execTryGetCraftableRecipeForItem)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_recipe);
		P_GET_STRUCT_REF(FACFCraftingRecipe,Z_Param_Out_outRecipe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetCraftableRecipeForItem(Z_Param_Out_recipe,Z_Param_Out_outRecipe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execGetCraftableRecipes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FACFCraftingRecipe>*)Z_Param__Result=P_THIS->GetCraftableRecipes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execGetAllPawnUpgradableItems)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInventoryItem>*)Z_Param__Result=P_THIS->GetAllPawnUpgradableItems(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execUpgradeItem)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_itemToUpgrade);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeItem(Z_Param_Out_itemToUpgrade,Z_Param_instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execCraftItem)
	{
		P_GET_STRUCT_REF(FACFCraftingRecipe,Z_Param_Out_ItemToCraft);
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CraftItem(Z_Param_Out_ItemToCraft,Z_Param_instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execCanPawnCraftItem)
	{
		P_GET_STRUCT_REF(FACFCraftingRecipe,Z_Param_Out_itemToCraft);
		P_GET_OBJECT(APawn,Z_Param_buyer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPawnCraftItem(Z_Param_Out_itemToCraft,Z_Param_buyer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCraftingComponent::execCanPawnUpgradeItem)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_itemToUpgrade);
		P_GET_OBJECT(APawn,Z_Param_pawnOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPawnUpgradeItem(Z_Param_Out_itemToUpgrade,Z_Param_pawnOwner);
		P_NATIVE_END;
	}
	void UACFCraftingComponent::StaticRegisterNativesUACFCraftingComponent()
	{
		UClass* Class = UACFCraftingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewRecipe", &UACFCraftingComponent::execAddNewRecipe },
			{ "CanPawnCraftItem", &UACFCraftingComponent::execCanPawnCraftItem },
			{ "CanPawnUpgradeItem", &UACFCraftingComponent::execCanPawnUpgradeItem },
			{ "CraftItem", &UACFCraftingComponent::execCraftItem },
			{ "GetAllPawnUpgradableItems", &UACFCraftingComponent::execGetAllPawnUpgradableItems },
			{ "GetCraftableRecipes", &UACFCraftingComponent::execGetCraftableRecipes },
			{ "TryGetCraftableRecipeForItem", &UACFCraftingComponent::execTryGetCraftableRecipeForItem },
			{ "UpgradeItem", &UACFCraftingComponent::execUpgradeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics
	{
		struct ACFCraftingComponent_eventAddNewRecipe_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::NewProp_recipe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventAddNewRecipe_Parms, recipe), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::NewProp_recipe_MetaData), Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::NewProp_recipe_MetaData) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::NewProp_recipe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Setters" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "AddNewRecipe", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::ACFCraftingComponent_eventAddNewRecipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::ACFCraftingComponent_eventAddNewRecipe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics
	{
		struct ACFCraftingComponent_eventCanPawnCraftItem_Parms
		{
			FACFCraftingRecipe itemToCraft;
			const APawn* buyer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemToCraft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemToCraft;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_itemToCraft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_itemToCraft = { "itemToCraft", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventCanPawnCraftItem_Parms, itemToCraft), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_itemToCraft_MetaData), Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_itemToCraft_MetaData) }; // 3303687441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_buyer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_buyer = { "buyer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventCanPawnCraftItem_Parms, buyer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_buyer_MetaData), Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_buyer_MetaData) };
	void Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCraftingComponent_eventCanPawnCraftItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCraftingComponent_eventCanPawnCraftItem_Parms), &Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_itemToCraft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_buyer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "CanPawnCraftItem", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::ACFCraftingComponent_eventCanPawnCraftItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::ACFCraftingComponent_eventCanPawnCraftItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics
	{
		struct ACFCraftingComponent_eventCanPawnUpgradeItem_Parms
		{
			FInventoryItem itemToUpgrade;
			const APawn* pawnOwner;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemToUpgrade_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemToUpgrade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawnOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_itemToUpgrade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_itemToUpgrade = { "itemToUpgrade", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventCanPawnUpgradeItem_Parms, itemToUpgrade), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_itemToUpgrade_MetaData), Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_itemToUpgrade_MetaData) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_pawnOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_pawnOwner = { "pawnOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventCanPawnUpgradeItem_Parms, pawnOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_pawnOwner_MetaData), Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_pawnOwner_MetaData) };
	void Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCraftingComponent_eventCanPawnUpgradeItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCraftingComponent_eventCanPawnUpgradeItem_Parms), &Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_itemToUpgrade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_pawnOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "Comment", "/*------------------- CHECKS -----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
		{ "ToolTip", "------------------- CHECKS -----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "CanPawnUpgradeItem", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::ACFCraftingComponent_eventCanPawnUpgradeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::ACFCraftingComponent_eventCanPawnUpgradeItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics
	{
		struct ACFCraftingComponent_eventCraftItem_Parms
		{
			FACFCraftingRecipe ItemToCraft;
			APawn* instigator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToCraft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToCraft;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_ItemToCraft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_ItemToCraft = { "ItemToCraft", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventCraftItem_Parms, ItemToCraft), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_ItemToCraft_MetaData), Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_ItemToCraft_MetaData) }; // 3303687441
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventCraftItem_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_ItemToCraft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Crafting" },
		{ "Comment", "/*------------------- SERVER SIDE -----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
		{ "ToolTip", "------------------- SERVER SIDE -----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "CraftItem", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::ACFCraftingComponent_eventCraftItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::ACFCraftingComponent_eventCraftItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_CraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_CraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics
	{
		struct ACFCraftingComponent_eventGetAllPawnUpgradableItems_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventGetAllPawnUpgradableItems_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_pawn_MetaData), Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_pawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventGetAllPawnUpgradableItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "Comment", "/*-------------------PLAYER STUFF-----------------------------------*/" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
		{ "ToolTip", "-------------------PLAYER STUFF-----------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "GetAllPawnUpgradableItems", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::ACFCraftingComponent_eventGetAllPawnUpgradableItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::ACFCraftingComponent_eventGetAllPawnUpgradableItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics
	{
		struct ACFCraftingComponent_eventGetCraftableRecipes_Parms
		{
			TArray<FACFCraftingRecipe> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(0, nullptr) }; // 3303687441
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventGetCraftableRecipes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "GetCraftableRecipes", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::ACFCraftingComponent_eventGetCraftableRecipes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::ACFCraftingComponent_eventGetCraftableRecipes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics
	{
		struct ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms
		{
			FBaseItem recipe;
			FACFCraftingRecipe outRecipe;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recipe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_recipe;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outRecipe;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_recipe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms, recipe), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_recipe_MetaData), Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_recipe_MetaData) }; // 2547535924
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_outRecipe = { "outRecipe", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms, outRecipe), Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(0, nullptr) }; // 3303687441
	void Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms), &Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_recipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_outRecipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "TryGetCraftableRecipeForItem", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::ACFCraftingComponent_eventTryGetCraftableRecipeForItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics
	{
		struct ACFCraftingComponent_eventUpgradeItem_Parms
		{
			FInventoryItem itemToUpgrade;
			APawn* instigator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemToUpgrade_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemToUpgrade;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_itemToUpgrade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_itemToUpgrade = { "itemToUpgrade", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventUpgradeItem_Parms, itemToUpgrade), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_itemToUpgrade_MetaData), Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_itemToUpgrade_MetaData) }; // 892597640
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCraftingComponent_eventUpgradeItem_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_itemToUpgrade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Crafting" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCraftingComponent, nullptr, "UpgradeItem", nullptr, nullptr, Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::ACFCraftingComponent_eventUpgradeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::ACFCraftingComponent_eventUpgradeItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCraftingComponent);
	UClass* Z_Construct_UClass_UACFCraftingComponent_NoRegister()
	{
		return UACFCraftingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCraftingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsRecipes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsRecipes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsRecipes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CraftableItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraftableItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CraftableItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCraftingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFVendorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCraftingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCraftingComponent_AddNewRecipe, "AddNewRecipe" }, // 3219761431
		{ &Z_Construct_UFunction_UACFCraftingComponent_CanPawnCraftItem, "CanPawnCraftItem" }, // 1076585904
		{ &Z_Construct_UFunction_UACFCraftingComponent_CanPawnUpgradeItem, "CanPawnUpgradeItem" }, // 3064443329
		{ &Z_Construct_UFunction_UACFCraftingComponent_CraftItem, "CraftItem" }, // 53892164
		{ &Z_Construct_UFunction_UACFCraftingComponent_GetAllPawnUpgradableItems, "GetAllPawnUpgradableItems" }, // 2565448864
		{ &Z_Construct_UFunction_UACFCraftingComponent_GetCraftableRecipes, "GetCraftableRecipes" }, // 3422072915
		{ &Z_Construct_UFunction_UACFCraftingComponent_TryGetCraftableRecipeForItem, "TryGetCraftableRecipeForItem" }, // 1308768059
		{ &Z_Construct_UFunction_UACFCraftingComponent_UpgradeItem, "UpgradeItem" }, // 380719182
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCraftingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFCraftingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes_Inner = { "ItemsRecipes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UACFCraftRecipeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Items this vendor can craft*/" },
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
		{ "ToolTip", "Items this vendor can craft" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes = { "ItemsRecipes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCraftingComponent, ItemsRecipes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes_MetaData), Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems_Inner = { "CraftableItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FACFCraftingRecipe, METADATA_PARAMS(0, nullptr) }; // 3303687441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFCraftingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems = { "CraftableItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCraftingComponent, CraftableItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems_MetaData), Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems_MetaData) }; // 3303687441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCraftingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_ItemsRecipes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCraftingComponent_Statics::NewProp_CraftableItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCraftingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCraftingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCraftingComponent_Statics::ClassParams = {
		&UACFCraftingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCraftingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCraftingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCraftingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCraftingComponent()
	{
		if (!Z_Registration_Info_UClass_UACFCraftingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCraftingComponent.OuterSingleton, Z_Construct_UClass_UACFCraftingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCraftingComponent.OuterSingleton;
	}
	template<> CRAFTINGSYSTEM_API UClass* StaticClass<UACFCraftingComponent>()
	{
		return UACFCraftingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCraftingComponent);
	UACFCraftingComponent::~UACFCraftingComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCraftingComponent, UACFCraftingComponent::StaticClass, TEXT("UACFCraftingComponent"), &Z_Registration_Info_UClass_UACFCraftingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCraftingComponent), 2150227554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftingComponent_h_629478435(TEXT("/Script/CraftingSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFCraftingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

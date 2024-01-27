// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFStorageComponent.h"
#include "Items/ACFItem.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFStorageComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFCurrencyComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFCurrencyComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFEquipmentComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFStorageComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnItemsChanged_Parms
		{
			TArray<FBaseItem> currentItems;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_currentItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems_Inner = { "currentItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems = { "currentItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsChanged_Parms, currentItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems_MetaData), Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::NewProp_currentItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemsChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemsChanged, TArray<FBaseItem> const& currentItems)
{
	struct _Script_InventorySystem_eventOnItemsChanged_Parms
	{
		TArray<FBaseItem> currentItems;
	};
	_Script_InventorySystem_eventOnItemsChanged_Parms Parms;
	Parms.currentItems=currentItems;
	OnItemsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFStorageComponent::execOnRep_Items)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Items();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execGetItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBaseItem>*)Z_Param__Result=P_THIS->GetItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execGetPawnCurrencyComponent)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFCurrencyComponent**)Z_Param__Result=P_THIS->GetPawnCurrencyComponent(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execGatherAllCurrency)
	{
		P_GET_OBJECT(UACFCurrencyComponent,Z_Param_currencyComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherAllCurrency(Z_Param_currencyComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execGatherCurrency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(UACFCurrencyComponent,Z_Param_currencyComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherCurrency(Z_Param_amount,Z_Param_currencyComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execMoveItemsToInventory)
	{
		P_GET_TARRAY_REF(FBaseItem,Z_Param_Out_inItems);
		P_GET_OBJECT(UACFEquipmentComponent,Z_Param_equipComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveItemsToInventory(Z_Param_Out_inItems,Z_Param_equipComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execAddItems)
	{
		P_GET_TARRAY(FBaseItem,Z_Param_inItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->AddItems_Validate(Z_Param_inItems))
		{
			RPC_ValidateFailed(TEXT("AddItems_Validate"));
			return;
		}
		P_THIS->AddItems_Implementation(Z_Param_inItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execAddItem)
	{
		P_GET_STRUCT(FBaseItem,Z_Param_inItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->AddItem_Validate(Z_Param_inItems))
		{
			RPC_ValidateFailed(TEXT("AddItem_Validate"));
			return;
		}
		P_THIS->AddItem_Implementation(Z_Param_inItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execRemoveItem)
	{
		P_GET_STRUCT(FBaseItem,Z_Param_inItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->RemoveItem_Validate(Z_Param_inItems))
		{
			RPC_ValidateFailed(TEXT("RemoveItem_Validate"));
			return;
		}
		P_THIS->RemoveItem_Implementation(Z_Param_inItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFStorageComponent::execRemoveItems)
	{
		P_GET_TARRAY(FBaseItem,Z_Param_inItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->RemoveItems_Validate(Z_Param_inItems))
		{
			RPC_ValidateFailed(TEXT("RemoveItems_Validate"));
			return;
		}
		P_THIS->RemoveItems_Implementation(Z_Param_inItems);
		P_NATIVE_END;
	}
	struct ACFStorageComponent_eventAddItem_Parms
	{
		FBaseItem inItems;
	};
	struct ACFStorageComponent_eventAddItems_Parms
	{
		TArray<FBaseItem> inItems;
	};
	struct ACFStorageComponent_eventRemoveItem_Parms
	{
		FBaseItem inItems;
	};
	struct ACFStorageComponent_eventRemoveItems_Parms
	{
		TArray<FBaseItem> inItems;
	};
	static FName NAME_UACFStorageComponent_AddItem = FName(TEXT("AddItem"));
	void UACFStorageComponent::AddItem(FBaseItem const& inItems)
	{
		ACFStorageComponent_eventAddItem_Parms Parms;
		Parms.inItems=inItems;
		ProcessEvent(FindFunctionChecked(NAME_UACFStorageComponent_AddItem),&Parms);
	}
	static FName NAME_UACFStorageComponent_AddItems = FName(TEXT("AddItems"));
	void UACFStorageComponent::AddItems(TArray<FBaseItem> const& inItems)
	{
		ACFStorageComponent_eventAddItems_Parms Parms;
		Parms.inItems=inItems;
		ProcessEvent(FindFunctionChecked(NAME_UACFStorageComponent_AddItems),&Parms);
	}
	static FName NAME_UACFStorageComponent_RemoveItem = FName(TEXT("RemoveItem"));
	void UACFStorageComponent::RemoveItem(FBaseItem const& inItems)
	{
		ACFStorageComponent_eventRemoveItem_Parms Parms;
		Parms.inItems=inItems;
		ProcessEvent(FindFunctionChecked(NAME_UACFStorageComponent_RemoveItem),&Parms);
	}
	static FName NAME_UACFStorageComponent_RemoveItems = FName(TEXT("RemoveItems"));
	void UACFStorageComponent::RemoveItems(TArray<FBaseItem> const& inItems)
	{
		ACFStorageComponent_eventRemoveItems_Parms Parms;
		Parms.inItems=inItems;
		ProcessEvent(FindFunctionChecked(NAME_UACFStorageComponent_RemoveItems),&Parms);
	}
	void UACFStorageComponent::StaticRegisterNativesUACFStorageComponent()
	{
		UClass* Class = UACFStorageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UACFStorageComponent::execAddItem },
			{ "AddItems", &UACFStorageComponent::execAddItems },
			{ "GatherAllCurrency", &UACFStorageComponent::execGatherAllCurrency },
			{ "GatherCurrency", &UACFStorageComponent::execGatherCurrency },
			{ "GetItems", &UACFStorageComponent::execGetItems },
			{ "GetPawnCurrencyComponent", &UACFStorageComponent::execGetPawnCurrencyComponent },
			{ "MoveItemsToInventory", &UACFStorageComponent::execMoveItemsToInventory },
			{ "OnRep_Items", &UACFStorageComponent::execOnRep_Items },
			{ "RemoveItem", &UACFStorageComponent::execRemoveItem },
			{ "RemoveItems", &UACFStorageComponent::execRemoveItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventAddItem_Parms, inItems), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::NewProp_inItems_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::NewProp_inItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::PropPointers), sizeof(ACFStorageComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFStorageComponent_eventAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems_Inner = { "inItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventAddItems_Parms, inItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::NewProp_inItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "AddItems", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::PropPointers), sizeof(ACFStorageComponent_eventAddItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFStorageComponent_eventAddItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_AddItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_AddItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics
	{
		struct ACFStorageComponent_eventGatherAllCurrency_Parms
		{
			UACFCurrencyComponent* currencyComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currencyComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currencyComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::NewProp_currencyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::NewProp_currencyComp = { "currencyComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventGatherAllCurrency_Parms, currencyComp), Z_Construct_UClass_UACFCurrencyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::NewProp_currencyComp_MetaData), Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::NewProp_currencyComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::NewProp_currencyComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "GatherAllCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::ACFStorageComponent_eventGatherAllCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::ACFStorageComponent_eventGatherAllCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics
	{
		struct ACFStorageComponent_eventGatherCurrency_Parms
		{
			float amount;
			UACFCurrencyComponent* currencyComp;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currencyComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currencyComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventGatherCurrency_Parms, amount), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_currencyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_currencyComp = { "currencyComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventGatherCurrency_Parms, currencyComp), Z_Construct_UClass_UACFCurrencyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_currencyComp_MetaData), Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_currencyComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::NewProp_currencyComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "GatherCurrency", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::ACFStorageComponent_eventGatherCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::ACFStorageComponent_eventGatherCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_GatherCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_GatherCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics
	{
		struct ACFStorageComponent_eventGetItems_Parms
		{
			TArray<FBaseItem> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Return the items related to this world Item*/" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
		{ "ToolTip", "Return the items related to this world Item" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::ACFStorageComponent_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::ACFStorageComponent_eventGetItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics
	{
		struct ACFStorageComponent_eventGetPawnCurrencyComponent_Parms
		{
			const APawn* pawn;
			UACFCurrencyComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventGetPawnCurrencyComponent_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_pawn_MetaData), Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_pawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventGetPawnCurrencyComponent_Parms, ReturnValue), Z_Construct_UClass_UACFCurrencyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "Comment", "/*------------------------ STORAGE -----------------------------------------*/" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
		{ "ToolTip", "------------------------ STORAGE -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "GetPawnCurrencyComponent", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::ACFStorageComponent_eventGetPawnCurrencyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::ACFStorageComponent_eventGetPawnCurrencyComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics
	{
		struct ACFStorageComponent_eventMoveItemsToInventory_Parms
		{
			TArray<FBaseItem> inItems;
			UACFEquipmentComponent* equipComp;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equipComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equipComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems_Inner = { "inItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventMoveItemsToInventory_Parms, inItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_equipComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_equipComp = { "equipComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventMoveItemsToInventory_Parms, equipComp), Z_Construct_UClass_UACFEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_equipComp_MetaData), Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_equipComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_inItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::NewProp_equipComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "MoveItemsToInventory", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::ACFStorageComponent_eventMoveItemsToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::ACFStorageComponent_eventMoveItemsToInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_OnRep_Items_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_OnRep_Items_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_OnRep_Items_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "OnRep_Items", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_OnRep_Items_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_OnRep_Items_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFStorageComponent_OnRep_Items()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_OnRep_Items_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventRemoveItem_Parms, inItems), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::NewProp_inItems_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::NewProp_inItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::PropPointers), sizeof(ACFStorageComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFStorageComponent_eventRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems_Inner = { "inItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFStorageComponent_eventRemoveItems_Parms, inItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::NewProp_inItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFStorageComponent, nullptr, "RemoveItems", nullptr, nullptr, Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::PropPointers), sizeof(ACFStorageComponent_eventRemoveItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFStorageComponent_eventRemoveItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFStorageComponent_RemoveItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFStorageComponent_RemoveItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFStorageComponent);
	UClass* Z_Construct_UClass_UACFStorageComponent_NoRegister()
	{
		return UACFStorageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFStorageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFStorageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFCurrencyComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFStorageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFStorageComponent_AddItem, "AddItem" }, // 1444096302
		{ &Z_Construct_UFunction_UACFStorageComponent_AddItems, "AddItems" }, // 1865716083
		{ &Z_Construct_UFunction_UACFStorageComponent_GatherAllCurrency, "GatherAllCurrency" }, // 552663676
		{ &Z_Construct_UFunction_UACFStorageComponent_GatherCurrency, "GatherCurrency" }, // 622822552
		{ &Z_Construct_UFunction_UACFStorageComponent_GetItems, "GetItems" }, // 3289941237
		{ &Z_Construct_UFunction_UACFStorageComponent_GetPawnCurrencyComponent, "GetPawnCurrencyComponent" }, // 1333055434
		{ &Z_Construct_UFunction_UACFStorageComponent_MoveItemsToInventory, "MoveItemsToInventory" }, // 429603918
		{ &Z_Construct_UFunction_UACFStorageComponent_OnRep_Items, "OnRep_Items" }, // 2487967025
		{ &Z_Construct_UFunction_UACFStorageComponent_RemoveItem, "RemoveItem" }, // 3572241922
		{ &Z_Construct_UFunction_UACFStorageComponent_RemoveItems, "RemoveItems" }, // 2279671492
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStorageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFStorageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items = { "Items", "OnRep_Items", (EPropertyFlags)0x0020080101000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFStorageComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items_MetaData), Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_OnItemChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFStorageComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_OnItemChanged = { "OnItemChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFStorageComponent, OnItemChanged), Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_OnItemChanged_MetaData), Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_OnItemChanged_MetaData) }; // 2663119224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFStorageComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStorageComponent_Statics::NewProp_OnItemChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFStorageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFStorageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFStorageComponent_Statics::ClassParams = {
		&UACFStorageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFStorageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFStorageComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStorageComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFStorageComponent()
	{
		if (!Z_Registration_Info_UClass_UACFStorageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFStorageComponent.OuterSingleton, Z_Construct_UClass_UACFStorageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFStorageComponent.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFStorageComponent>()
	{
		return UACFStorageComponent::StaticClass();
	}

	void UACFStorageComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Items(TEXT("Items"));

		const bool bIsValid = true
			&& Name_Items == ClassReps[(int32)ENetFields_Private::Items].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFStorageComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFStorageComponent);
	UACFStorageComponent::~UACFStorageComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFStorageComponent, UACFStorageComponent::StaticClass, TEXT("UACFStorageComponent"), &Z_Registration_Info_UClass_UACFStorageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFStorageComponent), 506626016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_677856021(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

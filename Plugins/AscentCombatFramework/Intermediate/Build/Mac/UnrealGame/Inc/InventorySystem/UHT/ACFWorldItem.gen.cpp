// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFWorldItem.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFWorldItem() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFInteractableInterface_NoRegister();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSavableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWorldItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWorldItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFWorldItem::execOnLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execHandleStorageChanged)
	{
		P_GET_TARRAY_REF(FBaseItem,Z_Param_Out_items);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStorageChanged_Implementation(Z_Param_Out_items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execDestroyOnAllItemsGathered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyOnAllItemsGathered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execGetFirstItemInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemDescriptor*)Z_Param__Result=P_THIS->GetFirstItemInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execGetItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBaseItem>*)Z_Param__Result=P_THIS->GetItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execGetInteractableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractableName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execCanBeInteracted)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeInteracted_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execOnInteractableUnregisteredByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractableUnregisteredByPawn_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execOnInteractableRegisteredByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractableRegisteredByPawn_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execOnLocalInteractedByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalInteractedByPawn_Implementation(Z_Param_Pawn,Z_Param_interactionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execOnInteractedByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractedByPawn_Implementation(Z_Param_Pawn,Z_Param_interactionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execAddCurrency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_currencyAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCurrency(Z_Param_currencyAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execAddItem)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_inItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_Out_inItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWorldItem::execSetItemMesh)
	{
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_inItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemMesh(Z_Param_Out_inItem);
		P_NATIVE_END;
	}
	struct ACFWorldItem_eventCanBeInteracted_Parms
	{
		APawn* Pawn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFWorldItem_eventCanBeInteracted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFWorldItem_eventGetInteractableName_Parms
	{
		FText ReturnValue;
	};
	struct ACFWorldItem_eventHandleStorageChanged_Parms
	{
		TArray<FBaseItem> items;
	};
	struct ACFWorldItem_eventOnInteractableRegisteredByPawn_Parms
	{
		APawn* Pawn;
	};
	struct ACFWorldItem_eventOnInteractableUnregisteredByPawn_Parms
	{
		APawn* Pawn;
	};
	struct ACFWorldItem_eventOnInteractedByPawn_Parms
	{
		APawn* Pawn;
		FString interactionType;
	};
	struct ACFWorldItem_eventOnLocalInteractedByPawn_Parms
	{
		APawn* Pawn;
		FString interactionType;
	};
	static FName NAME_AACFWorldItem_CanBeInteracted = FName(TEXT("CanBeInteracted"));
	bool AACFWorldItem::CanBeInteracted(APawn* Pawn)
	{
		ACFWorldItem_eventCanBeInteracted_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_CanBeInteracted),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFWorldItem_GetInteractableName = FName(TEXT("GetInteractableName"));
	FText AACFWorldItem::GetInteractableName()
	{
		ACFWorldItem_eventGetInteractableName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_GetInteractableName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFWorldItem_HandleStorageChanged = FName(TEXT("HandleStorageChanged"));
	void AACFWorldItem::HandleStorageChanged(TArray<FBaseItem> const& items)
	{
		ACFWorldItem_eventHandleStorageChanged_Parms Parms;
		Parms.items=items;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_HandleStorageChanged),&Parms);
	}
	static FName NAME_AACFWorldItem_OnInteractableRegisteredByPawn = FName(TEXT("OnInteractableRegisteredByPawn"));
	void AACFWorldItem::OnInteractableRegisteredByPawn(APawn* Pawn)
	{
		ACFWorldItem_eventOnInteractableRegisteredByPawn_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_OnInteractableRegisteredByPawn),&Parms);
	}
	static FName NAME_AACFWorldItem_OnInteractableUnregisteredByPawn = FName(TEXT("OnInteractableUnregisteredByPawn"));
	void AACFWorldItem::OnInteractableUnregisteredByPawn(APawn* Pawn)
	{
		ACFWorldItem_eventOnInteractableUnregisteredByPawn_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_OnInteractableUnregisteredByPawn),&Parms);
	}
	static FName NAME_AACFWorldItem_OnInteractedByPawn = FName(TEXT("OnInteractedByPawn"));
	void AACFWorldItem::OnInteractedByPawn(APawn* Pawn, const FString& interactionType)
	{
		ACFWorldItem_eventOnInteractedByPawn_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.interactionType=interactionType;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_OnInteractedByPawn),&Parms);
	}
	static FName NAME_AACFWorldItem_OnLoaded = FName(TEXT("OnLoaded"));
	void AACFWorldItem::OnLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_OnLoaded),NULL);
	}
	static FName NAME_AACFWorldItem_OnLocalInteractedByPawn = FName(TEXT("OnLocalInteractedByPawn"));
	void AACFWorldItem::OnLocalInteractedByPawn(APawn* Pawn, const FString& interactionType)
	{
		ACFWorldItem_eventOnLocalInteractedByPawn_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.interactionType=interactionType;
		ProcessEvent(FindFunctionChecked(NAME_AACFWorldItem_OnLocalInteractedByPawn),&Parms);
	}
	void AACFWorldItem::StaticRegisterNativesAACFWorldItem()
	{
		UClass* Class = AACFWorldItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCurrency", &AACFWorldItem::execAddCurrency },
			{ "AddItem", &AACFWorldItem::execAddItem },
			{ "CanBeInteracted", &AACFWorldItem::execCanBeInteracted },
			{ "DestroyOnAllItemsGathered", &AACFWorldItem::execDestroyOnAllItemsGathered },
			{ "GetFirstItemInfo", &AACFWorldItem::execGetFirstItemInfo },
			{ "GetInteractableName", &AACFWorldItem::execGetInteractableName },
			{ "GetItems", &AACFWorldItem::execGetItems },
			{ "HandleStorageChanged", &AACFWorldItem::execHandleStorageChanged },
			{ "OnInteractableRegisteredByPawn", &AACFWorldItem::execOnInteractableRegisteredByPawn },
			{ "OnInteractableUnregisteredByPawn", &AACFWorldItem::execOnInteractableUnregisteredByPawn },
			{ "OnInteractedByPawn", &AACFWorldItem::execOnInteractedByPawn },
			{ "OnLoaded", &AACFWorldItem::execOnLoaded },
			{ "OnLocalInteractedByPawn", &AACFWorldItem::execOnLocalInteractedByPawn },
			{ "SetItemMesh", &AACFWorldItem::execSetItemMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics
	{
		struct ACFWorldItem_eventAddCurrency_Parms
		{
			float currencyAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currencyAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::NewProp_currencyAmount = { "currencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventAddCurrency_Parms, currencyAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::NewProp_currencyAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "AddCurrency", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::ACFWorldItem_eventAddCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::ACFWorldItem_eventAddCurrency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_AddCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_AddCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_AddItem_Statics
	{
		struct ACFWorldItem_eventAddItem_Parms
		{
			FBaseItem inItem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::NewProp_inItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::NewProp_inItem = { "inItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventAddItem_Parms, inItem), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::NewProp_inItem_MetaData), Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::NewProp_inItem_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::NewProp_inItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::ACFWorldItem_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::ACFWorldItem_eventAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventCanBeInteracted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWorldItem_eventCanBeInteracted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWorldItem_eventCanBeInteracted_Parms), &Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "CanBeInteracted", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::PropPointers), sizeof(ACFWorldItem_eventCanBeInteracted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventCanBeInteracted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_CanBeInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_CanBeInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics
	{
		struct ACFWorldItem_eventDestroyOnAllItemsGathered_Parms
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
	void Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWorldItem_eventDestroyOnAllItemsGathered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWorldItem_eventDestroyOnAllItemsGathered_Parms), &Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Destroy this actor when all items are gathered */" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
		{ "ToolTip", "Destroy this actor when all items are gathered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "DestroyOnAllItemsGathered", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::ACFWorldItem_eventDestroyOnAllItemsGathered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::ACFWorldItem_eventDestroyOnAllItemsGathered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics
	{
		struct ACFWorldItem_eventGetFirstItemInfo_Parms
		{
			FItemDescriptor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventGetFirstItemInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(0, nullptr) }; // 3234246871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Get the Item descriptor */" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
		{ "ToolTip", "Get the Item descriptor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "GetFirstItemInfo", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::ACFWorldItem_eventGetFirstItemInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::ACFWorldItem_eventGetFirstItemInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventGetInteractableName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "GetInteractableName", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::PropPointers), sizeof(ACFWorldItem_eventGetInteractableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventGetInteractableName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_GetInteractableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_GetInteractableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_GetItems_Statics
	{
		struct ACFWorldItem_eventGetItems_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Return the items related to this world Item*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
		{ "ToolTip", "Return the items related to this world Item" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::ACFWorldItem_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::ACFWorldItem_eventGetItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventHandleStorageChanged_Parms, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items_MetaData), Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::NewProp_items,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "HandleStorageChanged", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::PropPointers), sizeof(ACFWorldItem_eventHandleStorageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventHandleStorageChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventOnInteractableRegisteredByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "OnInteractableRegisteredByPawn", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::PropPointers), sizeof(ACFWorldItem_eventOnInteractableRegisteredByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventOnInteractableRegisteredByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventOnInteractableUnregisteredByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "OnInteractableUnregisteredByPawn", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::PropPointers), sizeof(ACFWorldItem_eventOnInteractableUnregisteredByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventOnInteractableUnregisteredByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_interactionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventOnInteractedByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventOnInteractedByPawn_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::NewProp_interactionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* called when player interact with object of this class */" },
		{ "CPP_Default_interactionType", "" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
		{ "ToolTip", "called when player interact with object of this class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "OnInteractedByPawn", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::PropPointers), sizeof(ACFWorldItem_eventOnInteractedByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventOnInteractedByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_OnLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_OnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "OnLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_OnLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWorldItem_OnLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_OnLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_interactionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventOnLocalInteractedByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventOnLocalInteractedByPawn_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::NewProp_interactionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_interactionType", "" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "OnLocalInteractedByPawn", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::PropPointers), sizeof(ACFWorldItem_eventOnLocalInteractedByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWorldItem_eventOnLocalInteractedByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics
	{
		struct ACFWorldItem_eventSetItemMesh_Parms
		{
			FBaseItem inItem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::NewProp_inItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::NewProp_inItem = { "inItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWorldItem_eventSetItemMesh_Parms, inItem), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::NewProp_inItem_MetaData), Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::NewProp_inItem_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::NewProp_inItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWorldItem, nullptr, "SetItemMesh", nullptr, nullptr, Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::ACFWorldItem_eventSetItemMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::ACFWorldItem_eventSetItemMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWorldItem_SetItemMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWorldItem_SetItemMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFWorldItem);
	UClass* Z_Construct_UClass_AACFWorldItem_NoRegister()
	{
		return AACFWorldItem::StaticClass();
	}
	struct Z_Construct_UClass_AACFWorldItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnGather_MetaData[];
#endif
		static void NewProp_bDestroyOnGather_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnGather;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StorageComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFWorldItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFWorldItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFWorldItem_AddCurrency, "AddCurrency" }, // 2862126158
		{ &Z_Construct_UFunction_AACFWorldItem_AddItem, "AddItem" }, // 1430357349
		{ &Z_Construct_UFunction_AACFWorldItem_CanBeInteracted, "CanBeInteracted" }, // 1556808850
		{ &Z_Construct_UFunction_AACFWorldItem_DestroyOnAllItemsGathered, "DestroyOnAllItemsGathered" }, // 1341049880
		{ &Z_Construct_UFunction_AACFWorldItem_GetFirstItemInfo, "GetFirstItemInfo" }, // 1755349325
		{ &Z_Construct_UFunction_AACFWorldItem_GetInteractableName, "GetInteractableName" }, // 2862250611
		{ &Z_Construct_UFunction_AACFWorldItem_GetItems, "GetItems" }, // 3336485830
		{ &Z_Construct_UFunction_AACFWorldItem_HandleStorageChanged, "HandleStorageChanged" }, // 3796041218
		{ &Z_Construct_UFunction_AACFWorldItem_OnInteractableRegisteredByPawn, "OnInteractableRegisteredByPawn" }, // 2088573426
		{ &Z_Construct_UFunction_AACFWorldItem_OnInteractableUnregisteredByPawn, "OnInteractableUnregisteredByPawn" }, // 3617027903
		{ &Z_Construct_UFunction_AACFWorldItem_OnInteractedByPawn, "OnInteractedByPawn" }, // 3468263555
		{ &Z_Construct_UFunction_AACFWorldItem_OnLoaded, "OnLoaded" }, // 2709334856
		{ &Z_Construct_UFunction_AACFWorldItem_OnLocalInteractedByPawn, "OnLocalInteractedByPawn" }, // 796015531
		{ &Z_Construct_UFunction_AACFWorldItem_SetItemMesh, "SetItemMesh" }, // 614785302
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWorldItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/ACFWorldItem.h" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "//changed\n" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
		{ "ToolTip", "changed" },
	};
#endif
	void Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather_SetBit(void* Obj)
	{
		((AACFWorldItem*)Obj)->bDestroyOnGather = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather = { "bDestroyOnGather", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFWorldItem), &Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather_MetaData), Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Mesh to be displayed */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
		{ "ToolTip", "Mesh to be displayed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ObjectMesh = { "ObjectMesh", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWorldItem, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ObjectMesh_MetaData), Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ObjectMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWorldItem_Statics::NewProp_StorageComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWorldItem_Statics::NewProp_StorageComponent = { "StorageComponent", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWorldItem, StorageComponent), Z_Construct_UClass_UACFStorageComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::NewProp_StorageComponent_MetaData), Z_Construct_UClass_AACFWorldItem_Statics::NewProp_StorageComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ItemInfo_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWorldItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWorldItem, ItemInfo), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ItemInfo_MetaData), Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ItemInfo_MetaData) }; // 3234246871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFWorldItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWorldItem_Statics::NewProp_bDestroyOnGather,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ObjectMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWorldItem_Statics::NewProp_StorageComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWorldItem_Statics::NewProp_ItemInfo,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFWorldItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UACFInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AACFWorldItem, IACFInteractableInterface), false },  // 3929623987
			{ Z_Construct_UClass_UALSSavableInterface_NoRegister, (int32)VTABLE_OFFSET(AACFWorldItem, IALSSavableInterface), false },  // 1099919627
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFWorldItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFWorldItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFWorldItem_Statics::ClassParams = {
		&AACFWorldItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFWorldItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFWorldItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWorldItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFWorldItem()
	{
		if (!Z_Registration_Info_UClass_AACFWorldItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFWorldItem.OuterSingleton, Z_Construct_UClass_AACFWorldItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFWorldItem.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFWorldItem>()
	{
		return AACFWorldItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFWorldItem);
	AACFWorldItem::~AACFWorldItem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFWorldItem, AACFWorldItem::StaticClass, TEXT("AACFWorldItem"), &Z_Registration_Info_UClass_AACFWorldItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFWorldItem), 2909514326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_1572565078(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFItemSystemFunctionLibrary.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "Components/ACFEquipmentComponent.h"
#include "GameplayTagContainer.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFItemSystemFunctionLibrary() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedAttributeSetModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWorldItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFItemSystemFunctionLibrary();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFItemSystemFunctionLibrary_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EShootTargetType();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execFilterByItemSlot)
	{
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_inItems);
		P_GET_STRUCT(FGameplayTag,Z_Param_inSlot);
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACFItemSystemFunctionLibrary::FilterByItemSlot(Z_Param_Out_inItems,Z_Param_inSlot,Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execFilterByItemType)
	{
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_inItems);
		P_GET_ENUM(EItemType,Z_Param_inType);
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACFItemSystemFunctionLibrary::FilterByItemType(Z_Param_Out_inItems,EItemType(Z_Param_inType),Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execIsValidItemSlotTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::IsValidItemSlotTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execIsValidItemTypeTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::IsValidItemTypeTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetItemSlotTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetItemSlotTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetItemTypeTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetItemTypeTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetDefaultCurrencyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetDefaultCurrencyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetDefaultWorldItemClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AACFWorldItem> *)Z_Param__Result=UACFItemSystemFunctionLibrary::GetDefaultWorldItemClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetShootTransform)
	{
		P_GET_OBJECT(APawn,Z_Param_SourcePawn);
		P_GET_ENUM(EShootTargetType,Z_Param_targetType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outSourceLoc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetShootTransform(Z_Param_SourcePawn,EShootTargetType(Z_Param_targetType),Z_Param_Out_outSourceLoc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetConsumableStatModifier)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_GET_TARRAY_REF(FStatisticValue,Z_Param_Out_outModifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetConsumableStatModifier(Z_Param_Out_itemClass,Z_Param_Out_outModifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetConsumableTimedAttributeSetModifier)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_GET_TARRAY_REF(FTimedAttributeSetModifier,Z_Param_Out_outModifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetConsumableTimedAttributeSetModifier(Z_Param_Out_itemClass,Z_Param_Out_outModifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetEquippableAttributeRequirements)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_GET_TARRAY_REF(FAttribute,Z_Param_Out_outAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetEquippableAttributeRequirements(Z_Param_Out_itemClass,Z_Param_Out_outAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetEquippableAttributeSetModifier)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_GET_STRUCT_REF(FAttributesSetModifier,Z_Param_Out_outModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetEquippableAttributeSetModifier(Z_Param_Out_itemClass,Z_Param_Out_outModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execGetItemData)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_item);
		P_GET_STRUCT_REF(FItemDescriptor,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFItemSystemFunctionLibrary::GetItemData(Z_Param_Out_item,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execSpawnCurrencyItemNearLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currencyAmount);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_acceptanceRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFWorldItem**)Z_Param__Result=UACFItemSystemFunctionLibrary::SpawnCurrencyItemNearLocation(Z_Param_WorldContextObject,Z_Param_currencyAmount,Z_Param_Out_location,Z_Param_acceptanceRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFItemSystemFunctionLibrary::execSpawnWorldItemNearLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FBaseItem,Z_Param_Out_ContainedItem);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_acceptanceRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFWorldItem**)Z_Param__Result=UACFItemSystemFunctionLibrary::SpawnWorldItemNearLocation(Z_Param_WorldContextObject,Z_Param_Out_ContainedItem,Z_Param_Out_location,Z_Param_acceptanceRadius);
		P_NATIVE_END;
	}
	void UACFItemSystemFunctionLibrary::StaticRegisterNativesUACFItemSystemFunctionLibrary()
	{
		UClass* Class = UACFItemSystemFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterByItemSlot", &UACFItemSystemFunctionLibrary::execFilterByItemSlot },
			{ "FilterByItemType", &UACFItemSystemFunctionLibrary::execFilterByItemType },
			{ "GetConsumableStatModifier", &UACFItemSystemFunctionLibrary::execGetConsumableStatModifier },
			{ "GetConsumableTimedAttributeSetModifier", &UACFItemSystemFunctionLibrary::execGetConsumableTimedAttributeSetModifier },
			{ "GetDefaultCurrencyName", &UACFItemSystemFunctionLibrary::execGetDefaultCurrencyName },
			{ "GetDefaultWorldItemClass", &UACFItemSystemFunctionLibrary::execGetDefaultWorldItemClass },
			{ "GetEquippableAttributeRequirements", &UACFItemSystemFunctionLibrary::execGetEquippableAttributeRequirements },
			{ "GetEquippableAttributeSetModifier", &UACFItemSystemFunctionLibrary::execGetEquippableAttributeSetModifier },
			{ "GetItemData", &UACFItemSystemFunctionLibrary::execGetItemData },
			{ "GetItemSlotTagRoot", &UACFItemSystemFunctionLibrary::execGetItemSlotTagRoot },
			{ "GetItemTypeTagRoot", &UACFItemSystemFunctionLibrary::execGetItemTypeTagRoot },
			{ "GetShootTransform", &UACFItemSystemFunctionLibrary::execGetShootTransform },
			{ "IsValidItemSlotTag", &UACFItemSystemFunctionLibrary::execIsValidItemSlotTag },
			{ "IsValidItemTypeTag", &UACFItemSystemFunctionLibrary::execIsValidItemTypeTag },
			{ "SpawnCurrencyItemNearLocation", &UACFItemSystemFunctionLibrary::execSpawnCurrencyItemNearLocation },
			{ "SpawnWorldItemNearLocation", &UACFItemSystemFunctionLibrary::execSpawnWorldItemNearLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventFilterByItemSlot_Parms
		{
			TArray<FInventoryItem> inItems;
			FGameplayTag inSlot;
			TArray<FInventoryItem> outItems;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inItems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inSlot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems_Inner = { "inItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventFilterByItemSlot_Parms, inItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems_MetaData) }; // 892597640
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inSlot = { "inSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventFilterByItemSlot_Parms, inSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_outItems_Inner = { "outItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventFilterByItemSlot_Parms, outItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_inSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_outItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::NewProp_outItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "FilterByItemSlot", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::ACFItemSystemFunctionLibrary_eventFilterByItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::ACFItemSystemFunctionLibrary_eventFilterByItemSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventFilterByItemType_Parms
		{
			TArray<FInventoryItem> inItems;
			EItemType inType;
			TArray<FInventoryItem> outItems;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inItems;
		static const UECodeGen_Private::FBytePropertyParams NewProp_inType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems_Inner = { "inItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventFilterByItemType_Parms, inItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems_MetaData) }; // 892597640
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inType = { "inType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventFilterByItemType_Parms, inType), Z_Construct_UEnum_InventorySystem_EItemType, METADATA_PARAMS(0, nullptr) }; // 2567701869
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_outItems_Inner = { "outItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventFilterByItemType_Parms, outItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_inType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_outItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::NewProp_outItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "Comment", "/* FILTERS */" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
		{ "ToolTip", "FILTERS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "FilterByItemType", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::ACFItemSystemFunctionLibrary_eventFilterByItemType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::ACFItemSystemFunctionLibrary_eventFilterByItemType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			TArray<FStatisticValue> outModifiers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outModifiers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outModifiers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_outModifiers_Inner = { "outModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_outModifiers = { "outModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms, outModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111676830
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_outModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_outModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetConsumableStatModifier", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::ACFItemSystemFunctionLibrary_eventGetConsumableStatModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			TArray<FTimedAttributeSetModifier> outModifiers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outModifiers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outModifiers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_outModifiers_Inner = { "outModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimedAttributeSetModifier, METADATA_PARAMS(0, nullptr) }; // 1745705883
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_outModifiers = { "outModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms, outModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1745705883
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_outModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_outModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetConsumableTimedAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::ACFItemSystemFunctionLibrary_eventGetConsumableTimedAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetDefaultCurrencyName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetDefaultCurrencyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetDefaultCurrencyName", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::ACFItemSystemFunctionLibrary_eventGetDefaultCurrencyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::ACFItemSystemFunctionLibrary_eventGetDefaultCurrencyName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetDefaultWorldItemClass_Parms
		{
			TSubclassOf<AACFWorldItem>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetDefaultWorldItemClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFWorldItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "Comment", "/* DEFAULTS */" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
		{ "ToolTip", "DEFAULTS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetDefaultWorldItemClass", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::ACFItemSystemFunctionLibrary_eventGetDefaultWorldItemClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::ACFItemSystemFunctionLibrary_eventGetDefaultWorldItemClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			TArray<FAttribute> outAttributes;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAttributes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outAttributes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_outAttributes_Inner = { "outAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_outAttributes = { "outAttributes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms, outAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 262406853
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_outAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_outAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetEquippableAttributeRequirements", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::ACFItemSystemFunctionLibrary_eventGetEquippableAttributeRequirements_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			FAttributesSetModifier outModifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outModifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_outModifier = { "outModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms, outModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(0, nullptr) }; // 1351211516
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_outModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetEquippableAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::ACFItemSystemFunctionLibrary_eventGetEquippableAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetItemData_Parms
		{
			const TSubclassOf<AACFItem>  item;
			FItemDescriptor outData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_item;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetItemData_Parms, item), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_item_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetItemData_Parms, outData), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(0, nullptr) }; // 3234246871
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventGetItemData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventGetItemData_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_outData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::ACFItemSystemFunctionLibrary_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::ACFItemSystemFunctionLibrary_eventGetItemData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetItemSlotTagRoot_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetItemSlotTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetItemSlotTagRoot", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::ACFItemSystemFunctionLibrary_eventGetItemSlotTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::ACFItemSystemFunctionLibrary_eventGetItemSlotTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetItemTypeTagRoot_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetItemTypeTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetItemTypeTagRoot", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::ACFItemSystemFunctionLibrary_eventGetItemTypeTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::ACFItemSystemFunctionLibrary_eventGetItemTypeTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms
		{
			APawn* SourcePawn;
			EShootTargetType targetType;
			FVector outSourceLoc;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePawn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_targetType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_targetType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outSourceLoc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_SourcePawn = { "SourcePawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms, SourcePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_targetType = { "targetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms, targetType), Z_Construct_UEnum_InventorySystem_EShootTargetType, METADATA_PARAMS(0, nullptr) }; // 4018612882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_outSourceLoc = { "outSourceLoc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms, outSourceLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_SourcePawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_targetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_targetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_outSourceLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "GetShootTransform", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::ACFItemSystemFunctionLibrary_eventGetShootTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventIsValidItemSlotTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventIsValidItemSlotTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventIsValidItemSlotTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventIsValidItemSlotTag_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "IsValidItemSlotTag", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::ACFItemSystemFunctionLibrary_eventIsValidItemSlotTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::ACFItemSystemFunctionLibrary_eventIsValidItemSlotTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventIsValidItemTypeTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventIsValidItemTypeTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFItemSystemFunctionLibrary_eventIsValidItemTypeTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFItemSystemFunctionLibrary_eventIsValidItemTypeTag_Parms), &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "IsValidItemTypeTag", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::ACFItemSystemFunctionLibrary_eventIsValidItemTypeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::ACFItemSystemFunctionLibrary_eventIsValidItemTypeTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms
		{
			UObject* WorldContextObject;
			float currencyAmount;
			FVector location;
			float acceptanceRadius;
			AACFWorldItem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currencyAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_acceptanceRadius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_currencyAmount = { "currencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms, currencyAmount), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_location_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_location_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_acceptanceRadius = { "acceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms, acceptanceRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms, ReturnValue), Z_Construct_UClass_AACFWorldItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_currencyAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_acceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_acceptanceRadius", "100.000000" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "SpawnCurrencyItemNearLocation", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::ACFItemSystemFunctionLibrary_eventSpawnCurrencyItemNearLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics
	{
		struct ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms
		{
			UObject* WorldContextObject;
			FBaseItem ContainedItem;
			FVector location;
			float acceptanceRadius;
			AACFWorldItem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainedItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainedItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_acceptanceRadius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ContainedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ContainedItem = { "ContainedItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms, ContainedItem), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ContainedItem_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ContainedItem_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_location_MetaData), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_location_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_acceptanceRadius = { "acceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms, acceptanceRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms, ReturnValue), Z_Construct_UClass_AACFWorldItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ContainedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_acceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_acceptanceRadius", "100.000000" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFItemSystemFunctionLibrary, nullptr, "SpawnWorldItemNearLocation", nullptr, nullptr, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::ACFItemSystemFunctionLibrary_eventSpawnWorldItemNearLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFItemSystemFunctionLibrary);
	UClass* Z_Construct_UClass_UACFItemSystemFunctionLibrary_NoRegister()
	{
		return UACFItemSystemFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemSlot, "FilterByItemSlot" }, // 876697261
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_FilterByItemType, "FilterByItemType" }, // 3564826836
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableStatModifier, "GetConsumableStatModifier" }, // 3689085379
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetConsumableTimedAttributeSetModifier, "GetConsumableTimedAttributeSetModifier" }, // 1940646056
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultCurrencyName, "GetDefaultCurrencyName" }, // 3025384857
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetDefaultWorldItemClass, "GetDefaultWorldItemClass" }, // 3945209504
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeRequirements, "GetEquippableAttributeRequirements" }, // 1483097195
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetEquippableAttributeSetModifier, "GetEquippableAttributeSetModifier" }, // 697599520
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemData, "GetItemData" }, // 1953208472
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemSlotTagRoot, "GetItemSlotTagRoot" }, // 1793316996
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetItemTypeTagRoot, "GetItemTypeTagRoot" }, // 2068455998
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_GetShootTransform, "GetShootTransform" }, // 3812489771
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemSlotTag, "IsValidItemSlotTag" }, // 1268772200
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_IsValidItemTypeTag, "IsValidItemTypeTag" }, // 3759198267
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnCurrencyItemNearLocation, "SpawnCurrencyItemNearLocation" }, // 1063567310
		{ &Z_Construct_UFunction_UACFItemSystemFunctionLibrary_SpawnWorldItemNearLocation, "SpawnWorldItemNearLocation" }, // 356208942
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ACFItemSystemFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ACFItemSystemFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFItemSystemFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::ClassParams = {
		&UACFItemSystemFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFItemSystemFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UACFItemSystemFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFItemSystemFunctionLibrary.OuterSingleton, Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFItemSystemFunctionLibrary.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFItemSystemFunctionLibrary>()
	{
		return UACFItemSystemFunctionLibrary::StaticClass();
	}
	UACFItemSystemFunctionLibrary::UACFItemSystemFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFItemSystemFunctionLibrary);
	UACFItemSystemFunctionLibrary::~UACFItemSystemFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFItemSystemFunctionLibrary, UACFItemSystemFunctionLibrary::StaticClass, TEXT("UACFItemSystemFunctionLibrary"), &Z_Registration_Info_UClass_UACFItemSystemFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFItemSystemFunctionLibrary), 2908980608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_3519292246(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

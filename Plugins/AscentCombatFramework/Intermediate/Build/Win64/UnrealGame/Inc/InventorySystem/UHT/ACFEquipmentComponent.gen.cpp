// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFEquipmentComponent.h"
#include "ACFItemTypes.h"
#include "GameplayTagContainer.h"
#include "Items/ACFItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFEquipmentComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFArmor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWeapon_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFEquipmentComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFEquipmentComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipment();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquippedItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemDescriptor();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularPart();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStartingItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

static_assert(std::is_polymorphic<FStartingItem>() == std::is_polymorphic<FBaseItem>(), "USTRUCT FStartingItem cannot be polymorphic unless super FBaseItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StartingItem;
class UScriptStruct* FStartingItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StartingItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StartingItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartingItem, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("StartingItem"));
	}
	return Z_Registration_Info_UScriptStruct_StartingItem.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FStartingItem>()
{
	return FStartingItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStartingItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEquip_MetaData[];
#endif
		static void NewProp_bAutoEquip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEquip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropChancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropChancePercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartingItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartingItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartingItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip_SetBit(void* Obj)
	{
		((FStartingItem*)Obj)->bAutoEquip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip = { "bAutoEquip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStartingItem), &Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip_MetaData), Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_DropChancePercentage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_DropChancePercentage = { "DropChancePercentage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStartingItem, DropChancePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_DropChancePercentage_MetaData), Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_DropChancePercentage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStartingItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_bAutoEquip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartingItem_Statics::NewProp_DropChancePercentage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartingItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		Z_Construct_UScriptStruct_FBaseItem,
		&NewStructOps,
		"StartingItem",
		Z_Construct_UScriptStruct_FStartingItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartingItem_Statics::PropPointers),
		sizeof(FStartingItem),
		alignof(FStartingItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartingItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStartingItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartingItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStartingItem()
	{
		if (!Z_Registration_Info_UScriptStruct_StartingItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StartingItem.InnerSingleton, Z_Construct_UScriptStruct_FStartingItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StartingItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[];
#endif
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropChancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropChancePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemInfo_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Info of the item in this inventory slot*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Info of the item in this inventory slot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemInfo), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemInfo_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemInfo_MetaData) }; // 3234246871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Can be set for grid  based inventories.\n     NOT SET BY DEFAULT!!*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Can be set for grid  based inventories.\n     NOT SET BY DEFAULT!!" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, InventoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Numeber of items in this slot*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Numeber of items in this slot" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Count_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Identifies if this item is equipped*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Identifies if this item is equipped" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((FInventoryItem*)Obj)->bIsEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItem), &Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If this item is equipped, this is the slot in which is equipped.\n    Not set if the item is not equipped*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "If this item is equipped, this is the slot in which is equipped.\n    Not set if the item is not equipped" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, EquipmentSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_EquipmentSlot_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_EquipmentSlot_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DropChancePercentage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/*Chance of this item of being dropped on death*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Chance of this item of being dropped on death" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DropChancePercentage = { "DropChancePercentage", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, DropChancePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DropChancePercentage_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DropChancePercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000001000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemClass_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemGuid_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemGuid = { "ItemGuid", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemGuid_MetaData), Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_EquipmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DropChancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"InventoryItem",
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquippedItem;
class UScriptStruct* FEquippedItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquippedItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquippedItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquippedItem, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EquippedItem"));
	}
	return Z_Registration_Info_UScriptStruct_EquippedItem.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FEquippedItem>()
{
	return FEquippedItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquippedItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquippedItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquippedItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_ItemSlot_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquippedItem, ItemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_ItemSlot_MetaData), Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_ItemSlot_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_InventoryItem_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquippedItem, InventoryItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_InventoryItem_MetaData), Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_InventoryItem_MetaData) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquippedItem, Item), Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_Item_MetaData), Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquippedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_ItemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_InventoryItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedItem_Statics::NewProp_Item,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquippedItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"EquippedItem",
		Z_Construct_UScriptStruct_FEquippedItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::PropPointers),
		sizeof(FEquippedItem),
		alignof(FEquippedItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquippedItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEquippedItem()
	{
		if (!Z_Registration_Info_UScriptStruct_EquippedItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquippedItem.InnerSingleton, Z_Construct_UScriptStruct_FEquippedItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquippedItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Equipment;
class UScriptStruct* FEquipment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Equipment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Equipment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipment, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("Equipment"));
	}
	return Z_Registration_Info_UScriptStruct_Equipment.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FEquipment>()
{
	return FEquipment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquippedItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_MainWeapon_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_MainWeapon = { "MainWeapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipment, MainWeapon), Z_Construct_UClass_AACFWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_MainWeapon_MetaData), Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_MainWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipment, SecondaryWeapon), Z_Construct_UClass_AACFWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_SecondaryWeapon_MetaData), Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_SecondaryWeapon_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems_Inner = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquippedItem, METADATA_PARAMS(0, nullptr) }; // 82444359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipment, EquippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems_MetaData), Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems_MetaData) }; // 82444359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_MainWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_SecondaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_EquippedItems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"Equipment",
		Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers),
		sizeof(FEquipment),
		alignof(FEquipment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEquipment()
	{
		if (!Z_Registration_Info_UScriptStruct_Equipment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Equipment.InnerSingleton, Z_Construct_UScriptStruct_FEquipment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Equipment.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnEquipmentChanged_Parms
		{
			FEquipment Equipment;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Equipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnEquipmentChanged_Parms, Equipment), Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::NewProp_Equipment_MetaData), Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::NewProp_Equipment_MetaData) }; // 1335708750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::NewProp_Equipment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnEquipmentChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnEquipmentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnEquipmentChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEquipmentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentChanged, FEquipment const& Equipment)
{
	struct _Script_InventorySystem_eventOnEquipmentChanged_Parms
	{
		FEquipment Equipment;
	};
	_Script_InventorySystem_eventOnEquipmentChanged_Parms Parms;
	Parms.Equipment=Equipment;
	OnEquipmentChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnInventoryChanged_Parms
		{
			TArray<FInventoryItem> Inventory;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnInventoryChanged_Parms, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory_MetaData), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory_MetaData) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnInventoryChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnInventoryChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnInventoryChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged, TArray<FInventoryItem> const& Inventory)
{
	struct _Script_InventorySystem_eventOnInventoryChanged_Parms
	{
		TArray<FInventoryItem> Inventory;
	};
	_Script_InventorySystem_eventOnInventoryChanged_Parms Parms;
	Parms.Inventory=Inventory;
	OnInventoryChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnItemAdded_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemAdded_Parms, item), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_item_MetaData), Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_item_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FBaseItem const& item)
{
	struct _Script_InventorySystem_eventOnItemAdded_Parms
	{
		FBaseItem item;
	};
	_Script_InventorySystem_eventOnItemAdded_Parms Parms;
	Parms.item=item;
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnItemRemoved_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemRemoved_Parms, item), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_item_MetaData), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_item_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, FBaseItem const& item)
{
	struct _Script_InventorySystem_eventOnItemRemoved_Parms
	{
		FBaseItem item;
	};
	_Script_InventorySystem_eventOnItemRemoved_Parms Parms;
	Parms.item=item;
	OnItemRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFEquipmentComponent::execInternal_OnArmorUnequipped)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnArmorUnequipped_Implementation(Z_Param_slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execAddSkeletalMeshComponent)
	{
		P_GET_OBJECT(UClass,Z_Param_ArmorClass);
		P_GET_STRUCT(FGameplayTag,Z_Param_itemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSkeletalMeshComponent_Implementation(Z_Param_ArmorClass,Z_Param_itemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execOnRep_Inventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Inventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execOnRep_Equipment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Equipment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execOnComponentLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentDesiredOverlayTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentDesiredOverlayTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentDesiredMovesetActionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentDesiredMovesetActionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentDesiredMovesetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentDesiredMovesetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execHasEnoughItemsOfType)
	{
		P_GET_TARRAY_REF(FBaseItem,Z_Param_Out_ItemsToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEnoughItemsOfType(Z_Param_Out_ItemsToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execHasOnBodyAnyWeaponOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_weaponClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOnBodyAnyWeaponOfType(Z_Param_weaponClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execCanBeEquipped)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeEquipped(Z_Param_Out_equippable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execCanSwitchToMelee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSwitchToMelee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execCanSwitchToRanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSwitchToRanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execNumberOfItemCanTake)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumberOfItemCanTake(Z_Param_Out_itemToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execHasAnyItemInEquipmentSlot)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_itemSlor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyItemInEquipmentSlot(Z_Param_itemSlor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetStartingItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FStartingItem>*)Z_Param__Result=P_THIS->GetStartingItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetModularMesh)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_itemSlot);
		P_GET_STRUCT_REF(FModularPart,Z_Param_Out_outMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetModularMesh(Z_Param_itemSlot,Z_Param_Out_outMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetEquippedItemSlot)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_itemSlot);
		P_GET_STRUCT_REF(FEquippedItem,Z_Param_Out_outSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEquippedItemSlot(Z_Param_Out_itemSlot,Z_Param_Out_outSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetModularMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModularPart>*)Z_Param__Result=P_THIS->GetModularMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentInventoryTotalWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentInventoryTotalWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execFindFirstItemOfClassInInventory)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_outItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindFirstItemOfClassInInventory(Z_Param_Out_itemClass,Z_Param_Out_outItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetAllSellableItemsInInventory)
	{
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSellableItemsInInventory(Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetAllItemsOfClassInInventory)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllItemsOfClassInInventory(Z_Param_Out_itemClass,Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetTotalCountOfItemsByClass)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFItem> ,Z_Param_Out_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalCountOfItemsByClass(Z_Param_Out_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execIsSlotEmpty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotEmpty(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetItemByInventoryIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_outItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemByInventoryIndex(Z_Param_index,Z_Param_Out_outItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetFirstEmptyInventoryIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFirstEmptyInventoryIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetItemByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_outItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemByIndex(Z_Param_index,Z_Param_Out_outItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetItemByGuid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_itemGuid);
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_outItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemByGuid(Z_Param_Out_itemGuid,Z_Param_Out_outItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execIsInInventory)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInInventory(Z_Param_Out_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetMainWeaponSocketLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMainWeaponSocketLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInventoryItem>*)Z_Param__Result=P_THIS->GetInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentEquipment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEquipment*)Z_Param__Result=P_THIS->GetCurrentEquipment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentOffhandWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFWeapon**)Z_Param__Result=P_THIS->GetCurrentOffhandWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetCurrentMainWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFWeapon**)Z_Param__Result=P_THIS->GetCurrentMainWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetMaxInventoryWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxInventoryWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetMaxInventorySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxInventorySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execHaveAtLeastAValidSlot)
	{
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_itemSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveAtLeastAValidSlot(Z_Param_Out_itemSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execTryFindAvailableItemSlot)
	{
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_itemSlots);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_outAvailableSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryFindAvailableItemSlot(Z_Param_Out_itemSlots,Z_Param_Out_outAvailableSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execIsSlotAvailable)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_itemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotAvailable(Z_Param_Out_itemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execGetLeftHandIkPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLeftHandIkPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execShouldUseLeftHandIK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldUseLeftHandIK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execRefreshEquipment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshEquipment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execDestroyEquippedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyEquippedItems_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execSetMainMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_newMesh);
		P_GET_UBOOL(Z_Param_bRefreshEquipment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainMesh(Z_Param_newMesh,Z_Param_bRefreshEquipment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execSetDamageActivation)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_GET_TARRAY_REF(FName,Z_Param_Out_traceChannels);
		P_GET_UBOOL(Z_Param_isLeftWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageActivation(Z_Param_isActive,Z_Param_Out_traceChannels,Z_Param_isLeftWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execSheathCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SheathCurrentWeapon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execUnequipItemBySlot)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_itemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnequipItemBySlot_Implementation(Z_Param_itemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execUseConsumableOnActorBySlot)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_itemSlot);
		P_GET_OBJECT(ACharacter,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseConsumableOnActorBySlot_Implementation(Z_Param_itemSlot,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execUseEquippedItemBySlot)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_itemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseEquippedItemBySlot_Implementation(Z_Param_itemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execEquipItemFromInventoryInSlot)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_inItem);
		P_GET_STRUCT(FGameplayTag,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipItemFromInventoryInSlot_Implementation(Z_Param_inItem,Z_Param_slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execEquipItemFromInventory)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_inItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipItemFromInventory_Implementation(Z_Param_inItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execMoveItemsToInventory)
	{
		P_GET_TARRAY(FBaseItem,Z_Param_inItems);
		P_GET_OBJECT(UACFStorageComponent,Z_Param_equipComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveItemsToInventory_Implementation(Z_Param_inItems,Z_Param_equipComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execSetInventoryItemSlotIndex)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_item);
		P_GET_PROPERTY(FIntProperty,Z_Param_newIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryItemSlotIndex_Implementation(Z_Param_item,Z_Param_newIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execConsumeItems)
	{
		P_GET_TARRAY(FBaseItem,Z_Param_ItemsToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeItems_Implementation(Z_Param_ItemsToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execDropItemByInventoryIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItemByInventoryIndex_Implementation(Z_Param_itemIndex,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execDropItem)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_item);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem_Implementation(Z_Param_item,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execRemoveItemByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemByIndex_Implementation(Z_Param_index,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execRemoveItem)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_item);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem_Implementation(Z_Param_item,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execUseInventoryItem)
	{
		P_GET_STRUCT(FInventoryItem,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseInventoryItem_Implementation(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execUseInventoryItemByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseInventoryItemByIndex_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execAddItemToInventory)
	{
		P_GET_STRUCT(FBaseItem,Z_Param_ItemToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventory_Implementation(Z_Param_ItemToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execAddItemToInventoryByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_inItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventoryByClass_Implementation(Z_Param_inItem,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execOnEntityOwnerDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntityOwnerDeath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEquipmentComponent::execInitializeInventoryAndEquipment)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inMainMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeInventoryAndEquipment(Z_Param_inMainMesh);
		P_NATIVE_END;
	}
	struct ACFEquipmentComponent_eventAddItemToInventory_Parms
	{
		FBaseItem ItemToAdd;
	};
	struct ACFEquipmentComponent_eventAddItemToInventoryByClass_Parms
	{
		TSubclassOf<AACFItem>  inItem;
		int32 count;
	};
	struct ACFEquipmentComponent_eventAddSkeletalMeshComponent_Parms
	{
		TSubclassOf<AACFArmor>  ArmorClass;
		FGameplayTag itemSlot;
	};
	struct ACFEquipmentComponent_eventConsumeItems_Parms
	{
		TArray<FBaseItem> ItemsToCheck;
	};
	struct ACFEquipmentComponent_eventDropItem_Parms
	{
		FInventoryItem item;
		int32 count;
	};
	struct ACFEquipmentComponent_eventDropItemByInventoryIndex_Parms
	{
		int32 itemIndex;
		int32 count;
	};
	struct ACFEquipmentComponent_eventEquipItemFromInventory_Parms
	{
		FInventoryItem inItem;
	};
	struct ACFEquipmentComponent_eventEquipItemFromInventoryInSlot_Parms
	{
		FInventoryItem inItem;
		FGameplayTag slot;
	};
	struct ACFEquipmentComponent_eventInternal_OnArmorUnequipped_Parms
	{
		FGameplayTag slot;
	};
	struct ACFEquipmentComponent_eventMoveItemsToInventory_Parms
	{
		TArray<FBaseItem> inItems;
		UACFStorageComponent* equipComp;
	};
	struct ACFEquipmentComponent_eventRemoveItem_Parms
	{
		FInventoryItem item;
		int32 count;
	};
	struct ACFEquipmentComponent_eventRemoveItemByIndex_Parms
	{
		int32 index;
		int32 count;
	};
	struct ACFEquipmentComponent_eventSetInventoryItemSlotIndex_Parms
	{
		FInventoryItem item;
		int32 newIndex;
	};
	struct ACFEquipmentComponent_eventUnequipItemBySlot_Parms
	{
		FGameplayTag itemSlot;
	};
	struct ACFEquipmentComponent_eventUseConsumableOnActorBySlot_Parms
	{
		FGameplayTag itemSlot;
		ACharacter* target;
	};
	struct ACFEquipmentComponent_eventUseEquippedItemBySlot_Parms
	{
		FGameplayTag itemSlot;
	};
	struct ACFEquipmentComponent_eventUseInventoryItem_Parms
	{
		FInventoryItem item;
	};
	struct ACFEquipmentComponent_eventUseInventoryItemByIndex_Parms
	{
		int32 index;
	};
	static FName NAME_UACFEquipmentComponent_AddItemToInventory = FName(TEXT("AddItemToInventory"));
	void UACFEquipmentComponent::AddItemToInventory(FBaseItem const& ItemToAdd)
	{
		ACFEquipmentComponent_eventAddItemToInventory_Parms Parms;
		Parms.ItemToAdd=ItemToAdd;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_AddItemToInventory),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_AddItemToInventoryByClass = FName(TEXT("AddItemToInventoryByClass"));
	void UACFEquipmentComponent::AddItemToInventoryByClass(TSubclassOf<AACFItem>  inItem, int32 count)
	{
		ACFEquipmentComponent_eventAddItemToInventoryByClass_Parms Parms;
		Parms.inItem=inItem;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_AddItemToInventoryByClass),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_AddSkeletalMeshComponent = FName(TEXT("AddSkeletalMeshComponent"));
	void UACFEquipmentComponent::AddSkeletalMeshComponent(TSubclassOf<AACFArmor>  ArmorClass, FGameplayTag itemSlot)
	{
		ACFEquipmentComponent_eventAddSkeletalMeshComponent_Parms Parms;
		Parms.ArmorClass=ArmorClass;
		Parms.itemSlot=itemSlot;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_AddSkeletalMeshComponent),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_ConsumeItems = FName(TEXT("ConsumeItems"));
	void UACFEquipmentComponent::ConsumeItems(TArray<FBaseItem> const& ItemsToCheck)
	{
		ACFEquipmentComponent_eventConsumeItems_Parms Parms;
		Parms.ItemsToCheck=ItemsToCheck;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_ConsumeItems),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_DestroyEquippedItems = FName(TEXT("DestroyEquippedItems"));
	void UACFEquipmentComponent::DestroyEquippedItems()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_DestroyEquippedItems),NULL);
	}
	static FName NAME_UACFEquipmentComponent_DropItem = FName(TEXT("DropItem"));
	void UACFEquipmentComponent::DropItem(FInventoryItem const& item, int32 count)
	{
		ACFEquipmentComponent_eventDropItem_Parms Parms;
		Parms.item=item;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_DropItem),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_DropItemByInventoryIndex = FName(TEXT("DropItemByInventoryIndex"));
	void UACFEquipmentComponent::DropItemByInventoryIndex(int32 itemIndex, int32 count)
	{
		ACFEquipmentComponent_eventDropItemByInventoryIndex_Parms Parms;
		Parms.itemIndex=itemIndex;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_DropItemByInventoryIndex),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_EquipItemFromInventory = FName(TEXT("EquipItemFromInventory"));
	void UACFEquipmentComponent::EquipItemFromInventory(FInventoryItem const& inItem)
	{
		ACFEquipmentComponent_eventEquipItemFromInventory_Parms Parms;
		Parms.inItem=inItem;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_EquipItemFromInventory),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_EquipItemFromInventoryInSlot = FName(TEXT("EquipItemFromInventoryInSlot"));
	void UACFEquipmentComponent::EquipItemFromInventoryInSlot(FInventoryItem const& inItem, FGameplayTag slot)
	{
		ACFEquipmentComponent_eventEquipItemFromInventoryInSlot_Parms Parms;
		Parms.inItem=inItem;
		Parms.slot=slot;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_EquipItemFromInventoryInSlot),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_Internal_OnArmorUnequipped = FName(TEXT("Internal_OnArmorUnequipped"));
	void UACFEquipmentComponent::Internal_OnArmorUnequipped(FGameplayTag const& slot)
	{
		ACFEquipmentComponent_eventInternal_OnArmorUnequipped_Parms Parms;
		Parms.slot=slot;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_Internal_OnArmorUnequipped),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_MoveItemsToInventory = FName(TEXT("MoveItemsToInventory"));
	void UACFEquipmentComponent::MoveItemsToInventory(TArray<FBaseItem> const& inItems, UACFStorageComponent* equipComp)
	{
		ACFEquipmentComponent_eventMoveItemsToInventory_Parms Parms;
		Parms.inItems=inItems;
		Parms.equipComp=equipComp;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_MoveItemsToInventory),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_OnComponentLoaded = FName(TEXT("OnComponentLoaded"));
	void UACFEquipmentComponent::OnComponentLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_OnComponentLoaded),NULL);
	}
	static FName NAME_UACFEquipmentComponent_OnEntityOwnerDeath = FName(TEXT("OnEntityOwnerDeath"));
	void UACFEquipmentComponent::OnEntityOwnerDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_OnEntityOwnerDeath),NULL);
	}
	static FName NAME_UACFEquipmentComponent_RemoveItem = FName(TEXT("RemoveItem"));
	void UACFEquipmentComponent::RemoveItem(FInventoryItem const& item, int32 count)
	{
		ACFEquipmentComponent_eventRemoveItem_Parms Parms;
		Parms.item=item;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_RemoveItem),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_RemoveItemByIndex = FName(TEXT("RemoveItemByIndex"));
	void UACFEquipmentComponent::RemoveItemByIndex(const int32 index, int32 count)
	{
		ACFEquipmentComponent_eventRemoveItemByIndex_Parms Parms;
		Parms.index=index;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_RemoveItemByIndex),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_SetInventoryItemSlotIndex = FName(TEXT("SetInventoryItemSlotIndex"));
	void UACFEquipmentComponent::SetInventoryItemSlotIndex(FInventoryItem const& item, int32 newIndex)
	{
		ACFEquipmentComponent_eventSetInventoryItemSlotIndex_Parms Parms;
		Parms.item=item;
		Parms.newIndex=newIndex;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_SetInventoryItemSlotIndex),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_SheathCurrentWeapon = FName(TEXT("SheathCurrentWeapon"));
	void UACFEquipmentComponent::SheathCurrentWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_SheathCurrentWeapon),NULL);
	}
	static FName NAME_UACFEquipmentComponent_UnequipItemBySlot = FName(TEXT("UnequipItemBySlot"));
	void UACFEquipmentComponent::UnequipItemBySlot(FGameplayTag itemSlot)
	{
		ACFEquipmentComponent_eventUnequipItemBySlot_Parms Parms;
		Parms.itemSlot=itemSlot;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_UnequipItemBySlot),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_UseConsumableOnActorBySlot = FName(TEXT("UseConsumableOnActorBySlot"));
	void UACFEquipmentComponent::UseConsumableOnActorBySlot(FGameplayTag itemSlot, ACharacter* target)
	{
		ACFEquipmentComponent_eventUseConsumableOnActorBySlot_Parms Parms;
		Parms.itemSlot=itemSlot;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_UseConsumableOnActorBySlot),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_UseEquippedItemBySlot = FName(TEXT("UseEquippedItemBySlot"));
	void UACFEquipmentComponent::UseEquippedItemBySlot(FGameplayTag itemSlot)
	{
		ACFEquipmentComponent_eventUseEquippedItemBySlot_Parms Parms;
		Parms.itemSlot=itemSlot;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_UseEquippedItemBySlot),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_UseInventoryItem = FName(TEXT("UseInventoryItem"));
	void UACFEquipmentComponent::UseInventoryItem(FInventoryItem const& item)
	{
		ACFEquipmentComponent_eventUseInventoryItem_Parms Parms;
		Parms.item=item;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_UseInventoryItem),&Parms);
	}
	static FName NAME_UACFEquipmentComponent_UseInventoryItemByIndex = FName(TEXT("UseInventoryItemByIndex"));
	void UACFEquipmentComponent::UseInventoryItemByIndex(int32 index)
	{
		ACFEquipmentComponent_eventUseInventoryItemByIndex_Parms Parms;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_UACFEquipmentComponent_UseInventoryItemByIndex),&Parms);
	}
	void UACFEquipmentComponent::StaticRegisterNativesUACFEquipmentComponent()
	{
		UClass* Class = UACFEquipmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &UACFEquipmentComponent::execAddItemToInventory },
			{ "AddItemToInventoryByClass", &UACFEquipmentComponent::execAddItemToInventoryByClass },
			{ "AddSkeletalMeshComponent", &UACFEquipmentComponent::execAddSkeletalMeshComponent },
			{ "CanBeEquipped", &UACFEquipmentComponent::execCanBeEquipped },
			{ "CanSwitchToMelee", &UACFEquipmentComponent::execCanSwitchToMelee },
			{ "CanSwitchToRanged", &UACFEquipmentComponent::execCanSwitchToRanged },
			{ "ConsumeItems", &UACFEquipmentComponent::execConsumeItems },
			{ "DestroyEquippedItems", &UACFEquipmentComponent::execDestroyEquippedItems },
			{ "DropItem", &UACFEquipmentComponent::execDropItem },
			{ "DropItemByInventoryIndex", &UACFEquipmentComponent::execDropItemByInventoryIndex },
			{ "EquipItemFromInventory", &UACFEquipmentComponent::execEquipItemFromInventory },
			{ "EquipItemFromInventoryInSlot", &UACFEquipmentComponent::execEquipItemFromInventoryInSlot },
			{ "FindFirstItemOfClassInInventory", &UACFEquipmentComponent::execFindFirstItemOfClassInInventory },
			{ "GetAllItemsOfClassInInventory", &UACFEquipmentComponent::execGetAllItemsOfClassInInventory },
			{ "GetAllSellableItemsInInventory", &UACFEquipmentComponent::execGetAllSellableItemsInInventory },
			{ "GetCurrentDesiredMovesetActionTag", &UACFEquipmentComponent::execGetCurrentDesiredMovesetActionTag },
			{ "GetCurrentDesiredMovesetTag", &UACFEquipmentComponent::execGetCurrentDesiredMovesetTag },
			{ "GetCurrentDesiredOverlayTag", &UACFEquipmentComponent::execGetCurrentDesiredOverlayTag },
			{ "GetCurrentEquipment", &UACFEquipmentComponent::execGetCurrentEquipment },
			{ "GetCurrentInventoryTotalWeight", &UACFEquipmentComponent::execGetCurrentInventoryTotalWeight },
			{ "GetCurrentMainWeapon", &UACFEquipmentComponent::execGetCurrentMainWeapon },
			{ "GetCurrentOffhandWeapon", &UACFEquipmentComponent::execGetCurrentOffhandWeapon },
			{ "GetEquippedItemSlot", &UACFEquipmentComponent::execGetEquippedItemSlot },
			{ "GetFirstEmptyInventoryIndex", &UACFEquipmentComponent::execGetFirstEmptyInventoryIndex },
			{ "GetInventory", &UACFEquipmentComponent::execGetInventory },
			{ "GetItemByGuid", &UACFEquipmentComponent::execGetItemByGuid },
			{ "GetItemByIndex", &UACFEquipmentComponent::execGetItemByIndex },
			{ "GetItemByInventoryIndex", &UACFEquipmentComponent::execGetItemByInventoryIndex },
			{ "GetLeftHandIkPos", &UACFEquipmentComponent::execGetLeftHandIkPos },
			{ "GetMainWeaponSocketLocation", &UACFEquipmentComponent::execGetMainWeaponSocketLocation },
			{ "GetMaxInventorySlots", &UACFEquipmentComponent::execGetMaxInventorySlots },
			{ "GetMaxInventoryWeight", &UACFEquipmentComponent::execGetMaxInventoryWeight },
			{ "GetModularMesh", &UACFEquipmentComponent::execGetModularMesh },
			{ "GetModularMeshes", &UACFEquipmentComponent::execGetModularMeshes },
			{ "GetStartingItems", &UACFEquipmentComponent::execGetStartingItems },
			{ "GetTotalCountOfItemsByClass", &UACFEquipmentComponent::execGetTotalCountOfItemsByClass },
			{ "HasAnyItemInEquipmentSlot", &UACFEquipmentComponent::execHasAnyItemInEquipmentSlot },
			{ "HasEnoughItemsOfType", &UACFEquipmentComponent::execHasEnoughItemsOfType },
			{ "HasOnBodyAnyWeaponOfType", &UACFEquipmentComponent::execHasOnBodyAnyWeaponOfType },
			{ "HaveAtLeastAValidSlot", &UACFEquipmentComponent::execHaveAtLeastAValidSlot },
			{ "InitializeInventoryAndEquipment", &UACFEquipmentComponent::execInitializeInventoryAndEquipment },
			{ "Internal_OnArmorUnequipped", &UACFEquipmentComponent::execInternal_OnArmorUnequipped },
			{ "IsInInventory", &UACFEquipmentComponent::execIsInInventory },
			{ "IsSlotAvailable", &UACFEquipmentComponent::execIsSlotAvailable },
			{ "IsSlotEmpty", &UACFEquipmentComponent::execIsSlotEmpty },
			{ "MoveItemsToInventory", &UACFEquipmentComponent::execMoveItemsToInventory },
			{ "NumberOfItemCanTake", &UACFEquipmentComponent::execNumberOfItemCanTake },
			{ "OnComponentLoaded", &UACFEquipmentComponent::execOnComponentLoaded },
			{ "OnEntityOwnerDeath", &UACFEquipmentComponent::execOnEntityOwnerDeath },
			{ "OnRep_Equipment", &UACFEquipmentComponent::execOnRep_Equipment },
			{ "OnRep_Inventory", &UACFEquipmentComponent::execOnRep_Inventory },
			{ "RefreshEquipment", &UACFEquipmentComponent::execRefreshEquipment },
			{ "RemoveItem", &UACFEquipmentComponent::execRemoveItem },
			{ "RemoveItemByIndex", &UACFEquipmentComponent::execRemoveItemByIndex },
			{ "SetDamageActivation", &UACFEquipmentComponent::execSetDamageActivation },
			{ "SetInventoryItemSlotIndex", &UACFEquipmentComponent::execSetInventoryItemSlotIndex },
			{ "SetMainMesh", &UACFEquipmentComponent::execSetMainMesh },
			{ "SheathCurrentWeapon", &UACFEquipmentComponent::execSheathCurrentWeapon },
			{ "ShouldUseLeftHandIK", &UACFEquipmentComponent::execShouldUseLeftHandIK },
			{ "TryFindAvailableItemSlot", &UACFEquipmentComponent::execTryFindAvailableItemSlot },
			{ "UnequipItemBySlot", &UACFEquipmentComponent::execUnequipItemBySlot },
			{ "UseConsumableOnActorBySlot", &UACFEquipmentComponent::execUseConsumableOnActorBySlot },
			{ "UseEquippedItemBySlot", &UACFEquipmentComponent::execUseEquippedItemBySlot },
			{ "UseInventoryItem", &UACFEquipmentComponent::execUseInventoryItem },
			{ "UseInventoryItemByIndex", &UACFEquipmentComponent::execUseInventoryItemByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::NewProp_ItemToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::NewProp_ItemToAdd = { "ItemToAdd", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventAddItemToInventory_Parms, ItemToAdd), Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::NewProp_ItemToAdd_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::NewProp_ItemToAdd_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::NewProp_ItemToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "Comment", "/*Adds the selected item to this Inventory */" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Adds the selected item to this Inventory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "AddItemToInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventAddItemToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventAddItemToInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_inItem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::NewProp_inItem = { "inItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventAddItemToInventoryByClass_Parms, inItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventAddItemToInventoryByClass_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::NewProp_inItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "Comment", "/*------------------------ INVENTORY\n     * -----------------------------------------*/" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "------------------------ INVENTORY\n     * -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "AddItemToInventoryByClass", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventAddItemToInventoryByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventAddItemToInventoryByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ArmorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::NewProp_ArmorClass = { "ArmorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventAddSkeletalMeshComponent_Parms, ArmorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFArmor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventAddSkeletalMeshComponent_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::NewProp_ArmorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::NewProp_itemSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "AddSkeletalMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventAddSkeletalMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventAddSkeletalMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics
	{
		struct ACFEquipmentComponent_eventCanBeEquipped_Parms
		{
			const TSubclassOf<AACFItem>  equippable;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equippable_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_equippable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_equippable = { "equippable", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventCanBeEquipped_Parms, equippable), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_equippable_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_equippable_MetaData) };
	void Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventCanBeEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventCanBeEquipped_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_equippable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "CanBeEquipped", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::ACFEquipmentComponent_eventCanBeEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::ACFEquipmentComponent_eventCanBeEquipped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics
	{
		struct ACFEquipmentComponent_eventCanSwitchToMelee_Parms
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
	void Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventCanSwitchToMelee_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventCanSwitchToMelee_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "CanSwitchToMelee", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::ACFEquipmentComponent_eventCanSwitchToMelee_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::ACFEquipmentComponent_eventCanSwitchToMelee_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics
	{
		struct ACFEquipmentComponent_eventCanSwitchToRanged_Parms
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
	void Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventCanSwitchToRanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventCanSwitchToRanged_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "CanSwitchToRanged", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::ACFEquipmentComponent_eventCanSwitchToRanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::ACFEquipmentComponent_eventCanSwitchToRanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck_Inner = { "ItemsToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck = { "ItemsToCheck", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventConsumeItems_Parms, ItemsToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck_MetaData) }; // 2547535924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::NewProp_ItemsToCheck,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "ConsumeItems", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventConsumeItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventConsumeItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "DestroyEquippedItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventDropItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_item_MetaData) }; // 892597640
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventDropItem_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "Comment", "/*Removes the selected amount of the provided item from the inventory,\n       Unequips it if it is equipped and spawn a WorldItem near the owner position\n       containing the selectede items*/" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Removes the selected amount of the provided item from the inventory,\n       Unequips it if it is equipped and spawn a WorldItem near the owner position\n       containing the selectede items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "DropItem", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventDropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventDropItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventDropItemByInventoryIndex_Parms, itemIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventDropItemByInventoryIndex_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::NewProp_itemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "DropItemByInventoryIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventDropItemByInventoryIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventDropItemByInventoryIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::NewProp_inItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::NewProp_inItem = { "inItem", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventEquipItemFromInventory_Parms, inItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::NewProp_inItem_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::NewProp_inItem_MetaData) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::NewProp_inItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/*Moves the Inventory Item to the Equipment*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Moves the Inventory Item to the Equipment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "EquipItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventEquipItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventEquipItemFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inItem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_inItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_inItem = { "inItem", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventEquipItemFromInventoryInSlot_Parms, inItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_inItem_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_inItem_MetaData) }; // 892597640
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventEquipItemFromInventoryInSlot_Parms, slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_inItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/*Moves the Inventory Item to the Equipment*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Moves the Inventory Item to the Equipment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "EquipItemFromInventoryInSlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventEquipItemFromInventoryInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventEquipItemFromInventoryInSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics
	{
		struct ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			FInventoryItem outItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_outItem = { "outItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms, outItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	void Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_outItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "FindFirstItemOfClassInInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::ACFEquipmentComponent_eventFindFirstItemOfClassInInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics
	{
		struct ACFEquipmentComponent_eventGetAllItemsOfClassInInventory_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			TArray<FInventoryItem> outItems;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetAllItemsOfClassInInventory_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_outItems_Inner = { "outItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetAllItemsOfClassInInventory_Parms, outItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_outItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::NewProp_outItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetAllItemsOfClassInInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::ACFEquipmentComponent_eventGetAllItemsOfClassInInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::ACFEquipmentComponent_eventGetAllItemsOfClassInInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics
	{
		struct ACFEquipmentComponent_eventGetAllSellableItemsInInventory_Parms
		{
			TArray<FInventoryItem> outItems;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::NewProp_outItems_Inner = { "outItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetAllSellableItemsInInventory_Parms, outItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::NewProp_outItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::NewProp_outItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetAllSellableItemsInInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::ACFEquipmentComponent_eventGetAllSellableItemsInInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::ACFEquipmentComponent_eventGetAllSellableItemsInInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentDesiredMovesetActionTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentDesiredMovesetActionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentDesiredMovesetActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::ACFEquipmentComponent_eventGetCurrentDesiredMovesetActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::ACFEquipmentComponent_eventGetCurrentDesiredMovesetActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentDesiredMovesetTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentDesiredMovesetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Movesets" },
		{ "Comment", "/*------------------------ MOVESETS\n     * -----------------------------------------*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "------------------------ MOVESETS\n     * -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentDesiredMovesetTag", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::ACFEquipmentComponent_eventGetCurrentDesiredMovesetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::ACFEquipmentComponent_eventGetCurrentDesiredMovesetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentDesiredOverlayTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentDesiredOverlayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentDesiredOverlayTag", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::ACFEquipmentComponent_eventGetCurrentDesiredOverlayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::ACFEquipmentComponent_eventGetCurrentDesiredOverlayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentEquipment_Parms
		{
			FEquipment ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentEquipment_Parms, ReturnValue), Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(0, nullptr) }; // 1335708750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentEquipment", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::ACFEquipmentComponent_eventGetCurrentEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::ACFEquipmentComponent_eventGetCurrentEquipment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentInventoryTotalWeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentInventoryTotalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentInventoryTotalWeight", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::ACFEquipmentComponent_eventGetCurrentInventoryTotalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::ACFEquipmentComponent_eventGetCurrentInventoryTotalWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentMainWeapon_Parms
		{
			AACFWeapon* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentMainWeapon_Parms, ReturnValue), Z_Construct_UClass_AACFWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentMainWeapon", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::ACFEquipmentComponent_eventGetCurrentMainWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::ACFEquipmentComponent_eventGetCurrentMainWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics
	{
		struct ACFEquipmentComponent_eventGetCurrentOffhandWeapon_Parms
		{
			AACFWeapon* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetCurrentOffhandWeapon_Parms, ReturnValue), Z_Construct_UClass_AACFWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetCurrentOffhandWeapon", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::ACFEquipmentComponent_eventGetCurrentOffhandWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::ACFEquipmentComponent_eventGetCurrentOffhandWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics
	{
		struct ACFEquipmentComponent_eventGetEquippedItemSlot_Parms
		{
			FGameplayTag itemSlot;
			FEquippedItem outSlot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_itemSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetEquippedItemSlot_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_itemSlot_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_itemSlot_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_outSlot = { "outSlot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetEquippedItemSlot_Parms, outSlot), Z_Construct_UScriptStruct_FEquippedItem, METADATA_PARAMS(0, nullptr) }; // 82444359
	void Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventGetEquippedItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventGetEquippedItemSlot_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_itemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_outSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetEquippedItemSlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::ACFEquipmentComponent_eventGetEquippedItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::ACFEquipmentComponent_eventGetEquippedItemSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics
	{
		struct ACFEquipmentComponent_eventGetFirstEmptyInventoryIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetFirstEmptyInventoryIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetFirstEmptyInventoryIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::ACFEquipmentComponent_eventGetFirstEmptyInventoryIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::ACFEquipmentComponent_eventGetFirstEmptyInventoryIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics
	{
		struct ACFEquipmentComponent_eventGetInventory_Parms
		{
			TArray<FInventoryItem> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::ACFEquipmentComponent_eventGetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::ACFEquipmentComponent_eventGetInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics
	{
		struct ACFEquipmentComponent_eventGetItemByGuid_Parms
		{
			FGuid itemGuid;
			FInventoryItem outItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_itemGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_itemGuid = { "itemGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetItemByGuid_Parms, itemGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_itemGuid_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_itemGuid_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_outItem = { "outItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetItemByGuid_Parms, outItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	void Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventGetItemByGuid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventGetItemByGuid_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_itemGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_outItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetItemByGuid", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::ACFEquipmentComponent_eventGetItemByGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::ACFEquipmentComponent_eventGetItemByGuid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics
	{
		struct ACFEquipmentComponent_eventGetItemByIndex_Parms
		{
			int32 index;
			FInventoryItem outItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetItemByIndex_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_index_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_index_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_outItem = { "outItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetItemByIndex_Parms, outItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	void Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventGetItemByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventGetItemByIndex_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_outItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetItemByIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::ACFEquipmentComponent_eventGetItemByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::ACFEquipmentComponent_eventGetItemByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics
	{
		struct ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms
		{
			int32 index;
			FInventoryItem outItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_index_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_index_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_outItem = { "outItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms, outItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	void Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_outItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetItemByInventoryIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::ACFEquipmentComponent_eventGetItemByInventoryIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics
	{
		struct ACFEquipmentComponent_eventGetLeftHandIkPos_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetLeftHandIkPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetLeftHandIkPos", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::ACFEquipmentComponent_eventGetLeftHandIkPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::ACFEquipmentComponent_eventGetLeftHandIkPos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics
	{
		struct ACFEquipmentComponent_eventGetMainWeaponSocketLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetMainWeaponSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetMainWeaponSocketLocation", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::ACFEquipmentComponent_eventGetMainWeaponSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::ACFEquipmentComponent_eventGetMainWeaponSocketLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics
	{
		struct ACFEquipmentComponent_eventGetMaxInventorySlots_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetMaxInventorySlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "Comment", "/*------------------------ GETTERS -----------------------------------------*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "------------------------ GETTERS -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetMaxInventorySlots", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::ACFEquipmentComponent_eventGetMaxInventorySlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::ACFEquipmentComponent_eventGetMaxInventorySlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics
	{
		struct ACFEquipmentComponent_eventGetMaxInventoryWeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetMaxInventoryWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetMaxInventoryWeight", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::ACFEquipmentComponent_eventGetMaxInventoryWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::ACFEquipmentComponent_eventGetMaxInventoryWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics
	{
		struct ACFEquipmentComponent_eventGetModularMesh_Parms
		{
			FGameplayTag itemSlot;
			FModularPart outMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetModularMesh_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_outMesh = { "outMesh", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetModularMesh_Parms, outMesh), Z_Construct_UScriptStruct_FModularPart, METADATA_PARAMS(0, nullptr) }; // 3627703985
	void Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventGetModularMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventGetModularMesh_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_itemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_outMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetModularMesh", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::ACFEquipmentComponent_eventGetModularMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::ACFEquipmentComponent_eventGetModularMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics
	{
		struct ACFEquipmentComponent_eventGetModularMeshes_Parms
		{
			TArray<FModularPart> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularPart, METADATA_PARAMS(0, nullptr) }; // 3627703985
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetModularMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3627703985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetModularMeshes", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::ACFEquipmentComponent_eventGetModularMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::ACFEquipmentComponent_eventGetModularMeshes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics
	{
		struct ACFEquipmentComponent_eventGetStartingItems_Parms
		{
			TArray<FStartingItem> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStartingItem, METADATA_PARAMS(0, nullptr) }; // 176283290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetStartingItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 176283290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetStartingItems", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::ACFEquipmentComponent_eventGetStartingItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::ACFEquipmentComponent_eventGetStartingItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics
	{
		struct ACFEquipmentComponent_eventGetTotalCountOfItemsByClass_Parms
		{
			const TSubclassOf<AACFItem>  itemClass;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_itemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetTotalCountOfItemsByClass_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_itemClass_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_itemClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventGetTotalCountOfItemsByClass_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "GetTotalCountOfItemsByClass", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::ACFEquipmentComponent_eventGetTotalCountOfItemsByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::ACFEquipmentComponent_eventGetTotalCountOfItemsByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics
	{
		struct ACFEquipmentComponent_eventHasAnyItemInEquipmentSlot_Parms
		{
			FGameplayTag itemSlor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::NewProp_itemSlor = { "itemSlor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventHasAnyItemInEquipmentSlot_Parms, itemSlor), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventHasAnyItemInEquipmentSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventHasAnyItemInEquipmentSlot_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::NewProp_itemSlor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "Comment", "/*------------------------ CHECKS -----------------------------------------*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "------------------------ CHECKS -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "HasAnyItemInEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::ACFEquipmentComponent_eventHasAnyItemInEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::ACFEquipmentComponent_eventHasAnyItemInEquipmentSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics
	{
		struct ACFEquipmentComponent_eventHasEnoughItemsOfType_Parms
		{
			TArray<FBaseItem> ItemsToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck_Inner = { "ItemsToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck = { "ItemsToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventHasEnoughItemsOfType_Parms, ItemsToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck_MetaData) }; // 2547535924
	void Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventHasEnoughItemsOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventHasEnoughItemsOfType_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ItemsToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "HasEnoughItemsOfType", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::ACFEquipmentComponent_eventHasEnoughItemsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::ACFEquipmentComponent_eventHasEnoughItemsOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics
	{
		struct ACFEquipmentComponent_eventHasOnBodyAnyWeaponOfType_Parms
		{
			TSubclassOf<AACFWeapon>  weaponClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_weaponClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::NewProp_weaponClass = { "weaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventHasOnBodyAnyWeaponOfType_Parms, weaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventHasOnBodyAnyWeaponOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventHasOnBodyAnyWeaponOfType_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::NewProp_weaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "HasOnBodyAnyWeaponOfType", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::ACFEquipmentComponent_eventHasOnBodyAnyWeaponOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::ACFEquipmentComponent_eventHasOnBodyAnyWeaponOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics
	{
		struct ACFEquipmentComponent_eventHaveAtLeastAValidSlot_Parms
		{
			TArray<FGameplayTag> itemSlots;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_itemSlots;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots_Inner = { "itemSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots = { "itemSlots", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventHaveAtLeastAValidSlot_Parms, itemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventHaveAtLeastAValidSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventHaveAtLeastAValidSlot_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_itemSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "HaveAtLeastAValidSlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::ACFEquipmentComponent_eventHaveAtLeastAValidSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::ACFEquipmentComponent_eventHaveAtLeastAValidSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics
	{
		struct ACFEquipmentComponent_eventInitializeInventoryAndEquipment_Parms
		{
			USkeletalMeshComponent* inMainMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inMainMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inMainMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::NewProp_inMainMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::NewProp_inMainMesh = { "inMainMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventInitializeInventoryAndEquipment_Parms, inMainMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::NewProp_inMainMesh_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::NewProp_inMainMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::NewProp_inMainMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Use this only on Server!!!\n     *\n     *Initialize a character's inventory and equipment, receives in input the mesh to be \n     * used for equipment and attachments\n     */" },
		{ "CPP_Default_inMainMesh", "None" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Use this only on Server!!!\n    *\n    *Initialize a character's inventory and equipment, receives in input the mesh to be\n    * used for equipment and attachments" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "InitializeInventoryAndEquipment", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::ACFEquipmentComponent_eventInitializeInventoryAndEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::ACFEquipmentComponent_eventInitializeInventoryAndEquipment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::NewProp_slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventInternal_OnArmorUnequipped_Parms, slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::NewProp_slot_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::NewProp_slot_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "Internal_OnArmorUnequipped", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventInternal_OnArmorUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventInternal_OnArmorUnequipped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics
	{
		struct ACFEquipmentComponent_eventIsInInventory_Parms
		{
			FInventoryItem item;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventIsInInventory_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_item_MetaData) }; // 892597640
	void Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventIsInInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventIsInInventory_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "IsInInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::ACFEquipmentComponent_eventIsInInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::ACFEquipmentComponent_eventIsInInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics
	{
		struct ACFEquipmentComponent_eventIsSlotAvailable_Parms
		{
			FGameplayTag itemSlot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_itemSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventIsSlotAvailable_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_itemSlot_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_itemSlot_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventIsSlotAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventIsSlotAvailable_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_itemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "IsSlotAvailable", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::ACFEquipmentComponent_eventIsSlotAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::ACFEquipmentComponent_eventIsSlotAvailable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics
	{
		struct ACFEquipmentComponent_eventIsSlotEmpty_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventIsSlotEmpty_Parms, index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventIsSlotEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventIsSlotEmpty_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getters" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "IsSlotEmpty", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::ACFEquipmentComponent_eventIsSlotEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::ACFEquipmentComponent_eventIsSlotEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics
	{
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems_Inner = { "inItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems = { "inItems", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventMoveItemsToInventory_Parms, inItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_equipComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_equipComp = { "equipComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventMoveItemsToInventory_Parms, equipComp), Z_Construct_UClass_UACFStorageComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_equipComp_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_equipComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_inItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::NewProp_equipComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*------------------------ STORAGE -----------------------------------------*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "------------------------ STORAGE -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "MoveItemsToInventory", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventMoveItemsToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventMoveItemsToInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics
	{
		struct ACFEquipmentComponent_eventNumberOfItemCanTake_Parms
		{
			const TSubclassOf<AACFItem>  itemToCheck;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemToCheck;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_itemToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_itemToCheck = { "itemToCheck", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventNumberOfItemCanTake_Parms, itemToCheck), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_itemToCheck_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_itemToCheck_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventNumberOfItemCanTake_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_itemToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Checks" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "NumberOfItemCanTake", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::ACFEquipmentComponent_eventNumberOfItemCanTake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::ACFEquipmentComponent_eventNumberOfItemCanTake_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "OnComponentLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "OnEntityOwnerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "OnRep_Equipment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "OnRep_Inventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/* Refresh the appearence of the owner based on current Equipment. USEFULL FOR\n     * LATE JOINING CONSISTENCY!*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Refresh the appearence of the owner based on current Equipment. USEFULL FOR\n    * LATE JOINING CONSISTENCY!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "RefreshEquipment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventRemoveItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_item_MetaData) }; // 892597640
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventRemoveItem_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "Comment", "/*Removes the selected amount of the provided item from the inventory and\n       Unequips it if it is equipped*/" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Removes the selected amount of the provided item from the inventory and\n       Unequips it if it is equipped" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventRemoveItemByIndex_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_index_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_index_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventRemoveItemByIndex_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "RemoveItemByIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventRemoveItemByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventRemoveItemByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics
	{
		struct ACFEquipmentComponent_eventSetDamageActivation_Parms
		{
			bool isActive;
			TArray<FName> traceChannels;
			bool isLeftWeapon;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_traceChannels;
		static void NewProp_isLeftWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isLeftWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventSetDamageActivation_Parms*)Obj)->isActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventSetDamageActivation_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels_Inner = { "traceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels = { "traceChannels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventSetDamageActivation_Parms, traceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels_MetaData) };
	void Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isLeftWeapon_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventSetDamageActivation_Parms*)Obj)->isLeftWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isLeftWeapon = { "isLeftWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventSetDamageActivation_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isLeftWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_traceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::NewProp_isLeftWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "CPP_Default_isLeftWeapon", "false" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "SetDamageActivation", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::ACFEquipmentComponent_eventSetDamageActivation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::ACFEquipmentComponent_eventSetDamageActivation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_newIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventSetInventoryItemSlotIndex_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_item_MetaData) }; // 892597640
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_newIndex = { "newIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventSetInventoryItemSlotIndex_Parms, newIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::NewProp_newIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "SetInventoryItemSlotIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventSetInventoryItemSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventSetInventoryItemSlotIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics
	{
		struct ACFEquipmentComponent_eventSetMainMesh_Parms
		{
			USkeletalMeshComponent* newMesh;
			bool bRefreshEquipment;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMesh;
		static void NewProp_bRefreshEquipment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshEquipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_newMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_newMesh = { "newMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventSetMainMesh_Parms, newMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_newMesh_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_newMesh_MetaData) };
	void Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_bRefreshEquipment_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventSetMainMesh_Parms*)Obj)->bRefreshEquipment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_bRefreshEquipment = { "bRefreshEquipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventSetMainMesh_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_bRefreshEquipment_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_newMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::NewProp_bRefreshEquipment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/*Overrides default character mesh with the provided one*/" },
		{ "CPP_Default_bRefreshEquipment", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Overrides default character mesh with the provided one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "SetMainMesh", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::ACFEquipmentComponent_eventSetMainMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::ACFEquipmentComponent_eventSetMainMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/*Removes the currently weapon in the hand of the character*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Removes the currently weapon in the hand of the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "SheathCurrentWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics
	{
		struct ACFEquipmentComponent_eventShouldUseLeftHandIK_Parms
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
	void Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventShouldUseLeftHandIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventShouldUseLeftHandIK_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "ShouldUseLeftHandIK", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::ACFEquipmentComponent_eventShouldUseLeftHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::ACFEquipmentComponent_eventShouldUseLeftHandIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics
	{
		struct ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms
		{
			TArray<FGameplayTag> itemSlots;
			FGameplayTag outAvailableSlot;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_itemSlots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAvailableSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots_Inner = { "itemSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots = { "itemSlots", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms, itemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_outAvailableSlot = { "outAvailableSlot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms, outAvailableSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms), &Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_itemSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_outAvailableSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "TryFindAvailableItemSlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::ACFEquipmentComponent_eventTryFindAvailableItemSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventUnequipItemBySlot_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::NewProp_itemSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "UnequipItemBySlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventUnequipItemBySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventUnequipItemBySlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventUseConsumableOnActorBySlot_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventUseConsumableOnActorBySlot_Parms, target), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::NewProp_itemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/* Use the item in the specified slot of the Equipment*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Use the item in the specified slot of the Equipment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "UseConsumableOnActorBySlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventUseConsumableOnActorBySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventUseConsumableOnActorBySlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::NewProp_itemSlot = { "itemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventUseEquippedItemBySlot_Parms, itemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::NewProp_itemSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Equipment" },
		{ "Comment", "/* Use the item in the specified slot of the Equipment*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Use the item in the specified slot of the Equipment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "UseEquippedItemBySlot", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventUseEquippedItemBySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventUseEquippedItemBySlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventUseInventoryItem_Parms, item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::NewProp_item_MetaData), Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::NewProp_item_MetaData) }; // 892597640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "Comment", "/*Moves the item at the provided from the Inventory to the Equipment*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Moves the item at the provided from the Inventory to the Equipment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "UseInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventUseInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventUseInventoryItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquipmentComponent_eventUseInventoryItemByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Inventory" },
		{ "Comment", "/*Moves the item at the provided from the Inventory to the Equipment*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Moves the item at the provided from the Inventory to the Equipment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEquipmentComponent, nullptr, "UseInventoryItemByIndex", nullptr, nullptr, Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::PropPointers), sizeof(ACFEquipmentComponent_eventUseInventoryItemByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEquipmentComponent_eventUseInventoryItemByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFEquipmentComponent);
	UClass* Z_Construct_UClass_UACFEquipmentComponent_NoRegister()
	{
		return UACFEquipmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFEquipmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableEquipmentSlot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableEquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableEquipmentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyItemsOnDeath_MetaData[];
#endif
		static void NewProp_bDestroyItemsOnDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyItemsOnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropItemsOnDeath_MetaData[];
#endif
		static void NewProp_bDropItemsOnDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropItemsOnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMainMeshVisibility_MetaData[];
#endif
		static void NewProp_bUpdateMainMeshVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMainMeshVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInventorySlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInventorySlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEquipItem_MetaData[];
#endif
		static void NewProp_bAutoEquipItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEquipItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInventoryWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInventoryWeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingItems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Equipment;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModularMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModularMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModularMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_originalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentlyEquippedSlotType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentlyEquippedSlotType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentInventoryWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentInventoryWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFEquipmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFEquipmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventory, "AddItemToInventory" }, // 1210720943
		{ &Z_Construct_UFunction_UACFEquipmentComponent_AddItemToInventoryByClass, "AddItemToInventoryByClass" }, // 4103961602
		{ &Z_Construct_UFunction_UACFEquipmentComponent_AddSkeletalMeshComponent, "AddSkeletalMeshComponent" }, // 550831544
		{ &Z_Construct_UFunction_UACFEquipmentComponent_CanBeEquipped, "CanBeEquipped" }, // 942030565
		{ &Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToMelee, "CanSwitchToMelee" }, // 820703776
		{ &Z_Construct_UFunction_UACFEquipmentComponent_CanSwitchToRanged, "CanSwitchToRanged" }, // 1144264189
		{ &Z_Construct_UFunction_UACFEquipmentComponent_ConsumeItems, "ConsumeItems" }, // 3645949032
		{ &Z_Construct_UFunction_UACFEquipmentComponent_DestroyEquippedItems, "DestroyEquippedItems" }, // 2927784156
		{ &Z_Construct_UFunction_UACFEquipmentComponent_DropItem, "DropItem" }, // 3309578121
		{ &Z_Construct_UFunction_UACFEquipmentComponent_DropItemByInventoryIndex, "DropItemByInventoryIndex" }, // 2130082844
		{ &Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventory, "EquipItemFromInventory" }, // 2398642755
		{ &Z_Construct_UFunction_UACFEquipmentComponent_EquipItemFromInventoryInSlot, "EquipItemFromInventoryInSlot" }, // 1364237302
		{ &Z_Construct_UFunction_UACFEquipmentComponent_FindFirstItemOfClassInInventory, "FindFirstItemOfClassInInventory" }, // 2701830996
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetAllItemsOfClassInInventory, "GetAllItemsOfClassInInventory" }, // 1902595589
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetAllSellableItemsInInventory, "GetAllSellableItemsInInventory" }, // 2099763396
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetActionTag, "GetCurrentDesiredMovesetActionTag" }, // 3949890570
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredMovesetTag, "GetCurrentDesiredMovesetTag" }, // 2790533269
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentDesiredOverlayTag, "GetCurrentDesiredOverlayTag" }, // 4214752233
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentEquipment, "GetCurrentEquipment" }, // 1728621428
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentInventoryTotalWeight, "GetCurrentInventoryTotalWeight" }, // 473445858
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentMainWeapon, "GetCurrentMainWeapon" }, // 1697527681
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetCurrentOffhandWeapon, "GetCurrentOffhandWeapon" }, // 3108102124
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetEquippedItemSlot, "GetEquippedItemSlot" }, // 145188383
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetFirstEmptyInventoryIndex, "GetFirstEmptyInventoryIndex" }, // 3190734026
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetInventory, "GetInventory" }, // 1988866438
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetItemByGuid, "GetItemByGuid" }, // 1583954809
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetItemByIndex, "GetItemByIndex" }, // 1381938729
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetItemByInventoryIndex, "GetItemByInventoryIndex" }, // 373527411
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetLeftHandIkPos, "GetLeftHandIkPos" }, // 2219082954
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetMainWeaponSocketLocation, "GetMainWeaponSocketLocation" }, // 194675621
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventorySlots, "GetMaxInventorySlots" }, // 1548203498
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetMaxInventoryWeight, "GetMaxInventoryWeight" }, // 3566144556
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetModularMesh, "GetModularMesh" }, // 1143208917
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetModularMeshes, "GetModularMeshes" }, // 3365627430
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetStartingItems, "GetStartingItems" }, // 938947866
		{ &Z_Construct_UFunction_UACFEquipmentComponent_GetTotalCountOfItemsByClass, "GetTotalCountOfItemsByClass" }, // 2089452986
		{ &Z_Construct_UFunction_UACFEquipmentComponent_HasAnyItemInEquipmentSlot, "HasAnyItemInEquipmentSlot" }, // 4241876657
		{ &Z_Construct_UFunction_UACFEquipmentComponent_HasEnoughItemsOfType, "HasEnoughItemsOfType" }, // 3641018883
		{ &Z_Construct_UFunction_UACFEquipmentComponent_HasOnBodyAnyWeaponOfType, "HasOnBodyAnyWeaponOfType" }, // 468476719
		{ &Z_Construct_UFunction_UACFEquipmentComponent_HaveAtLeastAValidSlot, "HaveAtLeastAValidSlot" }, // 2774144055
		{ &Z_Construct_UFunction_UACFEquipmentComponent_InitializeInventoryAndEquipment, "InitializeInventoryAndEquipment" }, // 2490638222
		{ &Z_Construct_UFunction_UACFEquipmentComponent_Internal_OnArmorUnequipped, "Internal_OnArmorUnequipped" }, // 2803541293
		{ &Z_Construct_UFunction_UACFEquipmentComponent_IsInInventory, "IsInInventory" }, // 561100388
		{ &Z_Construct_UFunction_UACFEquipmentComponent_IsSlotAvailable, "IsSlotAvailable" }, // 2817592288
		{ &Z_Construct_UFunction_UACFEquipmentComponent_IsSlotEmpty, "IsSlotEmpty" }, // 267515313
		{ &Z_Construct_UFunction_UACFEquipmentComponent_MoveItemsToInventory, "MoveItemsToInventory" }, // 567558778
		{ &Z_Construct_UFunction_UACFEquipmentComponent_NumberOfItemCanTake, "NumberOfItemCanTake" }, // 3689079292
		{ &Z_Construct_UFunction_UACFEquipmentComponent_OnComponentLoaded, "OnComponentLoaded" }, // 1692464925
		{ &Z_Construct_UFunction_UACFEquipmentComponent_OnEntityOwnerDeath, "OnEntityOwnerDeath" }, // 2460210910
		{ &Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Equipment, "OnRep_Equipment" }, // 705921245
		{ &Z_Construct_UFunction_UACFEquipmentComponent_OnRep_Inventory, "OnRep_Inventory" }, // 4177628036
		{ &Z_Construct_UFunction_UACFEquipmentComponent_RefreshEquipment, "RefreshEquipment" }, // 3202263655
		{ &Z_Construct_UFunction_UACFEquipmentComponent_RemoveItem, "RemoveItem" }, // 2875441173
		{ &Z_Construct_UFunction_UACFEquipmentComponent_RemoveItemByIndex, "RemoveItemByIndex" }, // 3182155049
		{ &Z_Construct_UFunction_UACFEquipmentComponent_SetDamageActivation, "SetDamageActivation" }, // 2649644297
		{ &Z_Construct_UFunction_UACFEquipmentComponent_SetInventoryItemSlotIndex, "SetInventoryItemSlotIndex" }, // 4048276069
		{ &Z_Construct_UFunction_UACFEquipmentComponent_SetMainMesh, "SetMainMesh" }, // 3586998637
		{ &Z_Construct_UFunction_UACFEquipmentComponent_SheathCurrentWeapon, "SheathCurrentWeapon" }, // 2937298770
		{ &Z_Construct_UFunction_UACFEquipmentComponent_ShouldUseLeftHandIK, "ShouldUseLeftHandIK" }, // 2320805952
		{ &Z_Construct_UFunction_UACFEquipmentComponent_TryFindAvailableItemSlot, "TryFindAvailableItemSlot" }, // 254026597
		{ &Z_Construct_UFunction_UACFEquipmentComponent_UnequipItemBySlot, "UnequipItemBySlot" }, // 6775364
		{ &Z_Construct_UFunction_UACFEquipmentComponent_UseConsumableOnActorBySlot, "UseConsumableOnActorBySlot" }, // 2758441870
		{ &Z_Construct_UFunction_UACFEquipmentComponent_UseEquippedItemBySlot, "UseEquippedItemBySlot" }, // 2280673694
		{ &Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItem, "UseInventoryItem" }, // 1516217423
		{ &Z_Construct_UFunction_UACFEquipmentComponent_UseInventoryItemByIndex, "UseInventoryItemByIndex" }, // 1705788691
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFEquipmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnEquipmentChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*------------------------ DELEGATES\n     * -----------------------------------------*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "------------------------ DELEGATES\n     * -----------------------------------------" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnEquipmentChanged = { "OnEquipmentChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, OnEquipmentChanged), Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnEquipmentChanged_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnEquipmentChanged_MetaData) }; // 216998030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnInventoryChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnInventoryChanged = { "OnInventoryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, OnInventoryChanged), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnInventoryChanged_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnInventoryChanged_MetaData) }; // 2237905771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemAdded_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, OnItemAdded), Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemAdded_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemAdded_MetaData) }; // 2624171948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemRemoved_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, OnItemRemoved), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemRemoved_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemRemoved_MetaData) }; // 2900400591
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot_Inner = { "AvailableEquipmentSlot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Slots available to the character*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Slots available to the character" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot = { "AvailableEquipmentSlot", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, AvailableEquipmentSlot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Defines if the Entity should destroy all his equipped items when dying*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Defines if the Entity should destroy all his equipped items when dying" },
	};
#endif
	void Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath_SetBit(void* Obj)
	{
		((UACFEquipmentComponent*)Obj)->bDestroyItemsOnDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath = { "bDestroyItemsOnDeath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFEquipmentComponent), &Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Defines if the Entity should drop all his droppable invnentory Items when it\n     * dies*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Defines if the Entity should drop all his droppable invnentory Items when it\n     * dies" },
	};
#endif
	void Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath_SetBit(void* Obj)
	{
		((UACFEquipmentComponent*)Obj)->bDropItemsOnDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath = { "bDropItemsOnDeath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFEquipmentComponent), &Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Defines if one ofnthe equipped armors can hide / unhide the main mesh of the\n     * owner entity*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Defines if one ofnthe equipped armors can hide / unhide the main mesh of the\n     * owner entity" },
	};
#endif
	void Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility_SetBit(void* Obj)
	{
		((UACFEquipmentComponent*)Obj)->bUpdateMainMeshVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility = { "bUpdateMainMeshVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFEquipmentComponent), &Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MainCharacterMesh_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* the character's mesh pointer*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "the character's mesh pointer" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MainCharacterMesh = { "MainCharacterMesh", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, MainCharacterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MainCharacterMesh_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MainCharacterMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventorySlots_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Maximum number of Slot items in Inventory*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Maximum number of Slot items in Inventory" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventorySlots = { "MaxInventorySlots", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, MaxInventorySlots), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventorySlots_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventorySlots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Define if an item should be automatically Equipped On Body, if it is picked\n     * up from world */" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Define if an item should be automatically Equipped On Body, if it is picked\n     * up from world" },
	};
#endif
	void Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem_SetBit(void* Obj)
	{
		((UACFEquipmentComponent*)Obj)->bAutoEquipItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem = { "bAutoEquipItem", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFEquipmentComponent), &Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventoryWeight_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Max cumulative weight on*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Max cumulative weight on" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventoryWeight = { "MaxInventoryWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, MaxInventoryWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventoryWeight_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventoryWeight_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems_Inner = { "StartingItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStartingItem, METADATA_PARAMS(0, nullptr) }; // 176283290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* The character's starting items*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "TitleProperty", "ItemClass" },
		{ "ToolTip", "The character's starting items" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems = { "StartingItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, StartingItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems_MetaData) }; // 176283290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory_MetaData[] = {
		{ "Comment", "/*Inventory of this character*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "Inventory of this character" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory = { "Inventory", "OnRep_Inventory", (EPropertyFlags)0x0040000101000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory_MetaData) }; // 892597640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Equipment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Equipment = { "Equipment", "OnRep_Equipment", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, Equipment), Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Equipment_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Equipment_MetaData) }; // 1335708750
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes_Inner = { "ModularMeshes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularPart, METADATA_PARAMS(0, nullptr) }; // 3627703985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes = { "ModularMeshes", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, ModularMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes_MetaData) }; // 3627703985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CharacterOwner_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CharacterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_originalMesh_MetaData[] = {
		{ "Comment", "/** The skeletal mesh used by the Owner. */" },
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
		{ "ToolTip", "The skeletal mesh used by the Owner." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_originalMesh = { "originalMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, originalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_originalMesh_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_originalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CurrentlyEquippedSlotType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CurrentlyEquippedSlotType = { "CurrentlyEquippedSlotType", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, CurrentlyEquippedSlotType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CurrentlyEquippedSlotType_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CurrentlyEquippedSlotType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_currentInventoryWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_currentInventoryWeight = { "currentInventoryWeight", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEquipmentComponent, currentInventoryWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_currentInventoryWeight_MetaData), Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_currentInventoryWeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFEquipmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnEquipmentChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnInventoryChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_OnItemRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_AvailableEquipmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDestroyItemsOnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bDropItemsOnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bUpdateMainMeshVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MainCharacterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventorySlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_bAutoEquipItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_MaxInventoryWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_StartingItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_Equipment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_ModularMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_originalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_CurrentlyEquippedSlotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEquipmentComponent_Statics::NewProp_currentInventoryWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFEquipmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFEquipmentComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFEquipmentComponent_Statics::ClassParams = {
		&UACFEquipmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFEquipmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFEquipmentComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEquipmentComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFEquipmentComponent()
	{
		if (!Z_Registration_Info_UClass_UACFEquipmentComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFEquipmentComponent.OuterSingleton, Z_Construct_UClass_UACFEquipmentComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFEquipmentComponent.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFEquipmentComponent>()
	{
		return UACFEquipmentComponent::StaticClass();
	}

	void UACFEquipmentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Inventory(TEXT("Inventory"));
		static const FName Name_Equipment(TEXT("Equipment"));
		static const FName Name_CurrentlyEquippedSlotType(TEXT("CurrentlyEquippedSlotType"));
		static const FName Name_currentInventoryWeight(TEXT("currentInventoryWeight"));

		const bool bIsValid = true
			&& Name_Inventory == ClassReps[(int32)ENetFields_Private::Inventory].Property->GetFName()
			&& Name_Equipment == ClassReps[(int32)ENetFields_Private::Equipment].Property->GetFName()
			&& Name_CurrentlyEquippedSlotType == ClassReps[(int32)ENetFields_Private::CurrentlyEquippedSlotType].Property->GetFName()
			&& Name_currentInventoryWeight == ClassReps[(int32)ENetFields_Private::currentInventoryWeight].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFEquipmentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFEquipmentComponent);
	UACFEquipmentComponent::~UACFEquipmentComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics::ScriptStructInfo[] = {
		{ FStartingItem::StaticStruct, Z_Construct_UScriptStruct_FStartingItem_Statics::NewStructOps, TEXT("StartingItem"), &Z_Registration_Info_UScriptStruct_StartingItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStartingItem), 176283290U) },
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 892597640U) },
		{ FEquippedItem::StaticStruct, Z_Construct_UScriptStruct_FEquippedItem_Statics::NewStructOps, TEXT("EquippedItem"), &Z_Registration_Info_UScriptStruct_EquippedItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquippedItem), 82444359U) },
		{ FEquipment::StaticStruct, Z_Construct_UScriptStruct_FEquipment_Statics::NewStructOps, TEXT("Equipment"), &Z_Registration_Info_UScriptStruct_Equipment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipment), 1335708750U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFEquipmentComponent, UACFEquipmentComponent::StaticClass, TEXT("UACFEquipmentComponent"), &Z_Registration_Info_UClass_UACFEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFEquipmentComponent), 961381897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_3429375588(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

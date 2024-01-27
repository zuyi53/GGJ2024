// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFItem.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemType();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

static_assert(std::is_polymorphic<FBaseItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBaseItem cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseItem;
class UScriptStruct* FBaseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseItem, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("BaseItem"));
	}
	return Z_Registration_Info_UScriptStruct_BaseItem.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FBaseItem>()
{
	return FBaseItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseItem, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_ItemClass_MetaData), Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_ItemClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseItem, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_Count_MetaData), Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_ItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseItem_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BaseItem",
		Z_Construct_UScriptStruct_FBaseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItem_Statics::PropPointers),
		sizeof(FBaseItem),
		alignof(FBaseItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseItem()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseItem.InnerSingleton, Z_Construct_UScriptStruct_FBaseItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemDescriptor>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemDescriptor cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDescriptor;
class UScriptStruct* FItemDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDescriptor, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDescriptor.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemDescriptor>()
{
	return FItemDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbNail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbNail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInventoryStack_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxInventoryStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDroppable_MetaData[];
#endif
		static void NewProp_bDroppable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDroppable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpgradable_MetaData[];
#endif
		static void NewProp_bUpgradable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpgradable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCurrencyCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpgradeCurrencyCost;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredItemsToUpgrade_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredItemsToUpgrade_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredItemsToUpgrade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextLevelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NextLevelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSellable_MetaData[];
#endif
		static void NewProp_bSellable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSellable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrencyValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameSpecificData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSpecificData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ThumbNail_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Icon to be displayed in UI*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Icon to be displayed in UI" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ThumbNail = { "ThumbNail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, ThumbNail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ThumbNail_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ThumbNail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Name of the item*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Name of the item" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Long description of the item*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Long description of the item" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Type of item*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Type of item" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, ItemType), Z_Construct_UEnum_InventorySystem_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType_MetaData) }; // 2567701869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_MaxInventoryStack_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Decide the amount of stackable units when this item is in inventory*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Decide the amount of stackable units when this item is in inventory" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_MaxInventoryStack = { "MaxInventoryStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, MaxInventoryStack), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_MaxInventoryStack_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_MaxInventoryStack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemWeight_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Weight of this item in the inventory*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Weight of this item in the inventory" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemWeight_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_WorldMesh_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*mesh to be used when spawned in world as world mesh, not mandatory*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "mesh to be used when spawned in world as world mesh, not mandatory" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_WorldMesh_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_WorldMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* If the item is droppable in the world*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "If the item is droppable in the world" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable_SetBit(void* Obj)
	{
		((FItemDescriptor*)Obj)->bDroppable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable = { "bDroppable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemDescriptor), &Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* If this item can be upgraded*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "If this item can be upgraded" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable_SetBit(void* Obj)
	{
		((FItemDescriptor*)Obj)->bUpgradable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable = { "bUpgradable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemDescriptor), &Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_UpgradeCurrencyCost_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If upgrading this item has a cost in currency*/" },
		{ "EditCondition", "bUpgradable == true" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "If upgrading this item has a cost in currency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_UpgradeCurrencyCost = { "UpgradeCurrencyCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, UpgradeCurrencyCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_UpgradeCurrencyCost_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_UpgradeCurrencyCost_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade_Inner = { "RequiredItemsToUpgrade", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseItem, METADATA_PARAMS(0, nullptr) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* The items required to upgrade this item*/" },
		{ "EditCondition", "bUpgradable == true" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "The items required to upgrade this item" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade = { "RequiredItemsToUpgrade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, RequiredItemsToUpgrade), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade_MetaData) }; // 2547535924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_NextLevelClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Next level of this item*/" },
		{ "EditCondition", "bUpgradable == true" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Next level of this item" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_NextLevelClass = { "NextLevelClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, NextLevelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_NextLevelClass_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_NextLevelClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* If this item can be sold to or from a Vendor*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "If this item can be sold to or from a Vendor" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable_SetBit(void* Obj)
	{
		((FItemDescriptor*)Obj)->bSellable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable = { "bSellable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemDescriptor), &Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_CurrencyValue_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*base price for selling / buying this item*/" },
		{ "EditCondition", "bSellable == true" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "base price for selling / buying this item" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_CurrencyValue = { "CurrencyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, CurrencyValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_CurrencyValue_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_CurrencyValue_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots_Inner = { "ItemSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Slots in which this item can be equipped*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Slots in which this item can be equipped" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots = { "ItemSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, ItemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_GameSpecificData_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Usable to add game specific data to any item*/" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
		{ "ToolTip", "Usable to add game specific data to any item" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_GameSpecificData = { "GameSpecificData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDescriptor, GameSpecificData), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_GameSpecificData_MetaData), Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_GameSpecificData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ThumbNail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_MaxInventoryStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_WorldMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bDroppable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bUpgradable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_UpgradeCurrencyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_RequiredItemsToUpgrade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_NextLevelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_bSellable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_CurrencyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_ItemSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewProp_GameSpecificData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemDescriptor",
		Z_Construct_UScriptStruct_FItemDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::PropPointers),
		sizeof(FItemDescriptor),
		alignof(FItemDescriptor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemDescriptor_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDescriptor_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FItemDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemDescriptor.InnerSingleton;
	}
	DEFINE_FUNCTION(AACFItem::execOnRep_ItemOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ItemOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execSetItemDescriptor)
	{
		P_GET_STRUCT_REF(FItemDescriptor,Z_Param_Out_itemDesc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemDescriptor(Z_Param_Out_itemDesc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetPossibleItemSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetPossibleItemSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetItemInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemDescriptor*)Z_Param__Result=P_THIS->GetItemInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetItemOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetItemOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetItemType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EItemType*)Z_Param__Result=P_THIS->GetItemType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetItemDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetItemDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetItemName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetItemName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFItem::execGetThumbnailImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnailImage();
		P_NATIVE_END;
	}
	void AACFItem::StaticRegisterNativesAACFItem()
	{
		UClass* Class = AACFItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemDescription", &AACFItem::execGetItemDescription },
			{ "GetItemInfo", &AACFItem::execGetItemInfo },
			{ "GetItemName", &AACFItem::execGetItemName },
			{ "GetItemOwner", &AACFItem::execGetItemOwner },
			{ "GetItemType", &AACFItem::execGetItemType },
			{ "GetPossibleItemSlots", &AACFItem::execGetPossibleItemSlots },
			{ "GetThumbnailImage", &AACFItem::execGetThumbnailImage },
			{ "OnRep_ItemOwner", &AACFItem::execOnRep_ItemOwner },
			{ "SetItemDescriptor", &AACFItem::execSetItemDescriptor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFItem_GetItemDescription_Statics
	{
		struct ACFItem_eventGetItemDescription_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetItemDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetItemDescription", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::ACFItem_eventGetItemDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::ACFItem_eventGetItemDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetItemDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetItemDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_GetItemInfo_Statics
	{
		struct ACFItem_eventGetItemInfo_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetItemInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(0, nullptr) }; // 3234246871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetItemInfo", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::ACFItem_eventGetItemInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::ACFItem_eventGetItemInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_GetItemName_Statics
	{
		struct ACFItem_eventGetItemName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFItem_GetItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetItemName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetItemName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetItemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetItemName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetItemName", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetItemName_Statics::ACFItem_eventGetItemName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetItemName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetItemName_Statics::ACFItem_eventGetItemName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_GetItemOwner_Statics
	{
		struct ACFItem_eventGetItemOwner_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetItemOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetItemOwner", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::ACFItem_eventGetItemOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::ACFItem_eventGetItemOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetItemOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetItemOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_GetItemType_Statics
	{
		struct ACFItem_eventGetItemType_Parms
		{
			EItemType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFItem_GetItemType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFItem_GetItemType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetItemType_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_EItemType, METADATA_PARAMS(0, nullptr) }; // 2567701869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetItemType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetItemType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetItemType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetItemType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetItemType", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetItemType_Statics::ACFItem_eventGetItemType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetItemType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetItemType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetItemType_Statics::ACFItem_eventGetItemType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics
	{
		struct ACFItem_eventGetPossibleItemSlots_Parms
		{
			TArray<FGameplayTag> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetPossibleItemSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetPossibleItemSlots", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::ACFItem_eventGetPossibleItemSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::ACFItem_eventGetPossibleItemSlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetPossibleItemSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetPossibleItemSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics
	{
		struct ACFItem_eventGetThumbnailImage_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventGetThumbnailImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "GetThumbnailImage", nullptr, nullptr, Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::ACFItem_eventGetThumbnailImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::ACFItem_eventGetThumbnailImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_GetThumbnailImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_GetThumbnailImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_OnRep_ItemOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_OnRep_ItemOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_OnRep_ItemOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "OnRep_ItemOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_OnRep_ItemOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_OnRep_ItemOwner_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFItem_OnRep_ItemOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_OnRep_ItemOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics
	{
		struct ACFItem_eventSetItemDescriptor_Parms
		{
			FItemDescriptor itemDesc;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemDesc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::NewProp_itemDesc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::NewProp_itemDesc = { "itemDesc", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFItem_eventSetItemDescriptor_Parms, itemDesc), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::NewProp_itemDesc_MetaData), Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::NewProp_itemDesc_MetaData) }; // 3234246871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::NewProp_itemDesc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFItem, nullptr, "SetItemDescriptor", nullptr, nullptr, Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::ACFItem_eventSetItemDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::ACFItem_eventSetItemDescriptor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFItem_SetItemDescriptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFItem_SetItemDescriptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFItem);
	UClass* Z_Construct_UClass_AACFItem_NoRegister()
	{
		return AACFItem::StaticClass();
	}
	struct Z_Construct_UClass_AACFItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFItem_GetItemDescription, "GetItemDescription" }, // 675852989
		{ &Z_Construct_UFunction_AACFItem_GetItemInfo, "GetItemInfo" }, // 3479484529
		{ &Z_Construct_UFunction_AACFItem_GetItemName, "GetItemName" }, // 262976321
		{ &Z_Construct_UFunction_AACFItem_GetItemOwner, "GetItemOwner" }, // 2311244116
		{ &Z_Construct_UFunction_AACFItem_GetItemType, "GetItemType" }, // 301469519
		{ &Z_Construct_UFunction_AACFItem_GetPossibleItemSlots, "GetPossibleItemSlots" }, // 3482555937
		{ &Z_Construct_UFunction_AACFItem_GetThumbnailImage, "GetThumbnailImage" }, // 1099092532
		{ &Z_Construct_UFunction_AACFItem_OnRep_ItemOwner, "OnRep_ItemOwner" }, // 453238741
		{ &Z_Construct_UFunction_AACFItem_SetItemDescriptor, "SetItemDescriptor" }, // 3294986387
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ACFItem.h" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFItem_Statics::NewProp_ItemOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFItem_Statics::NewProp_ItemOwner = { "ItemOwner", "OnRep_ItemOwner", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFItem, ItemOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::NewProp_ItemOwner_MetaData), Z_Construct_UClass_AACFItem_Statics::NewProp_ItemOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFItem_Statics::NewProp_ItemInfo_MetaData[] = {
		{ "Category", "ACF | Item" },
		{ "ModuleRelativePath", "Public/Items/ACFItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFItem_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFItem, ItemInfo), Z_Construct_UScriptStruct_FItemDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::NewProp_ItemInfo_MetaData), Z_Construct_UClass_AACFItem_Statics::NewProp_ItemInfo_MetaData) }; // 3234246871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFItem_Statics::NewProp_ItemOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFItem_Statics::NewProp_ItemInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFItem_Statics::ClassParams = {
		&AACFItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFItem()
	{
		if (!Z_Registration_Info_UClass_AACFItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFItem.OuterSingleton, Z_Construct_UClass_AACFItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFItem.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFItem>()
	{
		return AACFItem::StaticClass();
	}

	void AACFItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ItemOwner(TEXT("ItemOwner"));

		const bool bIsValid = true
			&& Name_ItemOwner == ClassReps[(int32)ENetFields_Private::ItemOwner].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AACFItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFItem);
	AACFItem::~AACFItem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics::ScriptStructInfo[] = {
		{ FBaseItem::StaticStruct, Z_Construct_UScriptStruct_FBaseItem_Statics::NewStructOps, TEXT("BaseItem"), &Z_Registration_Info_UScriptStruct_BaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseItem), 2547535924U) },
		{ FItemDescriptor::StaticStruct, Z_Construct_UScriptStruct_FItemDescriptor_Statics::NewStructOps, TEXT("ItemDescriptor"), &Z_Registration_Info_UScriptStruct_ItemDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDescriptor), 3234246871U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFItem, AACFItem::StaticClass, TEXT("AACFItem"), &Z_Registration_Info_UClass_AACFItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFItem), 3084334941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_3901377334(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

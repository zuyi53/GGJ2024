// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFEquipmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFArmor;
class AACFItem;
class AACFWeapon;
class ACharacter;
class UACFStorageComponent;
class USkeletalMeshComponent;
struct FBaseItem;
struct FEquipment;
struct FEquippedItem;
struct FGameplayTag;
struct FGuid;
struct FInventoryItem;
struct FModularPart;
struct FStartingItem;
#ifdef INVENTORYSYSTEM_ACFEquipmentComponent_generated_h
#error "ACFEquipmentComponent.generated.h already included, missing '#pragma once' in ACFEquipmentComponent.h"
#endif
#define INVENTORYSYSTEM_ACFEquipmentComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStartingItem_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseItem Super;


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FStartingItem>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FInventoryItem>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquippedItem_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FEquippedItem>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipment_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FEquipment>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_194_DELEGATE \
INVENTORYSYSTEM_API void FOnEquipmentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentChanged, FEquipment const& Equipment);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_195_DELEGATE \
INVENTORYSYSTEM_API void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged, TArray<FInventoryItem> const& Inventory);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_196_DELEGATE \
INVENTORYSYSTEM_API void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FBaseItem const& item);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_197_DELEGATE \
INVENTORYSYSTEM_API void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, FBaseItem const& item);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Internal_OnArmorUnequipped_Implementation(FGameplayTag const& slot); \
	virtual void AddSkeletalMeshComponent_Implementation(TSubclassOf<AACFArmor>  ArmorClass, FGameplayTag itemSlot); \
	virtual void OnComponentLoaded_Implementation(); \
	virtual void DestroyEquippedItems_Implementation(); \
	virtual void SheathCurrentWeapon_Implementation(); \
	virtual void UnequipItemBySlot_Implementation(FGameplayTag itemSlot); \
	virtual void UseConsumableOnActorBySlot_Implementation(FGameplayTag itemSlot, ACharacter* target); \
	virtual void UseEquippedItemBySlot_Implementation(FGameplayTag itemSlot); \
	virtual void EquipItemFromInventoryInSlot_Implementation(FInventoryItem const& inItem, FGameplayTag slot); \
	virtual void EquipItemFromInventory_Implementation(FInventoryItem const& inItem); \
	virtual void MoveItemsToInventory_Implementation(TArray<FBaseItem> const& inItems, UACFStorageComponent* equipComp); \
	virtual void SetInventoryItemSlotIndex_Implementation(FInventoryItem const& item, int32 newIndex); \
	virtual void ConsumeItems_Implementation(TArray<FBaseItem> const& ItemsToCheck); \
	virtual void DropItemByInventoryIndex_Implementation(int32 itemIndex, int32 count); \
	virtual void DropItem_Implementation(FInventoryItem const& item, int32 count); \
	virtual void RemoveItemByIndex_Implementation(const int32 index, int32 count); \
	virtual void RemoveItem_Implementation(FInventoryItem const& item, int32 count); \
	virtual void UseInventoryItem_Implementation(FInventoryItem const& item); \
	virtual void UseInventoryItemByIndex_Implementation(int32 index); \
	virtual void AddItemToInventory_Implementation(FBaseItem const& ItemToAdd); \
	virtual void AddItemToInventoryByClass_Implementation(TSubclassOf<AACFItem>  inItem, int32 count); \
	virtual void OnEntityOwnerDeath_Implementation(); \
 \
	DECLARE_FUNCTION(execInternal_OnArmorUnequipped); \
	DECLARE_FUNCTION(execAddSkeletalMeshComponent); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_Equipment); \
	DECLARE_FUNCTION(execOnComponentLoaded); \
	DECLARE_FUNCTION(execGetCurrentDesiredOverlayTag); \
	DECLARE_FUNCTION(execGetCurrentDesiredMovesetActionTag); \
	DECLARE_FUNCTION(execGetCurrentDesiredMovesetTag); \
	DECLARE_FUNCTION(execHasEnoughItemsOfType); \
	DECLARE_FUNCTION(execHasOnBodyAnyWeaponOfType); \
	DECLARE_FUNCTION(execCanBeEquipped); \
	DECLARE_FUNCTION(execCanSwitchToMelee); \
	DECLARE_FUNCTION(execCanSwitchToRanged); \
	DECLARE_FUNCTION(execNumberOfItemCanTake); \
	DECLARE_FUNCTION(execHasAnyItemInEquipmentSlot); \
	DECLARE_FUNCTION(execGetStartingItems); \
	DECLARE_FUNCTION(execGetModularMesh); \
	DECLARE_FUNCTION(execGetEquippedItemSlot); \
	DECLARE_FUNCTION(execGetModularMeshes); \
	DECLARE_FUNCTION(execGetCurrentInventoryTotalWeight); \
	DECLARE_FUNCTION(execFindFirstItemOfClassInInventory); \
	DECLARE_FUNCTION(execGetAllSellableItemsInInventory); \
	DECLARE_FUNCTION(execGetAllItemsOfClassInInventory); \
	DECLARE_FUNCTION(execGetTotalCountOfItemsByClass); \
	DECLARE_FUNCTION(execIsSlotEmpty); \
	DECLARE_FUNCTION(execGetItemByInventoryIndex); \
	DECLARE_FUNCTION(execGetFirstEmptyInventoryIndex); \
	DECLARE_FUNCTION(execGetItemByIndex); \
	DECLARE_FUNCTION(execGetItemByGuid); \
	DECLARE_FUNCTION(execIsInInventory); \
	DECLARE_FUNCTION(execGetMainWeaponSocketLocation); \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execGetCurrentEquipment); \
	DECLARE_FUNCTION(execGetCurrentOffhandWeapon); \
	DECLARE_FUNCTION(execGetCurrentMainWeapon); \
	DECLARE_FUNCTION(execGetMaxInventoryWeight); \
	DECLARE_FUNCTION(execGetMaxInventorySlots); \
	DECLARE_FUNCTION(execHaveAtLeastAValidSlot); \
	DECLARE_FUNCTION(execTryFindAvailableItemSlot); \
	DECLARE_FUNCTION(execIsSlotAvailable); \
	DECLARE_FUNCTION(execGetLeftHandIkPos); \
	DECLARE_FUNCTION(execShouldUseLeftHandIK); \
	DECLARE_FUNCTION(execRefreshEquipment); \
	DECLARE_FUNCTION(execDestroyEquippedItems); \
	DECLARE_FUNCTION(execSetMainMesh); \
	DECLARE_FUNCTION(execSetDamageActivation); \
	DECLARE_FUNCTION(execSheathCurrentWeapon); \
	DECLARE_FUNCTION(execUnequipItemBySlot); \
	DECLARE_FUNCTION(execUseConsumableOnActorBySlot); \
	DECLARE_FUNCTION(execUseEquippedItemBySlot); \
	DECLARE_FUNCTION(execEquipItemFromInventoryInSlot); \
	DECLARE_FUNCTION(execEquipItemFromInventory); \
	DECLARE_FUNCTION(execMoveItemsToInventory); \
	DECLARE_FUNCTION(execSetInventoryItemSlotIndex); \
	DECLARE_FUNCTION(execConsumeItems); \
	DECLARE_FUNCTION(execDropItemByInventoryIndex); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execRemoveItemByIndex); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execUseInventoryItem); \
	DECLARE_FUNCTION(execUseInventoryItemByIndex); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execAddItemToInventoryByClass); \
	DECLARE_FUNCTION(execOnEntityOwnerDeath); \
	DECLARE_FUNCTION(execInitializeInventoryAndEquipment);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFEquipmentComponent(); \
	friend struct Z_Construct_UClass_UACFEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UACFEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UACFEquipmentComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		Equipment, \
		CurrentlyEquippedSlotType, \
		currentInventoryWeight, \
		NETFIELD_REP_END=currentInventoryWeight	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFEquipmentComponent(UACFEquipmentComponent&&); \
	NO_API UACFEquipmentComponent(const UACFEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFEquipmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFEquipmentComponent) \
	NO_API virtual ~UACFEquipmentComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_199_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h_201_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UACFEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFEquipmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySystem_init() {}
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InventorySystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InventorySystem()
	{
		if (!Z_Registration_Info_UPackage__Script_InventorySystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnCurrencyValueChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnInventoryChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnItemsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InventorySystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFECB2A29,
				0x752023CA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InventorySystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InventorySystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InventorySystem(Z_Construct_UPackage__Script_InventorySystem, TEXT("/Script/InventorySystem"), Z_Registration_Info_UPackage__Script_InventorySystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFECB2A29, 0x752023CA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

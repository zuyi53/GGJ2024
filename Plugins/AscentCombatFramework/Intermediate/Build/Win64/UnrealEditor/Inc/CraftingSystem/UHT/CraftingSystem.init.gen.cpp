// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftingSystem_init() {}
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature();
	CRAFTINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CraftingSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CraftingSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CraftingSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CraftingSystem_OnItemCrafted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CraftingSystem_OnItemPurchased__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CraftingSystem_OnItemSold__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CraftingSystem_OnItemUpgraded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CraftingSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3E0BBCC2,
				0x3569DF0B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CraftingSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CraftingSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CraftingSystem(Z_Construct_UPackage__Script_CraftingSystem, TEXT("/Script/CraftingSystem"), Z_Registration_Info_UPackage__Script_CraftingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3E0BBCC2, 0x3569DF0B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

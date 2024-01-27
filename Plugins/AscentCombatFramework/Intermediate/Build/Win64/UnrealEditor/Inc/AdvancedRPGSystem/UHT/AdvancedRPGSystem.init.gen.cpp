// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedRPGSystem_init() {}
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature();
	ADVANCEDRPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AdvancedRPGSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_AdvancedRPGSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnAttributeSetModified__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCharacterLevelUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnCurrentExpValueChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticReachesZero__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatisticValueChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedRPGSystem_OnStatValueChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedRPGSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x49874E7F,
				0x7E59A65F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AdvancedRPGSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AdvancedRPGSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AdvancedRPGSystem(Z_Construct_UPackage__Script_AdvancedRPGSystem, TEXT("/Script/AdvancedRPGSystem"), Z_Registration_Info_UPackage__Script_AdvancedRPGSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x49874E7F, 0x7E59A65F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

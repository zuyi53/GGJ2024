// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitsSystem_init() {}
	UNITSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature();
	UNITSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnitsSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnitsSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_UnitsSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnitsSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x772CC37D,
				0xB7486D29,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnitsSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnitsSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnitsSystem(Z_Construct_UPackage__Script_UnitsSystem, TEXT("/Script/UnitsSystem"), Z_Registration_Info_UPackage__Script_UnitsSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x772CC37D, 0xB7486D29));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

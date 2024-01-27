// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscentSaveSystem_init() {}
	ASCENTSAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_AscentSaveSystem_OnLoadFinished__DelegateSignature();
	ASCENTSAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AscentSaveSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AscentSaveSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_AscentSaveSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AscentSaveSystem_OnLoadFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AscentSaveSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x349DE226,
				0x04527716,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AscentSaveSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AscentSaveSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AscentSaveSystem(Z_Construct_UPackage__Script_AscentSaveSystem, TEXT("/Script/AscentSaveSystem"), Z_Registration_Info_UPackage__Script_AscentSaveSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x349DE226, 0x04527716));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

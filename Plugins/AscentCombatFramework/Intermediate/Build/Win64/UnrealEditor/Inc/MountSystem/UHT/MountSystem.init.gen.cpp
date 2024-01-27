// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMountSystem_init() {}
	MOUNTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature();
	MOUNTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MountSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MountSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_MountSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MountSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBBA7B92A,
				0x83510230,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MountSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MountSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MountSystem(Z_Construct_UPackage__Script_MountSystem, TEXT("/Script/MountSystem"), Z_Registration_Info_UPackage__Script_MountSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBBA7B92A, 0x83510230));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

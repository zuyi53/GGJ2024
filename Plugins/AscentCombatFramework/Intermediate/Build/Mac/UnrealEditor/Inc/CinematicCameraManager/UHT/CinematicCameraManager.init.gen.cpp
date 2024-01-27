// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinematicCameraManager_init() {}
	CINEMATICCAMERAMANAGER_API UFunction* Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature();
	CINEMATICCAMERAMANAGER_API UFunction* Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CinematicCameraManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CinematicCameraManager()
	{
		if (!Z_Registration_Info_UPackage__Script_CinematicCameraManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CinematicCameraManager_OnCameraSequenceStarted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CinematicCameraManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEAF3741B,
				0xD5A5247C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CinematicCameraManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CinematicCameraManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CinematicCameraManager(Z_Construct_UPackage__Script_CinematicCameraManager, TEXT("/Script/CinematicCameraManager"), Z_Registration_Info_UPackage__Script_CinematicCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEAF3741B, 0xD5A5247C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

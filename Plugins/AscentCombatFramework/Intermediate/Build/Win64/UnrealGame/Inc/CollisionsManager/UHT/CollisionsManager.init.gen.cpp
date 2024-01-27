// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionsManager_init() {}
	COLLISIONSMANAGER_API UFunction* Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature();
	COLLISIONSMANAGER_API UFunction* Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CollisionsManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CollisionsManager()
	{
		if (!Z_Registration_Info_UPackage__Script_CollisionsManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CollisionsManager_OnActorDamaged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CollisionsManager_OnCollisionDetected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CollisionsManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7AA6FD5F,
				0x76075C91,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CollisionsManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CollisionsManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CollisionsManager(Z_Construct_UPackage__Script_CollisionsManager, TEXT("/Script/CollisionsManager"), Z_Registration_Info_UPackage__Script_CollisionsManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7AA6FD5F, 0x76075C91));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

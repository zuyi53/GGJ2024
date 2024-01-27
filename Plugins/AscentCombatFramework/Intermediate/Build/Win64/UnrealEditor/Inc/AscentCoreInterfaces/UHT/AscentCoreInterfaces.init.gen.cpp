// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscentCoreInterfaces_init() {}
	ASCENTCOREINTERFACES_API UFunction* Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AscentCoreInterfaces;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AscentCoreInterfaces()
	{
		if (!Z_Registration_Info_UPackage__Script_AscentCoreInterfaces.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AscentCoreInterfaces",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x594B56C5,
				0x384AB985,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AscentCoreInterfaces.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AscentCoreInterfaces.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AscentCoreInterfaces(Z_Construct_UPackage__Script_AscentCoreInterfaces, TEXT("/Script/AscentCoreInterfaces"), Z_Registration_Info_UPackage__Script_AscentCoreInterfaces, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x594B56C5, 0x384AB985));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombinedAnimationsSystem_init() {}
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CombinedAnimationsSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CombinedAnimationsSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CombinedAnimationsSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CombinedAnimationsSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x80B98583,
				0xE5DBD8D9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CombinedAnimationsSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CombinedAnimationsSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CombinedAnimationsSystem(Z_Construct_UPackage__Script_CombinedAnimationsSystem, TEXT("/Script/CombinedAnimationsSystem"), Z_Registration_Info_UPackage__Script_CombinedAnimationsSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x80B98583, 0xE5DBD8D9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

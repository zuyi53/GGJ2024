// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIFramework_init() {}
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AIFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AIFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_AIFramework.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAgentDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAgentsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAgentsSpawned__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAllAgentDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnAllWavesEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnWaveEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnWaveProgressed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIFramework_OnWaveStarted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AIFramework",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5D9E9772,
				0xFE41467A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AIFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AIFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AIFramework(Z_Construct_UPackage__Script_AIFramework, TEXT("/Script/AIFramework"), Z_Registration_Info_UPackage__Script_AIFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5D9E9772, 0xFE41467A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

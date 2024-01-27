// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFThreatManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFThreatManagerComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFThreatManagerComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFThreatManagerComponent_NoRegister();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnNewMaxThreateningActor_Parms
		{
			AActor* threatening;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnNewMaxThreateningActor_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::NewProp_threatening,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnNewMaxThreateningActor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::_Script_AIFramework_eventOnNewMaxThreateningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::_Script_AIFramework_eventOnNewMaxThreateningActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNewMaxThreateningActor_DelegateWrapper(const FMulticastScriptDelegate& OnNewMaxThreateningActor, AActor* threatening)
{
	struct _Script_AIFramework_eventOnNewMaxThreateningActor_Parms
	{
		AActor* threatening;
	};
	_Script_AIFramework_eventOnNewMaxThreateningActor_Parms Parms;
	Parms.threatening=threatening;
	OnNewMaxThreateningActor.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execRemoveThreatening)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveThreatening(Z_Param_threatening);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execGetDefaultThreatForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultThreatForActor(Z_Param_threatening);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execGetThreatMultForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThreatMultForActor(Z_Param_threatening);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execIsThreatening)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsThreatening(Z_Param_threatening);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execIsActorAPotentialThreat)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorAPotentialThreat(Z_Param_threatening);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execGetActorWithHigherThreat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorWithHigherThreat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execRemoveThreat)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_GET_PROPERTY(FFloatProperty,Z_Param_threat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveThreat(Z_Param_threatening,Z_Param_threat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFThreatManagerComponent::execAddThreat)
	{
		P_GET_OBJECT(AActor,Z_Param_threatening);
		P_GET_PROPERTY(FFloatProperty,Z_Param_threat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddThreat(Z_Param_threatening,Z_Param_threat);
		P_NATIVE_END;
	}
	void UACFThreatManagerComponent::StaticRegisterNativesUACFThreatManagerComponent()
	{
		UClass* Class = UACFThreatManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddThreat", &UACFThreatManagerComponent::execAddThreat },
			{ "GetActorWithHigherThreat", &UACFThreatManagerComponent::execGetActorWithHigherThreat },
			{ "GetDefaultThreatForActor", &UACFThreatManagerComponent::execGetDefaultThreatForActor },
			{ "GetThreatMultForActor", &UACFThreatManagerComponent::execGetThreatMultForActor },
			{ "IsActorAPotentialThreat", &UACFThreatManagerComponent::execIsActorAPotentialThreat },
			{ "IsThreatening", &UACFThreatManagerComponent::execIsThreatening },
			{ "RemoveThreat", &UACFThreatManagerComponent::execRemoveThreat },
			{ "RemoveThreatening", &UACFThreatManagerComponent::execRemoveThreatening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics
	{
		struct ACFThreatManagerComponent_eventAddThreat_Parms
		{
			AActor* threatening;
			float threat;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_threat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventAddThreat_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::NewProp_threat = { "threat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventAddThreat_Parms, threat), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::NewProp_threatening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::NewProp_threat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Adds threat for the provided actor*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Adds threat for the provided actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "AddThreat", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::ACFThreatManagerComponent_eventAddThreat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::ACFThreatManagerComponent_eventAddThreat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics
	{
		struct ACFThreatManagerComponent_eventGetActorWithHigherThreat_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventGetActorWithHigherThreat_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Returns the actor with higher threat*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Returns the actor with higher threat" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "GetActorWithHigherThreat", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::ACFThreatManagerComponent_eventGetActorWithHigherThreat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::ACFThreatManagerComponent_eventGetActorWithHigherThreat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics
	{
		struct ACFThreatManagerComponent_eventGetDefaultThreatForActor_Parms
		{
			AActor* threatening;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventGetDefaultThreatForActor_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventGetDefaultThreatForActor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::NewProp_threatening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*get the default threat to be added for the percepted actor*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "get the default threat to be added for the percepted actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "GetDefaultThreatForActor", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::ACFThreatManagerComponent_eventGetDefaultThreatForActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::ACFThreatManagerComponent_eventGetDefaultThreatForActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics
	{
		struct ACFThreatManagerComponent_eventGetThreatMultForActor_Parms
		{
			AActor* threatening;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventGetThreatMultForActor_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventGetThreatMultForActor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::NewProp_threatening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Returns true if this actor has threat >=0*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Returns true if this actor has threat >=0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "GetThreatMultForActor", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::ACFThreatManagerComponent_eventGetThreatMultForActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::ACFThreatManagerComponent_eventGetThreatMultForActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics
	{
		struct ACFThreatManagerComponent_eventIsActorAPotentialThreat_Parms
		{
			AActor* threatening;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventIsActorAPotentialThreat_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFThreatManagerComponent_eventIsActorAPotentialThreat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFThreatManagerComponent_eventIsActorAPotentialThreat_Parms), &Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::NewProp_threatening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Returns true if this actor is a potential enemy*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Returns true if this actor is a potential enemy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "IsActorAPotentialThreat", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::ACFThreatManagerComponent_eventIsActorAPotentialThreat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::ACFThreatManagerComponent_eventIsActorAPotentialThreat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics
	{
		struct ACFThreatManagerComponent_eventIsThreatening_Parms
		{
			AActor* threatening;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventIsThreatening_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFThreatManagerComponent_eventIsThreatening_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFThreatManagerComponent_eventIsThreatening_Parms), &Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::NewProp_threatening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Returns true if this actor is already in the threat map*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Returns true if this actor is already in the threat map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "IsThreatening", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::ACFThreatManagerComponent_eventIsThreatening_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::ACFThreatManagerComponent_eventIsThreatening_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics
	{
		struct ACFThreatManagerComponent_eventRemoveThreat_Parms
		{
			AActor* threatening;
			float threat;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_threat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventRemoveThreat_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::NewProp_threat = { "threat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventRemoveThreat_Parms, threat), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::NewProp_threatening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::NewProp_threat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Remove threat for the provided actor*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Remove threat for the provided actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "RemoveThreat", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::ACFThreatManagerComponent_eventRemoveThreat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::ACFThreatManagerComponent_eventRemoveThreat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics
	{
		struct ACFThreatManagerComponent_eventRemoveThreatening_Parms
		{
			AActor* threatening;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_threatening;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::NewProp_threatening = { "threatening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFThreatManagerComponent_eventRemoveThreatening_Parms, threatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::NewProp_threatening,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Remove the provided actor */" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "Remove the provided actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFThreatManagerComponent, nullptr, "RemoveThreatening", nullptr, nullptr, Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::ACFThreatManagerComponent_eventRemoveThreatening_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::ACFThreatManagerComponent_eventRemoveThreatening_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFThreatManagerComponent);
	UClass* Z_Construct_UClass_UACFThreatManagerComponent_NoRegister()
	{
		return UACFThreatManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFThreatManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewMaxThreateningActor_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewMaxThreateningActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultThreatMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultThreatMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultThreatMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultThreatMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThreatMultipliersByActor_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ThreatMultipliersByActor_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreatMultipliersByActor_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ThreatMultipliersByActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThreatMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThreatMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreatMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ThreatMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxThreatening_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_maxThreatening;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFThreatManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFThreatManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_AddThreat, "AddThreat" }, // 2769591600
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_GetActorWithHigherThreat, "GetActorWithHigherThreat" }, // 3328943742
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_GetDefaultThreatForActor, "GetDefaultThreatForActor" }, // 3683346561
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_GetThreatMultForActor, "GetThreatMultForActor" }, // 3149709645
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_IsActorAPotentialThreat, "IsActorAPotentialThreat" }, // 2198087491
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_IsThreatening, "IsThreatening" }, // 1302247800
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreat, "RemoveThreat" }, // 1718804633
		{ &Z_Construct_UFunction_UACFThreatManagerComponent_RemoveThreatening, "RemoveThreatening" }, // 3289860365
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFThreatManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFThreatManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_OnNewMaxThreateningActor_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*called when there is a new highest threaning actor in the list*/" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
		{ "ToolTip", "called when there is a new highest threaning actor in the list" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_OnNewMaxThreateningActor = { "OnNewMaxThreateningActor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFThreatManagerComponent, OnNewMaxThreateningActor), Z_Construct_UDelegateFunction_AIFramework_OnNewMaxThreateningActor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_OnNewMaxThreateningActor_MetaData), Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_OnNewMaxThreateningActor_MetaData) }; // 673976979
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_ValueProp = { "DefaultThreatMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_Key_KeyProp = { "DefaultThreatMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap = { "DefaultThreatMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFThreatManagerComponent, DefaultThreatMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_MetaData), Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_ValueProp = { "ThreatMultipliersByActor", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_Key_KeyProp = { "ThreatMultipliersByActor_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor = { "ThreatMultipliersByActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFThreatManagerComponent, ThreatMultipliersByActor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_MetaData), Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_ValueProp = { "ThreatMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_Key_KeyProp = { "ThreatMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap = { "ThreatMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFThreatManagerComponent, ThreatMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_MetaData), Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_maxThreatening_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFThreatManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_maxThreatening = { "maxThreatening", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFThreatManagerComponent, maxThreatening), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_maxThreatening_MetaData), Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_maxThreatening_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFThreatManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_OnNewMaxThreateningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_DefaultThreatMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMultipliersByActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_ThreatMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFThreatManagerComponent_Statics::NewProp_maxThreatening,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFThreatManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFThreatManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFThreatManagerComponent_Statics::ClassParams = {
		&UACFThreatManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFThreatManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFThreatManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFThreatManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFThreatManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFThreatManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFThreatManagerComponent.OuterSingleton, Z_Construct_UClass_UACFThreatManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFThreatManagerComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFThreatManagerComponent>()
	{
		return UACFThreatManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFThreatManagerComponent);
	UACFThreatManagerComponent::~UACFThreatManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFThreatManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFThreatManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFThreatManagerComponent, UACFThreatManagerComponent::StaticClass, TEXT("UACFThreatManagerComponent"), &Z_Registration_Info_UClass_UACFThreatManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFThreatManagerComponent), 1622653553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFThreatManagerComponent_h_4004287040(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFThreatManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFThreatManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

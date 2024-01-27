// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFDamageCalculation.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDamageCalculation() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageCalculation();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageCalculation_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FOnHitActionChances();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFDamageCalculation::execIsCriticalDamage)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_inDamageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCriticalDamage_Implementation(Z_Param_Out_inDamageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageCalculation::execEvaluateHitResponseAction)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_inDamageEvent);
		P_GET_TARRAY_REF(FOnHitActionChances,Z_Param_Out_hitResponseActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->EvaluateHitResponseAction_Implementation(Z_Param_Out_inDamageEvent,Z_Param_Out_hitResponseActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFDamageCalculation::execCalculateFinalDamage)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_inDamageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateFinalDamage_Implementation(Z_Param_Out_inDamageEvent);
		P_NATIVE_END;
	}
	struct ACFDamageCalculation_eventCalculateFinalDamage_Parms
	{
		FACFDamageEvent inDamageEvent;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFDamageCalculation_eventCalculateFinalDamage_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFDamageCalculation_eventEvaluateHitResponseAction_Parms
	{
		FACFDamageEvent inDamageEvent;
		TArray<FOnHitActionChances> hitResponseActions;
		FGameplayTag ReturnValue;
	};
	struct ACFDamageCalculation_eventIsCriticalDamage_Parms
	{
		FACFDamageEvent inDamageEvent;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFDamageCalculation_eventIsCriticalDamage_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UACFDamageCalculation_CalculateFinalDamage = FName(TEXT("CalculateFinalDamage"));
	float UACFDamageCalculation::CalculateFinalDamage(FACFDamageEvent const& inDamageEvent)
	{
		ACFDamageCalculation_eventCalculateFinalDamage_Parms Parms;
		Parms.inDamageEvent=inDamageEvent;
		ProcessEvent(FindFunctionChecked(NAME_UACFDamageCalculation_CalculateFinalDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UACFDamageCalculation_EvaluateHitResponseAction = FName(TEXT("EvaluateHitResponseAction"));
	FGameplayTag UACFDamageCalculation::EvaluateHitResponseAction(FACFDamageEvent const& inDamageEvent, TArray<FOnHitActionChances> const& hitResponseActions)
	{
		ACFDamageCalculation_eventEvaluateHitResponseAction_Parms Parms;
		Parms.inDamageEvent=inDamageEvent;
		Parms.hitResponseActions=hitResponseActions;
		ProcessEvent(FindFunctionChecked(NAME_UACFDamageCalculation_EvaluateHitResponseAction),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UACFDamageCalculation_IsCriticalDamage = FName(TEXT("IsCriticalDamage"));
	bool UACFDamageCalculation::IsCriticalDamage(FACFDamageEvent const& inDamageEvent)
	{
		ACFDamageCalculation_eventIsCriticalDamage_Parms Parms;
		Parms.inDamageEvent=inDamageEvent;
		ProcessEvent(FindFunctionChecked(NAME_UACFDamageCalculation_IsCriticalDamage),&Parms);
		return !!Parms.ReturnValue;
	}
	void UACFDamageCalculation::StaticRegisterNativesUACFDamageCalculation()
	{
		UClass* Class = UACFDamageCalculation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateFinalDamage", &UACFDamageCalculation::execCalculateFinalDamage },
			{ "EvaluateHitResponseAction", &UACFDamageCalculation::execEvaluateHitResponseAction },
			{ "IsCriticalDamage", &UACFDamageCalculation::execIsCriticalDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inDamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inDamageEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_inDamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_inDamageEvent = { "inDamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageCalculation_eventCalculateFinalDamage_Parms, inDamageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_inDamageEvent_MetaData), Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_inDamageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageCalculation_eventCalculateFinalDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_inDamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageCalculation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageCalculation, nullptr, "CalculateFinalDamage", nullptr, nullptr, Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::PropPointers), sizeof(ACFDamageCalculation_eventCalculateFinalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFDamageCalculation_eventCalculateFinalDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inDamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inDamageEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitResponseActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitResponseActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_hitResponseActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_inDamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_inDamageEvent = { "inDamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageCalculation_eventEvaluateHitResponseAction_Parms, inDamageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_inDamageEvent_MetaData), Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_inDamageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions_Inner = { "hitResponseActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOnHitActionChances, METADATA_PARAMS(0, nullptr) }; // 1039742790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions = { "hitResponseActions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageCalculation_eventEvaluateHitResponseAction_Parms, hitResponseActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions_MetaData), Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions_MetaData) }; // 1039742790
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageCalculation_eventEvaluateHitResponseAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_inDamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_hitResponseActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageCalculation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageCalculation, nullptr, "EvaluateHitResponseAction", nullptr, nullptr, Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::PropPointers), sizeof(ACFDamageCalculation_eventEvaluateHitResponseAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFDamageCalculation_eventEvaluateHitResponseAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inDamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inDamageEvent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_inDamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_inDamageEvent = { "inDamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageCalculation_eventIsCriticalDamage_Parms, inDamageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_inDamageEvent_MetaData), Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_inDamageEvent_MetaData) }; // 4032775443
	void Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFDamageCalculation_eventIsCriticalDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFDamageCalculation_eventIsCriticalDamage_Parms), &Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_inDamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageCalculation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageCalculation, nullptr, "IsCriticalDamage", nullptr, nullptr, Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::PropPointers), sizeof(ACFDamageCalculation_eventIsCriticalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFDamageCalculation_eventIsCriticalDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDamageCalculation);
	UClass* Z_Construct_UClass_UACFDamageCalculation_NoRegister()
	{
		return UACFDamageCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UACFDamageCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDamageCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageCalculation_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFDamageCalculation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFDamageCalculation_CalculateFinalDamage, "CalculateFinalDamage" }, // 1867975186
		{ &Z_Construct_UFunction_UACFDamageCalculation_EvaluateHitResponseAction, "EvaluateHitResponseAction" }, // 1126201222
		{ &Z_Construct_UFunction_UACFDamageCalculation_IsCriticalDamage, "IsCriticalDamage" }, // 1438405510
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageCalculation_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Game/ACFDamageCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDamageCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDamageCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDamageCalculation_Statics::ClassParams = {
		&UACFDamageCalculation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDamageCalculation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFDamageCalculation()
	{
		if (!Z_Registration_Info_UClass_UACFDamageCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDamageCalculation.OuterSingleton, Z_Construct_UClass_UACFDamageCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDamageCalculation.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDamageCalculation>()
	{
		return UACFDamageCalculation::StaticClass();
	}
	UACFDamageCalculation::UACFDamageCalculation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDamageCalculation);
	UACFDamageCalculation::~UACFDamageCalculation() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDamageCalculation, UACFDamageCalculation::StaticClass, TEXT("UACFDamageCalculation"), &Z_Registration_Info_UClass_UACFDamageCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDamageCalculation), 710117891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageCalculation_h_1502475635(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

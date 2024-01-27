// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/ACFCompanionsPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCompanionsPlayerController() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFCompanionsPlayerController();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFCompanionsPlayerController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCompanionGroupAIComponent_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAgentInterface_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFPlayerController();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFCompanionsPlayerController::execInternal_SwitchPossessionTo)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_inCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_SwitchPossessionTo(Z_Param_inCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCompanionsPlayerController::execGetCompanionsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFCompanionGroupAIComponent**)Z_Param__Result=P_THIS->GetCompanionsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCompanionsPlayerController::execIsPartOfGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartOfGroup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCompanionsPlayerController::execGetOwningGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetOwningGroup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCompanionsPlayerController::execSwitchPossessionToCharacer)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_inCharacter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_blendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SwitchPossessionToCharacer_Validate(Z_Param_inCharacter,Z_Param_blendTime))
		{
			RPC_ValidateFailed(TEXT("SwitchPossessionToCharacer_Validate"));
			return;
		}
		P_THIS->SwitchPossessionToCharacer_Implementation(Z_Param_inCharacter,Z_Param_blendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCompanionsPlayerController::execSwitchToNearestCompanion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_blendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToNearestCompanion(Z_Param_blendTime);
		P_NATIVE_END;
	}
	struct ACFCompanionsPlayerController_eventGetOwningGroup_Parms
	{
		UACFGroupAIComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCompanionsPlayerController_eventGetOwningGroup_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ACFCompanionsPlayerController_eventIsPartOfGroup_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCompanionsPlayerController_eventIsPartOfGroup_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFCompanionsPlayerController_eventSwitchPossessionToCharacer_Parms
	{
		AACFCharacter* inCharacter;
		float blendTime;
	};
	static FName NAME_AACFCompanionsPlayerController_GetOwningGroup = FName(TEXT("GetOwningGroup"));
	UACFGroupAIComponent* AACFCompanionsPlayerController::GetOwningGroup()
	{
		ACFCompanionsPlayerController_eventGetOwningGroup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFCompanionsPlayerController_GetOwningGroup),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFCompanionsPlayerController_IsPartOfGroup = FName(TEXT("IsPartOfGroup"));
	bool AACFCompanionsPlayerController::IsPartOfGroup()
	{
		ACFCompanionsPlayerController_eventIsPartOfGroup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFCompanionsPlayerController_IsPartOfGroup),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFCompanionsPlayerController_SwitchPossessionToCharacer = FName(TEXT("SwitchPossessionToCharacer"));
	void AACFCompanionsPlayerController::SwitchPossessionToCharacer(AACFCharacter* inCharacter, float blendTime)
	{
		ACFCompanionsPlayerController_eventSwitchPossessionToCharacer_Parms Parms;
		Parms.inCharacter=inCharacter;
		Parms.blendTime=blendTime;
		ProcessEvent(FindFunctionChecked(NAME_AACFCompanionsPlayerController_SwitchPossessionToCharacer),&Parms);
	}
	void AACFCompanionsPlayerController::StaticRegisterNativesAACFCompanionsPlayerController()
	{
		UClass* Class = AACFCompanionsPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCompanionsComponent", &AACFCompanionsPlayerController::execGetCompanionsComponent },
			{ "GetOwningGroup", &AACFCompanionsPlayerController::execGetOwningGroup },
			{ "Internal_SwitchPossessionTo", &AACFCompanionsPlayerController::execInternal_SwitchPossessionTo },
			{ "IsPartOfGroup", &AACFCompanionsPlayerController::execIsPartOfGroup },
			{ "SwitchPossessionToCharacer", &AACFCompanionsPlayerController::execSwitchPossessionToCharacer },
			{ "SwitchToNearestCompanion", &AACFCompanionsPlayerController::execSwitchToNearestCompanion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics
	{
		struct ACFCompanionsPlayerController_eventGetCompanionsComponent_Parms
		{
			UACFCompanionGroupAIComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionsPlayerController_eventGetCompanionsComponent_Parms, ReturnValue), Z_Construct_UClass_UACFCompanionGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// <summary>\n/// /End Groupable Entity\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
		{ "ToolTip", "<summary>\n/End Groupable Entity\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCompanionsPlayerController, nullptr, "GetCompanionsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::ACFCompanionsPlayerController_eventGetCompanionsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::ACFCompanionsPlayerController_eventGetCompanionsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionsPlayerController_eventGetOwningGroup_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// <summary>\n/// /Groupable Entity Interface\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
		{ "ToolTip", "<summary>\n/Groupable Entity Interface\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCompanionsPlayerController, nullptr, "GetOwningGroup", nullptr, nullptr, Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::PropPointers), sizeof(ACFCompanionsPlayerController_eventGetOwningGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCompanionsPlayerController_eventGetOwningGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics
	{
		struct ACFCompanionsPlayerController_eventInternal_SwitchPossessionTo_Parms
		{
			AACFCharacter* inCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::NewProp_inCharacter = { "inCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionsPlayerController_eventInternal_SwitchPossessionTo_Parms, inCharacter), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::NewProp_inCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCompanionsPlayerController, nullptr, "Internal_SwitchPossessionTo", nullptr, nullptr, Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::ACFCompanionsPlayerController_eventInternal_SwitchPossessionTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::ACFCompanionsPlayerController_eventInternal_SwitchPossessionTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCompanionsPlayerController_eventIsPartOfGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCompanionsPlayerController_eventIsPartOfGroup_Parms), &Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCompanionsPlayerController, nullptr, "IsPartOfGroup", nullptr, nullptr, Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::PropPointers), sizeof(ACFCompanionsPlayerController_eventIsPartOfGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCompanionsPlayerController_eventIsPartOfGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inCharacter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_blendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::NewProp_inCharacter = { "inCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionsPlayerController_eventSwitchPossessionToCharacer_Parms, inCharacter), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::NewProp_blendTime = { "blendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionsPlayerController_eventSwitchPossessionToCharacer_Parms, blendTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::NewProp_inCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::NewProp_blendTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_blendTime", "0.500000" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCompanionsPlayerController, nullptr, "SwitchPossessionToCharacer", nullptr, nullptr, Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::PropPointers), sizeof(ACFCompanionsPlayerController_eventSwitchPossessionToCharacer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCompanionsPlayerController_eventSwitchPossessionToCharacer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics
	{
		struct ACFCompanionsPlayerController_eventSwitchToNearestCompanion_Parms
		{
			float blendTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_blendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::NewProp_blendTime = { "blendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionsPlayerController_eventSwitchToNearestCompanion_Parms, blendTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::NewProp_blendTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_blendTime", "0.500000" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCompanionsPlayerController, nullptr, "SwitchToNearestCompanion", nullptr, nullptr, Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::ACFCompanionsPlayerController_eventSwitchToNearestCompanion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::ACFCompanionsPlayerController_eventSwitchToNearestCompanion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFCompanionsPlayerController);
	UClass* Z_Construct_UClass_AACFCompanionsPlayerController_NoRegister()
	{
		return AACFCompanionsPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AACFCompanionsPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompanionsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompanionsComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFCompanionsPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFCompanionsPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFCompanionsPlayerController_GetCompanionsComponent, "GetCompanionsComponent" }, // 2332677337
		{ &Z_Construct_UFunction_AACFCompanionsPlayerController_GetOwningGroup, "GetOwningGroup" }, // 133618288
		{ &Z_Construct_UFunction_AACFCompanionsPlayerController_Internal_SwitchPossessionTo, "Internal_SwitchPossessionTo" }, // 3852046089
		{ &Z_Construct_UFunction_AACFCompanionsPlayerController_IsPartOfGroup, "IsPartOfGroup" }, // 3498602404
		{ &Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchPossessionToCharacer, "SwitchPossessionToCharacer" }, // 929329866
		{ &Z_Construct_UFunction_AACFCompanionsPlayerController_SwitchToNearestCompanion, "SwitchToNearestCompanion" }, // 2048372036
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCompanionsPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Groups/ACFCompanionsPlayerController.h" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCompanionsPlayerController_Statics::NewProp_CompanionsComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Groups/ACFCompanionsPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCompanionsPlayerController_Statics::NewProp_CompanionsComponent = { "CompanionsComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCompanionsPlayerController, CompanionsComponent), Z_Construct_UClass_UACFCompanionGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::NewProp_CompanionsComponent_MetaData), Z_Construct_UClass_AACFCompanionsPlayerController_Statics::NewProp_CompanionsComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFCompanionsPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCompanionsPlayerController_Statics::NewProp_CompanionsComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFCompanionsPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UACFGroupAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFCompanionsPlayerController, IACFGroupAgentInterface), false },  // 2420904889
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFCompanionsPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFCompanionsPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFCompanionsPlayerController_Statics::ClassParams = {
		&AACFCompanionsPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFCompanionsPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFCompanionsPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCompanionsPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFCompanionsPlayerController()
	{
		if (!Z_Registration_Info_UClass_AACFCompanionsPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFCompanionsPlayerController.OuterSingleton, Z_Construct_UClass_AACFCompanionsPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFCompanionsPlayerController.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFCompanionsPlayerController>()
	{
		return AACFCompanionsPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFCompanionsPlayerController);
	AACFCompanionsPlayerController::~AACFCompanionsPlayerController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFCompanionsPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFCompanionsPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFCompanionsPlayerController, AACFCompanionsPlayerController::StaticClass, TEXT("AACFCompanionsPlayerController"), &Z_Registration_Info_UClass_AACFCompanionsPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFCompanionsPlayerController), 696706125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFCompanionsPlayerController_h_455410240(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFCompanionsPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFCompanionsPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

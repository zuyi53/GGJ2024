// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsSystem/Public/ACFAssaultPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAssaultPoint() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSavableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNITSSYSTEM_API UClass* Z_Construct_UClass_AACFAssaultPoint();
	UNITSSYSTEM_API UClass* Z_Construct_UClass_AACFAssaultPoint_NoRegister();
	UNITSSYSTEM_API UEnum* Z_Construct_UEnum_UnitsSystem_EConqueredState();
	UNITSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnitsSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics
	{
		struct _Script_UnitsSystem_eventOnConquerStateChanged_Parms
		{
			EConqueredState newState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnitsSystem_eventOnConquerStateChanged_Parms, newState), Z_Construct_UEnum_UnitsSystem_EConqueredState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState_MetaData), Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState_MetaData) }; // 4082868624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnitsSystem, nullptr, "OnConquerStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::_Script_UnitsSystem_eventOnConquerStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::_Script_UnitsSystem_eventOnConquerStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConquerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConquerStateChanged, EConqueredState const& newState)
{
	struct _Script_UnitsSystem_eventOnConquerStateChanged_Parms
	{
		EConqueredState newState;
	};
	_Script_UnitsSystem_eventOnConquerStateChanged_Parms Parms;
	Parms.newState=newState;
	OnConquerStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AACFAssaultPoint::execOnRep_ConqueringState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ConqueringState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execOnConquestInterrupted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConquestInterrupted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execOnConquestCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConquestCompleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execOnConquestStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConquestStarted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execCanStartConquering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartConquering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execGetConqueringState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EConqueredState*)Z_Param__Result=P_THIS->GetConqueringState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execInterruptConquering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterruptConquering_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execCompleteConquering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteConquering_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execStartConquering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartConquering_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAssaultPoint::execSetConqueringState)
	{
		P_GET_ENUM(EConqueredState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConqueringState_Implementation(EConqueredState(Z_Param_newState));
		P_NATIVE_END;
	}
	struct ACFAssaultPoint_eventSetConqueringState_Parms
	{
		EConqueredState newState;
	};
	static FName NAME_AACFAssaultPoint_CompleteConquering = FName(TEXT("CompleteConquering"));
	void AACFAssaultPoint::CompleteConquering()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_CompleteConquering),NULL);
	}
	static FName NAME_AACFAssaultPoint_InterruptConquering = FName(TEXT("InterruptConquering"));
	void AACFAssaultPoint::InterruptConquering()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_InterruptConquering),NULL);
	}
	static FName NAME_AACFAssaultPoint_OnConquestCompleted = FName(TEXT("OnConquestCompleted"));
	void AACFAssaultPoint::OnConquestCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_OnConquestCompleted),NULL);
	}
	static FName NAME_AACFAssaultPoint_OnConquestInterrupted = FName(TEXT("OnConquestInterrupted"));
	void AACFAssaultPoint::OnConquestInterrupted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_OnConquestInterrupted),NULL);
	}
	static FName NAME_AACFAssaultPoint_OnConquestStarted = FName(TEXT("OnConquestStarted"));
	void AACFAssaultPoint::OnConquestStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_OnConquestStarted),NULL);
	}
	static FName NAME_AACFAssaultPoint_SetConqueringState = FName(TEXT("SetConqueringState"));
	void AACFAssaultPoint::SetConqueringState(EConqueredState newState)
	{
		ACFAssaultPoint_eventSetConqueringState_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_SetConqueringState),&Parms);
	}
	static FName NAME_AACFAssaultPoint_StartConquering = FName(TEXT("StartConquering"));
	void AACFAssaultPoint::StartConquering()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFAssaultPoint_StartConquering),NULL);
	}
	void AACFAssaultPoint::StaticRegisterNativesAACFAssaultPoint()
	{
		UClass* Class = AACFAssaultPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartConquering", &AACFAssaultPoint::execCanStartConquering },
			{ "CompleteConquering", &AACFAssaultPoint::execCompleteConquering },
			{ "GetConqueringState", &AACFAssaultPoint::execGetConqueringState },
			{ "InterruptConquering", &AACFAssaultPoint::execInterruptConquering },
			{ "OnConquestCompleted", &AACFAssaultPoint::execOnConquestCompleted },
			{ "OnConquestInterrupted", &AACFAssaultPoint::execOnConquestInterrupted },
			{ "OnConquestStarted", &AACFAssaultPoint::execOnConquestStarted },
			{ "OnRep_ConqueringState", &AACFAssaultPoint::execOnRep_ConqueringState },
			{ "SetConqueringState", &AACFAssaultPoint::execSetConqueringState },
			{ "StartConquering", &AACFAssaultPoint::execStartConquering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics
	{
		struct ACFAssaultPoint_eventCanStartConquering_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAssaultPoint_eventCanStartConquering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAssaultPoint_eventCanStartConquering_Parms), &Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "CanStartConquering", nullptr, nullptr, Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::ACFAssaultPoint_eventCanStartConquering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::ACFAssaultPoint_eventCanStartConquering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "CompleteConquering", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics
	{
		struct ACFAssaultPoint_eventGetConqueringState_Parms
		{
			EConqueredState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAssaultPoint_eventGetConqueringState_Parms, ReturnValue), Z_Construct_UEnum_UnitsSystem_EConqueredState, METADATA_PARAMS(0, nullptr) }; // 4082868624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "GetConqueringState", nullptr, nullptr, Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::ACFAssaultPoint_eventGetConqueringState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::ACFAssaultPoint_eventGetConqueringState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "InterruptConquering", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "OnConquestCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "OnConquestInterrupted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "OnConquestStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "OnRep_ConqueringState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAssaultPoint_eventSetConqueringState_Parms, newState), Z_Construct_UEnum_UnitsSystem_EConqueredState, METADATA_PARAMS(0, nullptr) }; // 4082868624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::NewProp_newState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "SetConqueringState", nullptr, nullptr, Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::PropPointers), sizeof(ACFAssaultPoint_eventSetConqueringState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAssaultPoint_eventSetConqueringState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAssaultPoint_StartConquering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAssaultPoint_StartConquering_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAssaultPoint_StartConquering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAssaultPoint, nullptr, "StartConquering", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAssaultPoint_StartConquering_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAssaultPoint_StartConquering_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAssaultPoint_StartConquering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAssaultPoint_StartConquering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFAssaultPoint);
	UClass* Z_Construct_UClass_AACFAssaultPoint_NoRegister()
	{
		return AACFAssaultPoint::StaticClass();
	}
	struct Z_Construct_UClass_AACFAssaultPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConquerStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConquerStateChanged;
		static const UECodeGen_Private::FBytePropertyParams NewProp_conqueringState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_conqueringState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_conqueringState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFAssaultPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFAssaultPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFAssaultPoint_CanStartConquering, "CanStartConquering" }, // 726187838
		{ &Z_Construct_UFunction_AACFAssaultPoint_CompleteConquering, "CompleteConquering" }, // 1468947775
		{ &Z_Construct_UFunction_AACFAssaultPoint_GetConqueringState, "GetConqueringState" }, // 2617211674
		{ &Z_Construct_UFunction_AACFAssaultPoint_InterruptConquering, "InterruptConquering" }, // 2228825498
		{ &Z_Construct_UFunction_AACFAssaultPoint_OnConquestCompleted, "OnConquestCompleted" }, // 2466932173
		{ &Z_Construct_UFunction_AACFAssaultPoint_OnConquestInterrupted, "OnConquestInterrupted" }, // 1317020959
		{ &Z_Construct_UFunction_AACFAssaultPoint_OnConquestStarted, "OnConquestStarted" }, // 2890976499
		{ &Z_Construct_UFunction_AACFAssaultPoint_OnRep_ConqueringState, "OnRep_ConqueringState" }, // 2894196108
		{ &Z_Construct_UFunction_AACFAssaultPoint_SetConqueringState, "SetConqueringState" }, // 2687490501
		{ &Z_Construct_UFunction_AACFAssaultPoint_StartConquering, "StartConquering" }, // 3274879510
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAssaultPoint_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFAssaultPoint.h" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_OnConquerStateChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_OnConquerStateChanged = { "OnConquerStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAssaultPoint, OnConquerStateChanged), Z_Construct_UDelegateFunction_UnitsSystem_OnConquerStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_OnConquerStateChanged_MetaData), Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_OnConquerStateChanged_MetaData) }; // 2994810788
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFAssaultPoint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState = { "conqueringState", "OnRep_ConqueringState", (EPropertyFlags)0x0040000101000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAssaultPoint, conqueringState), Z_Construct_UEnum_UnitsSystem_EConqueredState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState_MetaData), Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState_MetaData) }; // 4082868624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFAssaultPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_OnConquerStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAssaultPoint_Statics::NewProp_conqueringState,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFAssaultPoint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UALSSavableInterface_NoRegister, (int32)VTABLE_OFFSET(AACFAssaultPoint, IALSSavableInterface), false },  // 1099919627
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFAssaultPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFAssaultPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFAssaultPoint_Statics::ClassParams = {
		&AACFAssaultPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFAssaultPoint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFAssaultPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAssaultPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFAssaultPoint()
	{
		if (!Z_Registration_Info_UClass_AACFAssaultPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFAssaultPoint.OuterSingleton, Z_Construct_UClass_AACFAssaultPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFAssaultPoint.OuterSingleton;
	}
	template<> UNITSSYSTEM_API UClass* StaticClass<AACFAssaultPoint>()
	{
		return AACFAssaultPoint::StaticClass();
	}

	void AACFAssaultPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_conqueringState(TEXT("conqueringState"));

		const bool bIsValid = true
			&& Name_conqueringState == ClassReps[(int32)ENetFields_Private::conqueringState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AACFAssaultPoint"));
	}
	AACFAssaultPoint::AACFAssaultPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFAssaultPoint);
	AACFAssaultPoint::~AACFAssaultPoint() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFAssaultPoint, AACFAssaultPoint::StaticClass, TEXT("AACFAssaultPoint"), &Z_Registration_Info_UClass_AACFAssaultPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFAssaultPoint), 1638867006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_284093606(TEXT("/Script/UnitsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

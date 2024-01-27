// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPlayerController() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFPlayerController();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFPlayerController_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnPossessedCharacterChanged_Parms
		{
			const AACFCharacter* character;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnPossessedCharacterChanged_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::NewProp_character_MetaData), Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::NewProp_character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnPossessedCharacterChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnPossessedCharacterChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnPossessedCharacterChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPossessedCharacterChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPossessedCharacterChanged, const AACFCharacter* character)
{
	struct _Script_AscentCombatFramework_eventOnPossessedCharacterChanged_Parms
	{
		const AACFCharacter* character;
	};
	_Script_AscentCombatFramework_eventOnPossessedCharacterChanged_Parms Parms;
	Parms.character=character;
	OnPossessedCharacterChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AACFPlayerController::execOnRep_PossessedEntity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PossessedEntity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execSetCombatTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_newTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetCombatTeam_Validate(ETeam(Z_Param_newTeam)))
		{
			RPC_ValidateFailed(TEXT("SetCombatTeam_Validate"));
			return;
		}
		P_THIS->SetCombatTeam_Implementation(ETeam(Z_Param_newTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execGetYSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetYSensitivity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execGetXSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetXSensitivity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execGetCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetCombatTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execGetSecondsFromLastCameraInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSecondsFromLastCameraInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execGetCameraInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFPlayerController::execGetPossessedACFCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=P_THIS->GetPossessedACFCharacter();
		P_NATIVE_END;
	}
	struct ACFPlayerController_eventGetXSensitivity_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFPlayerController_eventGetXSensitivity_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFPlayerController_eventGetYSensitivity_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFPlayerController_eventGetYSensitivity_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFPlayerController_eventSetCombatTeam_Parms
	{
		ETeam newTeam;
	};
	static FName NAME_AACFPlayerController_GetXSensitivity = FName(TEXT("GetXSensitivity"));
	float AACFPlayerController::GetXSensitivity() const
	{
		ACFPlayerController_eventGetXSensitivity_Parms Parms;
		const_cast<AACFPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFPlayerController_GetXSensitivity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFPlayerController_GetYSensitivity = FName(TEXT("GetYSensitivity"));
	float AACFPlayerController::GetYSensitivity() const
	{
		ACFPlayerController_eventGetYSensitivity_Parms Parms;
		const_cast<AACFPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFPlayerController_GetYSensitivity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFPlayerController_SetCombatTeam = FName(TEXT("SetCombatTeam"));
	void AACFPlayerController::SetCombatTeam(ETeam const& newTeam)
	{
		ACFPlayerController_eventSetCombatTeam_Parms Parms;
		Parms.newTeam=newTeam;
		ProcessEvent(FindFunctionChecked(NAME_AACFPlayerController_SetCombatTeam),&Parms);
	}
	void AACFPlayerController::StaticRegisterNativesAACFPlayerController()
	{
		UClass* Class = AACFPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraInput", &AACFPlayerController::execGetCameraInput },
			{ "GetCombatTeam", &AACFPlayerController::execGetCombatTeam },
			{ "GetPossessedACFCharacter", &AACFPlayerController::execGetPossessedACFCharacter },
			{ "GetSecondsFromLastCameraInput", &AACFPlayerController::execGetSecondsFromLastCameraInput },
			{ "GetXSensitivity", &AACFPlayerController::execGetXSensitivity },
			{ "GetYSensitivity", &AACFPlayerController::execGetYSensitivity },
			{ "OnRep_PossessedEntity", &AACFPlayerController::execOnRep_PossessedEntity },
			{ "SetCombatTeam", &AACFPlayerController::execSetCombatTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics
	{
		struct ACFPlayerController_eventGetCameraInput_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventGetCameraInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetCameraInput", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::ACFPlayerController_eventGetCameraInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::ACFPlayerController_eventGetCameraInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetCameraInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetCameraInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics
	{
		struct ACFPlayerController_eventGetCombatTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventGetCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::ACFPlayerController_eventGetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::ACFPlayerController_eventGetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics
	{
		struct ACFPlayerController_eventGetPossessedACFCharacter_Parms
		{
			AACFCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventGetPossessedACFCharacter_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetPossessedACFCharacter", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::ACFPlayerController_eventGetPossessedACFCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::ACFPlayerController_eventGetPossessedACFCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics
	{
		struct ACFPlayerController_eventGetSecondsFromLastCameraInput_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventGetSecondsFromLastCameraInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetSecondsFromLastCameraInput", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::ACFPlayerController_eventGetSecondsFromLastCameraInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::ACFPlayerController_eventGetSecondsFromLastCameraInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventGetXSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetXSensitivity", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::PropPointers), sizeof(ACFPlayerController_eventGetXSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFPlayerController_eventGetXSensitivity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetXSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetXSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventGetYSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetYSensitivity", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::PropPointers), sizeof(ACFPlayerController_eventGetYSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFPlayerController_eventGetYSensitivity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetYSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetYSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "OnRep_PossessedEntity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_newTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam = { "newTeam", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFPlayerController_eventSetCombatTeam_Parms, newTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam_MetaData), Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam_MetaData) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::NewProp_newTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "SetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::PropPointers), sizeof(ACFPlayerController_eventSetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFPlayerController_eventSetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFPlayerController_SetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFPlayerController_SetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFPlayerController);
	UClass* Z_Construct_UClass_AACFPlayerController_NoRegister()
	{
		return AACFPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AACFPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPossessedCharacterChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPossessedCharacterChanged;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossessedCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PossessedCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFPlayerController_GetCameraInput, "GetCameraInput" }, // 3908028185
		{ &Z_Construct_UFunction_AACFPlayerController_GetCombatTeam, "GetCombatTeam" }, // 779517509
		{ &Z_Construct_UFunction_AACFPlayerController_GetPossessedACFCharacter, "GetPossessedACFCharacter" }, // 868195737
		{ &Z_Construct_UFunction_AACFPlayerController_GetSecondsFromLastCameraInput, "GetSecondsFromLastCameraInput" }, // 3366813211
		{ &Z_Construct_UFunction_AACFPlayerController_GetXSensitivity, "GetXSensitivity" }, // 462133385
		{ &Z_Construct_UFunction_AACFPlayerController_GetYSensitivity, "GetYSensitivity" }, // 2957759384
		{ &Z_Construct_UFunction_AACFPlayerController_OnRep_PossessedEntity, "OnRep_PossessedEntity" }, // 2664502344
		{ &Z_Construct_UFunction_AACFPlayerController_SetCombatTeam, "SetCombatTeam" }, // 2739882259
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game/ACFPlayerController.h" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerController_Statics::NewProp_OnPossessedCharacterChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFPlayerController_Statics::NewProp_OnPossessedCharacterChanged = { "OnPossessedCharacterChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPlayerController, OnPossessedCharacterChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnPossessedCharacterChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::NewProp_OnPossessedCharacterChanged_MetaData), Z_Construct_UClass_AACFPlayerController_Statics::NewProp_OnPossessedCharacterChanged_MetaData) }; // 3755572028
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPlayerController, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerController_Statics::NewProp_PossessedCharacter_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFPlayerController_Statics::NewProp_PossessedCharacter = { "PossessedCharacter", "OnRep_PossessedEntity", (EPropertyFlags)0x0024080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPlayerController, PossessedCharacter), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::NewProp_PossessedCharacter_MetaData), Z_Construct_UClass_AACFPlayerController_Statics::NewProp_PossessedCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPlayerController_Statics::NewProp_OnPossessedCharacterChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPlayerController_Statics::NewProp_CombatTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPlayerController_Statics::NewProp_PossessedCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFPlayerController_Statics::ClassParams = {
		&AACFPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFPlayerController()
	{
		if (!Z_Registration_Info_UClass_AACFPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFPlayerController.OuterSingleton, Z_Construct_UClass_AACFPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFPlayerController.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<AACFPlayerController>()
	{
		return AACFPlayerController::StaticClass();
	}

	void AACFPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PossessedCharacter(TEXT("PossessedCharacter"));

		const bool bIsValid = true
			&& Name_PossessedCharacter == ClassReps[(int32)ENetFields_Private::PossessedCharacter].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AACFPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFPlayerController);
	AACFPlayerController::~AACFPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFPlayerController, AACFPlayerController::StaticClass, TEXT("AACFPlayerController"), &Z_Registration_Info_UClass_AACFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFPlayerController), 528613124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_4259860716(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

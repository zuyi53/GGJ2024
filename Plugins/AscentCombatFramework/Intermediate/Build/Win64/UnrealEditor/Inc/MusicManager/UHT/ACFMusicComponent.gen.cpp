// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFMusicComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMusicComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EBattleState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	MUSICMANAGER_API UClass* Z_Construct_UClass_UACFMusicComponent();
	MUSICMANAGER_API UClass* Z_Construct_UClass_UACFMusicComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MusicManager();
// End Cross Module References
	DEFINE_FUNCTION(UACFMusicComponent::execHandleStateChanged)
	{
		P_GET_ENUM_REF(EBattleState,Z_Param_Out_battleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateChanged((EBattleState&)(Z_Param_Out_battleState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMusicComponent::execGetCurrntlyPlayingMusic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundCue**)Z_Param__Result=P_THIS->GetCurrntlyPlayingMusic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMusicComponent::execGetMusicCueByState)
	{
		P_GET_ENUM(EBattleState,Z_Param_battleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundCue**)Z_Param__Result=P_THIS->GetMusicCueByState(EBattleState(Z_Param_battleState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMusicComponent::execPlayMusicCueByState)
	{
		P_GET_ENUM(EBattleState,Z_Param_battleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMusicCueByState(EBattleState(Z_Param_battleState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMusicComponent::execSetMusicCueByState)
	{
		P_GET_OBJECT(USoundCue,Z_Param_musicCue);
		P_GET_ENUM(EBattleState,Z_Param_battleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicCueByState(Z_Param_musicCue,EBattleState(Z_Param_battleState));
		P_NATIVE_END;
	}
	void UACFMusicComponent::StaticRegisterNativesUACFMusicComponent()
	{
		UClass* Class = UACFMusicComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrntlyPlayingMusic", &UACFMusicComponent::execGetCurrntlyPlayingMusic },
			{ "GetMusicCueByState", &UACFMusicComponent::execGetMusicCueByState },
			{ "HandleStateChanged", &UACFMusicComponent::execHandleStateChanged },
			{ "PlayMusicCueByState", &UACFMusicComponent::execPlayMusicCueByState },
			{ "SetMusicCueByState", &UACFMusicComponent::execSetMusicCueByState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics
	{
		struct ACFMusicComponent_eventGetCurrntlyPlayingMusic_Parms
		{
			USoundCue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventGetCurrntlyPlayingMusic_Parms, ReturnValue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMusicComponent, nullptr, "GetCurrntlyPlayingMusic", nullptr, nullptr, Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::ACFMusicComponent_eventGetCurrntlyPlayingMusic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::ACFMusicComponent_eventGetCurrntlyPlayingMusic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics
	{
		struct ACFMusicComponent_eventGetMusicCueByState_Parms
		{
			EBattleState battleState;
			USoundCue* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_battleState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_battleState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::NewProp_battleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::NewProp_battleState = { "battleState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventGetMusicCueByState_Parms, battleState), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(0, nullptr) }; // 2786243359
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventGetMusicCueByState_Parms, ReturnValue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::NewProp_battleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::NewProp_battleState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMusicComponent, nullptr, "GetMusicCueByState", nullptr, nullptr, Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::ACFMusicComponent_eventGetMusicCueByState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::ACFMusicComponent_eventGetMusicCueByState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics
	{
		struct ACFMusicComponent_eventHandleStateChanged_Parms
		{
			EBattleState battleState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_battleState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_battleState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_battleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState = { "battleState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventHandleStateChanged_Parms, battleState), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState_MetaData), Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState_MetaData) }; // 2786243359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::NewProp_battleState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMusicComponent, nullptr, "HandleStateChanged", nullptr, nullptr, Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::ACFMusicComponent_eventHandleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::ACFMusicComponent_eventHandleStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics
	{
		struct ACFMusicComponent_eventPlayMusicCueByState_Parms
		{
			EBattleState battleState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_battleState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_battleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::NewProp_battleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::NewProp_battleState = { "battleState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventPlayMusicCueByState_Parms, battleState), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(0, nullptr) }; // 2786243359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::NewProp_battleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::NewProp_battleState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMusicComponent, nullptr, "PlayMusicCueByState", nullptr, nullptr, Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::ACFMusicComponent_eventPlayMusicCueByState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::ACFMusicComponent_eventPlayMusicCueByState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics
	{
		struct ACFMusicComponent_eventSetMusicCueByState_Parms
		{
			USoundCue* musicCue;
			EBattleState battleState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_musicCue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_battleState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_battleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::NewProp_musicCue = { "musicCue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventSetMusicCueByState_Parms, musicCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::NewProp_battleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::NewProp_battleState = { "battleState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMusicComponent_eventSetMusicCueByState_Parms, battleState), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(0, nullptr) }; // 2786243359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::NewProp_musicCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::NewProp_battleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::NewProp_battleState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMusicComponent, nullptr, "SetMusicCueByState", nullptr, nullptr, Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::ACFMusicComponent_eventSetMusicCueByState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::ACFMusicComponent_eventSetMusicCueByState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFMusicComponent);
	UClass* Z_Construct_UClass_UACFMusicComponent_NoRegister()
	{
		return UACFMusicComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFMusicComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicCueByState_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MusicCueByState_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MusicCueByState_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicCueByState_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MusicCueByState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_concurrencySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_concurrencySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentlyPlayingMusic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentlyPlayingMusic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFMusicComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MusicManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFMusicComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFMusicComponent_GetCurrntlyPlayingMusic, "GetCurrntlyPlayingMusic" }, // 1505040433
		{ &Z_Construct_UFunction_UACFMusicComponent_GetMusicCueByState, "GetMusicCueByState" }, // 985462780
		{ &Z_Construct_UFunction_UACFMusicComponent_HandleStateChanged, "HandleStateChanged" }, // 787955938
		{ &Z_Construct_UFunction_UACFMusicComponent_PlayMusicCueByState, "PlayMusicCueByState" }, // 514674817
		{ &Z_Construct_UFunction_UACFMusicComponent_SetMusicCueByState, "SetMusicCueByState" }, // 1736573552
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFMusicComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UACFMusicComponent*)Obj)->bAutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFMusicComponent), &Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_ValueProp = { "MusicCueByState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_Key_KeyProp = { "MusicCueByState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(0, nullptr) }; // 2786243359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState = { "MusicCueByState", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMusicComponent, MusicCueByState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_MetaData) }; // 2786243359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_FadeTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMusicComponent, FadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_FadeTime_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_FadeTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_VolumeMult_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_VolumeMult = { "VolumeMult", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMusicComponent, VolumeMult), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_VolumeMult_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_VolumeMult_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_concurrencySettings_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_concurrencySettings = { "concurrencySettings", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMusicComponent, concurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_concurrencySettings_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_concurrencySettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentlyPlayingMusic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentlyPlayingMusic = { "currentlyPlayingMusic", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMusicComponent, currentlyPlayingMusic), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentlyPlayingMusic_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentlyPlayingMusic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFMusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentComponent = { "currentComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMusicComponent, currentComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentComponent_MetaData), Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFMusicComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_bAutoStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_MusicCueByState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_FadeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_VolumeMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_concurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentlyPlayingMusic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMusicComponent_Statics::NewProp_currentComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFMusicComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFMusicComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFMusicComponent_Statics::ClassParams = {
		&UACFMusicComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFMusicComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFMusicComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMusicComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFMusicComponent()
	{
		if (!Z_Registration_Info_UClass_UACFMusicComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFMusicComponent.OuterSingleton, Z_Construct_UClass_UACFMusicComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFMusicComponent.OuterSingleton;
	}
	template<> MUSICMANAGER_API UClass* StaticClass<UACFMusicComponent>()
	{
		return UACFMusicComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFMusicComponent);
	UACFMusicComponent::~UACFMusicComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MusicManager_Public_ACFMusicComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MusicManager_Public_ACFMusicComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFMusicComponent, UACFMusicComponent::StaticClass, TEXT("UACFMusicComponent"), &Z_Registration_Info_UClass_UACFMusicComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFMusicComponent), 3611836860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MusicManager_Public_ACFMusicComponent_h_2765686271(TEXT("/Script/MusicManager"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MusicManager_Public_ACFMusicComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MusicManager_Public_ACFMusicComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombinedAnimationsSystem/Public/CASAnimMasterComponent.h"
#include "CombinedAnimationsSystem/Public/CASTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCASAnimMasterComponent() {}
// Cross Module References
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimMasterComponent();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimMasterComponent_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UEnum* Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentCombinedAnim();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CombinedAnimationsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UCASAnimMasterComponent::execDispatchAnimEnded)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_animTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->DispatchAnimEnded_Validate(Z_Param_animTag))
		{
			RPC_ValidateFailed(TEXT("DispatchAnimEnded_Validate"));
			return;
		}
		P_THIS->DispatchAnimEnded_Implementation(Z_Param_animTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execDispatchAnimStarted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_animTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->DispatchAnimStarted_Validate(Z_Param_animTag))
		{
			RPC_ValidateFailed(TEXT("DispatchAnimStarted_Validate"));
			return;
		}
		P_THIS->DispatchAnimStarted_Implementation(Z_Param_animTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execMulticastSlavePlayAnimMontage)
	{
		P_GET_OBJECT(ACharacter,Z_Param_slave);
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulticastSlavePlayAnimMontage_Validate(Z_Param_slave,Z_Param_montage))
		{
			RPC_ValidateFailed(TEXT("MulticastSlavePlayAnimMontage_Validate"));
			return;
		}
		P_THIS->MulticastSlavePlayAnimMontage_Implementation(Z_Param_slave,Z_Param_montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execMulticastPlayAnimMontage)
	{
		P_GET_STRUCT(FCurrentCombinedAnim,Z_Param_combinedAnim);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulticastPlayAnimMontage_Validate(Z_Param_combinedAnim))
		{
			RPC_ValidateFailed(TEXT("MulticastPlayAnimMontage_Validate"));
			return;
		}
		P_THIS->MulticastPlayAnimMontage_Implementation(Z_Param_combinedAnim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execHandleMontageFinished)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inMontage);
		P_GET_UBOOL(Z_Param_bInterruptted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMontageFinished(Z_Param_inMontage,Z_Param_bInterruptted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execGetCharacterRelativedDirection)
	{
		P_GET_OBJECT(ACharacter,Z_Param_otherChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERelativeDirection*)Z_Param__Result=P_THIS->GetCharacterRelativedDirection(Z_Param_otherChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execGetCharacterSlave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterSlave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execGetCharacterOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execIsPlayingCombinedAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingCombinedAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execCanPlayCombinedAnimWithCharacter)
	{
		P_GET_OBJECT(ACharacter,Z_Param_otherCharachter);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_combineAnimTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayCombinedAnimWithCharacter(Z_Param_otherCharachter,Z_Param_Out_combineAnimTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execPlayCombinedAnimation)
	{
		P_GET_OBJECT(ACharacter,Z_Param_otherCharachter);
		P_GET_STRUCT(FGameplayTag,Z_Param_combineAnimTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->PlayCombinedAnimation_Validate(Z_Param_otherCharachter,Z_Param_combineAnimTag))
		{
			RPC_ValidateFailed(TEXT("PlayCombinedAnimation_Validate"));
			return;
		}
		P_THIS->PlayCombinedAnimation_Implementation(Z_Param_otherCharachter,Z_Param_combineAnimTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimMasterComponent::execTryPlayCombinedAnimation)
	{
		P_GET_OBJECT(ACharacter,Z_Param_otherCharachter);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_combineAnimTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPlayCombinedAnimation(Z_Param_otherCharachter,Z_Param_Out_combineAnimTag);
		P_NATIVE_END;
	}
	struct CASAnimMasterComponent_eventDispatchAnimEnded_Parms
	{
		FGameplayTag animTag;
	};
	struct CASAnimMasterComponent_eventDispatchAnimStarted_Parms
	{
		FGameplayTag animTag;
	};
	struct CASAnimMasterComponent_eventMulticastPlayAnimMontage_Parms
	{
		FCurrentCombinedAnim combinedAnim;
	};
	struct CASAnimMasterComponent_eventMulticastSlavePlayAnimMontage_Parms
	{
		ACharacter* slave;
		UAnimMontage* montage;
	};
	struct CASAnimMasterComponent_eventPlayCombinedAnimation_Parms
	{
		ACharacter* otherCharachter;
		FGameplayTag combineAnimTag;
	};
	static FName NAME_UCASAnimMasterComponent_DispatchAnimEnded = FName(TEXT("DispatchAnimEnded"));
	void UCASAnimMasterComponent::DispatchAnimEnded(FGameplayTag const& animTag)
	{
		CASAnimMasterComponent_eventDispatchAnimEnded_Parms Parms;
		Parms.animTag=animTag;
		ProcessEvent(FindFunctionChecked(NAME_UCASAnimMasterComponent_DispatchAnimEnded),&Parms);
	}
	static FName NAME_UCASAnimMasterComponent_DispatchAnimStarted = FName(TEXT("DispatchAnimStarted"));
	void UCASAnimMasterComponent::DispatchAnimStarted(FGameplayTag const& animTag)
	{
		CASAnimMasterComponent_eventDispatchAnimStarted_Parms Parms;
		Parms.animTag=animTag;
		ProcessEvent(FindFunctionChecked(NAME_UCASAnimMasterComponent_DispatchAnimStarted),&Parms);
	}
	static FName NAME_UCASAnimMasterComponent_MulticastPlayAnimMontage = FName(TEXT("MulticastPlayAnimMontage"));
	void UCASAnimMasterComponent::MulticastPlayAnimMontage(FCurrentCombinedAnim const& combinedAnim)
	{
		CASAnimMasterComponent_eventMulticastPlayAnimMontage_Parms Parms;
		Parms.combinedAnim=combinedAnim;
		ProcessEvent(FindFunctionChecked(NAME_UCASAnimMasterComponent_MulticastPlayAnimMontage),&Parms);
	}
	static FName NAME_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage = FName(TEXT("MulticastSlavePlayAnimMontage"));
	void UCASAnimMasterComponent::MulticastSlavePlayAnimMontage(ACharacter* slave, UAnimMontage* montage)
	{
		CASAnimMasterComponent_eventMulticastSlavePlayAnimMontage_Parms Parms;
		Parms.slave=slave;
		Parms.montage=montage;
		ProcessEvent(FindFunctionChecked(NAME_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage),&Parms);
	}
	static FName NAME_UCASAnimMasterComponent_PlayCombinedAnimation = FName(TEXT("PlayCombinedAnimation"));
	void UCASAnimMasterComponent::PlayCombinedAnimation(ACharacter* otherCharachter, FGameplayTag const& combineAnimTag)
	{
		CASAnimMasterComponent_eventPlayCombinedAnimation_Parms Parms;
		Parms.otherCharachter=otherCharachter;
		Parms.combineAnimTag=combineAnimTag;
		ProcessEvent(FindFunctionChecked(NAME_UCASAnimMasterComponent_PlayCombinedAnimation),&Parms);
	}
	void UCASAnimMasterComponent::StaticRegisterNativesUCASAnimMasterComponent()
	{
		UClass* Class = UCASAnimMasterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayCombinedAnimWithCharacter", &UCASAnimMasterComponent::execCanPlayCombinedAnimWithCharacter },
			{ "DispatchAnimEnded", &UCASAnimMasterComponent::execDispatchAnimEnded },
			{ "DispatchAnimStarted", &UCASAnimMasterComponent::execDispatchAnimStarted },
			{ "GetCharacterOwner", &UCASAnimMasterComponent::execGetCharacterOwner },
			{ "GetCharacterRelativedDirection", &UCASAnimMasterComponent::execGetCharacterRelativedDirection },
			{ "GetCharacterSlave", &UCASAnimMasterComponent::execGetCharacterSlave },
			{ "HandleMontageFinished", &UCASAnimMasterComponent::execHandleMontageFinished },
			{ "IsPlayingCombinedAnimation", &UCASAnimMasterComponent::execIsPlayingCombinedAnimation },
			{ "MulticastPlayAnimMontage", &UCASAnimMasterComponent::execMulticastPlayAnimMontage },
			{ "MulticastSlavePlayAnimMontage", &UCASAnimMasterComponent::execMulticastSlavePlayAnimMontage },
			{ "PlayCombinedAnimation", &UCASAnimMasterComponent::execPlayCombinedAnimation },
			{ "TryPlayCombinedAnimation", &UCASAnimMasterComponent::execTryPlayCombinedAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics
	{
		struct CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms
		{
			ACharacter* otherCharachter;
			FGameplayTag combineAnimTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherCharachter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combineAnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_combineAnimTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_otherCharachter = { "otherCharachter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms, otherCharachter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_combineAnimTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_combineAnimTag = { "combineAnimTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms, combineAnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_combineAnimTag_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_combineAnimTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms), &Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_otherCharachter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_combineAnimTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "CanPlayCombinedAnimWithCharacter", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::CASAnimMasterComponent_eventCanPlayCombinedAnimWithCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventDispatchAnimEnded_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::NewProp_animTag_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::NewProp_animTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::NewProp_animTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "DispatchAnimEnded", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::PropPointers), sizeof(CASAnimMasterComponent_eventDispatchAnimEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASAnimMasterComponent_eventDispatchAnimEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventDispatchAnimStarted_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::NewProp_animTag_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::NewProp_animTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::NewProp_animTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "DispatchAnimStarted", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::PropPointers), sizeof(CASAnimMasterComponent_eventDispatchAnimStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASAnimMasterComponent_eventDispatchAnimStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics
	{
		struct CASAnimMasterComponent_eventGetCharacterOwner_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventGetCharacterOwner_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "GetCharacterOwner", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::CASAnimMasterComponent_eventGetCharacterOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::CASAnimMasterComponent_eventGetCharacterOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics
	{
		struct CASAnimMasterComponent_eventGetCharacterRelativedDirection_Parms
		{
			const ACharacter* otherChar;
			ERelativeDirection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherChar;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_otherChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_otherChar = { "otherChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventGetCharacterRelativedDirection_Parms, otherChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_otherChar_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_otherChar_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventGetCharacterRelativedDirection_Parms, ReturnValue), Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection, METADATA_PARAMS(0, nullptr) }; // 3524777489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_otherChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "GetCharacterRelativedDirection", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::CASAnimMasterComponent_eventGetCharacterRelativedDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::CASAnimMasterComponent_eventGetCharacterRelativedDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics
	{
		struct CASAnimMasterComponent_eventGetCharacterSlave_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventGetCharacterSlave_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "GetCharacterSlave", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::CASAnimMasterComponent_eventGetCharacterSlave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::CASAnimMasterComponent_eventGetCharacterSlave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics
	{
		struct CASAnimMasterComponent_eventHandleMontageFinished_Parms
		{
			UAnimMontage* inMontage;
			bool bInterruptted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inMontage;
		static void NewProp_bInterruptted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::NewProp_inMontage = { "inMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventHandleMontageFinished_Parms, inMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::NewProp_bInterruptted_SetBit(void* Obj)
	{
		((CASAnimMasterComponent_eventHandleMontageFinished_Parms*)Obj)->bInterruptted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::NewProp_bInterruptted = { "bInterruptted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimMasterComponent_eventHandleMontageFinished_Parms), &Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::NewProp_bInterruptted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::NewProp_inMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::NewProp_bInterruptted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "HandleMontageFinished", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::CASAnimMasterComponent_eventHandleMontageFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::CASAnimMasterComponent_eventHandleMontageFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics
	{
		struct CASAnimMasterComponent_eventIsPlayingCombinedAnimation_Parms
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
	void Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimMasterComponent_eventIsPlayingCombinedAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimMasterComponent_eventIsPlayingCombinedAnimation_Parms), &Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "IsPlayingCombinedAnimation", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::CASAnimMasterComponent_eventIsPlayingCombinedAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::CASAnimMasterComponent_eventIsPlayingCombinedAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combinedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_combinedAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::NewProp_combinedAnim_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::NewProp_combinedAnim = { "combinedAnim", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventMulticastPlayAnimMontage_Parms, combinedAnim), Z_Construct_UScriptStruct_FCurrentCombinedAnim, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::NewProp_combinedAnim_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::NewProp_combinedAnim_MetaData) }; // 3231338234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::NewProp_combinedAnim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "MulticastPlayAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::PropPointers), sizeof(CASAnimMasterComponent_eventMulticastPlayAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASAnimMasterComponent_eventMulticastPlayAnimMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_slave;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::NewProp_slave = { "slave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventMulticastSlavePlayAnimMontage_Parms, slave), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventMulticastSlavePlayAnimMontage_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::NewProp_slave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "MulticastSlavePlayAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::PropPointers), sizeof(CASAnimMasterComponent_eventMulticastSlavePlayAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASAnimMasterComponent_eventMulticastSlavePlayAnimMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherCharachter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combineAnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_combineAnimTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_otherCharachter = { "otherCharachter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventPlayCombinedAnimation_Parms, otherCharachter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_combineAnimTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_combineAnimTag = { "combineAnimTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventPlayCombinedAnimation_Parms, combineAnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_combineAnimTag_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_combineAnimTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_otherCharachter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::NewProp_combineAnimTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "PlayCombinedAnimation", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::PropPointers), sizeof(CASAnimMasterComponent_eventPlayCombinedAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASAnimMasterComponent_eventPlayCombinedAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics
	{
		struct CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms
		{
			ACharacter* otherCharachter;
			FGameplayTag combineAnimTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherCharachter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combineAnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_combineAnimTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_otherCharachter = { "otherCharachter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms, otherCharachter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_combineAnimTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_combineAnimTag = { "combineAnimTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms, combineAnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_combineAnimTag_MetaData), Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_combineAnimTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms), &Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_otherCharachter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_combineAnimTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Tries to play the animation tagged as combineAnimationTag with OtherCharacter and returns wathever this \n\x09operation is successful*/" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
		{ "ToolTip", "Tries to play the animation tagged as combineAnimationTag with OtherCharacter and returns wathever this\n       operation is successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimMasterComponent, nullptr, "TryPlayCombinedAnimation", nullptr, nullptr, Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::CASAnimMasterComponent_eventTryPlayCombinedAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASAnimMasterComponent);
	UClass* Z_Construct_UClass_UCASAnimMasterComponent_NoRegister()
	{
		return UCASAnimMasterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCASAnimMasterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCombinedAnimationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerCombinedAnimationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCombinedAnimationEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerCombinedAnimationEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCombinedAnimationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombinedAnimationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCombinedAnimationEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombinedAnimationEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpSyncPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpSyncPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWarpDebug_MetaData[];
#endif
		static void NewProp_bShowWarpDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWarpDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterAnimsConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterAnimsConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAnim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingCombAnim_MetaData[];
#endif
		static void NewProp_bIsPlayingCombAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingCombAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASAnimMasterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCASAnimMasterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_CanPlayCombinedAnimWithCharacter, "CanPlayCombinedAnimWithCharacter" }, // 2471780422
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimEnded, "DispatchAnimEnded" }, // 3220606153
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_DispatchAnimStarted, "DispatchAnimStarted" }, // 1087220000
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterOwner, "GetCharacterOwner" }, // 3860181504
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterRelativedDirection, "GetCharacterRelativedDirection" }, // 3461405758
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_GetCharacterSlave, "GetCharacterSlave" }, // 198023552
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_HandleMontageFinished, "HandleMontageFinished" }, // 406223364
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_IsPlayingCombinedAnimation, "IsPlayingCombinedAnimation" }, // 1644339642
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_MulticastPlayAnimMontage, "MulticastPlayAnimMontage" }, // 3343748516
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_MulticastSlavePlayAnimMontage, "MulticastSlavePlayAnimMontage" }, // 2727942037
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_PlayCombinedAnimation, "PlayCombinedAnimation" }, // 586977036
		{ &Z_Construct_UFunction_UCASAnimMasterComponent_TryPlayCombinedAnimation, "TryPlayCombinedAnimation" }, // 3035869081
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "CASAnimMasterComponent.h" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationStarted_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationStarted = { "ServerCombinedAnimationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, ServerCombinedAnimationStarted), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationStarted_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationStarted_MetaData) }; // 1467119366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationEnded_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationEnded = { "ServerCombinedAnimationEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, ServerCombinedAnimationEnded), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationEnded_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationEnded_MetaData) }; // 776823741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationStarted_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationStarted = { "OnCombinedAnimationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, OnCombinedAnimationStarted), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationStarted_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationStarted_MetaData) }; // 1467119366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationEnded_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationEnded = { "OnCombinedAnimationEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, OnCombinedAnimationEnded), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationEnded_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationEnded_MetaData) }; // 776823741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_WarpSyncPoint_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_WarpSyncPoint = { "WarpSyncPoint", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, WarpSyncPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_WarpSyncPoint_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_WarpSyncPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug_SetBit(void* Obj)
	{
		((UCASAnimMasterComponent*)Obj)->bShowWarpDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug = { "bShowWarpDebug", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCASAnimMasterComponent), &Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_MasterAnimsConfig_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_MasterAnimsConfig = { "MasterAnimsConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, MasterAnimsConfig), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_MasterAnimsConfig_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_MasterAnimsConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_currentAnim_MetaData[] = {
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_currentAnim = { "currentAnim", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimMasterComponent, currentAnim), Z_Construct_UScriptStruct_FCurrentCombinedAnim, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_currentAnim_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_currentAnim_MetaData) }; // 3231338234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim_MetaData[] = {
		{ "ModuleRelativePath", "Public/CASAnimMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim_SetBit(void* Obj)
	{
		((UCASAnimMasterComponent*)Obj)->bIsPlayingCombAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim = { "bIsPlayingCombAnim", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCASAnimMasterComponent), &Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim_MetaData), Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCASAnimMasterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_ServerCombinedAnimationEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_OnCombinedAnimationEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_WarpSyncPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bShowWarpDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_MasterAnimsConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_currentAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimMasterComponent_Statics::NewProp_bIsPlayingCombAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASAnimMasterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASAnimMasterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASAnimMasterComponent_Statics::ClassParams = {
		&UCASAnimMasterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCASAnimMasterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASAnimMasterComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimMasterComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCASAnimMasterComponent()
	{
		if (!Z_Registration_Info_UClass_UCASAnimMasterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASAnimMasterComponent.OuterSingleton, Z_Construct_UClass_UCASAnimMasterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASAnimMasterComponent.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASAnimMasterComponent>()
	{
		return UCASAnimMasterComponent::StaticClass();
	}

	void UCASAnimMasterComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_currentAnim(TEXT("currentAnim"));
		static const FName Name_bIsPlayingCombAnim(TEXT("bIsPlayingCombAnim"));

		const bool bIsValid = true
			&& Name_currentAnim == ClassReps[(int32)ENetFields_Private::currentAnim].Property->GetFName()
			&& Name_bIsPlayingCombAnim == ClassReps[(int32)ENetFields_Private::bIsPlayingCombAnim].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCASAnimMasterComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASAnimMasterComponent);
	UCASAnimMasterComponent::~UCASAnimMasterComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCASAnimMasterComponent, UCASAnimMasterComponent::StaticClass, TEXT("UCASAnimMasterComponent"), &Z_Registration_Info_UClass_UCASAnimMasterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASAnimMasterComponent), 1964153641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_2983054551(TEXT("/Script/CombinedAnimationsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

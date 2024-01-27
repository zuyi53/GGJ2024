// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombinedAnimationsSystem/Public/CASAnimSlaveComponent.h"
#include "CombinedAnimationsSystem/Public/CASTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCASAnimSlaveComponent() {}
// Cross Module References
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimCondition_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimSlaveComponent();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimSlaveComponent_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedAnimsSlave();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CombinedAnimationsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UCASAnimSlaveComponent::execGetCharacterOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimSlaveComponent::execTryGetSlaveAnim)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_animTag);
		P_GET_STRUCT_REF(FCombinedAnimsSlave,Z_Param_Out_outSlave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetSlaveAnim(Z_Param_Out_animTag,Z_Param_Out_outSlave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimSlaveComponent::execCanStartCombinedAnimation)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_animTag);
		P_GET_OBJECT(ACharacter,Z_Param_animMaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartCombinedAnimation(Z_Param_Out_animTag,Z_Param_animMaster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimSlaveComponent::execSupportsAnimation)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_animTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsAnimation(Z_Param_Out_animTag);
		P_NATIVE_END;
	}
	void UCASAnimSlaveComponent::StaticRegisterNativesUCASAnimSlaveComponent()
	{
		UClass* Class = UCASAnimSlaveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartCombinedAnimation", &UCASAnimSlaveComponent::execCanStartCombinedAnimation },
			{ "GetCharacterOwner", &UCASAnimSlaveComponent::execGetCharacterOwner },
			{ "SupportsAnimation", &UCASAnimSlaveComponent::execSupportsAnimation },
			{ "TryGetSlaveAnim", &UCASAnimSlaveComponent::execTryGetSlaveAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics
	{
		struct CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms
		{
			FGameplayTag animTag;
			const ACharacter* animMaster;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animMaster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animMaster;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animTag_MetaData), Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animMaster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animMaster = { "animMaster", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms, animMaster), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animMaster_MetaData), Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animMaster_MetaData) };
	void Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms), &Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_animMaster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Returns True if the owner supports the animTag provided and\n\x09""all conditions are verified*/" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
		{ "ToolTip", "Returns True if the owner supports the animTag provided and\n       all conditions are verified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimSlaveComponent, nullptr, "CanStartCombinedAnimation", nullptr, nullptr, Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::CASAnimSlaveComponent_eventCanStartCombinedAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics
	{
		struct CASAnimSlaveComponent_eventGetCharacterOwner_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimSlaveComponent_eventGetCharacterOwner_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimSlaveComponent, nullptr, "GetCharacterOwner", nullptr, nullptr, Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::CASAnimSlaveComponent_eventGetCharacterOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::CASAnimSlaveComponent_eventGetCharacterOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics
	{
		struct CASAnimSlaveComponent_eventSupportsAnimation_Parms
		{
			FGameplayTag animTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimSlaveComponent_eventSupportsAnimation_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_animTag_MetaData), Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_animTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimSlaveComponent_eventSupportsAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimSlaveComponent_eventSupportsAnimation_Parms), &Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_animTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Returns True if an animation with the provided tags exists in the DB*/" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
		{ "ToolTip", "Returns True if an animation with the provided tags exists in the DB" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimSlaveComponent, nullptr, "SupportsAnimation", nullptr, nullptr, Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::CASAnimSlaveComponent_eventSupportsAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::CASAnimSlaveComponent_eventSupportsAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics
	{
		struct CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms
		{
			FGameplayTag animTag;
			FCombinedAnimsSlave outSlave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outSlave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_animTag_MetaData), Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_animTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_outSlave = { "outSlave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms, outSlave), Z_Construct_UScriptStruct_FCombinedAnimsSlave, METADATA_PARAMS(0, nullptr) }; // 3267781187
	void Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms), &Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_animTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_outSlave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Returns as outParam the quested animation*/" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
		{ "ToolTip", "Returns as outParam the quested animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimSlaveComponent, nullptr, "TryGetSlaveAnim", nullptr, nullptr, Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::CASAnimSlaveComponent_eventTryGetSlaveAnim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASAnimSlaveComponent);
	UClass* Z_Construct_UClass_UCASAnimSlaveComponent_NoRegister()
	{
		return UCASAnimSlaveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCASAnimSlaveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCombinedAnimationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombinedAnimationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCombinedAnimationEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombinedAnimationEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlaveAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlaveAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartingConditions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimStartingConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartingConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimStartingConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASAnimSlaveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCASAnimSlaveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCASAnimSlaveComponent_CanStartCombinedAnimation, "CanStartCombinedAnimation" }, // 396255059
		{ &Z_Construct_UFunction_UCASAnimSlaveComponent_GetCharacterOwner, "GetCharacterOwner" }, // 1942329695
		{ &Z_Construct_UFunction_UCASAnimSlaveComponent_SupportsAnimation, "SupportsAnimation" }, // 2681855180
		{ &Z_Construct_UFunction_UCASAnimSlaveComponent_TryGetSlaveAnim, "TryGetSlaveAnim" }, // 1289017927
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimSlaveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "CASAnimSlaveComponent.h" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationStarted_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationStarted = { "OnCombinedAnimationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimSlaveComponent, OnCombinedAnimationStarted), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationStarted_MetaData), Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationStarted_MetaData) }; // 1467119366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationEnded_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationEnded = { "OnCombinedAnimationEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimSlaveComponent, OnCombinedAnimationEnded), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationEnded_MetaData), Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationEnded_MetaData) }; // 776823741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_SlaveAnimations_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_SlaveAnimations = { "SlaveAnimations", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimSlaveComponent, SlaveAnimations), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_SlaveAnimations_MetaData), Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_SlaveAnimations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_Inner_MetaData[] = {
		{ "Category", "CAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_Inner = { "AnimStartingConditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCASAnimCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_Inner_MetaData), Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_MetaData[] = {
		{ "Category", "CAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimSlaveComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions = { "AnimStartingConditions", nullptr, (EPropertyFlags)0x0020088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimSlaveComponent, AnimStartingConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_MetaData), Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCASAnimSlaveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_OnCombinedAnimationEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_SlaveAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimSlaveComponent_Statics::NewProp_AnimStartingConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASAnimSlaveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASAnimSlaveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASAnimSlaveComponent_Statics::ClassParams = {
		&UCASAnimSlaveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCASAnimSlaveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASAnimSlaveComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimSlaveComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCASAnimSlaveComponent()
	{
		if (!Z_Registration_Info_UClass_UCASAnimSlaveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASAnimSlaveComponent.OuterSingleton, Z_Construct_UClass_UCASAnimSlaveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASAnimSlaveComponent.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASAnimSlaveComponent>()
	{
		return UCASAnimSlaveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASAnimSlaveComponent);
	UCASAnimSlaveComponent::~UCASAnimSlaveComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimSlaveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimSlaveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCASAnimSlaveComponent, UCASAnimSlaveComponent::StaticClass, TEXT("UCASAnimSlaveComponent"), &Z_Registration_Info_UClass_UCASAnimSlaveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASAnimSlaveComponent), 1995917055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimSlaveComponent_h_2711721932(TEXT("/Script/CombinedAnimationsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimSlaveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimSlaveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

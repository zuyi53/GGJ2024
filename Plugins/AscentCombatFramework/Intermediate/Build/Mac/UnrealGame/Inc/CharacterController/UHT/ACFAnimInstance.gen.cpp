// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "ACFActionTypes.h"
#include "Animation/ACFAnimTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAnimInstance() {}
// Cross Module References
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionsSet();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionState();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimInstance();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimInstance_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFIKLayer_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFMovesetLayer_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFOverlayLayer_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFRiderLayer_NoRegister();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMoveset();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayLayer();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FRiderLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	DEFINE_FUNCTION(UACFAnimInstance::execHandleTargetLocomotionStateChanged)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTargetLocomotionStateChanged(ELocomotionState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetDirectionFromAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_angle);
		P_GET_ENUM(EACFDirection,Z_Param_currentDirection);
		P_GET_UBOOL(Z_Param_bUseCurrentDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=P_THIS->GetDirectionFromAngle_Implementation(Z_Param_angle,EACFDirection(Z_Param_currentDirection),Z_Param_bUseCurrentDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetTurnInPlaceYawOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inYawOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTurnInPlaceYawOffset(Z_Param_inYawOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetStartDirection)
	{
		P_GET_ENUM(EACFDirection,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartDirection(EACFDirection(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetStartDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=P_THIS->GetStartDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetEnableHandIK)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableHandIK(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetEnableHandIK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableHandIK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetEnableFootIK)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableFootIK(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetEnableFootIK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableFootIK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execResetToDefaultOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execResetToDefaultMoveset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultMoveset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetCurrentOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetCurrentMovesetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentMovesetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetMovesetByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_movesetTag);
		P_GET_STRUCT_REF(FMoveset,Z_Param_Out_outMoveset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMovesetByTag(Z_Param_Out_movesetTag,Z_Param_Out_outMoveset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetCurrentMoveset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFMovesetLayer**)Z_Param__Result=P_THIS->GetCurrentMoveset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execIsVelocityOverrideByAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVelocityOverrideByAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execRemoveOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetMoveset)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MovesetTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveset(Z_Param_Out_MovesetTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetRidingLayer)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_overlayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRidingLayer(Z_Param_Out_overlayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execSetAnimationOverlay)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_overlayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationOverlay(Z_Param_Out_overlayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetAnimationOverlay)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_tag);
		P_GET_STRUCT_REF(FOverlayLayer,Z_Param_Out_outOverlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAnimationOverlay(Z_Param_Out_tag,Z_Param_Out_outOverlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetIsInAir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInAir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetIsCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCrouching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetTargetLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELocomotionState*)Z_Param__Result=P_THIS->GetTargetLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetCurrentLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELocomotionState*)Z_Param__Result=P_THIS->GetCurrentLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execIsLocalPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetTurnRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTurnRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetNormalizedSwimSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedSwimSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetNormalizedSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimInstance::execGetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDirection();
		P_NATIVE_END;
	}
	struct ACFAnimInstance_eventGetDirectionFromAngle_Parms
	{
		float angle;
		EACFDirection currentDirection;
		bool bUseCurrentDirection;
		EACFDirection ReturnValue;

		/** Constructor, initializes return property only **/
		ACFAnimInstance_eventGetDirectionFromAngle_Parms()
			: ReturnValue((EACFDirection)0)
		{
		}
	};
	static FName NAME_UACFAnimInstance_GetDirectionFromAngle = FName(TEXT("GetDirectionFromAngle"));
	EACFDirection UACFAnimInstance::GetDirectionFromAngle(float angle, EACFDirection currentDirection, bool bUseCurrentDirection)
	{
		ACFAnimInstance_eventGetDirectionFromAngle_Parms Parms;
		Parms.angle=angle;
		Parms.currentDirection=currentDirection;
		Parms.bUseCurrentDirection=bUseCurrentDirection ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFAnimInstance_GetDirectionFromAngle),&Parms);
		return Parms.ReturnValue;
	}
	void UACFAnimInstance::StaticRegisterNativesUACFAnimInstance()
	{
		UClass* Class = UACFAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationOverlay", &UACFAnimInstance::execGetAnimationOverlay },
			{ "GetCurrentLocomotionState", &UACFAnimInstance::execGetCurrentLocomotionState },
			{ "GetCurrentMoveset", &UACFAnimInstance::execGetCurrentMoveset },
			{ "GetCurrentMovesetTag", &UACFAnimInstance::execGetCurrentMovesetTag },
			{ "GetCurrentOverlay", &UACFAnimInstance::execGetCurrentOverlay },
			{ "GetDirection", &UACFAnimInstance::execGetDirection },
			{ "GetDirectionFromAngle", &UACFAnimInstance::execGetDirectionFromAngle },
			{ "GetEnableFootIK", &UACFAnimInstance::execGetEnableFootIK },
			{ "GetEnableHandIK", &UACFAnimInstance::execGetEnableHandIK },
			{ "GetIsCrouching", &UACFAnimInstance::execGetIsCrouching },
			{ "GetIsInAir", &UACFAnimInstance::execGetIsInAir },
			{ "GetMovesetByTag", &UACFAnimInstance::execGetMovesetByTag },
			{ "GetNormalizedSpeed", &UACFAnimInstance::execGetNormalizedSpeed },
			{ "GetNormalizedSwimSpeed", &UACFAnimInstance::execGetNormalizedSwimSpeed },
			{ "GetSpeed", &UACFAnimInstance::execGetSpeed },
			{ "GetStartDirection", &UACFAnimInstance::execGetStartDirection },
			{ "GetTargetLocomotionState", &UACFAnimInstance::execGetTargetLocomotionState },
			{ "GetTurnRate", &UACFAnimInstance::execGetTurnRate },
			{ "HandleTargetLocomotionStateChanged", &UACFAnimInstance::execHandleTargetLocomotionStateChanged },
			{ "IsLocalPlayer", &UACFAnimInstance::execIsLocalPlayer },
			{ "IsVelocityOverrideByAnim", &UACFAnimInstance::execIsVelocityOverrideByAnim },
			{ "RemoveOverlay", &UACFAnimInstance::execRemoveOverlay },
			{ "ResetToDefaultMoveset", &UACFAnimInstance::execResetToDefaultMoveset },
			{ "ResetToDefaultOverlay", &UACFAnimInstance::execResetToDefaultOverlay },
			{ "SetAnimationOverlay", &UACFAnimInstance::execSetAnimationOverlay },
			{ "SetEnableFootIK", &UACFAnimInstance::execSetEnableFootIK },
			{ "SetEnableHandIK", &UACFAnimInstance::execSetEnableHandIK },
			{ "SetMoveset", &UACFAnimInstance::execSetMoveset },
			{ "SetRidingLayer", &UACFAnimInstance::execSetRidingLayer },
			{ "SetStartDirection", &UACFAnimInstance::execSetStartDirection },
			{ "SetTurnInPlaceYawOffset", &UACFAnimInstance::execSetTurnInPlaceYawOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics
	{
		struct ACFAnimInstance_eventGetAnimationOverlay_Parms
		{
			FGameplayTag tag;
			FOverlayLayer outOverlay;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outOverlay;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetAnimationOverlay_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_tag_MetaData), Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_outOverlay = { "outOverlay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetAnimationOverlay_Parms, outOverlay), Z_Construct_UScriptStruct_FOverlayLayer, METADATA_PARAMS(0, nullptr) }; // 1874702207
	void Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetAnimationOverlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetAnimationOverlay_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_outOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// MOVESETS\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "MOVESETS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetAnimationOverlay", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::ACFAnimInstance_eventGetAnimationOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::ACFAnimInstance_eventGetAnimationOverlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics
	{
		struct ACFAnimInstance_eventGetCurrentLocomotionState_Parms
		{
			ELocomotionState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetCurrentLocomotionState_Parms, ReturnValue), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetCurrentLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::ACFAnimInstance_eventGetCurrentLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::ACFAnimInstance_eventGetCurrentLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics
	{
		struct ACFAnimInstance_eventGetCurrentMoveset_Parms
		{
			UACFMovesetLayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetCurrentMoveset_Parms, ReturnValue), Z_Construct_UClass_UACFMovesetLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetCurrentMoveset", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::ACFAnimInstance_eventGetCurrentMoveset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::ACFAnimInstance_eventGetCurrentMoveset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics
	{
		struct ACFAnimInstance_eventGetCurrentMovesetTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetCurrentMovesetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetCurrentMovesetTag", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::ACFAnimInstance_eventGetCurrentMovesetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::ACFAnimInstance_eventGetCurrentMovesetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics
	{
		struct ACFAnimInstance_eventGetCurrentOverlay_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetCurrentOverlay_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetCurrentOverlay", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::ACFAnimInstance_eventGetCurrentOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::ACFAnimInstance_eventGetCurrentOverlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics
	{
		struct ACFAnimInstance_eventGetDirection_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetDirection", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::ACFAnimInstance_eventGetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::ACFAnimInstance_eventGetDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentDirection;
		static void NewProp_bUseCurrentDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetDirectionFromAngle_Parms, angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_currentDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_currentDirection = { "currentDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetDirectionFromAngle_Parms, currentDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	void Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetDirectionFromAngle_Parms*)Obj)->bUseCurrentDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_bUseCurrentDirection = { "bUseCurrentDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetDirectionFromAngle_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetDirectionFromAngle_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_currentDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_currentDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_bUseCurrentDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetDirectionFromAngle", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::PropPointers), sizeof(ACFAnimInstance_eventGetDirectionFromAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAnimInstance_eventGetDirectionFromAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics
	{
		struct ACFAnimInstance_eventGetEnableFootIK_Parms
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
	void Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetEnableFootIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetEnableFootIK_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// IK\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "IK" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetEnableFootIK", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::ACFAnimInstance_eventGetEnableFootIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::ACFAnimInstance_eventGetEnableFootIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics
	{
		struct ACFAnimInstance_eventGetEnableHandIK_Parms
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
	void Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetEnableHandIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetEnableHandIK_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetEnableHandIK", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::ACFAnimInstance_eventGetEnableHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::ACFAnimInstance_eventGetEnableHandIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics
	{
		struct ACFAnimInstance_eventGetIsCrouching_Parms
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
	void Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetIsCrouching_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetIsCrouching_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetIsCrouching", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::ACFAnimInstance_eventGetIsCrouching_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::ACFAnimInstance_eventGetIsCrouching_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics
	{
		struct ACFAnimInstance_eventGetIsInAir_Parms
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
	void Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetIsInAir_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetIsInAir_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetIsInAir", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::ACFAnimInstance_eventGetIsInAir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::ACFAnimInstance_eventGetIsInAir_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetIsInAir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetIsInAir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics
	{
		struct ACFAnimInstance_eventGetMovesetByTag_Parms
		{
			FGameplayTag movesetTag;
			FMoveset outMoveset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movesetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_movesetTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outMoveset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_movesetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_movesetTag = { "movesetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetMovesetByTag_Parms, movesetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_movesetTag_MetaData), Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_movesetTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_outMoveset = { "outMoveset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetMovesetByTag_Parms, outMoveset), Z_Construct_UScriptStruct_FMoveset, METADATA_PARAMS(0, nullptr) }; // 4170589687
	void Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventGetMovesetByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventGetMovesetByTag_Parms), &Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_movesetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_outMoveset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetMovesetByTag", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::ACFAnimInstance_eventGetMovesetByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::ACFAnimInstance_eventGetMovesetByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics
	{
		struct ACFAnimInstance_eventGetNormalizedSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetNormalizedSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetNormalizedSpeed", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::ACFAnimInstance_eventGetNormalizedSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::ACFAnimInstance_eventGetNormalizedSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics
	{
		struct ACFAnimInstance_eventGetNormalizedSwimSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetNormalizedSwimSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetNormalizedSwimSpeed", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::ACFAnimInstance_eventGetNormalizedSwimSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::ACFAnimInstance_eventGetNormalizedSwimSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics
	{
		struct ACFAnimInstance_eventGetSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetSpeed", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::ACFAnimInstance_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::ACFAnimInstance_eventGetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics
	{
		struct ACFAnimInstance_eventGetStartDirection_Parms
		{
			EACFDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetStartDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetStartDirection", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::ACFAnimInstance_eventGetStartDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::ACFAnimInstance_eventGetStartDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetStartDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetStartDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics
	{
		struct ACFAnimInstance_eventGetTargetLocomotionState_Parms
		{
			ELocomotionState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetTargetLocomotionState_Parms, ReturnValue), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetTargetLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::ACFAnimInstance_eventGetTargetLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::ACFAnimInstance_eventGetTargetLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics
	{
		struct ACFAnimInstance_eventGetTurnRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventGetTurnRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "GetTurnRate", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::ACFAnimInstance_eventGetTurnRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::ACFAnimInstance_eventGetTurnRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_GetTurnRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_GetTurnRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics
	{
		struct ACFAnimInstance_eventHandleTargetLocomotionStateChanged_Parms
		{
			ELocomotionState newState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventHandleTargetLocomotionStateChanged_Parms, newState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::NewProp_newState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "HandleTargetLocomotionStateChanged", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::ACFAnimInstance_eventHandleTargetLocomotionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::ACFAnimInstance_eventHandleTargetLocomotionStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics
	{
		struct ACFAnimInstance_eventIsLocalPlayer_Parms
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
	void Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventIsLocalPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventIsLocalPlayer_Parms), &Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "IsLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::ACFAnimInstance_eventIsLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::ACFAnimInstance_eventIsLocalPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics
	{
		struct ACFAnimInstance_eventIsVelocityOverrideByAnim_Parms
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
	void Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventIsVelocityOverrideByAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventIsVelocityOverrideByAnim_Parms), &Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "IsVelocityOverrideByAnim", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::ACFAnimInstance_eventIsVelocityOverrideByAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::ACFAnimInstance_eventIsVelocityOverrideByAnim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "RemoveOverlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "ResetToDefaultMoveset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "ResetToDefaultOverlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics
	{
		struct ACFAnimInstance_eventSetAnimationOverlay_Parms
		{
			FGameplayTag overlayTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_overlayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::NewProp_overlayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::NewProp_overlayTag = { "overlayTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventSetAnimationOverlay_Parms, overlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::NewProp_overlayTag_MetaData), Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::NewProp_overlayTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::NewProp_overlayTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetAnimationOverlay", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::ACFAnimInstance_eventSetAnimationOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::ACFAnimInstance_eventSetAnimationOverlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics
	{
		struct ACFAnimInstance_eventSetEnableFootIK_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::NewProp_val_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventSetEnableFootIK_Parms*)Obj)->val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventSetEnableFootIK_Parms), &Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::NewProp_val_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetEnableFootIK", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::ACFAnimInstance_eventSetEnableFootIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::ACFAnimInstance_eventSetEnableFootIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics
	{
		struct ACFAnimInstance_eventSetEnableHandIK_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::NewProp_val_SetBit(void* Obj)
	{
		((ACFAnimInstance_eventSetEnableHandIK_Parms*)Obj)->val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAnimInstance_eventSetEnableHandIK_Parms), &Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::NewProp_val_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetEnableHandIK", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::ACFAnimInstance_eventSetEnableHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::ACFAnimInstance_eventSetEnableHandIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics
	{
		struct ACFAnimInstance_eventSetMoveset_Parms
		{
			FGameplayTag MovesetTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::NewProp_MovesetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::NewProp_MovesetTag = { "MovesetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventSetMoveset_Parms, MovesetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::NewProp_MovesetTag_MetaData), Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::NewProp_MovesetTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::NewProp_MovesetTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetMoveset", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::ACFAnimInstance_eventSetMoveset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::ACFAnimInstance_eventSetMoveset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetMoveset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetMoveset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics
	{
		struct ACFAnimInstance_eventSetRidingLayer_Parms
		{
			FGameplayTag overlayTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_overlayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::NewProp_overlayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::NewProp_overlayTag = { "overlayTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventSetRidingLayer_Parms, overlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::NewProp_overlayTag_MetaData), Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::NewProp_overlayTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::NewProp_overlayTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetRidingLayer", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::ACFAnimInstance_eventSetRidingLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::ACFAnimInstance_eventSetRidingLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics
	{
		struct ACFAnimInstance_eventSetStartDirection_Parms
		{
			EACFDirection val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventSetStartDirection_Parms, val), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::NewProp_val_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetStartDirection", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::ACFAnimInstance_eventSetStartDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::ACFAnimInstance_eventSetStartDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetStartDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetStartDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics
	{
		struct ACFAnimInstance_eventSetTurnInPlaceYawOffset_Parms
		{
			float inYawOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inYawOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::NewProp_inYawOffset = { "inYawOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAnimInstance_eventSetTurnInPlaceYawOffset_Parms, inYawOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::NewProp_inYawOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// ----- END CONFIG ---- //\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "----- END CONFIG ----" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimInstance, nullptr, "SetTurnInPlaceYawOffset", nullptr, nullptr, Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::ACFAnimInstance_eventSetTurnInPlaceYawOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::ACFAnimInstance_eventSetTurnInPlaceYawOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAnimInstance);
	UClass* Z_Construct_UClass_UACFAnimInstance_NoRegister()
	{
		return UACFAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UACFAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IsMovingSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffsetLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffsetLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionDeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionDeadZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaningFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaningFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetInterpSpeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MovesetLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RiderLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiderLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RiderLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKLayer_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_IKLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMoveset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentMoveset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentRiderLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentRiderLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMovesetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentMovesetInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentOverlayInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentOverlayInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentRiderInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentRiderInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMovementData_MetaData[];
#endif
		static void NewProp_bUpdateMovementData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMovementData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateLocationData_MetaData[];
#endif
		static void NewProp_bUpdateLocationData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateLocationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateRotationData_MetaData[];
#endif
		static void NewProp_bUpdateRotationData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSpeedData_MetaData[];
#endif
		static void NewProp_bUpdateSpeedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpeedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateAccelerationData_MetaData[];
#endif
		static void NewProp_bUpdateAccelerationData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateAccelerationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateAimData_MetaData[];
#endif
		static void NewProp_bUpdateAimData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateAimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateJumpData_MetaData[];
#endif
		static void NewProp_bUpdateJumpData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateJumpData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateLeaningData_MetaData[];
#endif
		static void NewProp_bUpdateLeaningData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateLeaningData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseAdditive_MetaData[];
#endif
		static void NewProp_bCanUseAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseAdditive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasCrouching_MetaData[];
#endif
		static void NewProp_bWasCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchChanged_MetaData[];
#endif
		static void NewProp_bCrouchChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnGround_MetaData[];
#endif
		static void NewProp_bIsOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalking_MetaData[];
#endif
		static void NewProp_bIsWalking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasWalking_MetaData[];
#endif
		static void NewProp_bWasWalking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWalkStateChanged_MetaData[];
#endif
		static void NewProp_bWalkStateChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStrafing_MetaData[];
#endif
		static void NewProp_bIsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSwimming_MetaData[];
#endif
		static void NewProp_bIsSwimming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSwimming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasMoving_MetaData[];
#endif
		static void NewProp_bWasMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionWithOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionWithOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaInputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedSwimSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedSwimSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpeed2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpeed2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpeed2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpeed2D;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedDirectionWithOffset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedDirectionWithOffset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedDirectionWithOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastSpeedDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSpeedDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastSpeedDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastSpeedDirectionWithOffset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSpeedDirectionWithOffset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastSpeedDirectionWithOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToApex_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToApex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedAccel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedAccel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalAccel2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalAccel2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastPivot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastPivot;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelerationDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AccelerationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableFootIK_MetaData[];
#endif
		static void NewProp_EnableFootIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFootIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableHandIK_MetaData[];
#endif
		static void NewProp_EnableHandIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableHandIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVelocityOverrideByAnim_MetaData[];
#endif
		static void NewProp_bVelocityOverrideByAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelocityOverrideByAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StopAnim;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonActions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonActions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonActions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CommonActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetsActions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetsActions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetsActions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MovesetsActions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredStartDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredStartDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredStartDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAnimInstance_GetAnimationOverlay, "GetAnimationOverlay" }, // 1598052106
		{ &Z_Construct_UFunction_UACFAnimInstance_GetCurrentLocomotionState, "GetCurrentLocomotionState" }, // 2208620228
		{ &Z_Construct_UFunction_UACFAnimInstance_GetCurrentMoveset, "GetCurrentMoveset" }, // 1969596305
		{ &Z_Construct_UFunction_UACFAnimInstance_GetCurrentMovesetTag, "GetCurrentMovesetTag" }, // 786573920
		{ &Z_Construct_UFunction_UACFAnimInstance_GetCurrentOverlay, "GetCurrentOverlay" }, // 1567152205
		{ &Z_Construct_UFunction_UACFAnimInstance_GetDirection, "GetDirection" }, // 483938958
		{ &Z_Construct_UFunction_UACFAnimInstance_GetDirectionFromAngle, "GetDirectionFromAngle" }, // 3763715106
		{ &Z_Construct_UFunction_UACFAnimInstance_GetEnableFootIK, "GetEnableFootIK" }, // 1751695786
		{ &Z_Construct_UFunction_UACFAnimInstance_GetEnableHandIK, "GetEnableHandIK" }, // 3356272944
		{ &Z_Construct_UFunction_UACFAnimInstance_GetIsCrouching, "GetIsCrouching" }, // 2464282352
		{ &Z_Construct_UFunction_UACFAnimInstance_GetIsInAir, "GetIsInAir" }, // 3871557473
		{ &Z_Construct_UFunction_UACFAnimInstance_GetMovesetByTag, "GetMovesetByTag" }, // 2483142046
		{ &Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSpeed, "GetNormalizedSpeed" }, // 3791205963
		{ &Z_Construct_UFunction_UACFAnimInstance_GetNormalizedSwimSpeed, "GetNormalizedSwimSpeed" }, // 2550451944
		{ &Z_Construct_UFunction_UACFAnimInstance_GetSpeed, "GetSpeed" }, // 3346975472
		{ &Z_Construct_UFunction_UACFAnimInstance_GetStartDirection, "GetStartDirection" }, // 410373157
		{ &Z_Construct_UFunction_UACFAnimInstance_GetTargetLocomotionState, "GetTargetLocomotionState" }, // 2058176972
		{ &Z_Construct_UFunction_UACFAnimInstance_GetTurnRate, "GetTurnRate" }, // 3095442758
		{ &Z_Construct_UFunction_UACFAnimInstance_HandleTargetLocomotionStateChanged, "HandleTargetLocomotionStateChanged" }, // 765960526
		{ &Z_Construct_UFunction_UACFAnimInstance_IsLocalPlayer, "IsLocalPlayer" }, // 3559055336
		{ &Z_Construct_UFunction_UACFAnimInstance_IsVelocityOverrideByAnim, "IsVelocityOverrideByAnim" }, // 3439726027
		{ &Z_Construct_UFunction_UACFAnimInstance_RemoveOverlay, "RemoveOverlay" }, // 2578873085
		{ &Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultMoveset, "ResetToDefaultMoveset" }, // 2703072208
		{ &Z_Construct_UFunction_UACFAnimInstance_ResetToDefaultOverlay, "ResetToDefaultOverlay" }, // 3780862387
		{ &Z_Construct_UFunction_UACFAnimInstance_SetAnimationOverlay, "SetAnimationOverlay" }, // 2675414090
		{ &Z_Construct_UFunction_UACFAnimInstance_SetEnableFootIK, "SetEnableFootIK" }, // 2548375872
		{ &Z_Construct_UFunction_UACFAnimInstance_SetEnableHandIK, "SetEnableHandIK" }, // 984803652
		{ &Z_Construct_UFunction_UACFAnimInstance_SetMoveset, "SetMoveset" }, // 4042891759
		{ &Z_Construct_UFunction_UACFAnimInstance_SetRidingLayer, "SetRidingLayer" }, // 761640824
		{ &Z_Construct_UFunction_UACFAnimInstance_SetStartDirection, "SetStartDirection" }, // 4134079783
		{ &Z_Construct_UFunction_UACFAnimInstance_SetTurnInPlaceYawOffset, "SetTurnInPlaceYawOffset" }, // 3275615112
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/ACFAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IsMovingSpeedThreshold_MetaData[] = {
		{ "Category", "ACF | Config" },
		{ "Comment", "// ----- CONFIG ---- //\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "----- CONFIG ----" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IsMovingSpeedThreshold = { "IsMovingSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, IsMovingSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IsMovingSpeedThreshold_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IsMovingSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffsetLimit_MetaData[] = {
		{ "Category", "ACF | Config" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffsetLimit = { "YawOffsetLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, YawOffsetLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffsetLimit_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffsetLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionDeadZone_MetaData[] = {
		{ "Category", "ACF | Config" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionDeadZone = { "DirectionDeadZone", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, DirectionDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionDeadZone_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionDeadZone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeaningFactor_MetaData[] = {
		{ "Category", "ACF | Config" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeaningFactor = { "LeaningFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, LeaningFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeaningFactor_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeaningFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRateSmoothing_MetaData[] = {
		{ "Category", "ACF | Config" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRateSmoothing = { "TurnRateSmoothing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, TurnRateSmoothing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRateSmoothing_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRateSmoothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffsetInterpSpeed_MetaData[] = {
		{ "Category", "ACF | Config" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffsetInterpSpeed = { "AimOffsetInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, AimOffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffsetInterpSpeed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffsetInterpSpeed_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers_Inner = { "MovesetLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMoveset, METADATA_PARAMS(0, nullptr) }; // 4170589687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "TitleProperty", "TagName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers = { "MovesetLayers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, MovesetLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers_MetaData) }; // 4170589687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers_Inner = { "OverlayLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOverlayLayer, METADATA_PARAMS(0, nullptr) }; // 1874702207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "TitleProperty", "TagName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers = { "OverlayLayers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, OverlayLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers_MetaData) }; // 1874702207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers_Inner = { "RiderLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRiderLayer, METADATA_PARAMS(0, nullptr) }; // 3097526794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "TitleProperty", "TagName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers = { "RiderLayers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, RiderLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers_MetaData) }; // 3097526794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IKLayer_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IKLayer = { "IKLayer", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, IKLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFIKLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IKLayer_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IKLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMoveset_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "Comment", "// ----- READ ONLY VARIABLES ---- //\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "----- READ ONLY VARIABLES ----" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMoveset = { "currentMoveset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, currentMoveset), Z_Construct_UScriptStruct_FMoveset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMoveset_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMoveset_MetaData) }; // 4170589687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlay_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlay = { "currentOverlay", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, currentOverlay), Z_Construct_UScriptStruct_FOverlayLayer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlay_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlay_MetaData) }; // 1874702207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderLayer_MetaData[] = {
		{ "Category", "ACF | Movesets" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderLayer = { "currentRiderLayer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, currentRiderLayer), Z_Construct_UScriptStruct_FRiderLayer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderLayer_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderLayer_MetaData) }; // 3097526794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMovesetInstance_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "// Instances\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "Instances" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMovesetInstance = { "currentMovesetInstance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, currentMovesetInstance), Z_Construct_UClass_UACFMovesetLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMovesetInstance_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMovesetInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlayInstance_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlayInstance = { "currentOverlayInstance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, currentOverlayInstance), Z_Construct_UClass_UACFOverlayLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlayInstance_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlayInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderInstance_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderInstance = { "currentRiderInstance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, currentRiderInstance), Z_Construct_UClass_UACFRiderLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderInstance_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateMovementData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData = { "bUpdateMovementData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateLocationData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData = { "bUpdateLocationData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateRotationData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData = { "bUpdateRotationData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateSpeedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData = { "bUpdateSpeedData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateAccelerationData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData = { "bUpdateAccelerationData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateAimData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData = { "bUpdateAimData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateJumpData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData = { "bUpdateJumpData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData_MetaData[] = {
		{ "Category", "ACF | Updates" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bUpdateLeaningData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData = { "bUpdateLeaningData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bCanUseAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive = { "bCanUseAdditive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bWasCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching = { "bWasCrouching", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bCrouchChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged = { "bCrouchChanged", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround = { "bIsOnGround", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsWalking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking = { "bIsWalking", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bWasWalking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking = { "bWasWalking", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bWalkStateChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged = { "bWalkStateChanged", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing = { "bIsStrafing", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsSwimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming = { "bIsSwimming", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Displacement_MetaData[] = {
		{ "Category", "ACF | Location" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, Displacement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Displacement_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Displacement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DisplacementDelta_MetaData[] = {
		{ "Category", "ACF | Location" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DisplacementDelta = { "DisplacementDelta", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, DisplacementDelta), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DisplacementDelta_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DisplacementDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerLocation_MetaData[] = {
		{ "Category", "ACF | Location" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerLocation = { "OwnerLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, OwnerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerLocation_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerRotation_MetaData[] = {
		{ "Category", "ACF | Rotation" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerRotation = { "OwnerRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, OwnerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerRotation_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousRotation_MetaData[] = {
		{ "Category", "ACF | Rotation" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousRotation = { "PreviousRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, PreviousRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousRotation_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "ACF | Rotation" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawSpeed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawDelta_MetaData[] = {
		{ "Category", "ACF | Rotation" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, YawDelta), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawDelta_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffset_MetaData[] = {
		{ "Category", "ACF | Rotation" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, YawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffset_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bWasMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving = { "bWasMoving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Direction_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionWithOffset_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionWithOffset = { "DirectionWithOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, DirectionWithOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionWithOffset_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionWithOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DeltaInputDirection_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DeltaInputDirection = { "DeltaInputDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, DeltaInputDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DeltaInputDirection_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DeltaInputDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSpeed_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSpeed = { "NormalizedSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, NormalizedSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSpeed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousSpeed_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousSpeed = { "PreviousSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, PreviousSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousSpeed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSwimSpeed_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSwimSpeed = { "NormalizedSwimSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, NormalizedSwimSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSwimSpeed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSwimSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed = { "WorldSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, WorldSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed2D_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed2D = { "WorldSpeed2D", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, WorldSpeed2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed2D_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalSpeed2D_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalSpeed2D = { "LocalSpeed2D", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, LocalSpeed2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalSpeed2D_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalSpeed2D_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection = { "SpeedDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, SpeedDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection_MetaData) }; // 1707824474
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset = { "SpeedDirectionWithOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, SpeedDirectionWithOffset), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset_MetaData) }; // 1707824474
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection = { "LastSpeedDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, LastSpeedDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection_MetaData) }; // 1707824474
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset_MetaData[] = {
		{ "Category", "ACF | Velocity" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset = { "LastSpeedDirectionWithOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, LastSpeedDirectionWithOffset), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset_MetaData) }; // 1707824474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "ACF | AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, AimOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffset_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "ACF | AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, TurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRate_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "ACF | Jump" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Category", "ACF | Jump" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "ACF | Jump" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "ACF | Jump" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_GroundDistance_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_GroundDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeToApex_MetaData[] = {
		{ "Category", "ACF | Jump" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeToApex = { "TimeToApex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, TimeToApex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeToApex_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeToApex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration2D_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration2D = { "Acceleration2D", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, Acceleration2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration2D_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedAccel_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedAccel = { "NormalizedAccel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, NormalizedAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedAccel_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedAccel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalAccel2D_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalAccel2D = { "LocalAccel2D", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, LocalAccel2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalAccel2D_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalAccel2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PivotDirection_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PivotDirection = { "PivotDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, PivotDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PivotDirection_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PivotDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeSinceLastPivot_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeSinceLastPivot = { "TimeSinceLastPivot", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, TimeSinceLastPivot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeSinceLastPivot_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeSinceLastPivot_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection = { "AccelerationDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, AccelerationDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection_MetaData) }; // 1707824474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeanAngle_MetaData[] = {
		{ "Category", "ACF | Leaning" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeanAngle = { "LeanAngle", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, LeanAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeanAngle_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeanAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK_MetaData[] = {
		{ "Category", "ACF | IK" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->EnableFootIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK = { "EnableFootIK", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK_MetaData[] = {
		{ "Category", "ACF | IK" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->EnableHandIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK = { "EnableHandIK", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CharacterOwner_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CharacterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, MovementComp), Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovementComp_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovementComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "// ----- DEPRECATED ---- //\n" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "----- DEPRECATED ----" },
	};
#endif
	void Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim_SetBit(void* Obj)
	{
		((UACFAnimInstance*)Obj)->bVelocityOverrideByAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim = { "bVelocityOverrideByAnim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFAnimInstance), &Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_StopAnim_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_StopAnim = { "StopAnim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, StopAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_StopAnim_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_StopAnim_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_ValueProp = { "CommonActions", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(0, nullptr) }; // 3894552089
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_Key_KeyProp = { "CommonActions_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_MetaData[] = {
		{ "Category", "ACF | DEPRECATED" },
		{ "Comment", "// ----- END DEPRECATED ---- //\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "MOVED IN ACTIONS MANAGER COMP!" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
		{ "ToolTip", "----- END DEPRECATED ----" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions = { "CommonActions", nullptr, (EPropertyFlags)0x0020088000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, CommonActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_MetaData) }; // 2083603574 3894552089
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_ValueProp = { "MovesetsActions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActionsSet, METADATA_PARAMS(0, nullptr) }; // 1774918187
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_Key_KeyProp = { "MovesetsActions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_MetaData[] = {
		{ "Category", "ACF | DEPRECATED" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "MOVED IN ACTIONS MANAGER COMP!" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions = { "MovesetsActions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, MovesetsActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_MetaData) }; // 2083603574 1774918187
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection_MetaData[] = {
		{ "Category", "ACF | Acceleration" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection = { "DesiredStartDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAnimInstance, DesiredStartDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection_MetaData), Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection_MetaData) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IsMovingSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffsetLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionDeadZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeaningFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRateSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffsetInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OverlayLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_RiderLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_IKLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMoveset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentMovesetInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentOverlayInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_currentRiderInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateMovementData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLocationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateRotationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateSpeedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAccelerationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateAimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateJumpData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bUpdateLeaningData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCanUseAdditive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bCrouchChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWalkStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsSwimming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Displacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DisplacementDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_OwnerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bWasMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DirectionWithOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DeltaInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PreviousSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedSwimSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_WorldSpeed2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalSpeed2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_SpeedDirectionWithOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LastSpeedDirectionWithOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_GroundDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeToApex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_Acceleration2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_NormalizedAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LocalAccel2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_PivotDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_TimeSinceLastPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_AccelerationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_LeanAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableFootIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_EnableHandIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_bVelocityOverrideByAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_StopAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_CommonActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_MovesetsActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAnimInstance_Statics::NewProp_DesiredStartDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAnimInstance_Statics::ClassParams = {
		&UACFAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UACFAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAnimInstance.OuterSingleton, Z_Construct_UClass_UACFAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAnimInstance.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFAnimInstance>()
	{
		return UACFAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAnimInstance);
	UACFAnimInstance::~UACFAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAnimInstance, UACFAnimInstance::StaticClass, TEXT("UACFAnimInstance"), &Z_Registration_Info_UClass_UACFAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAnimInstance), 1262764142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_2920821862(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

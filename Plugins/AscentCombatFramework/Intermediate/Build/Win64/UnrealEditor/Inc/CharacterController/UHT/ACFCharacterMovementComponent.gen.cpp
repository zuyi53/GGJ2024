// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFCharacterMovementComponent.h"
#include "ACFCCTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCharacterMovementComponent() {}
// Cross Module References
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EMontageReproductionType();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimInstance_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCharacterMovementComponent();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_EMovementStance();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ERotationMode();
	CHARACTERCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature();
	CHARACTERCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature();
	CHARACTERCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature();
	CHARACTERCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FACFLocomotionState();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAimOffset();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterGroundInfo();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMovStances();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConfiguration();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics
	{
		struct _Script_CharacterController_eventOnLocomotionStateChanged_Parms
		{
			ELocomotionState State;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CharacterController_eventOnLocomotionStateChanged_Parms, State), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharacterController, nullptr, "OnLocomotionStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnLocomotionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnLocomotionStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLocomotionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLocomotionStateChanged, ELocomotionState State)
{
	struct _Script_CharacterController_eventOnLocomotionStateChanged_Parms
	{
		ELocomotionState State;
	};
	_Script_CharacterController_eventOnLocomotionStateChanged_Parms Parms;
	Parms.State=State;
	OnLocomotionStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics
	{
		struct _Script_CharacterController_eventOnMoveStanceChanged_Parms
		{
			EMovementStance stance;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_stance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_stance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::NewProp_stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::NewProp_stance = { "stance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CharacterController_eventOnMoveStanceChanged_Parms, stance), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(0, nullptr) }; // 234945340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::NewProp_stance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::NewProp_stance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharacterController, nullptr, "OnMoveStanceChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnMoveStanceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnMoveStanceChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoveStanceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMoveStanceChanged, EMovementStance stance)
{
	struct _Script_CharacterController_eventOnMoveStanceChanged_Parms
	{
		EMovementStance stance;
	};
	_Script_CharacterController_eventOnMoveStanceChanged_Parms Parms;
	Parms.stance=stance;
	OnMoveStanceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics
	{
		struct _Script_CharacterController_eventOnRotationModeChanged_Parms
		{
			ERotationMode rotMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_rotMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_rotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::NewProp_rotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::NewProp_rotMode = { "rotMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CharacterController_eventOnRotationModeChanged_Parms, rotMode), Z_Construct_UEnum_CharacterController_ERotationMode, METADATA_PARAMS(0, nullptr) }; // 2125798087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::NewProp_rotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::NewProp_rotMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharacterController, nullptr, "OnRotationModeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnRotationModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnRotationModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRotationModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRotationModeChanged, ERotationMode rotMode)
{
	struct _Script_CharacterController_eventOnRotationModeChanged_Parms
	{
		ERotationMode rotMode;
	};
	_Script_CharacterController_eventOnRotationModeChanged_Parms Parms;
	Parms.rotMode=rotMode;
	OnRotationModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics
	{
		struct _Script_CharacterController_eventOnMovementModeChanged_Parms
		{
			TEnumAsByte<EMovementMode> newMovementMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::NewProp_newMovementMode = { "newMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CharacterController_eventOnMovementModeChanged_Parms, newMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 613518137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::NewProp_newMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharacterController, nullptr, "OnMovementModeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnMovementModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementModeChanged, EMovementMode newMovementMode)
{
	struct _Script_CharacterController_eventOnMovementModeChanged_Parms
	{
		TEnumAsByte<EMovementMode> newMovementMode;
	};
	_Script_CharacterController_eventOnMovementModeChanged_Parms Parms;
	Parms.newMovementMode=newMovementMode;
	OnMovementModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execClientsSetRotationMode)
	{
		P_GET_ENUM(ERotationMode,Z_Param_inRotMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsSetRotationMode_Implementation(ERotationMode(Z_Param_inRotMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execOnRep_IsStrafing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsStrafing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execOnRep_LocomotionStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LocomotionStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execOnRep_ReproductionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReproductionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execHandleStateChanged)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateChanged(ELocomotionState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execOnRep_CurrentLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execOnRep_LocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execCalculateCurrentSnapDirection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateCurrentSnapDirection(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execCalculateCurrentSnapMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateCurrentSnapMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execStopOverrideSpeedAndDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopOverrideSpeedAndDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execStartOverrideSpeedAndDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartOverrideSpeedAndDirection(Z_Param_Out_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execStopSnapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSnapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execStartSnapping)
	{
		P_GET_STRUCT_REF(FSnapConfiguration,Z_Param_Out_snapConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSnapping(Z_Param_Out_snapConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetMontageReprodutionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMontageReproductionType*)Z_Param__Result=P_THIS->GetMontageReprodutionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execSetMontageReprodutionType)
	{
		P_GET_ENUM(EMontageReproductionType,Z_Param_repType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMontageReprodutionType_Implementation(EMontageReproductionType(Z_Param_repType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execSetLocomotionStateSpeed)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_State);
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_swimSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocomotionStateSpeed_Implementation(ELocomotionState(Z_Param_State),Z_Param_speed,Z_Param_swimSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execSetLocomotionState)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocomotionState_Implementation(ELocomotionState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execResetToDefaultLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetAimOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAimOffset*)Z_Param__Result=P_THIS->GetAimOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCurrentInputDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=P_THIS->GetCurrentInputDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCurrentInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetTargetLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELocomotionState*)Z_Param__Result=P_THIS->GetTargetLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCameraMovementInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraMovementInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetWorldMovementInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldMovementInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetMoveRightAxis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveRightAxis();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetMoveForwardAxis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveForwardAxis();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execMoveUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execTurnAtRateLocal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRateLocal(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execLookUpAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execTurnAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execBrakeToPreviousState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BrakeToPreviousState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execAccelerateToNextState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AccelerateToNextState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execDeactivateCurrentLocomotionStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateCurrentLocomotionStance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execDeactivateLocomotionStance)
	{
		P_GET_ENUM(EMovementStance,Z_Param_locStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateLocomotionStance_Implementation(EMovementStance(Z_Param_locStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execActivateLocomotionStance)
	{
		P_GET_ENUM(EMovementStance,Z_Param_locStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateLocomotionStance_Implementation(EMovementStance(Z_Param_locStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execResetStrafeMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetStrafeMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execSetRotationMode)
	{
		P_GET_ENUM(ERotationMode,Z_Param_inRotMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationMode_Implementation(ERotationMode(Z_Param_inRotMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCharacterMaxSwimSpeedByState)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCharacterMaxSwimSpeedByState(ELocomotionState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCharacterMaxSpeedByState)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCharacterMaxSpeedByState(ELocomotionState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCurrentLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELocomotionState*)Z_Param__Result=P_THIS->GetCurrentLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execSetCanMove)
	{
		P_GET_UBOOL(Z_Param_inCanMove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanMove_Implementation(Z_Param_inCanMove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCanMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetRotationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERotationMode*)Z_Param__Result=P_THIS->GetRotationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execIsCharacterStrafing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterStrafing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCurrentMovementStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovementStance*)Z_Param__Result=P_THIS->GetCurrentMovementStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetCharacterMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCharacterMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetRotationRateYaw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRotationRateYaw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCharacterMovementComponent::execGetGroundInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCharacterGroundInfo*)Z_Param__Result=P_THIS->GetGroundInfo();
		P_NATIVE_END;
	}
	struct ACFCharacterMovementComponent_eventActivateLocomotionStance_Parms
	{
		EMovementStance locStance;
	};
	struct ACFCharacterMovementComponent_eventClientsSetRotationMode_Parms
	{
		ERotationMode inRotMode;
	};
	struct ACFCharacterMovementComponent_eventDeactivateLocomotionStance_Parms
	{
		EMovementStance locStance;
	};
	struct ACFCharacterMovementComponent_eventSetCanMove_Parms
	{
		bool inCanMove;
	};
	struct ACFCharacterMovementComponent_eventSetLocomotionState_Parms
	{
		ELocomotionState State;
	};
	struct ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms
	{
		ELocomotionState State;
		float speed;
		float swimSpeed;
	};
	struct ACFCharacterMovementComponent_eventSetMontageReprodutionType_Parms
	{
		EMontageReproductionType repType;
	};
	struct ACFCharacterMovementComponent_eventSetRotationMode_Parms
	{
		ERotationMode inRotMode;
	};
	static FName NAME_UACFCharacterMovementComponent_AccelerateToNextState = FName(TEXT("AccelerateToNextState"));
	void UACFCharacterMovementComponent::AccelerateToNextState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_AccelerateToNextState),NULL);
	}
	static FName NAME_UACFCharacterMovementComponent_ActivateLocomotionStance = FName(TEXT("ActivateLocomotionStance"));
	void UACFCharacterMovementComponent::ActivateLocomotionStance(EMovementStance locStance)
	{
		ACFCharacterMovementComponent_eventActivateLocomotionStance_Parms Parms;
		Parms.locStance=locStance;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_ActivateLocomotionStance),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_BrakeToPreviousState = FName(TEXT("BrakeToPreviousState"));
	void UACFCharacterMovementComponent::BrakeToPreviousState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_BrakeToPreviousState),NULL);
	}
	static FName NAME_UACFCharacterMovementComponent_ClientsSetRotationMode = FName(TEXT("ClientsSetRotationMode"));
	void UACFCharacterMovementComponent::ClientsSetRotationMode(ERotationMode const& inRotMode)
	{
		ACFCharacterMovementComponent_eventClientsSetRotationMode_Parms Parms;
		Parms.inRotMode=inRotMode;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_ClientsSetRotationMode),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance = FName(TEXT("DeactivateCurrentLocomotionStance"));
	void UACFCharacterMovementComponent::DeactivateCurrentLocomotionStance()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance),NULL);
	}
	static FName NAME_UACFCharacterMovementComponent_DeactivateLocomotionStance = FName(TEXT("DeactivateLocomotionStance"));
	void UACFCharacterMovementComponent::DeactivateLocomotionStance(EMovementStance locStance)
	{
		ACFCharacterMovementComponent_eventDeactivateLocomotionStance_Parms Parms;
		Parms.locStance=locStance;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_DeactivateLocomotionStance),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_SetCanMove = FName(TEXT("SetCanMove"));
	void UACFCharacterMovementComponent::SetCanMove(bool inCanMove)
	{
		ACFCharacterMovementComponent_eventSetCanMove_Parms Parms;
		Parms.inCanMove=inCanMove ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_SetCanMove),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_SetLocomotionState = FName(TEXT("SetLocomotionState"));
	void UACFCharacterMovementComponent::SetLocomotionState(ELocomotionState State)
	{
		ACFCharacterMovementComponent_eventSetLocomotionState_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_SetLocomotionState),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_SetLocomotionStateSpeed = FName(TEXT("SetLocomotionStateSpeed"));
	void UACFCharacterMovementComponent::SetLocomotionStateSpeed(ELocomotionState State, float speed, float swimSpeed)
	{
		ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms Parms;
		Parms.State=State;
		Parms.speed=speed;
		Parms.swimSpeed=swimSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_SetLocomotionStateSpeed),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_SetMontageReprodutionType = FName(TEXT("SetMontageReprodutionType"));
	void UACFCharacterMovementComponent::SetMontageReprodutionType(EMontageReproductionType repType)
	{
		ACFCharacterMovementComponent_eventSetMontageReprodutionType_Parms Parms;
		Parms.repType=repType;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_SetMontageReprodutionType),&Parms);
	}
	static FName NAME_UACFCharacterMovementComponent_SetRotationMode = FName(TEXT("SetRotationMode"));
	void UACFCharacterMovementComponent::SetRotationMode(ERotationMode inRotMode)
	{
		ACFCharacterMovementComponent_eventSetRotationMode_Parms Parms;
		Parms.inRotMode=inRotMode;
		ProcessEvent(FindFunctionChecked(NAME_UACFCharacterMovementComponent_SetRotationMode),&Parms);
	}
	void UACFCharacterMovementComponent::StaticRegisterNativesUACFCharacterMovementComponent()
	{
		UClass* Class = UACFCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccelerateToNextState", &UACFCharacterMovementComponent::execAccelerateToNextState },
			{ "ActivateLocomotionStance", &UACFCharacterMovementComponent::execActivateLocomotionStance },
			{ "BrakeToPreviousState", &UACFCharacterMovementComponent::execBrakeToPreviousState },
			{ "CalculateCurrentSnapDirection", &UACFCharacterMovementComponent::execCalculateCurrentSnapDirection },
			{ "CalculateCurrentSnapMultiplier", &UACFCharacterMovementComponent::execCalculateCurrentSnapMultiplier },
			{ "ClientsSetRotationMode", &UACFCharacterMovementComponent::execClientsSetRotationMode },
			{ "DeactivateCurrentLocomotionStance", &UACFCharacterMovementComponent::execDeactivateCurrentLocomotionStance },
			{ "DeactivateLocomotionStance", &UACFCharacterMovementComponent::execDeactivateLocomotionStance },
			{ "GetAimOffset", &UACFCharacterMovementComponent::execGetAimOffset },
			{ "GetCameraMovementInputVector", &UACFCharacterMovementComponent::execGetCameraMovementInputVector },
			{ "GetCanMove", &UACFCharacterMovementComponent::execGetCanMove },
			{ "GetCharacterMaxSpeed", &UACFCharacterMovementComponent::execGetCharacterMaxSpeed },
			{ "GetCharacterMaxSpeedByState", &UACFCharacterMovementComponent::execGetCharacterMaxSpeedByState },
			{ "GetCharacterMaxSwimSpeedByState", &UACFCharacterMovementComponent::execGetCharacterMaxSwimSpeedByState },
			{ "GetCurrentInputDirection", &UACFCharacterMovementComponent::execGetCurrentInputDirection },
			{ "GetCurrentInputVector", &UACFCharacterMovementComponent::execGetCurrentInputVector },
			{ "GetCurrentLocomotionState", &UACFCharacterMovementComponent::execGetCurrentLocomotionState },
			{ "GetCurrentMovementStance", &UACFCharacterMovementComponent::execGetCurrentMovementStance },
			{ "GetGroundInfo", &UACFCharacterMovementComponent::execGetGroundInfo },
			{ "GetMontageReprodutionType", &UACFCharacterMovementComponent::execGetMontageReprodutionType },
			{ "GetMoveForwardAxis", &UACFCharacterMovementComponent::execGetMoveForwardAxis },
			{ "GetMoveRightAxis", &UACFCharacterMovementComponent::execGetMoveRightAxis },
			{ "GetRotationMode", &UACFCharacterMovementComponent::execGetRotationMode },
			{ "GetRotationRateYaw", &UACFCharacterMovementComponent::execGetRotationRateYaw },
			{ "GetTargetLocomotionState", &UACFCharacterMovementComponent::execGetTargetLocomotionState },
			{ "GetWorldMovementInputVector", &UACFCharacterMovementComponent::execGetWorldMovementInputVector },
			{ "HandleStateChanged", &UACFCharacterMovementComponent::execHandleStateChanged },
			{ "IsCharacterStrafing", &UACFCharacterMovementComponent::execIsCharacterStrafing },
			{ "LookUpAtRate", &UACFCharacterMovementComponent::execLookUpAtRate },
			{ "MoveForward", &UACFCharacterMovementComponent::execMoveForward },
			{ "MoveRight", &UACFCharacterMovementComponent::execMoveRight },
			{ "MoveUp", &UACFCharacterMovementComponent::execMoveUp },
			{ "OnRep_CurrentLocomotionState", &UACFCharacterMovementComponent::execOnRep_CurrentLocomotionState },
			{ "OnRep_IsStrafing", &UACFCharacterMovementComponent::execOnRep_IsStrafing },
			{ "OnRep_LocomotionStance", &UACFCharacterMovementComponent::execOnRep_LocomotionStance },
			{ "OnRep_LocomotionState", &UACFCharacterMovementComponent::execOnRep_LocomotionState },
			{ "OnRep_ReproductionType", &UACFCharacterMovementComponent::execOnRep_ReproductionType },
			{ "ResetStrafeMovement", &UACFCharacterMovementComponent::execResetStrafeMovement },
			{ "ResetToDefaultLocomotionState", &UACFCharacterMovementComponent::execResetToDefaultLocomotionState },
			{ "SetCanMove", &UACFCharacterMovementComponent::execSetCanMove },
			{ "SetLocomotionState", &UACFCharacterMovementComponent::execSetLocomotionState },
			{ "SetLocomotionStateSpeed", &UACFCharacterMovementComponent::execSetLocomotionStateSpeed },
			{ "SetMontageReprodutionType", &UACFCharacterMovementComponent::execSetMontageReprodutionType },
			{ "SetRotationMode", &UACFCharacterMovementComponent::execSetRotationMode },
			{ "StartOverrideSpeedAndDirection", &UACFCharacterMovementComponent::execStartOverrideSpeedAndDirection },
			{ "StartSnapping", &UACFCharacterMovementComponent::execStartSnapping },
			{ "StopOverrideSpeedAndDirection", &UACFCharacterMovementComponent::execStopOverrideSpeedAndDirection },
			{ "StopSnapping", &UACFCharacterMovementComponent::execStopSnapping },
			{ "TurnAtRate", &UACFCharacterMovementComponent::execTurnAtRate },
			{ "TurnAtRateLocal", &UACFCharacterMovementComponent::execTurnAtRateLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "AccelerateToNextState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_locStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_locStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::NewProp_locStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::NewProp_locStance = { "locStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventActivateLocomotionStance_Parms, locStance), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(0, nullptr) }; // 234945340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::NewProp_locStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::NewProp_locStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "ActivateLocomotionStance", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventActivateLocomotionStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventActivateLocomotionStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "BrakeToPreviousState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics
	{
		struct ACFCharacterMovementComponent_eventCalculateCurrentSnapDirection_Parms
		{
			float deltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventCalculateCurrentSnapDirection_Parms, deltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventCalculateCurrentSnapDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::NewProp_deltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "CalculateCurrentSnapDirection", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::ACFCharacterMovementComponent_eventCalculateCurrentSnapDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::ACFCharacterMovementComponent_eventCalculateCurrentSnapDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics
	{
		struct ACFCharacterMovementComponent_eventCalculateCurrentSnapMultiplier_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventCalculateCurrentSnapMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "CalculateCurrentSnapMultiplier", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::ACFCharacterMovementComponent_eventCalculateCurrentSnapMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::ACFCharacterMovementComponent_eventCalculateCurrentSnapMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inRotMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inRotMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inRotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode = { "inRotMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventClientsSetRotationMode_Parms, inRotMode), Z_Construct_UEnum_CharacterController_ERotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode_MetaData), Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode_MetaData) }; // 2125798087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::NewProp_inRotMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "ClientsSetRotationMode", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventClientsSetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventClientsSetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "DeactivateCurrentLocomotionStance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_locStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_locStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::NewProp_locStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::NewProp_locStance = { "locStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventDeactivateLocomotionStance_Parms, locStance), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(0, nullptr) }; // 234945340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::NewProp_locStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::NewProp_locStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "DeactivateLocomotionStance", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventDeactivateLocomotionStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventDeactivateLocomotionStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics
	{
		struct ACFCharacterMovementComponent_eventGetAimOffset_Parms
		{
			FAimOffset ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetAimOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FAimOffset, METADATA_PARAMS(0, nullptr) }; // 1247321248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetAimOffset", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::ACFCharacterMovementComponent_eventGetAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::ACFCharacterMovementComponent_eventGetAimOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCameraMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCameraMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCameraMovementInputVector", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::ACFCharacterMovementComponent_eventGetCameraMovementInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::ACFCharacterMovementComponent_eventGetCameraMovementInputVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCanMove_Parms
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
	void Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacterMovementComponent_eventGetCanMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacterMovementComponent_eventGetCanMove_Parms), &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCanMove", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::ACFCharacterMovementComponent_eventGetCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::ACFCharacterMovementComponent_eventGetCanMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCharacterMaxSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCharacterMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCharacterMaxSpeed", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::ACFCharacterMovementComponent_eventGetCharacterMaxSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::ACFCharacterMovementComponent_eventGetCharacterMaxSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCharacterMaxSpeedByState_Parms
		{
			ELocomotionState State;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCharacterMaxSpeedByState_Parms, State), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCharacterMaxSpeedByState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCharacterMaxSpeedByState", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::ACFCharacterMovementComponent_eventGetCharacterMaxSpeedByState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::ACFCharacterMovementComponent_eventGetCharacterMaxSpeedByState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCharacterMaxSwimSpeedByState_Parms
		{
			ELocomotionState State;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCharacterMaxSwimSpeedByState_Parms, State), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCharacterMaxSwimSpeedByState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCharacterMaxSwimSpeedByState", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::ACFCharacterMovementComponent_eventGetCharacterMaxSwimSpeedByState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::ACFCharacterMovementComponent_eventGetCharacterMaxSwimSpeedByState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCurrentInputDirection_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCurrentInputDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCurrentInputDirection", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::ACFCharacterMovementComponent_eventGetCurrentInputDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::ACFCharacterMovementComponent_eventGetCurrentInputDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCurrentInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCurrentInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCurrentInputVector", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::ACFCharacterMovementComponent_eventGetCurrentInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::ACFCharacterMovementComponent_eventGetCurrentInputVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCurrentLocomotionState_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCurrentLocomotionState_Parms, ReturnValue), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCurrentLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::ACFCharacterMovementComponent_eventGetCurrentLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::ACFCharacterMovementComponent_eventGetCurrentLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics
	{
		struct ACFCharacterMovementComponent_eventGetCurrentMovementStance_Parms
		{
			EMovementStance ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetCurrentMovementStance_Parms, ReturnValue), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(0, nullptr) }; // 234945340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetCurrentMovementStance", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::ACFCharacterMovementComponent_eventGetCurrentMovementStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::ACFCharacterMovementComponent_eventGetCurrentMovementStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics
	{
		struct ACFCharacterMovementComponent_eventGetGroundInfo_Parms
		{
			FCharacterGroundInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetGroundInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharacterGroundInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData) }; // 152149194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// Returns the current ground info.  Calling this will update the ground info if it's out of date.\n" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Returns the current ground info.  Calling this will update the ground info if it's out of date." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetGroundInfo", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::ACFCharacterMovementComponent_eventGetGroundInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::ACFCharacterMovementComponent_eventGetGroundInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics
	{
		struct ACFCharacterMovementComponent_eventGetMontageReprodutionType_Parms
		{
			EMontageReproductionType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetMontageReprodutionType_Parms, ReturnValue), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, METADATA_PARAMS(0, nullptr) }; // 3954621547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetMontageReprodutionType", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::ACFCharacterMovementComponent_eventGetMontageReprodutionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::ACFCharacterMovementComponent_eventGetMontageReprodutionType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics
	{
		struct ACFCharacterMovementComponent_eventGetMoveForwardAxis_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetMoveForwardAxis_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetMoveForwardAxis", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::ACFCharacterMovementComponent_eventGetMoveForwardAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::ACFCharacterMovementComponent_eventGetMoveForwardAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics
	{
		struct ACFCharacterMovementComponent_eventGetMoveRightAxis_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetMoveRightAxis_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetMoveRightAxis", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::ACFCharacterMovementComponent_eventGetMoveRightAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::ACFCharacterMovementComponent_eventGetMoveRightAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics
	{
		struct ACFCharacterMovementComponent_eventGetRotationMode_Parms
		{
			ERotationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetRotationMode_Parms, ReturnValue), Z_Construct_UEnum_CharacterController_ERotationMode, METADATA_PARAMS(0, nullptr) }; // 2125798087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetRotationMode", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::ACFCharacterMovementComponent_eventGetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::ACFCharacterMovementComponent_eventGetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics
	{
		struct ACFCharacterMovementComponent_eventGetRotationRateYaw_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetRotationRateYaw_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetRotationRateYaw", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::ACFCharacterMovementComponent_eventGetRotationRateYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::ACFCharacterMovementComponent_eventGetRotationRateYaw_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics
	{
		struct ACFCharacterMovementComponent_eventGetTargetLocomotionState_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetTargetLocomotionState_Parms, ReturnValue), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetTargetLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::ACFCharacterMovementComponent_eventGetTargetLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::ACFCharacterMovementComponent_eventGetTargetLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics
	{
		struct ACFCharacterMovementComponent_eventGetWorldMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventGetWorldMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "GetWorldMovementInputVector", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::ACFCharacterMovementComponent_eventGetWorldMovementInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::ACFCharacterMovementComponent_eventGetWorldMovementInputVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics
	{
		struct ACFCharacterMovementComponent_eventHandleStateChanged_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventHandleStateChanged_Parms, newState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::NewProp_newState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "HandleStateChanged", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::ACFCharacterMovementComponent_eventHandleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::ACFCharacterMovementComponent_eventHandleStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics
	{
		struct ACFCharacterMovementComponent_eventIsCharacterStrafing_Parms
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
	void Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacterMovementComponent_eventIsCharacterStrafing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacterMovementComponent_eventIsCharacterStrafing_Parms), &Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "IsCharacterStrafing", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::ACFCharacterMovementComponent_eventIsCharacterStrafing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::ACFCharacterMovementComponent_eventIsCharacterStrafing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics
	{
		struct ACFCharacterMovementComponent_eventLookUpAtRate_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventLookUpAtRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "LookUpAtRate", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::ACFCharacterMovementComponent_eventLookUpAtRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::ACFCharacterMovementComponent_eventLookUpAtRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics
	{
		struct ACFCharacterMovementComponent_eventMoveForward_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventMoveForward_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::ACFCharacterMovementComponent_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::ACFCharacterMovementComponent_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics
	{
		struct ACFCharacterMovementComponent_eventMoveRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventMoveRight_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::ACFCharacterMovementComponent_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::ACFCharacterMovementComponent_eventMoveRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics
	{
		struct ACFCharacterMovementComponent_eventMoveUp_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventMoveUp_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "MoveUp", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::ACFCharacterMovementComponent_eventMoveUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::ACFCharacterMovementComponent_eventMoveUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "OnRep_CurrentLocomotionState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "OnRep_IsStrafing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "OnRep_LocomotionStance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "OnRep_LocomotionState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "OnRep_ReproductionType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "ResetStrafeMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "ResetToDefaultLocomotionState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics
	{
		static void NewProp_inCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inCanMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::NewProp_inCanMove_SetBit(void* Obj)
	{
		((ACFCharacterMovementComponent_eventSetCanMove_Parms*)Obj)->inCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::NewProp_inCanMove = { "inCanMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacterMovementComponent_eventSetCanMove_Parms), &Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::NewProp_inCanMove_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::NewProp_inCanMove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "SetCanMove", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventSetCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventSetCanMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventSetLocomotionState_Parms, State), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Sets the target locomotion State*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Sets the target locomotion State" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "SetLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventSetLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventSetLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_swimSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms, State), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_swimSpeed = { "swimSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms, swimSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::NewProp_swimSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "SetLocomotionStateSpeed", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventSetLocomotionStateSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_repType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_repType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::NewProp_repType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::NewProp_repType = { "repType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventSetMontageReprodutionType_Parms, repType), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, METADATA_PARAMS(0, nullptr) }; // 3954621547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::NewProp_repType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::NewProp_repType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "SetMontageReprodutionType", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventSetMontageReprodutionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventSetMontageReprodutionType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inRotMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inRotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::NewProp_inRotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::NewProp_inRotMode = { "inRotMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventSetRotationMode_Parms, inRotMode), Z_Construct_UEnum_CharacterController_ERotationMode, METADATA_PARAMS(0, nullptr) }; // 2125798087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::NewProp_inRotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::NewProp_inRotMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "SetRotationMode", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::PropPointers), sizeof(ACFCharacterMovementComponent_eventSetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacterMovementComponent_eventSetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics
	{
		struct ACFCharacterMovementComponent_eventStartOverrideSpeedAndDirection_Parms
		{
			FVector direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventStartOverrideSpeedAndDirection_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "StartOverrideSpeedAndDirection", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::ACFCharacterMovementComponent_eventStartOverrideSpeedAndDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::ACFCharacterMovementComponent_eventStartOverrideSpeedAndDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics
	{
		struct ACFCharacterMovementComponent_eventStartSnapping_Parms
		{
			FSnapConfiguration snapConfiguration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snapConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_snapConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::NewProp_snapConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::NewProp_snapConfiguration = { "snapConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventStartSnapping_Parms, snapConfiguration), Z_Construct_UScriptStruct_FSnapConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::NewProp_snapConfiguration_MetaData), Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::NewProp_snapConfiguration_MetaData) }; // 3355177848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::NewProp_snapConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*DEPRECATED SOON*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "DEPRECATED SOON" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "StartSnapping", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::ACFCharacterMovementComponent_eventStartSnapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::ACFCharacterMovementComponent_eventStartSnapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "StopOverrideSpeedAndDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "StopSnapping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics
	{
		struct ACFCharacterMovementComponent_eventTurnAtRate_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventTurnAtRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "TurnAtRate", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::ACFCharacterMovementComponent_eventTurnAtRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::ACFCharacterMovementComponent_eventTurnAtRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics
	{
		struct ACFCharacterMovementComponent_eventTurnAtRateLocal_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacterMovementComponent_eventTurnAtRateLocal_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCharacterMovementComponent, nullptr, "TurnAtRateLocal", nullptr, nullptr, Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::ACFCharacterMovementComponent_eventTurnAtRateLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::ACFCharacterMovementComponent_eventTurnAtRateLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCharacterMovementComponent);
	UClass* Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister()
	{
		return UACFCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLocomotionStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocomotionStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetLocomotionStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetLocomotionStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementStanceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementStanceChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRotationModeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRotationModeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementModeChangedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementModeChangedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocomotionStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementStances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementStances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintDirectionCone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintDirectionCone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationCurvesScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationCurvesScalingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeedCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetAlpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_reproductionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reproductionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_reproductionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentMovestance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMovestance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentMovestance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetLocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocomotionState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentLocomotionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentLocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLocomotionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasReplicatedAcceleration_MetaData[];
#endif
		static void NewProp_bHasReplicatedAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReplicatedAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSnapConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentSnapConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snapMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_snapMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_AccelerateToNextState, "AccelerateToNextState" }, // 579422024
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_ActivateLocomotionStance, "ActivateLocomotionStance" }, // 3359696042
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_BrakeToPreviousState, "BrakeToPreviousState" }, // 2701050064
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapDirection, "CalculateCurrentSnapDirection" }, // 1431936259
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_CalculateCurrentSnapMultiplier, "CalculateCurrentSnapMultiplier" }, // 1507248146
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_ClientsSetRotationMode, "ClientsSetRotationMode" }, // 2832667621
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateCurrentLocomotionStance, "DeactivateCurrentLocomotionStance" }, // 1140148823
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_DeactivateLocomotionStance, "DeactivateLocomotionStance" }, // 2162308878
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetAimOffset, "GetAimOffset" }, // 760268323
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCameraMovementInputVector, "GetCameraMovementInputVector" }, // 3946787822
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCanMove, "GetCanMove" }, // 981528889
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeed, "GetCharacterMaxSpeed" }, // 1647819085
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSpeedByState, "GetCharacterMaxSpeedByState" }, // 1242682340
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCharacterMaxSwimSpeedByState, "GetCharacterMaxSwimSpeedByState" }, // 3787909796
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputDirection, "GetCurrentInputDirection" }, // 1053830318
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentInputVector, "GetCurrentInputVector" }, // 539843338
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentLocomotionState, "GetCurrentLocomotionState" }, // 2529346884
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetCurrentMovementStance, "GetCurrentMovementStance" }, // 1319611962
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetGroundInfo, "GetGroundInfo" }, // 1888472531
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetMontageReprodutionType, "GetMontageReprodutionType" }, // 3711038287
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveForwardAxis, "GetMoveForwardAxis" }, // 958435255
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetMoveRightAxis, "GetMoveRightAxis" }, // 2589062906
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationMode, "GetRotationMode" }, // 797793296
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetRotationRateYaw, "GetRotationRateYaw" }, // 3297246980
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetTargetLocomotionState, "GetTargetLocomotionState" }, // 4226823557
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_GetWorldMovementInputVector, "GetWorldMovementInputVector" }, // 2735030265
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_HandleStateChanged, "HandleStateChanged" }, // 3651628230
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_IsCharacterStrafing, "IsCharacterStrafing" }, // 2589088022
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_LookUpAtRate, "LookUpAtRate" }, // 893597261
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_MoveForward, "MoveForward" }, // 455325553
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_MoveRight, "MoveRight" }, // 105317683
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_MoveUp, "MoveUp" }, // 2393543448
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_CurrentLocomotionState, "OnRep_CurrentLocomotionState" }, // 2400607839
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_IsStrafing, "OnRep_IsStrafing" }, // 2091710985
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionStance, "OnRep_LocomotionStance" }, // 3668300726
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_LocomotionState, "OnRep_LocomotionState" }, // 1300829897
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_OnRep_ReproductionType, "OnRep_ReproductionType" }, // 1065398017
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_ResetStrafeMovement, "ResetStrafeMovement" }, // 1112396783
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_ResetToDefaultLocomotionState, "ResetToDefaultLocomotionState" }, // 2373505472
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_SetCanMove, "SetCanMove" }, // 3689241917
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionState, "SetLocomotionState" }, // 4098202797
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_SetLocomotionStateSpeed, "SetLocomotionStateSpeed" }, // 3911035449
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_SetMontageReprodutionType, "SetMontageReprodutionType" }, // 2535053719
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_SetRotationMode, "SetRotationMode" }, // 2407051572
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_StartOverrideSpeedAndDirection, "StartOverrideSpeedAndDirection" }, // 1166030223
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_StartSnapping, "StartSnapping" }, // 898029191
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_StopOverrideSpeedAndDirection, "StopOverrideSpeedAndDirection" }, // 1486723330
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_StopSnapping, "StopSnapping" }, // 3221105355
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRate, "TurnAtRate" }, // 3179640562
		{ &Z_Construct_UFunction_UACFCharacterMovementComponent_TurnAtRateLocal, "TurnAtRateLocal" }, // 224328192
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\x09The base character movement component class used by this project.\n */" },
		{ "IncludePath", "Components/ACFCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base character movement component class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnLocomotionStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnLocomotionStateChanged = { "OnLocomotionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, OnLocomotionStateChanged), Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnLocomotionStateChanged_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnLocomotionStateChanged_MetaData) }; // 4282630947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnTargetLocomotionStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnTargetLocomotionStateChanged = { "OnTargetLocomotionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, OnTargetLocomotionStateChanged), Z_Construct_UDelegateFunction_CharacterController_OnLocomotionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnTargetLocomotionStateChanged_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnTargetLocomotionStateChanged_MetaData) }; // 4282630947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementStanceChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementStanceChanged = { "OnMovementStanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, OnMovementStanceChanged), Z_Construct_UDelegateFunction_CharacterController_OnMoveStanceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementStanceChanged_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementStanceChanged_MetaData) }; // 3848925496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnRotationModeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnRotationModeChanged = { "OnRotationModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, OnRotationModeChanged), Z_Construct_UDelegateFunction_CharacterController_OnRotationModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnRotationModeChanged_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnRotationModeChanged_MetaData) }; // 1731422732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementModeChangedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementModeChangedEvent = { "OnMovementModeChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, OnMovementModeChangedEvent), Z_Construct_UDelegateFunction_CharacterController_OnMovementModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementModeChangedEvent_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementModeChangedEvent_MetaData) }; // 2585087294
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "ACF | Controller" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, TurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_TurnRate_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_TurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LookUpRate_MetaData[] = {
		{ "Category", "ACF | Controller" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LookUpRate = { "LookUpRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, LookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LookUpRate_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LookUpRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "Comment", "/**Indicates if this character can Move */" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Indicates if this character can Move" },
	};
#endif
	void Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((UACFCharacterMovementComponent*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0020080000010025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFCharacterMovementComponent), &Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "Comment", "/**Indicates the default locomtionstate*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Indicates the default locomtionstate" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState = { "DefaultState", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, DefaultState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState_MetaData) }; // 377914807
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "Comment", "/**Indicates if this character follows control rotation and strafes*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Indicates if this character follows control rotation and strafes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode = { "RotationMode", "OnRep_IsStrafing", (EPropertyFlags)0x0020080100010021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, RotationMode), Z_Construct_UEnum_CharacterController_ERotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode_MetaData) }; // 2125798087
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates_Inner = { "LocomotionStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FACFLocomotionState, METADATA_PARAMS(0, nullptr) }; // 3857924038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "Comment", "/**Indicates max speed for each locomtion state*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Indicates max speed for each locomtion state" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates = { "LocomotionStates", nullptr, (EPropertyFlags)0x0020080000010025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, LocomotionStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates_MetaData) }; // 3857924038
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances_Inner = { "MovementStances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovStances, METADATA_PARAMS(0, nullptr) }; // 2402003718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "Comment", "/**Movement stances like blocking, aiming, casting etc. */" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Movement stances like blocking, aiming, casting etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances = { "MovementStances", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, MovementStances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances_MetaData) }; // 2402003718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SprintDirectionCone_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "Comment", "/*Indicates the max angular distance from the cone that allows your character to sprint\n    (you cannot sprint backward)*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "Indicates the max angular distance from the cone that allows your character to sprint\n    (you cannot sprint backward)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SprintDirectionCone = { "SprintDirectionCone", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, SprintDirectionCone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SprintDirectionCone_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SprintDirectionCone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_GroundTraceDistance_MetaData[] = {
		{ "Category", "ACF | Movement" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_GroundTraceDistance = { "GroundTraceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, GroundTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_GroundTraceDistance_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_GroundTraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_AnimationCurvesScalingFactor_MetaData[] = {
		{ "Category", "ACF | DEPRECATED" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_AnimationCurvesScalingFactor = { "AnimationCurvesScalingFactor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, AnimationCurvesScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_AnimationCurvesScalingFactor_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_AnimationCurvesScalingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SpeedCurveName_MetaData[] = {
		{ "Category", "ACF | DEPRECATED" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SpeedCurveName = { "SpeedCurveName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, SpeedCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SpeedCurveName_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SpeedCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_CharacterMaxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_CharacterMaxSpeed = { "CharacterMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, CharacterMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_CharacterMaxSpeed_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_CharacterMaxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetAlpha = { "targetAlpha", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, targetAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetAlpha_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetAlpha_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType = { "reproductionType", "OnRep_ReproductionType", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, reproductionType), Z_Construct_UEnum_ActionsSystem_EMontageReproductionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType_MetaData) }; // 3954621547
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance = { "currentMovestance", "OnRep_LocomotionStance", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, currentMovestance), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance_MetaData) }; // 234945340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_animInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, animInstance), Z_Construct_UClass_UACFAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_animInstance_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_animInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetLocomotionState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetLocomotionState = { "targetLocomotionState", "OnRep_LocomotionState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, targetLocomotionState), Z_Construct_UScriptStruct_FACFLocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetLocomotionState_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetLocomotionState_MetaData) }; // 3857924038
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState = { "currentLocomotionState", "OnRep_CurrentLocomotionState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, currentLocomotionState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState_MetaData) }; // 377914807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UACFCharacterMovementComponent*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFCharacterMovementComponent), &Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit(void* Obj)
	{
		((UACFCharacterMovementComponent*)Obj)->bHasReplicatedAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration = { "bHasReplicatedAcceleration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFCharacterMovementComponent), &Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentSnapConfiguration_MetaData[] = {
		{ "Comment", "/*DEPRECATED*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
		{ "ToolTip", "DEPRECATED" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentSnapConfiguration = { "currentSnapConfiguration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, currentSnapConfiguration), Z_Construct_UScriptStruct_FSnapConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentSnapConfiguration_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentSnapConfiguration_MetaData) }; // 3355177848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_snapMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_snapMultiplier = { "snapMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCharacterMovementComponent, snapMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_snapMultiplier_MetaData), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_snapMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnLocomotionStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnTargetLocomotionStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementStanceChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnRotationModeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_OnMovementModeChangedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_TurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_DefaultState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_LocomotionStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_MovementStances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SprintDirectionCone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_GroundTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_AnimationCurvesScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_SpeedCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_CharacterMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_reproductionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentMovestance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_animInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_targetLocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentLocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_currentSnapConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCharacterMovementComponent_Statics::NewProp_snapMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCharacterMovementComponent_Statics::ClassParams = {
		&UACFCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UACFCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UACFCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCharacterMovementComponent.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFCharacterMovementComponent>()
	{
		return UACFCharacterMovementComponent::StaticClass();
	}

	void UACFCharacterMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bCanMove(TEXT("bCanMove"));
		static const FName Name_RotationMode(TEXT("RotationMode"));
		static const FName Name_LocomotionStates(TEXT("LocomotionStates"));
		static const FName Name_CharacterMaxSpeed(TEXT("CharacterMaxSpeed"));
		static const FName Name_targetAlpha(TEXT("targetAlpha"));
		static const FName Name_reproductionType(TEXT("reproductionType"));
		static const FName Name_currentMovestance(TEXT("currentMovestance"));
		static const FName Name_targetLocomotionState(TEXT("targetLocomotionState"));
		static const FName Name_currentLocomotionState(TEXT("currentLocomotionState"));

		const bool bIsValid = true
			&& Name_bCanMove == ClassReps[(int32)ENetFields_Private::bCanMove].Property->GetFName()
			&& Name_RotationMode == ClassReps[(int32)ENetFields_Private::RotationMode].Property->GetFName()
			&& Name_LocomotionStates == ClassReps[(int32)ENetFields_Private::LocomotionStates].Property->GetFName()
			&& Name_CharacterMaxSpeed == ClassReps[(int32)ENetFields_Private::CharacterMaxSpeed].Property->GetFName()
			&& Name_targetAlpha == ClassReps[(int32)ENetFields_Private::targetAlpha].Property->GetFName()
			&& Name_reproductionType == ClassReps[(int32)ENetFields_Private::reproductionType].Property->GetFName()
			&& Name_currentMovestance == ClassReps[(int32)ENetFields_Private::currentMovestance].Property->GetFName()
			&& Name_targetLocomotionState == ClassReps[(int32)ENetFields_Private::targetLocomotionState].Property->GetFName()
			&& Name_currentLocomotionState == ClassReps[(int32)ENetFields_Private::currentLocomotionState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFCharacterMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCharacterMovementComponent);
	UACFCharacterMovementComponent::~UACFCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCharacterMovementComponent, UACFCharacterMovementComponent::StaticClass, TEXT("UACFCharacterMovementComponent"), &Z_Registration_Info_UClass_UACFCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCharacterMovementComponent), 3430175383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_2175179822(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

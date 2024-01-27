// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystem/Public/ATSTargetingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATSTargetingComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSBaseTargetComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetingComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetingComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetingFilter_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetPointComponent_NoRegister();
	TARGETINGSYSTEM_API UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingDirection();
	TARGETINGSYSTEM_API UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingType();
	TARGETINGSYSTEM_API UEnum* Z_Construct_UEnum_TargetingSystem_ETargetSelectionType();
	TARGETINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature();
	TARGETINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics
	{
		struct _Script_TargetingSystem_eventOnTargetingStateChanged_Parms
		{
			bool bIsTargeting;
		};
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((_Script_TargetingSystem_eventOnTargetingStateChanged_Parms*)Obj)->bIsTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::NewProp_bIsTargeting = { "bIsTargeting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TargetingSystem_eventOnTargetingStateChanged_Parms), &Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::NewProp_bIsTargeting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem, nullptr, "OnTargetingStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::_Script_TargetingSystem_eventOnTargetingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::_Script_TargetingSystem_eventOnTargetingStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTargetingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetingStateChanged, bool bIsTargeting)
{
	struct _Script_TargetingSystem_eventOnTargetingStateChanged_Parms
	{
		bool bIsTargeting;
	};
	_Script_TargetingSystem_eventOnTargetingStateChanged_Parms Parms;
	Parms.bIsTargeting=bIsTargeting ? true : false;
	OnTargetingStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics
	{
		struct _Script_TargetingSystem_eventOnTargetChanged_Parms
		{
			const AActor* targetActor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::NewProp_targetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TargetingSystem_eventOnTargetChanged_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::NewProp_targetActor_MetaData), Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::NewProp_targetActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::NewProp_targetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem, nullptr, "OnTargetChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::_Script_TargetingSystem_eventOnTargetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::_Script_TargetingSystem_eventOnTargetChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTargetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetChanged, const AActor* targetActor)
{
	struct _Script_TargetingSystem_eventOnTargetChanged_Parms
	{
		const AActor* targetActor;
	};
	_Script_TargetingSystem_eventOnTargetChanged_Parms Parms;
	Parms.targetActor=targetActor;
	OnTargetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetingType;
	static UEnum* ETargetingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TargetingSystem_ETargetingType, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("ETargetingType"));
		}
		return Z_Registration_Info_UEnum_ETargetingType.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingType>()
	{
		return ETargetingType_StaticEnum();
	}
	struct Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::Enumerators[] = {
		{ "ETargetingType::EDontLock", (int64)ETargetingType::EDontLock },
		{ "ETargetingType::EMagneticLock", (int64)ETargetingType::EMagneticLock },
		{ "ETargetingType::EMagneticLockYawOnly", (int64)ETargetingType::EMagneticLockYawOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDontLock.DisplayName", "Don't Lock Camera" },
		{ "EDontLock.Name", "ETargetingType::EDontLock" },
		{ "EMagneticLock.DisplayName", "Adjust Camera Lock with Magnetism" },
		{ "EMagneticLock.Name", "ETargetingType::EMagneticLock" },
		{ "EMagneticLockYawOnly.DisplayName", "Adjust Camera Yaw Lock On Target" },
		{ "EMagneticLockYawOnly.Name", "ETargetingType::EMagneticLockYawOnly" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		"ETargetingType",
		"ETargetingType",
		Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingType()
	{
		if (!Z_Registration_Info_UEnum_ETargetingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetingType.InnerSingleton, Z_Construct_UEnum_TargetingSystem_ETargetingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetingDirection;
	static UEnum* ETargetingDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetingDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetingDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TargetingSystem_ETargetingDirection, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("ETargetingDirection"));
		}
		return Z_Registration_Info_UEnum_ETargetingDirection.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingDirection>()
	{
		return ETargetingDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::Enumerators[] = {
		{ "ETargetingDirection::ELeft", (int64)ETargetingDirection::ELeft },
		{ "ETargetingDirection::ERight", (int64)ETargetingDirection::ERight },
		{ "ETargetingDirection::EUp", (int64)ETargetingDirection::EUp },
		{ "ETargetingDirection::EDown", (int64)ETargetingDirection::EDown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDown.DisplayName", "Down" },
		{ "EDown.Name", "ETargetingDirection::EDown" },
		{ "ELeft.DisplayName", "Left" },
		{ "ELeft.Name", "ETargetingDirection::ELeft" },
		{ "ERight.DisplayName", "Right" },
		{ "ERight.Name", "ETargetingDirection::ERight" },
		{ "EUp.DisplayName", "Up" },
		{ "EUp.Name", "ETargetingDirection::EUp" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		"ETargetingDirection",
		"ETargetingDirection",
		Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingDirection()
	{
		if (!Z_Registration_Info_UEnum_ETargetingDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetingDirection.InnerSingleton, Z_Construct_UEnum_TargetingSystem_ETargetingDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetingDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetSelectionType;
	static UEnum* ETargetSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TargetingSystem_ETargetSelectionType, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("ETargetSelectionType"));
		}
		return Z_Registration_Info_UEnum_ETargetSelectionType.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetSelectionType>()
	{
		return ETargetSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::Enumerators[] = {
		{ "ETargetSelectionType::ENearestTarget", (int64)ETargetSelectionType::ENearestTarget },
		{ "ETargetSelectionType::EForwardTarget", (int64)ETargetSelectionType::EForwardTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EForwardTarget.DisplayName", "Choose Lower Degrees From Forward" },
		{ "EForwardTarget.Name", "ETargetSelectionType::EForwardTarget" },
		{ "ENearestTarget.DisplayName", "Choose Lower Distance " },
		{ "ENearestTarget.Name", "ETargetSelectionType::ENearestTarget" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		"ETargetSelectionType",
		"ETargetSelectionType",
		Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TargetingSystem_ETargetSelectionType()
	{
		if (!Z_Registration_Info_UEnum_ETargetSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetSelectionType.InnerSingleton, Z_Construct_UEnum_TargetingSystem_ETargetSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetSelectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execIsUpOfCurrentTarget)
	{
		P_GET_STRUCT(FVector,Z_Param_locationToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpOfCurrentTarget(Z_Param_locationToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execIsRightOfCurrentTarget)
	{
		P_GET_STRUCT(FVector,Z_Param_locationToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRightOfCurrentTarget(Z_Param_locationToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execGetBestTargetPointForTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UATSTargetPointComponent**)Z_Param__Result=P_THIS->GetBestTargetPointForTarget(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execUpdateCurrentTargetPoint)
	{
		P_GET_OBJECT(UATSTargetPointComponent,Z_Param_inCurrentTargetPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentTargetPoint(Z_Param_inCurrentTargetPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execUpdateTargeting)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTargeting(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execIsValidTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidTarget(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execGetNearestTarget)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetNearestTarget(Z_Param_Out_actorFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execTrySwitchPointOnCurrentTarget)
	{
		P_GET_ENUM(ETargetingDirection,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TrySwitchPointOnCurrentTarget(ETargetingDirection(Z_Param_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execGetAllTargetsByDirection)
	{
		P_GET_ENUM(ETargetingDirection,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllTargetsByDirection(ETargetingDirection(Z_Param_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execActivateTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateTargeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execHandlePawnChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_newPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePawnChanged(Z_Param_newPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execSetOwnerReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwnerReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execIsTargetingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execUpSearchTargetWithInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpSearchTargetWithInput(Z_Param_InputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execRightSearchTargetWithInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightSearchTargetWithInput(Z_Param_InputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execToggleTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleTargeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execRemoveObjectType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_inTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjectType(EObjectTypeQuery(Z_Param_inTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execAddObjectType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_inTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjectType(EObjectTypeQuery(Z_Param_inTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execRemoveFilter)
	{
		P_GET_OBJECT(UClass,Z_Param_filterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFilter(Z_Param_filterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execAddFilter)
	{
		P_GET_OBJECT(UClass,Z_Param_filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilter(Z_Param_filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSTargetingComponent::execTriggerTargeting)
	{
		P_GET_UBOOL(Z_Param_bActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTargeting(Z_Param_bActivate);
		P_NATIVE_END;
	}
	void UATSTargetingComponent::StaticRegisterNativesUATSTargetingComponent()
	{
		UClass* Class = UATSTargetingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTargeting", &UATSTargetingComponent::execActivateTargeting },
			{ "AddFilter", &UATSTargetingComponent::execAddFilter },
			{ "AddObjectType", &UATSTargetingComponent::execAddObjectType },
			{ "GetAllTargetsByDirection", &UATSTargetingComponent::execGetAllTargetsByDirection },
			{ "GetBestTargetPointForTarget", &UATSTargetingComponent::execGetBestTargetPointForTarget },
			{ "GetNearestTarget", &UATSTargetingComponent::execGetNearestTarget },
			{ "HandlePawnChanged", &UATSTargetingComponent::execHandlePawnChanged },
			{ "IsRightOfCurrentTarget", &UATSTargetingComponent::execIsRightOfCurrentTarget },
			{ "IsTargetingEnabled", &UATSTargetingComponent::execIsTargetingEnabled },
			{ "IsUpOfCurrentTarget", &UATSTargetingComponent::execIsUpOfCurrentTarget },
			{ "IsValidTarget", &UATSTargetingComponent::execIsValidTarget },
			{ "RemoveFilter", &UATSTargetingComponent::execRemoveFilter },
			{ "RemoveObjectType", &UATSTargetingComponent::execRemoveObjectType },
			{ "RightSearchTargetWithInput", &UATSTargetingComponent::execRightSearchTargetWithInput },
			{ "SetOwnerReferences", &UATSTargetingComponent::execSetOwnerReferences },
			{ "ToggleTargeting", &UATSTargetingComponent::execToggleTargeting },
			{ "TriggerTargeting", &UATSTargetingComponent::execTriggerTargeting },
			{ "TrySwitchPointOnCurrentTarget", &UATSTargetingComponent::execTrySwitchPointOnCurrentTarget },
			{ "UpdateCurrentTargetPoint", &UATSTargetingComponent::execUpdateCurrentTargetPoint },
			{ "UpdateTargeting", &UATSTargetingComponent::execUpdateTargeting },
			{ "UpSearchTargetWithInput", &UATSTargetingComponent::execUpSearchTargetWithInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "ActivateTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics
	{
		struct ATSTargetingComponent_eventAddFilter_Parms
		{
			TSubclassOf<UATSTargetingFilter>  filter;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventAddFilter_Parms, filter), Z_Construct_UClass_UClass, Z_Construct_UClass_UATSTargetingFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::NewProp_filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Used to add Filter for potential targets at runtime*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Used to add Filter for potential targets at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "AddFilter", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::ATSTargetingComponent_eventAddFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::ATSTargetingComponent_eventAddFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_AddFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_AddFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics
	{
		struct ATSTargetingComponent_eventAddObjectType_Parms
		{
			TEnumAsByte<EObjectTypeQuery> inTraceChannel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inTraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::NewProp_inTraceChannel = { "inTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventAddObjectType_Parms, inTraceChannel), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::NewProp_inTraceChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "AddObjectType", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::ATSTargetingComponent_eventAddObjectType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::ATSTargetingComponent_eventAddObjectType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_AddObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_AddObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics
	{
		struct ATSTargetingComponent_eventGetAllTargetsByDirection_Parms
		{
			ETargetingDirection direction;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventGetAllTargetsByDirection_Parms, direction), Z_Construct_UEnum_TargetingSystem_ETargetingDirection, METADATA_PARAMS(0, nullptr) }; // 1132843095
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventGetAllTargetsByDirection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "GetAllTargetsByDirection", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::ATSTargetingComponent_eventGetAllTargetsByDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::ATSTargetingComponent_eventGetAllTargetsByDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics
	{
		struct ATSTargetingComponent_eventGetBestTargetPointForTarget_Parms
		{
			AActor* target;
			UATSTargetPointComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventGetBestTargetPointForTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventGetBestTargetPointForTarget_Parms, ReturnValue), Z_Construct_UClass_UATSTargetPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "GetBestTargetPointForTarget", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::ATSTargetingComponent_eventGetBestTargetPointForTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::ATSTargetingComponent_eventGetBestTargetPointForTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics
	{
		struct ATSTargetingComponent_eventGetNearestTarget_Parms
		{
			TArray<AActor*> actorFilter;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorFilter_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_actorFilter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::NewProp_actorFilter_Inner = { "actorFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::NewProp_actorFilter = { "actorFilter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventGetNearestTarget_Parms, actorFilter), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventGetNearestTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::NewProp_actorFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::NewProp_actorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "GetNearestTarget", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::ATSTargetingComponent_eventGetNearestTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::ATSTargetingComponent_eventGetNearestTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics
	{
		struct ATSTargetingComponent_eventHandlePawnChanged_Parms
		{
			APawn* newPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::NewProp_newPawn = { "newPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventHandlePawnChanged_Parms, newPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::NewProp_newPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "HandlePawnChanged", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::ATSTargetingComponent_eventHandlePawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::ATSTargetingComponent_eventHandlePawnChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics
	{
		struct ATSTargetingComponent_eventIsRightOfCurrentTarget_Parms
		{
			FVector locationToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_locationToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::NewProp_locationToCheck = { "locationToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventIsRightOfCurrentTarget_Parms, locationToCheck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventIsRightOfCurrentTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventIsRightOfCurrentTarget_Parms), &Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::NewProp_locationToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "IsRightOfCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::ATSTargetingComponent_eventIsRightOfCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::ATSTargetingComponent_eventIsRightOfCurrentTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics
	{
		struct ATSTargetingComponent_eventIsTargetingEnabled_Parms
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
	void Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventIsTargetingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventIsTargetingEnabled_Parms), &Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Returns true if targeting mode is currently active*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Returns true if targeting mode is currently active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "IsTargetingEnabled", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::ATSTargetingComponent_eventIsTargetingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::ATSTargetingComponent_eventIsTargetingEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics
	{
		struct ATSTargetingComponent_eventIsUpOfCurrentTarget_Parms
		{
			FVector locationToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_locationToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::NewProp_locationToCheck = { "locationToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventIsUpOfCurrentTarget_Parms, locationToCheck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventIsUpOfCurrentTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventIsUpOfCurrentTarget_Parms), &Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::NewProp_locationToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "IsUpOfCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::ATSTargetingComponent_eventIsUpOfCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::ATSTargetingComponent_eventIsUpOfCurrentTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics
	{
		struct ATSTargetingComponent_eventIsValidTarget_Parms
		{
			AActor* target;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventIsValidTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventIsValidTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventIsValidTarget_Parms), &Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "IsValidTarget", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::ATSTargetingComponent_eventIsValidTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::ATSTargetingComponent_eventIsValidTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics
	{
		struct ATSTargetingComponent_eventRemoveFilter_Parms
		{
			TSubclassOf<UATSTargetingFilter>  filterClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_filterClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::NewProp_filterClass = { "filterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventRemoveFilter_Parms, filterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATSTargetingFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventRemoveFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventRemoveFilter_Parms), &Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::NewProp_filterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Used to remove a Filter for potential targets at runtime*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Used to remove a Filter for potential targets at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "RemoveFilter", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::ATSTargetingComponent_eventRemoveFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::ATSTargetingComponent_eventRemoveFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics
	{
		struct ATSTargetingComponent_eventRemoveObjectType_Parms
		{
			TEnumAsByte<EObjectTypeQuery> inTraceChannel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inTraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::NewProp_inTraceChannel = { "inTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventRemoveObjectType_Parms, inTraceChannel), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::NewProp_inTraceChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "RemoveObjectType", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::ATSTargetingComponent_eventRemoveObjectType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::ATSTargetingComponent_eventRemoveObjectType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics
	{
		struct ATSTargetingComponent_eventRightSearchTargetWithInput_Parms
		{
			float InputValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventRightSearchTargetWithInput_Parms, InputValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Used to search for another target on Left/right*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Used to search for another target on Left/right" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "RightSearchTargetWithInput", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::ATSTargetingComponent_eventRightSearchTargetWithInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::ATSTargetingComponent_eventRightSearchTargetWithInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "SetOwnerReferences", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Use this to toggle targeting mode*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Use this to toggle targeting mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "ToggleTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics
	{
		struct ATSTargetingComponent_eventTriggerTargeting_Parms
		{
			bool bActivate;
		};
		static void NewProp_bActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::NewProp_bActivate_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventTriggerTargeting_Parms*)Obj)->bActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventTriggerTargeting_Parms), &Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::NewProp_bActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Use this to trigger targeting mode*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Use this to trigger targeting mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "TriggerTargeting", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::ATSTargetingComponent_eventTriggerTargeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::ATSTargetingComponent_eventTriggerTargeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics
	{
		struct ATSTargetingComponent_eventTrySwitchPointOnCurrentTarget_Parms
		{
			ETargetingDirection direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventTrySwitchPointOnCurrentTarget_Parms, direction), Z_Construct_UEnum_TargetingSystem_ETargetingDirection, METADATA_PARAMS(0, nullptr) }; // 1132843095
	void Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingComponent_eventTrySwitchPointOnCurrentTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingComponent_eventTrySwitchPointOnCurrentTarget_Parms), &Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "TrySwitchPointOnCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::ATSTargetingComponent_eventTrySwitchPointOnCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::ATSTargetingComponent_eventTrySwitchPointOnCurrentTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics
	{
		struct ATSTargetingComponent_eventUpdateCurrentTargetPoint_Parms
		{
			UATSTargetPointComponent* inCurrentTargetPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inCurrentTargetPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inCurrentTargetPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::NewProp_inCurrentTargetPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::NewProp_inCurrentTargetPoint = { "inCurrentTargetPoint", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventUpdateCurrentTargetPoint_Parms, inCurrentTargetPoint), Z_Construct_UClass_UATSTargetPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::NewProp_inCurrentTargetPoint_MetaData), Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::NewProp_inCurrentTargetPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::NewProp_inCurrentTargetPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "UpdateCurrentTargetPoint", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::ATSTargetingComponent_eventUpdateCurrentTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::ATSTargetingComponent_eventUpdateCurrentTargetPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics
	{
		struct ATSTargetingComponent_eventUpdateTargeting_Parms
		{
			float deltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventUpdateTargeting_Parms, deltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "UpdateTargeting", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::ATSTargetingComponent_eventUpdateTargeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::ATSTargetingComponent_eventUpdateTargeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics
	{
		struct ATSTargetingComponent_eventUpSearchTargetWithInput_Parms
		{
			float InputValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingComponent_eventUpSearchTargetWithInput_Parms, InputValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Used to search for another target  Up/Down*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Used to search for another target  Up/Down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingComponent, nullptr, "UpSearchTargetWithInput", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::ATSTargetingComponent_eventUpSearchTargetWithInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::ATSTargetingComponent_eventUpSearchTargetWithInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATSTargetingComponent);
	UClass* Z_Construct_UClass_UATSTargetingComponent_NoRegister()
	{
		return UATSTargetingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UATSTargetingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTrasholdForSearch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputTrasholdForSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTargetingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTargetingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularDistanceDegree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularDistanceDegree;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSelectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSelectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSelectionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockMagnetism_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockMagnetism;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomPitchLimitDegree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomPitchLimitDegree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperPitchLimitDegree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperPitchLimitDegree;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectsToQuery_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToQuery_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsToQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFilters_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopTargetingIfOutOfSight_MetaData[];
#endif
		static void NewProp_bStopTargetingIfOutOfSight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopTargetingIfOutOfSight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetingStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_availableTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_availableTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_availableTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTarget_MetaData[];
#endif
		static void NewProp_bCanTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargeting_MetaData[];
#endif
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraManger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraManger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UATSTargetingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UATSBaseTargetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UATSTargetingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UATSTargetingComponent_ActivateTargeting, "ActivateTargeting" }, // 2680297293
		{ &Z_Construct_UFunction_UATSTargetingComponent_AddFilter, "AddFilter" }, // 890729014
		{ &Z_Construct_UFunction_UATSTargetingComponent_AddObjectType, "AddObjectType" }, // 1740886097
		{ &Z_Construct_UFunction_UATSTargetingComponent_GetAllTargetsByDirection, "GetAllTargetsByDirection" }, // 171389911
		{ &Z_Construct_UFunction_UATSTargetingComponent_GetBestTargetPointForTarget, "GetBestTargetPointForTarget" }, // 817991181
		{ &Z_Construct_UFunction_UATSTargetingComponent_GetNearestTarget, "GetNearestTarget" }, // 2601183655
		{ &Z_Construct_UFunction_UATSTargetingComponent_HandlePawnChanged, "HandlePawnChanged" }, // 2823992093
		{ &Z_Construct_UFunction_UATSTargetingComponent_IsRightOfCurrentTarget, "IsRightOfCurrentTarget" }, // 2035451302
		{ &Z_Construct_UFunction_UATSTargetingComponent_IsTargetingEnabled, "IsTargetingEnabled" }, // 3083247009
		{ &Z_Construct_UFunction_UATSTargetingComponent_IsUpOfCurrentTarget, "IsUpOfCurrentTarget" }, // 1633538464
		{ &Z_Construct_UFunction_UATSTargetingComponent_IsValidTarget, "IsValidTarget" }, // 440222912
		{ &Z_Construct_UFunction_UATSTargetingComponent_RemoveFilter, "RemoveFilter" }, // 2975863704
		{ &Z_Construct_UFunction_UATSTargetingComponent_RemoveObjectType, "RemoveObjectType" }, // 383472507
		{ &Z_Construct_UFunction_UATSTargetingComponent_RightSearchTargetWithInput, "RightSearchTargetWithInput" }, // 2732916732
		{ &Z_Construct_UFunction_UATSTargetingComponent_SetOwnerReferences, "SetOwnerReferences" }, // 2993927418
		{ &Z_Construct_UFunction_UATSTargetingComponent_ToggleTargeting, "ToggleTargeting" }, // 1422542263
		{ &Z_Construct_UFunction_UATSTargetingComponent_TriggerTargeting, "TriggerTargeting" }, // 3738570692
		{ &Z_Construct_UFunction_UATSTargetingComponent_TrySwitchPointOnCurrentTarget, "TrySwitchPointOnCurrentTarget" }, // 1054626729
		{ &Z_Construct_UFunction_UATSTargetingComponent_UpdateCurrentTargetPoint, "UpdateCurrentTargetPoint" }, // 2521624111
		{ &Z_Construct_UFunction_UATSTargetingComponent_UpdateTargeting, "UpdateTargeting" }, // 2348546146
		{ &Z_Construct_UFunction_UATSTargetingComponent_UpSearchTargetWithInput, "UpSearchTargetWithInput" }, // 4222464272
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ATS" },
		{ "IncludePath", "ATSTargetingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_InputTrasholdForSearch_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*InputThrashold to start looking for targets with input*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "InputThrashold to start looking for targets with input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_InputTrasholdForSearch = { "InputTrasholdForSearch", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, InputTrasholdForSearch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_InputTrasholdForSearch_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_InputTrasholdForSearch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxTargetingDistance_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*MaxDistance for target detection*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "MaxDistance for target detection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxTargetingDistance = { "MaxTargetingDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, MaxTargetingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxTargetingDistance_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxTargetingDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxAngularDistanceDegree_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*MaxAngular distance from OwnerActor for target detection*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "MaxAngular distance from OwnerActor for target detection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxAngularDistanceDegree = { "MaxAngularDistanceDegree", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, MaxAngularDistanceDegree), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxAngularDistanceDegree_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxAngularDistanceDegree_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Select if you prefer to choose the nearest target or\n\x09the one that is closer to your forward vector*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Select if you prefer to choose the nearest target or\n       the one that is closer to your forward vector" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType = { "TargetSelectionType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, TargetSelectionType), Z_Construct_UEnum_TargetingSystem_ETargetSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType_MetaData) }; // 2858195032
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Select your targeting type:\n\x09""Dont Lock = does not affect camera\n\x09Magnetic Lock = smooth camera lock on that interpolates thought the target\n\x09MagneticYawOnly = Affects only yaw for the camera*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Select your targeting type:\n       Dont Lock = does not affect camera\n       Magnetic Lock = smooth camera lock on that interpolates thought the target\n       MagneticYawOnly = Affects only yaw for the camera" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType = { "TargetingType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, TargetingType), Z_Construct_UEnum_TargetingSystem_ETargetingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType_MetaData) }; // 506841693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_LockMagnetism_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*If your target type is Magnetic Lock,\n\x09this will be the strength of the magnetism*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "If your target type is Magnetic Lock,\n       this will be the strength of the magnetism" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_LockMagnetism = { "LockMagnetism", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, LockMagnetism), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_LockMagnetism_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_LockMagnetism_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_BottomPitchLimitDegree_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Limit on camera pitch to avoid gimbal lock*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Limit on camera pitch to avoid gimbal lock" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_BottomPitchLimitDegree = { "BottomPitchLimitDegree", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, BottomPitchLimitDegree), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_BottomPitchLimitDegree_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_BottomPitchLimitDegree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_UpperPitchLimitDegree_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Limit on camera pitch to avoid gimbal lock*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Limit on camera pitch to avoid gimbal lock" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_UpperPitchLimitDegree = { "UpperPitchLimitDegree", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, UpperPitchLimitDegree), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_UpperPitchLimitDegree_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_UpperPitchLimitDegree_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery_Inner = { "ObjectsToQuery", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery_MetaData[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery = { "ObjectsToQuery", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, ObjectsToQuery), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_Inner_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Filters to avoid an acotr from being targeted*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Filters to avoid an acotr from being targeted" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_Inner = { "TargetFilters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UATSTargetingFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_Inner_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Filters to avoid an acotr from being targeted*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "Filters to avoid an acotr from being targeted" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters = { "TargetFilters", nullptr, (EPropertyFlags)0x002008800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, TargetFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*If your target sight to the target is interruptet by something, stop targeting*/" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
		{ "ToolTip", "If your target sight to the target is interruptet by something, stop targeting" },
	};
#endif
	void Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight_SetBit(void* Obj)
	{
		((UATSTargetingComponent*)Obj)->bStopTargetingIfOutOfSight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight = { "bStopTargetingIfOutOfSight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATSTargetingComponent), &Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetingStateChanged_MetaData[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetingStateChanged = { "OnTargetingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, OnTargetingStateChanged), Z_Construct_UDelegateFunction_TargetingSystem_OnTargetingStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetingStateChanged_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetingStateChanged_MetaData) }; // 2493510765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetChanged_MetaData[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetChanged = { "OnTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, OnTargetChanged), Z_Construct_UDelegateFunction_TargetingSystem_OnTargetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetChanged_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetChanged_MetaData) }; // 792180175
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets_Inner = { "availableTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets = { "availableTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, availableTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ControlledPawn_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ControlledPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget_SetBit(void* Obj)
	{
		((UATSTargetingComponent*)Obj)->bCanTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget = { "bCanTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATSTargetingComponent), &Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((UATSTargetingComponent*)Obj)->bIsTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting = { "bIsTargeting", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATSTargetingComponent), &Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_cameraManger_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATSTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_cameraManger = { "cameraManger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetingComponent, cameraManger), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_cameraManger_MetaData), Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_cameraManger_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATSTargetingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_InputTrasholdForSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxTargetingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_MaxAngularDistanceDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetSelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_LockMagnetism,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_BottomPitchLimitDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_UpperPitchLimitDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ObjectsToQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_TargetFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bStopTargetingIfOutOfSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetingStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_OnTargetChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_availableTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bCanTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_bIsTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetingComponent_Statics::NewProp_cameraManger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UATSTargetingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATSTargetingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UATSTargetingComponent_Statics::ClassParams = {
		&UATSTargetingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UATSTargetingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UATSTargetingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UATSTargetingComponent()
	{
		if (!Z_Registration_Info_UClass_UATSTargetingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATSTargetingComponent.OuterSingleton, Z_Construct_UClass_UATSTargetingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UATSTargetingComponent.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UATSTargetingComponent>()
	{
		return UATSTargetingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UATSTargetingComponent);
	UATSTargetingComponent::~UATSTargetingComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics::EnumInfo[] = {
		{ ETargetingType_StaticEnum, TEXT("ETargetingType"), &Z_Registration_Info_UEnum_ETargetingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 506841693U) },
		{ ETargetingDirection_StaticEnum, TEXT("ETargetingDirection"), &Z_Registration_Info_UEnum_ETargetingDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1132843095U) },
		{ ETargetSelectionType_StaticEnum, TEXT("ETargetSelectionType"), &Z_Registration_Info_UEnum_ETargetSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2858195032U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UATSTargetingComponent, UATSTargetingComponent::StaticClass, TEXT("UATSTargetingComponent"), &Z_Registration_Info_UClass_UATSTargetingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATSTargetingComponent), 927599886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_2006772114(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

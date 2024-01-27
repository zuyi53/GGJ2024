// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombinedAnimationsSystem/Public/CASTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCASTypes() {}
// Cross Module References
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASTypes();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASTypes_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UEnum* Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature();
	COMBINEDANIMATIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedAnimsMaster();
	COMBINEDANIMATIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedAnimsSlave();
	COMBINEDANIMATIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentCombinedAnim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CombinedAnimationsSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics
	{
		struct _Script_CombinedAnimationsSystem_eventOnCombinedAnimationStarted_Parms
		{
			FGameplayTag animTag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CombinedAnimationsSystem_eventOnCombinedAnimationStarted_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::NewProp_animTag_MetaData), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::NewProp_animTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::NewProp_animTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem, nullptr, "OnCombinedAnimationStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::_Script_CombinedAnimationsSystem_eventOnCombinedAnimationStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::_Script_CombinedAnimationsSystem_eventOnCombinedAnimationStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCombinedAnimationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCombinedAnimationStarted, FGameplayTag const& animTag)
{
	struct _Script_CombinedAnimationsSystem_eventOnCombinedAnimationStarted_Parms
	{
		FGameplayTag animTag;
	};
	_Script_CombinedAnimationsSystem_eventOnCombinedAnimationStarted_Parms Parms;
	Parms.animTag=animTag;
	OnCombinedAnimationStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics
	{
		struct _Script_CombinedAnimationsSystem_eventOnCombinedAnimationEnded_Parms
		{
			FGameplayTag animTag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CombinedAnimationsSystem_eventOnCombinedAnimationEnded_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::NewProp_animTag_MetaData), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::NewProp_animTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::NewProp_animTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem, nullptr, "OnCombinedAnimationEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::_Script_CombinedAnimationsSystem_eventOnCombinedAnimationEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::_Script_CombinedAnimationsSystem_eventOnCombinedAnimationEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CombinedAnimationsSystem_OnCombinedAnimationEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCombinedAnimationEnded_DelegateWrapper(const FMulticastScriptDelegate& OnCombinedAnimationEnded, FGameplayTag const& animTag)
{
	struct _Script_CombinedAnimationsSystem_eventOnCombinedAnimationEnded_Parms
	{
		FGameplayTag animTag;
	};
	_Script_CombinedAnimationsSystem_eventOnCombinedAnimationEnded_Parms Parms;
	Parms.animTag=animTag;
	OnCombinedAnimationEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERelativeDirection;
	static UEnum* ERelativeDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERelativeDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERelativeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection, (UObject*)Z_Construct_UPackage__Script_CombinedAnimationsSystem(), TEXT("ERelativeDirection"));
		}
		return Z_Registration_Info_UEnum_ERelativeDirection.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UEnum* StaticEnum<ERelativeDirection>()
	{
		return ERelativeDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::Enumerators[] = {
		{ "ERelativeDirection::EAny", (int64)ERelativeDirection::EAny },
		{ "ERelativeDirection::EFrontal", (int64)ERelativeDirection::EFrontal },
		{ "ERelativeDirection::EOpposite", (int64)ERelativeDirection::EOpposite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAny.DisplayName", "Any" },
		{ "EAny.Name", "ERelativeDirection::EAny" },
		{ "EFrontal.DisplayName", "Facing Each Other Only" },
		{ "EFrontal.Name", "ERelativeDirection::EFrontal" },
		{ "EOpposite.DisplayName", "From Behind" },
		{ "EOpposite.Name", "ERelativeDirection::EOpposite" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
		nullptr,
		"ERelativeDirection",
		"ERelativeDirection",
		Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection()
	{
		if (!Z_Registration_Info_UEnum_ERelativeDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERelativeDirection.InnerSingleton, Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERelativeDirection.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCombinedAnimsMaster>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombinedAnimsMaster cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombinedAnimsMaster;
class UScriptStruct* FCombinedAnimsMaster::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombinedAnimsMaster.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombinedAnimsMaster.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombinedAnimsMaster, (UObject*)Z_Construct_UPackage__Script_CombinedAnimationsSystem(), TEXT("CombinedAnimsMaster"));
	}
	return Z_Registration_Info_UScriptStruct_CombinedAnimsMaster.OuterSingleton;
}
template<> COMBINEDANIMATIONSSYSTEM_API UScriptStruct* StaticStruct<FCombinedAnimsMaster>()
{
	return FCombinedAnimsMaster::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceToStartWarping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToStartWarping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceToStartCombinedAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToStartCombinedAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpRotationTimeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpRotationTimeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxis_MetaData[];
#endif
		static void NewProp_bIgnoreZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlaveRequiredDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlaveRequiredDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlaveRequiredDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlaveForcedDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlaveForcedDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlaveForcedDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombinedAnimsMaster>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_AnimTag_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*The tag of this combind anim */" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "The tag of this combind anim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_AnimTag = { "AnimTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, AnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_AnimTag_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_AnimTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MasterAnimMontage_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*The montage to be playd on master */" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "The montage to be playd on master" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MasterAnimMontage = { "MasterAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, MasterAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MasterAnimMontage_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MasterAnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartWarping_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Max distance between master and slave characters to start snapping throught\n    the start position*/" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "Max distance between master and slave characters to start snapping throught\n    the start position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartWarping = { "MaxDistanceToStartWarping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, MaxDistanceToStartWarping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartWarping_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartWarping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartCombinedAnimation_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartCombinedAnimation = { "MaxDistanceToStartCombinedAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, MaxDistanceToStartCombinedAnimation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartCombinedAnimation_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartCombinedAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpTime_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Time to reachthe other character for the combined anim in seconds*/" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "Time to reachthe other character for the combined anim in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpTime = { "WarpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, WarpTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpTime_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpRotationTimeMultiplier_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Time to reach the desired rotation toward the slave. The lower the faster*/" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "Time to reach the desired rotation toward the slave. The lower the faster" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpRotationTimeMultiplier = { "WarpRotationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, WarpRotationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpRotationTimeMultiplier_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpRotationTimeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Time to reachthe other character for the combined anim in seconds*/" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "Time to reachthe other character for the combined anim in seconds" },
	};
#endif
	void Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis_SetBit(void* Obj)
	{
		((FCombinedAnimsMaster*)Obj)->bIgnoreZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis = { "bIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCombinedAnimsMaster), &Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*If the slave is not in this relative direction to the master,\n    the animation combined cannot start. Select Any to ignore this check*/" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "If the slave is not in this relative direction to the master,\n    the animation combined cannot start. Select Any to ignore this check" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection = { "SlaveRequiredDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, SlaveRequiredDirection), Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection_MetaData) }; // 3524777489
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*Once the animation starts, the slaved character will be rotated to this direction.*/" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "Once the animation starts, the slaved character will be rotated to this direction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection = { "SlaveForcedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsMaster, SlaveForcedDirection), Z_Construct_UEnum_CombinedAnimationsSystem_ERelativeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection_MetaData) }; // 3524777489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_AnimTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MasterAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartWarping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_MaxDistanceToStartCombinedAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_WarpRotationTimeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_bIgnoreZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveRequiredDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewProp_SlaveForcedDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombinedAnimsMaster",
		Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::PropPointers),
		sizeof(FCombinedAnimsMaster),
		alignof(FCombinedAnimsMaster),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCombinedAnimsMaster()
	{
		if (!Z_Registration_Info_UScriptStruct_CombinedAnimsMaster.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombinedAnimsMaster.InnerSingleton, Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombinedAnimsMaster.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCombinedAnimsSlave>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombinedAnimsSlave cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombinedAnimsSlave;
class UScriptStruct* FCombinedAnimsSlave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombinedAnimsSlave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombinedAnimsSlave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombinedAnimsSlave, (UObject*)Z_Construct_UPackage__Script_CombinedAnimationsSystem(), TEXT("CombinedAnimsSlave"));
	}
	return Z_Registration_Info_UScriptStruct_CombinedAnimsSlave.OuterSingleton;
}
template<> COMBINEDANIMATIONSSYSTEM_API UScriptStruct* StaticStruct<FCombinedAnimsSlave>()
{
	return FCombinedAnimsSlave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterAnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombinedAnimsSlave>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_AnimTag_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*The tag of this combind anim */" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "The tag of this combind anim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_AnimTag = { "AnimTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsSlave, AnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_AnimTag_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_AnimTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_MasterAnimMontage_MetaData[] = {
		{ "Category", "CAS" },
		{ "Comment", "/*The montage to be playd on slave */" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
		{ "ToolTip", "The montage to be playd on slave" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_MasterAnimMontage = { "MasterAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedAnimsSlave, MasterAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_MasterAnimMontage_MetaData), Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_MasterAnimMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_AnimTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewProp_MasterAnimMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombinedAnimsSlave",
		Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::PropPointers),
		sizeof(FCombinedAnimsSlave),
		alignof(FCombinedAnimsSlave),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCombinedAnimsSlave()
	{
		if (!Z_Registration_Info_UScriptStruct_CombinedAnimsSlave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombinedAnimsSlave.InnerSingleton, Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombinedAnimsSlave.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurrentCombinedAnim;
class UScriptStruct* FCurrentCombinedAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurrentCombinedAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurrentCombinedAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrentCombinedAnim, (UObject*)Z_Construct_UPackage__Script_CombinedAnimationsSystem(), TEXT("CurrentCombinedAnim"));
	}
	return Z_Registration_Info_UScriptStruct_CurrentCombinedAnim.OuterSingleton;
}
template<> COMBINEDANIMATIONSSYSTEM_API UScriptStruct* StaticStruct<FCurrentCombinedAnim>()
{
	return FCurrentCombinedAnim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterAnimConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MasterAnimConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSlave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrentCombinedAnim>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_WarpTransform_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_WarpTransform = { "WarpTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentCombinedAnim, WarpTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_WarpTransform_MetaData), Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_WarpTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_MasterAnimConfig_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_MasterAnimConfig = { "MasterAnimConfig", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentCombinedAnim, MasterAnimConfig), Z_Construct_UScriptStruct_FCombinedAnimsMaster, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_MasterAnimConfig_MetaData), Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_MasterAnimConfig_MetaData) }; // 3641640219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimTag_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimTag = { "AnimTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentCombinedAnim, AnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimTag_MetaData), Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimSlave_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimSlave = { "AnimSlave", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurrentCombinedAnim, AnimSlave), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimSlave_MetaData), Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimSlave_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_WarpTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_MasterAnimConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewProp_AnimSlave,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
		nullptr,
		&NewStructOps,
		"CurrentCombinedAnim",
		Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::PropPointers),
		sizeof(FCurrentCombinedAnim),
		alignof(FCurrentCombinedAnim),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCurrentCombinedAnim()
	{
		if (!Z_Registration_Info_UScriptStruct_CurrentCombinedAnim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurrentCombinedAnim.InnerSingleton, Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurrentCombinedAnim.InnerSingleton;
	}
	void UCASTypes::StaticRegisterNativesUCASTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASTypes);
	UClass* Z_Construct_UClass_UCASTypes_NoRegister()
	{
		return UCASTypes::StaticClass();
	}
	struct Z_Construct_UClass_UCASTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "CASTypes.h" },
		{ "ModuleRelativePath", "Public/CASTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASTypes_Statics::ClassParams = {
		&UCASTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCASTypes()
	{
		if (!Z_Registration_Info_UClass_UCASTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASTypes.OuterSingleton, Z_Construct_UClass_UCASTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASTypes.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASTypes>()
	{
		return UCASTypes::StaticClass();
	}
	UCASTypes::UCASTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASTypes);
	UCASTypes::~UCASTypes() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::EnumInfo[] = {
		{ ERelativeDirection_StaticEnum, TEXT("ERelativeDirection"), &Z_Registration_Info_UEnum_ERelativeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3524777489U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::ScriptStructInfo[] = {
		{ FCombinedAnimsMaster::StaticStruct, Z_Construct_UScriptStruct_FCombinedAnimsMaster_Statics::NewStructOps, TEXT("CombinedAnimsMaster"), &Z_Registration_Info_UScriptStruct_CombinedAnimsMaster, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombinedAnimsMaster), 3641640219U) },
		{ FCombinedAnimsSlave::StaticStruct, Z_Construct_UScriptStruct_FCombinedAnimsSlave_Statics::NewStructOps, TEXT("CombinedAnimsSlave"), &Z_Registration_Info_UScriptStruct_CombinedAnimsSlave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombinedAnimsSlave), 3267781187U) },
		{ FCurrentCombinedAnim::StaticStruct, Z_Construct_UScriptStruct_FCurrentCombinedAnim_Statics::NewStructOps, TEXT("CurrentCombinedAnim"), &Z_Registration_Info_UScriptStruct_CurrentCombinedAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurrentCombinedAnim), 3231338234U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCASTypes, UCASTypes::StaticClass, TEXT("UCASTypes"), &Z_Registration_Info_UClass_UCASTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASTypes), 2893620960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_789316666(TEXT("/Script/CombinedAnimationsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

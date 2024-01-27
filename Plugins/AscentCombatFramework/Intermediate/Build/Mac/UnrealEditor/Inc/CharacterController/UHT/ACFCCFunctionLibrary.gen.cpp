// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFCCFunctionLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCCFunctionLibrary() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCCFunctionLibrary();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCCFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execGetOppositeDirectionFromAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=UACFCCFunctionLibrary::GetOppositeDirectionFromAngle(Z_Param_angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execGetOppositeDirection)
	{
		P_GET_ENUM(EACFDirection,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=UACFCCFunctionLibrary::GetOppositeDirection(EACFDirection(Z_Param_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execGetDirectionFromAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=UACFCCFunctionLibrary::GetDirectionFromAngle(Z_Param_angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execIsValidAnimOverlayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFCCFunctionLibrary::IsValidAnimOverlayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execIsValidMovesetTypeTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFCCFunctionLibrary::IsValidMovesetTypeTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execGetAnimationOverlayTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFCCFunctionLibrary::GetAnimationOverlayTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCCFunctionLibrary::execGetMovesetTypeTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFCCFunctionLibrary::GetMovesetTypeTagRoot();
		P_NATIVE_END;
	}
	void UACFCCFunctionLibrary::StaticRegisterNativesUACFCCFunctionLibrary()
	{
		UClass* Class = UACFCCFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationOverlayTagRoot", &UACFCCFunctionLibrary::execGetAnimationOverlayTagRoot },
			{ "GetDirectionFromAngle", &UACFCCFunctionLibrary::execGetDirectionFromAngle },
			{ "GetMovesetTypeTagRoot", &UACFCCFunctionLibrary::execGetMovesetTypeTagRoot },
			{ "GetOppositeDirection", &UACFCCFunctionLibrary::execGetOppositeDirection },
			{ "GetOppositeDirectionFromAngle", &UACFCCFunctionLibrary::execGetOppositeDirectionFromAngle },
			{ "IsValidAnimOverlayTag", &UACFCCFunctionLibrary::execIsValidAnimOverlayTag },
			{ "IsValidMovesetTypeTag", &UACFCCFunctionLibrary::execIsValidMovesetTypeTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics
	{
		struct ACFCCFunctionLibrary_eventGetAnimationOverlayTagRoot_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetAnimationOverlayTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "GetAnimationOverlayTagRoot", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::ACFCCFunctionLibrary_eventGetAnimationOverlayTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::ACFCCFunctionLibrary_eventGetAnimationOverlayTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics
	{
		struct ACFCCFunctionLibrary_eventGetDirectionFromAngle_Parms
		{
			float angle;
			EACFDirection ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetDirectionFromAngle_Parms, angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetDirectionFromAngle_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::NewProp_angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "GetDirectionFromAngle", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::ACFCCFunctionLibrary_eventGetDirectionFromAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::ACFCCFunctionLibrary_eventGetDirectionFromAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics
	{
		struct ACFCCFunctionLibrary_eventGetMovesetTypeTagRoot_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetMovesetTypeTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "GetMovesetTypeTagRoot", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::ACFCCFunctionLibrary_eventGetMovesetTypeTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::ACFCCFunctionLibrary_eventGetMovesetTypeTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics
	{
		struct ACFCCFunctionLibrary_eventGetOppositeDirection_Parms
		{
			EACFDirection direction;
			EACFDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetOppositeDirection_Parms, direction), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetOppositeDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "GetOppositeDirection", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::ACFCCFunctionLibrary_eventGetOppositeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::ACFCCFunctionLibrary_eventGetOppositeDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics
	{
		struct ACFCCFunctionLibrary_eventGetOppositeDirectionFromAngle_Parms
		{
			float angle;
			EACFDirection ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetOppositeDirectionFromAngle_Parms, angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventGetOppositeDirectionFromAngle_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::NewProp_angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "GetOppositeDirectionFromAngle", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::ACFCCFunctionLibrary_eventGetOppositeDirectionFromAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::ACFCCFunctionLibrary_eventGetOppositeDirectionFromAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics
	{
		struct ACFCCFunctionLibrary_eventIsValidAnimOverlayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventIsValidAnimOverlayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCCFunctionLibrary_eventIsValidAnimOverlayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCCFunctionLibrary_eventIsValidAnimOverlayTag_Parms), &Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "IsValidAnimOverlayTag", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::ACFCCFunctionLibrary_eventIsValidAnimOverlayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::ACFCCFunctionLibrary_eventIsValidAnimOverlayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics
	{
		struct ACFCCFunctionLibrary_eventIsValidMovesetTypeTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCCFunctionLibrary_eventIsValidMovesetTypeTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCCFunctionLibrary_eventIsValidMovesetTypeTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCCFunctionLibrary_eventIsValidMovesetTypeTag_Parms), &Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCCFunctionLibrary, nullptr, "IsValidMovesetTypeTag", nullptr, nullptr, Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::ACFCCFunctionLibrary_eventIsValidMovesetTypeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::ACFCCFunctionLibrary_eventIsValidMovesetTypeTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCCFunctionLibrary);
	UClass* Z_Construct_UClass_UACFCCFunctionLibrary_NoRegister()
	{
		return UACFCCFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UACFCCFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCCFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCCFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_GetAnimationOverlayTagRoot, "GetAnimationOverlayTagRoot" }, // 1287736624
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_GetDirectionFromAngle, "GetDirectionFromAngle" }, // 214822882
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_GetMovesetTypeTagRoot, "GetMovesetTypeTagRoot" }, // 3972519019
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirection, "GetOppositeDirection" }, // 3055201940
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_GetOppositeDirectionFromAngle, "GetOppositeDirectionFromAngle" }, // 3586682910
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidAnimOverlayTag, "IsValidAnimOverlayTag" }, // 718954251
		{ &Z_Construct_UFunction_UACFCCFunctionLibrary_IsValidMovesetTypeTag, "IsValidMovesetTypeTag" }, // 3994496387
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCCFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFCCFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ACFCCFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCCFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCCFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCCFunctionLibrary_Statics::ClassParams = {
		&UACFCCFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCCFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFCCFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UACFCCFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCCFunctionLibrary.OuterSingleton, Z_Construct_UClass_UACFCCFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCCFunctionLibrary.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFCCFunctionLibrary>()
	{
		return UACFCCFunctionLibrary::StaticClass();
	}
	UACFCCFunctionLibrary::UACFCCFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCCFunctionLibrary);
	UACFCCFunctionLibrary::~UACFCCFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCCFunctionLibrary, UACFCCFunctionLibrary::StaticClass, TEXT("UACFCCFunctionLibrary"), &Z_Registration_Info_UClass_UACFCCFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCCFunctionLibrary), 1133847027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCFunctionLibrary_h_3677956678(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

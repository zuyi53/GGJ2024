// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFTeamManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFTeamManagerComponent() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamManagerComponent();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamManagerComponent_NoRegister();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamsConfigDataAsset_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EBattleType();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_AscentCoreInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(UACFTeamManagerComponent::execGetTeamsConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFTeamsConfigDataAsset**)Z_Param__Result=P_THIS->GetTeamsConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFTeamManagerComponent::execGetBattleType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBattleType*)Z_Param__Result=P_THIS->GetBattleType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFTeamManagerComponent::execIsEnemyTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_SelfTeam);
		P_GET_ENUM(ETeam,Z_Param_TargetTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnemyTeam(ETeam(Z_Param_SelfTeam),ETeam(Z_Param_TargetTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFTeamManagerComponent::execGetCollisionChannelByTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_Team);
		P_GET_UBOOL(Z_Param_getBlockinChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionChannelByTeam(ETeam(Z_Param_Team),Z_Param_getBlockinChannel);
		P_NATIVE_END;
	}
	void UACFTeamManagerComponent::StaticRegisterNativesUACFTeamManagerComponent()
	{
		UClass* Class = UACFTeamManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBattleType", &UACFTeamManagerComponent::execGetBattleType },
			{ "GetCollisionChannelByTeam", &UACFTeamManagerComponent::execGetCollisionChannelByTeam },
			{ "GetTeamsConfiguration", &UACFTeamManagerComponent::execGetTeamsConfiguration },
			{ "IsEnemyTeam", &UACFTeamManagerComponent::execIsEnemyTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics
	{
		struct ACFTeamManagerComponent_eventGetBattleType_Parms
		{
			EBattleType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFTeamManagerComponent_eventGetBattleType_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EBattleType, METADATA_PARAMS(0, nullptr) }; // 2151822261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTeamManagerComponent, nullptr, "GetBattleType", nullptr, nullptr, Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::ACFTeamManagerComponent_eventGetBattleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::ACFTeamManagerComponent_eventGetBattleType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics
	{
		struct ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms
		{
			ETeam Team;
			bool getBlockinChannel;
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static void NewProp_getBlockinChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_getBlockinChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms, Team), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	void Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_getBlockinChannel_SetBit(void* Obj)
	{
		((ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms*)Obj)->getBlockinChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_getBlockinChannel = { "getBlockinChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms), &Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_getBlockinChannel_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_getBlockinChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_getBlockinChannel", "false" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTeamManagerComponent, nullptr, "GetCollisionChannelByTeam", nullptr, nullptr, Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::ACFTeamManagerComponent_eventGetCollisionChannelByTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics
	{
		struct ACFTeamManagerComponent_eventGetTeamsConfiguration_Parms
		{
			UACFTeamsConfigDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFTeamManagerComponent_eventGetTeamsConfiguration_Parms, ReturnValue), Z_Construct_UClass_UACFTeamsConfigDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTeamManagerComponent, nullptr, "GetTeamsConfiguration", nullptr, nullptr, Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::ACFTeamManagerComponent_eventGetTeamsConfiguration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::ACFTeamManagerComponent_eventGetTeamsConfiguration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics
	{
		struct ACFTeamManagerComponent_eventIsEnemyTeam_Parms
		{
			ETeam SelfTeam;
			ETeam TargetTeam;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelfTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelfTeam;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetTeam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_SelfTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_SelfTeam = { "SelfTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFTeamManagerComponent_eventIsEnemyTeam_Parms, SelfTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_TargetTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_TargetTeam = { "TargetTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFTeamManagerComponent_eventIsEnemyTeam_Parms, TargetTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	void Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFTeamManagerComponent_eventIsEnemyTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFTeamManagerComponent_eventIsEnemyTeam_Parms), &Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_SelfTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_SelfTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_TargetTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_TargetTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTeamManagerComponent, nullptr, "IsEnemyTeam", nullptr, nullptr, Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::ACFTeamManagerComponent_eventIsEnemyTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::ACFTeamManagerComponent_eventIsEnemyTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFTeamManagerComponent);
	UClass* Z_Construct_UClass_UACFTeamManagerComponent_NoRegister()
	{
		return UACFTeamManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFTeamManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BattleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BattleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BattleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamsConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamsConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTeamManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFTeamManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFTeamManagerComponent_GetBattleType, "GetBattleType" }, // 2689569885
		{ &Z_Construct_UFunction_UACFTeamManagerComponent_GetCollisionChannelByTeam, "GetCollisionChannelByTeam" }, // 2312886880
		{ &Z_Construct_UFunction_UACFTeamManagerComponent_GetTeamsConfiguration, "GetTeamsConfiguration" }, // 2753660649
		{ &Z_Construct_UFunction_UACFTeamManagerComponent_IsEnemyTeam, "IsEnemyTeam" }, // 709822444
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTeamManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFTeamManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType = { "BattleType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFTeamManagerComponent, BattleType), Z_Construct_UEnum_AscentCoreInterfaces_EBattleType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType_MetaData), Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType_MetaData) }; // 2151822261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_TeamsConfiguration_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFTeamManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_TeamsConfiguration = { "TeamsConfiguration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFTeamManagerComponent, TeamsConfiguration), Z_Construct_UClass_UACFTeamsConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_TeamsConfiguration_MetaData), Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_TeamsConfiguration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFTeamManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_BattleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamManagerComponent_Statics::NewProp_TeamsConfiguration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTeamManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTeamManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTeamManagerComponent_Statics::ClassParams = {
		&UACFTeamManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFTeamManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFTeamManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFTeamManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFTeamManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFTeamManagerComponent.OuterSingleton, Z_Construct_UClass_UACFTeamManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFTeamManagerComponent.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UClass* StaticClass<UACFTeamManagerComponent>()
	{
		return UACFTeamManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTeamManagerComponent);
	UACFTeamManagerComponent::~UACFTeamManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Components_ACFTeamManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Components_ACFTeamManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFTeamManagerComponent, UACFTeamManagerComponent::StaticClass, TEXT("UACFTeamManagerComponent"), &Z_Registration_Info_UClass_UACFTeamManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFTeamManagerComponent), 439617241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Components_ACFTeamManagerComponent_h_3648523142(TEXT("/Script/AscentCoreInterfaces"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Components_ACFTeamManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Components_ACFTeamManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

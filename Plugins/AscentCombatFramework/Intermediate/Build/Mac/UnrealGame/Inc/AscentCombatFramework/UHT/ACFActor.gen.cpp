// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actors/ACFActor.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActor() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFActor();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFActor_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFEntityInterface_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UFunction* Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFEquipmentComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFActor::execHandleDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execGetDamageHandlerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFDamageHandlerComponent**)Z_Param__Result=P_THIS->GetDamageHandlerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execGetEquipmentComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFEquipmentComponent**)Z_Param__Result=P_THIS->GetEquipmentComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execGetStatisticsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSStatisticsComponent**)Z_Param__Result=P_THIS->GetStatisticsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execGetLastDamageInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FACFDamageEvent*)Z_Param__Result=P_THIS->GetLastDamageInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execAssignTeamToEntity)
	{
		P_GET_ENUM(ETeam,Z_Param_inCombatTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignTeamToEntity_Implementation(ETeam(Z_Param_inCombatTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execGetEntityExtentRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntityExtentRadius_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execIsEntityAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEntityAlive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execGetEntityCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetEntityCombatTeam_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFActor::execOnActorDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestroyed_Implementation();
		P_NATIVE_END;
	}
	struct ACFActor_eventAssignTeamToEntity_Parms
	{
		ETeam inCombatTeam;
	};
	struct ACFActor_eventGetEntityCombatTeam_Parms
	{
		ETeam ReturnValue;

		/** Constructor, initializes return property only **/
		ACFActor_eventGetEntityCombatTeam_Parms()
			: ReturnValue((ETeam)0)
		{
		}
	};
	struct ACFActor_eventGetEntityExtentRadius_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFActor_eventGetEntityExtentRadius_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFActor_eventIsEntityAlive_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFActor_eventIsEntityAlive_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AACFActor_AssignTeamToEntity = FName(TEXT("AssignTeamToEntity"));
	void AACFActor::AssignTeamToEntity(ETeam inCombatTeam)
	{
		ACFActor_eventAssignTeamToEntity_Parms Parms;
		Parms.inCombatTeam=inCombatTeam;
		ProcessEvent(FindFunctionChecked(NAME_AACFActor_AssignTeamToEntity),&Parms);
	}
	static FName NAME_AACFActor_GetEntityCombatTeam = FName(TEXT("GetEntityCombatTeam"));
	ETeam AACFActor::GetEntityCombatTeam() const
	{
		ACFActor_eventGetEntityCombatTeam_Parms Parms;
		const_cast<AACFActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFActor_GetEntityCombatTeam),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFActor_GetEntityExtentRadius = FName(TEXT("GetEntityExtentRadius"));
	float AACFActor::GetEntityExtentRadius() const
	{
		ACFActor_eventGetEntityExtentRadius_Parms Parms;
		const_cast<AACFActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFActor_GetEntityExtentRadius),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFActor_IsEntityAlive = FName(TEXT("IsEntityAlive"));
	bool AACFActor::IsEntityAlive() const
	{
		ACFActor_eventIsEntityAlive_Parms Parms;
		const_cast<AACFActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFActor_IsEntityAlive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFActor_OnActorDestroyed = FName(TEXT("OnActorDestroyed"));
	void AACFActor::OnActorDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFActor_OnActorDestroyed),NULL);
	}
	void AACFActor::StaticRegisterNativesAACFActor()
	{
		UClass* Class = AACFActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignTeamToEntity", &AACFActor::execAssignTeamToEntity },
			{ "GetDamageHandlerComponent", &AACFActor::execGetDamageHandlerComponent },
			{ "GetEntityCombatTeam", &AACFActor::execGetEntityCombatTeam },
			{ "GetEntityExtentRadius", &AACFActor::execGetEntityExtentRadius },
			{ "GetEquipmentComponent", &AACFActor::execGetEquipmentComponent },
			{ "GetLastDamageInfo", &AACFActor::execGetLastDamageInfo },
			{ "GetStatisticsComponent", &AACFActor::execGetStatisticsComponent },
			{ "HandleDeath", &AACFActor::execHandleDeath },
			{ "IsEntityAlive", &AACFActor::execIsEntityAlive },
			{ "OnActorDestroyed", &AACFActor::execOnActorDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inCombatTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inCombatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::NewProp_inCombatTeam = { "inCombatTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventAssignTeamToEntity_Parms, inCombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::NewProp_inCombatTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "AssignTeamToEntity", nullptr, nullptr, Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::PropPointers), sizeof(ACFActor_eventAssignTeamToEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActor_eventAssignTeamToEntity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_AssignTeamToEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_AssignTeamToEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics
	{
		struct ACFActor_eventGetDamageHandlerComponent_Parms
		{
			UACFDamageHandlerComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventGetDamageHandlerComponent_Parms, ReturnValue), Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "GetDamageHandlerComponent", nullptr, nullptr, Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::ACFActor_eventGetDamageHandlerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::ACFActor_eventGetDamageHandlerComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventGetEntityCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "//acf entity interface\n" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
		{ "ToolTip", "acf entity interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "GetEntityCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::PropPointers), sizeof(ACFActor_eventGetEntityCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActor_eventGetEntityCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_GetEntityCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_GetEntityCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventGetEntityExtentRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "GetEntityExtentRadius", nullptr, nullptr, Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::PropPointers), sizeof(ACFActor_eventGetEntityExtentRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActor_eventGetEntityExtentRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_GetEntityExtentRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_GetEntityExtentRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics
	{
		struct ACFActor_eventGetEquipmentComponent_Parms
		{
			UACFEquipmentComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventGetEquipmentComponent_Parms, ReturnValue), Z_Construct_UClass_UACFEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "GetEquipmentComponent", nullptr, nullptr, Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::ACFActor_eventGetEquipmentComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::ACFActor_eventGetEquipmentComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_GetEquipmentComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_GetEquipmentComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics
	{
		struct ACFActor_eventGetLastDamageInfo_Parms
		{
			FACFDamageEvent ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventGetLastDamageInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(0, nullptr) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "//END ACF ENTITY INTERFACE\n" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
		{ "ToolTip", "END ACF ENTITY INTERFACE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "GetLastDamageInfo", nullptr, nullptr, Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::ACFActor_eventGetLastDamageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::ACFActor_eventGetLastDamageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_GetLastDamageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_GetLastDamageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics
	{
		struct ACFActor_eventGetStatisticsComponent_Parms
		{
			UARSStatisticsComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActor_eventGetStatisticsComponent_Parms, ReturnValue), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "GetStatisticsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::ACFActor_eventGetStatisticsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::ACFActor_eventGetStatisticsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_GetStatisticsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_GetStatisticsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_HandleDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_HandleDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "HandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_HandleDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFActor_HandleDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_HandleDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActor_eventIsEntityAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActor_eventIsEntityAlive_Parms), &Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "IsEntityAlive", nullptr, nullptr, Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::PropPointers), sizeof(ACFActor_eventIsEntityAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActor_eventIsEntityAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFActor_IsEntityAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_IsEntityAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFActor_OnActorDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFActor_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFActor_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFActor, nullptr, "OnActorDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFActor_OnActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFActor_OnActorDestroyed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFActor_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFActor_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFActor);
	UClass* Z_Construct_UClass_AACFActor_NoRegister()
	{
		return AACFActor::StaticClass();
	}
	struct Z_Construct_UClass_AACFActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StatisticsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffetsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffetsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EquipmentComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageHandlerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamageHandlerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionStimuliSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIPerceptionStimuliSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFActor_AssignTeamToEntity, "AssignTeamToEntity" }, // 1728595257
		{ &Z_Construct_UFunction_AACFActor_GetDamageHandlerComponent, "GetDamageHandlerComponent" }, // 3231995085
		{ &Z_Construct_UFunction_AACFActor_GetEntityCombatTeam, "GetEntityCombatTeam" }, // 4222388085
		{ &Z_Construct_UFunction_AACFActor_GetEntityExtentRadius, "GetEntityExtentRadius" }, // 2486626410
		{ &Z_Construct_UFunction_AACFActor_GetEquipmentComponent, "GetEquipmentComponent" }, // 2569008220
		{ &Z_Construct_UFunction_AACFActor_GetLastDamageInfo, "GetLastDamageInfo" }, // 783361942
		{ &Z_Construct_UFunction_AACFActor_GetStatisticsComponent, "GetStatisticsComponent" }, // 3877209855
		{ &Z_Construct_UFunction_AACFActor_HandleDeath, "HandleDeath" }, // 2086700229
		{ &Z_Construct_UFunction_AACFActor_IsEntityAlive, "IsEntityAlive" }, // 2334726601
		{ &Z_Construct_UFunction_AACFActor_OnActorDestroyed, "OnActorDestroyed" }, // 1896012672
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ACFActor.h" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Used to identify who can attack this actor*/" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
		{ "ToolTip", "Used to identify who can attack this actor" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_StatisticsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_StatisticsComp = { "StatisticsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, StatisticsComp), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_StatisticsComp_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_StatisticsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_EffetsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_EffetsComp = { "EffetsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, EffetsComp), Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_EffetsComp_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_EffetsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_EquipmentComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_EquipmentComp = { "EquipmentComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, EquipmentComp), Z_Construct_UClass_UACFEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_EquipmentComp_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_EquipmentComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_DamageHandlerComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_DamageHandlerComp = { "DamageHandlerComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, DamageHandlerComp), Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_DamageHandlerComp_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_DamageHandlerComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_AudioComp_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_AudioComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, RootComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_RootComp_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_RootComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_AIPerceptionStimuliSource_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_AIPerceptionStimuliSource = { "AIPerceptionStimuliSource", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, AIPerceptionStimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_AIPerceptionStimuliSource_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_AIPerceptionStimuliSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_OnTeamChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFActor, OnTeamChanged), Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_OnTeamChanged_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_OnTeamChanged_MetaData) }; // 1220871232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFActor.h" },
	};
#endif
	void Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AACFActor*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFActor), &Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead_MetaData), Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_CombatTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_StatisticsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_EffetsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_EquipmentComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_DamageHandlerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_AudioComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_AIPerceptionStimuliSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_OnTeamChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFActor_Statics::NewProp_bIsDead,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFActor, IGenericTeamAgentInterface), false },  // 4142440172
			{ Z_Construct_UClass_UACFEntityInterface_NoRegister, (int32)VTABLE_OFFSET(AACFActor, IACFEntityInterface), false },  // 2418734386
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFActor_Statics::ClassParams = {
		&AACFActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFActor()
	{
		if (!Z_Registration_Info_UClass_AACFActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFActor.OuterSingleton, Z_Construct_UClass_AACFActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFActor.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<AACFActor>()
	{
		return AACFActor::StaticClass();
	}

	void AACFActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsDead(TEXT("bIsDead"));

		const bool bIsValid = true
			&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AACFActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFActor);
	AACFActor::~AACFActor() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFActor, AACFActor::StaticClass, TEXT("AACFActor"), &Z_Registration_Info_UClass_AACFActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFActor), 3063658573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFActor_h_3744920497(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

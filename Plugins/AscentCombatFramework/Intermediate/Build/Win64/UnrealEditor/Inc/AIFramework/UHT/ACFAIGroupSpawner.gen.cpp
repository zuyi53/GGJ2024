// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/ACFAIGroupSpawner.h"
#include "ACFAITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAIGroupSpawner() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIGroupSpawner();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIGroupSpawner_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFPatrolPath_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAIAgentsInfo();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFEntityInterface_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFAIGroupSpawner::execAdjustSpawnerPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustSpawnerPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execStopUpdatePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopUpdatePos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execStartUpdatePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartUpdatePos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetAgentNearestTo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=P_THIS->GetAgentNearestTo(Z_Param_Out_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetAgentWithIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FAIAgentsInfo,Z_Param_Out_outAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAgentWithIndex(Z_Param_index,Z_Param_Out_outAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetCombatTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetAIGroupComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetAIGroupComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetGroupSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGroupSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetPatrolPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_patrolIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPatrolPoint(Z_Param_patrolIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetEntityExtentRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntityExtentRadius_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execAssignTeamToEntity)
	{
		P_GET_ENUM(ETeam,Z_Param_inCombatTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignTeamToEntity_Implementation(ETeam(Z_Param_inCombatTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execIsEntityAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEntityAlive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIGroupSpawner::execGetEntityCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetEntityCombatTeam_Implementation();
		P_NATIVE_END;
	}
	struct ACFAIGroupSpawner_eventAssignTeamToEntity_Parms
	{
		ETeam inCombatTeam;
	};
	struct ACFAIGroupSpawner_eventGetEntityCombatTeam_Parms
	{
		ETeam ReturnValue;

		/** Constructor, initializes return property only **/
		ACFAIGroupSpawner_eventGetEntityCombatTeam_Parms()
			: ReturnValue((ETeam)0)
		{
		}
	};
	struct ACFAIGroupSpawner_eventGetEntityExtentRadius_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFAIGroupSpawner_eventGetEntityExtentRadius_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFAIGroupSpawner_eventIsEntityAlive_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFAIGroupSpawner_eventIsEntityAlive_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AACFAIGroupSpawner_AssignTeamToEntity = FName(TEXT("AssignTeamToEntity"));
	void AACFAIGroupSpawner::AssignTeamToEntity(ETeam inCombatTeam)
	{
		ACFAIGroupSpawner_eventAssignTeamToEntity_Parms Parms;
		Parms.inCombatTeam=inCombatTeam;
		ProcessEvent(FindFunctionChecked(NAME_AACFAIGroupSpawner_AssignTeamToEntity),&Parms);
	}
	static FName NAME_AACFAIGroupSpawner_GetEntityCombatTeam = FName(TEXT("GetEntityCombatTeam"));
	ETeam AACFAIGroupSpawner::GetEntityCombatTeam() const
	{
		ACFAIGroupSpawner_eventGetEntityCombatTeam_Parms Parms;
		const_cast<AACFAIGroupSpawner*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFAIGroupSpawner_GetEntityCombatTeam),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFAIGroupSpawner_GetEntityExtentRadius = FName(TEXT("GetEntityExtentRadius"));
	float AACFAIGroupSpawner::GetEntityExtentRadius() const
	{
		ACFAIGroupSpawner_eventGetEntityExtentRadius_Parms Parms;
		const_cast<AACFAIGroupSpawner*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFAIGroupSpawner_GetEntityExtentRadius),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFAIGroupSpawner_IsEntityAlive = FName(TEXT("IsEntityAlive"));
	bool AACFAIGroupSpawner::IsEntityAlive() const
	{
		ACFAIGroupSpawner_eventIsEntityAlive_Parms Parms;
		const_cast<AACFAIGroupSpawner*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFAIGroupSpawner_IsEntityAlive),&Parms);
		return !!Parms.ReturnValue;
	}
	void AACFAIGroupSpawner::StaticRegisterNativesAACFAIGroupSpawner()
	{
		UClass* Class = AACFAIGroupSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustSpawnerPos", &AACFAIGroupSpawner::execAdjustSpawnerPos },
			{ "AssignTeamToEntity", &AACFAIGroupSpawner::execAssignTeamToEntity },
			{ "GetAgentNearestTo", &AACFAIGroupSpawner::execGetAgentNearestTo },
			{ "GetAgentWithIndex", &AACFAIGroupSpawner::execGetAgentWithIndex },
			{ "GetAIGroupComponent", &AACFAIGroupSpawner::execGetAIGroupComponent },
			{ "GetCombatTeam", &AACFAIGroupSpawner::execGetCombatTeam },
			{ "GetEntityCombatTeam", &AACFAIGroupSpawner::execGetEntityCombatTeam },
			{ "GetEntityExtentRadius", &AACFAIGroupSpawner::execGetEntityExtentRadius },
			{ "GetGroupSize", &AACFAIGroupSpawner::execGetGroupSize },
			{ "GetPatrolPoint", &AACFAIGroupSpawner::execGetPatrolPoint },
			{ "GetSplineComponent", &AACFAIGroupSpawner::execGetSplineComponent },
			{ "IsEntityAlive", &AACFAIGroupSpawner::execIsEntityAlive },
			{ "StartUpdatePos", &AACFAIGroupSpawner::execStartUpdatePos },
			{ "StopUpdatePos", &AACFAIGroupSpawner::execStopUpdatePos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "AdjustSpawnerPos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inCombatTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inCombatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::NewProp_inCombatTeam = { "inCombatTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventAssignTeamToEntity_Parms, inCombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::NewProp_inCombatTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "AssignTeamToEntity", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::PropPointers), sizeof(ACFAIGroupSpawner_eventAssignTeamToEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIGroupSpawner_eventAssignTeamToEntity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics
	{
		struct ACFAIGroupSpawner_eventGetAgentNearestTo_Parms
		{
			FVector location;
			AACFCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetAgentNearestTo_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_location_MetaData), Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_location_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetAgentNearestTo_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetAgentNearestTo", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::ACFAIGroupSpawner_eventGetAgentNearestTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::ACFAIGroupSpawner_eventGetAgentNearestTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics
	{
		struct ACFAIGroupSpawner_eventGetAgentWithIndex_Parms
		{
			int32 index;
			FAIAgentsInfo outAgent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetAgentWithIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_outAgent = { "outAgent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetAgentWithIndex_Parms, outAgent), Z_Construct_UScriptStruct_FAIAgentsInfo, METADATA_PARAMS(0, nullptr) }; // 2558498719
	void Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIGroupSpawner_eventGetAgentWithIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIGroupSpawner_eventGetAgentWithIndex_Parms), &Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_outAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetAgentWithIndex", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::ACFAIGroupSpawner_eventGetAgentWithIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::ACFAIGroupSpawner_eventGetAgentWithIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics
	{
		struct ACFAIGroupSpawner_eventGetAIGroupComponent_Parms
		{
			UACFGroupAIComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetAIGroupComponent_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetAIGroupComponent", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::ACFAIGroupSpawner_eventGetAIGroupComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::ACFAIGroupSpawner_eventGetAIGroupComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics
	{
		struct ACFAIGroupSpawner_eventGetCombatTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::ACFAIGroupSpawner_eventGetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::ACFAIGroupSpawner_eventGetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetEntityCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// <summary>\n/// COMBAT ENTITY INTERFACE\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
		{ "ToolTip", "<summary>\nCOMBAT ENTITY INTERFACE\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetEntityCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::PropPointers), sizeof(ACFAIGroupSpawner_eventGetEntityCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIGroupSpawner_eventGetEntityCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetEntityExtentRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetEntityExtentRadius", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::PropPointers), sizeof(ACFAIGroupSpawner_eventGetEntityExtentRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIGroupSpawner_eventGetEntityExtentRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics
	{
		struct ACFAIGroupSpawner_eventGetGroupSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetGroupSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetGroupSize", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::ACFAIGroupSpawner_eventGetGroupSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::ACFAIGroupSpawner_eventGetGroupSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics
	{
		struct ACFAIGroupSpawner_eventGetPatrolPoint_Parms
		{
			int32 patrolIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_patrolIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::NewProp_patrolIndex = { "patrolIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetPatrolPoint_Parms, patrolIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetPatrolPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::NewProp_patrolIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetPatrolPoint", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::ACFAIGroupSpawner_eventGetPatrolPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::ACFAIGroupSpawner_eventGetPatrolPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics
	{
		struct ACFAIGroupSpawner_eventGetSplineComponent_Parms
		{
			USplineComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIGroupSpawner_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "GetSplineComponent", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::ACFAIGroupSpawner_eventGetSplineComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::ACFAIGroupSpawner_eventGetSplineComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIGroupSpawner_eventIsEntityAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIGroupSpawner_eventIsEntityAlive_Parms), &Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "IsEntityAlive", nullptr, nullptr, Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::PropPointers), sizeof(ACFAIGroupSpawner_eventIsEntityAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIGroupSpawner_eventIsEntityAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "StartUpdatePos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIGroupSpawner, nullptr, "StopUpdatePos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFAIGroupSpawner);
	UClass* Z_Construct_UClass_AACFAIGroupSpawner_NoRegister()
	{
		return AACFAIGroupSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AACFAIGroupSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIGroupComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIGroupComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBeginPlay_MetaData[];
#endif
		static void NewProp_bSpawnOnBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSpawnerPosition_MetaData[];
#endif
		static void NewProp_bUpdateSpawnerPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpawnerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateGroupPositionTimeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateGroupPositionTimeInterval;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_patrolPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFAIGroupSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFAIGroupSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_AdjustSpawnerPos, "AdjustSpawnerPos" }, // 3844519841
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_AssignTeamToEntity, "AssignTeamToEntity" }, // 3875643414
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentNearestTo, "GetAgentNearestTo" }, // 1260496850
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetAgentWithIndex, "GetAgentWithIndex" }, // 3550943652
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetAIGroupComponent, "GetAIGroupComponent" }, // 4071952945
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetCombatTeam, "GetCombatTeam" }, // 1681683729
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityCombatTeam, "GetEntityCombatTeam" }, // 4018023718
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetEntityExtentRadius, "GetEntityExtentRadius" }, // 3650627006
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetGroupSize, "GetGroupSize" }, // 2220129180
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetPatrolPoint, "GetPatrolPoint" }, // 1391704743
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_GetSplineComponent, "GetSplineComponent" }, // 3256430884
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_IsEntityAlive, "IsEntityAlive" }, // 2620825957
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_StartUpdatePos, "StartUpdatePos" }, // 3101591176
		{ &Z_Construct_UFunction_AACFAIGroupSpawner_StopUpdatePos, "StopUpdatePos" }, // 2640844761
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Groups/ACFAIGroupSpawner.h" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIGroupSpawner, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_AIGroupComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_AIGroupComponent = { "AIGroupComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIGroupSpawner, AIGroupComponent), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_AIGroupComponent_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_AIGroupComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay_SetBit(void* Obj)
	{
		((AACFAIGroupSpawner*)Obj)->bSpawnOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay = { "bSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFAIGroupSpawner), &Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_PatrolConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_PatrolConfig = { "PatrolConfig", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIGroupSpawner, PatrolConfig), Z_Construct_UScriptStruct_FPatrolConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_PatrolConfig_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_PatrolConfig_MetaData) }; // 549765083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition_SetBit(void* Obj)
	{
		((AACFAIGroupSpawner*)Obj)->bUpdateSpawnerPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition = { "bUpdateSpawnerPosition", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFAIGroupSpawner), &Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_UpdateGroupPositionTimeInterval_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bUpdateSpawnerPosition" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_UpdateGroupPositionTimeInterval = { "UpdateGroupPositionTimeInterval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIGroupSpawner, UpdateGroupPositionTimeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_UpdateGroupPositionTimeInterval_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_UpdateGroupPositionTimeInterval_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIGroupSpawner, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_patrolPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFAIGroupSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_patrolPath = { "patrolPath", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIGroupSpawner, patrolPath), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_patrolPath_MetaData), Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_patrolPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFAIGroupSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_AIGroupComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bSpawnOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_PatrolConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_bUpdateSpawnerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_UpdateGroupPositionTimeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_CombatTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIGroupSpawner_Statics::NewProp_patrolPath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFAIGroupSpawner, IGenericTeamAgentInterface), false },  // 4142440172
			{ Z_Construct_UClass_UACFEntityInterface_NoRegister, (int32)VTABLE_OFFSET(AACFAIGroupSpawner, IACFEntityInterface), false },  // 2418734386
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFAIGroupSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFAIGroupSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFAIGroupSpawner_Statics::ClassParams = {
		&AACFAIGroupSpawner::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFAIGroupSpawner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFAIGroupSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIGroupSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFAIGroupSpawner()
	{
		if (!Z_Registration_Info_UClass_AACFAIGroupSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFAIGroupSpawner.OuterSingleton, Z_Construct_UClass_AACFAIGroupSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFAIGroupSpawner.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFAIGroupSpawner>()
	{
		return AACFAIGroupSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFAIGroupSpawner);
	AACFAIGroupSpawner::~AACFAIGroupSpawner() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFAIGroupSpawner, AACFAIGroupSpawner::StaticClass, TEXT("AACFAIGroupSpawner"), &Z_Registration_Info_UClass_AACFAIGroupSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFAIGroupSpawner), 1488690761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_2165461172(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

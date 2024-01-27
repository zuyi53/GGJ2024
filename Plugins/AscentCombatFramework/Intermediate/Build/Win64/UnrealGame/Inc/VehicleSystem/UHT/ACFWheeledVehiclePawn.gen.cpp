// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFWheeledVehiclePawn.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFWheeledVehiclePawn() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFEntityInterface_NoRegister();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFInteractableInterface_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UFunction* Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountableComponent_NoRegister();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountPointComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VehicleSystem();
	VEHICLESYSTEM_API UClass* Z_Construct_UClass_AACFWheeledVehiclePawn();
	VEHICLESYSTEM_API UClass* Z_Construct_UClass_AACFWheeledVehiclePawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execHandleDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execOnVehicleDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVehicleDestroyed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetDismountPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFMountPointComponent**)Z_Param__Result=P_THIS->GetDismountPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetMountComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFMountableComponent**)Z_Param__Result=P_THIS->GetMountComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetDamageHandlerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFDamageHandlerComponent**)Z_Param__Result=P_THIS->GetDamageHandlerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetStatisticsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSStatisticsComponent**)Z_Param__Result=P_THIS->GetStatisticsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetLastDamageInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FACFDamageEvent*)Z_Param__Result=P_THIS->GetLastDamageInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetInteractableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractableName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execCanBeInteracted)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeInteracted_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execAssignTeamToEntity)
	{
		P_GET_ENUM(ETeam,Z_Param_inCombatTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignTeamToEntity_Implementation(ETeam(Z_Param_inCombatTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetEntityExtentRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntityExtentRadius_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execIsEntityAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEntityAlive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWheeledVehiclePawn::execGetEntityCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetEntityCombatTeam_Implementation();
		P_NATIVE_END;
	}
	struct ACFWheeledVehiclePawn_eventAssignTeamToEntity_Parms
	{
		ETeam inCombatTeam;
	};
	struct ACFWheeledVehiclePawn_eventCanBeInteracted_Parms
	{
		APawn* Pawn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFWheeledVehiclePawn_eventCanBeInteracted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFWheeledVehiclePawn_eventGetEntityCombatTeam_Parms
	{
		ETeam ReturnValue;

		/** Constructor, initializes return property only **/
		ACFWheeledVehiclePawn_eventGetEntityCombatTeam_Parms()
			: ReturnValue((ETeam)0)
		{
		}
	};
	struct ACFWheeledVehiclePawn_eventGetEntityExtentRadius_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFWheeledVehiclePawn_eventGetEntityExtentRadius_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFWheeledVehiclePawn_eventGetInteractableName_Parms
	{
		FText ReturnValue;
	};
	struct ACFWheeledVehiclePawn_eventIsEntityAlive_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFWheeledVehiclePawn_eventIsEntityAlive_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AACFWheeledVehiclePawn_AssignTeamToEntity = FName(TEXT("AssignTeamToEntity"));
	void AACFWheeledVehiclePawn::AssignTeamToEntity(ETeam inCombatTeam)
	{
		ACFWheeledVehiclePawn_eventAssignTeamToEntity_Parms Parms;
		Parms.inCombatTeam=inCombatTeam;
		ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_AssignTeamToEntity),&Parms);
	}
	static FName NAME_AACFWheeledVehiclePawn_CanBeInteracted = FName(TEXT("CanBeInteracted"));
	bool AACFWheeledVehiclePawn::CanBeInteracted(APawn* Pawn)
	{
		ACFWheeledVehiclePawn_eventCanBeInteracted_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_CanBeInteracted),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFWheeledVehiclePawn_GetEntityCombatTeam = FName(TEXT("GetEntityCombatTeam"));
	ETeam AACFWheeledVehiclePawn::GetEntityCombatTeam() const
	{
		ACFWheeledVehiclePawn_eventGetEntityCombatTeam_Parms Parms;
		const_cast<AACFWheeledVehiclePawn*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_GetEntityCombatTeam),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFWheeledVehiclePawn_GetEntityExtentRadius = FName(TEXT("GetEntityExtentRadius"));
	float AACFWheeledVehiclePawn::GetEntityExtentRadius() const
	{
		ACFWheeledVehiclePawn_eventGetEntityExtentRadius_Parms Parms;
		const_cast<AACFWheeledVehiclePawn*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_GetEntityExtentRadius),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFWheeledVehiclePawn_GetInteractableName = FName(TEXT("GetInteractableName"));
	FText AACFWheeledVehiclePawn::GetInteractableName()
	{
		ACFWheeledVehiclePawn_eventGetInteractableName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_GetInteractableName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFWheeledVehiclePawn_IsEntityAlive = FName(TEXT("IsEntityAlive"));
	bool AACFWheeledVehiclePawn::IsEntityAlive() const
	{
		ACFWheeledVehiclePawn_eventIsEntityAlive_Parms Parms;
		const_cast<AACFWheeledVehiclePawn*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_IsEntityAlive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFWheeledVehiclePawn_OnVehicleDestroyed = FName(TEXT("OnVehicleDestroyed"));
	void AACFWheeledVehiclePawn::OnVehicleDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFWheeledVehiclePawn_OnVehicleDestroyed),NULL);
	}
	void AACFWheeledVehiclePawn::StaticRegisterNativesAACFWheeledVehiclePawn()
	{
		UClass* Class = AACFWheeledVehiclePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignTeamToEntity", &AACFWheeledVehiclePawn::execAssignTeamToEntity },
			{ "CanBeInteracted", &AACFWheeledVehiclePawn::execCanBeInteracted },
			{ "GetDamageHandlerComponent", &AACFWheeledVehiclePawn::execGetDamageHandlerComponent },
			{ "GetDismountPoint", &AACFWheeledVehiclePawn::execGetDismountPoint },
			{ "GetEntityCombatTeam", &AACFWheeledVehiclePawn::execGetEntityCombatTeam },
			{ "GetEntityExtentRadius", &AACFWheeledVehiclePawn::execGetEntityExtentRadius },
			{ "GetInteractableName", &AACFWheeledVehiclePawn::execGetInteractableName },
			{ "GetLastDamageInfo", &AACFWheeledVehiclePawn::execGetLastDamageInfo },
			{ "GetMountComponent", &AACFWheeledVehiclePawn::execGetMountComponent },
			{ "GetStatisticsComponent", &AACFWheeledVehiclePawn::execGetStatisticsComponent },
			{ "HandleDeath", &AACFWheeledVehiclePawn::execHandleDeath },
			{ "IsEntityAlive", &AACFWheeledVehiclePawn::execIsEntityAlive },
			{ "OnVehicleDestroyed", &AACFWheeledVehiclePawn::execOnVehicleDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inCombatTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inCombatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::NewProp_inCombatTeam = { "inCombatTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventAssignTeamToEntity_Parms, inCombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::NewProp_inCombatTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "AssignTeamToEntity", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::PropPointers), sizeof(ACFWheeledVehiclePawn_eventAssignTeamToEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWheeledVehiclePawn_eventAssignTeamToEntity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventCanBeInteracted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWheeledVehiclePawn_eventCanBeInteracted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWheeledVehiclePawn_eventCanBeInteracted_Parms), &Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* called when player interact with object of this class */" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
		{ "ToolTip", "called when player interact with object of this class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "CanBeInteracted", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::PropPointers), sizeof(ACFWheeledVehiclePawn_eventCanBeInteracted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWheeledVehiclePawn_eventCanBeInteracted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics
	{
		struct ACFWheeledVehiclePawn_eventGetDamageHandlerComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetDamageHandlerComponent_Parms, ReturnValue), Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetDamageHandlerComponent", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::ACFWheeledVehiclePawn_eventGetDamageHandlerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::ACFWheeledVehiclePawn_eventGetDamageHandlerComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics
	{
		struct ACFWheeledVehiclePawn_eventGetDismountPoint_Parms
		{
			UACFMountPointComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetDismountPoint_Parms, ReturnValue), Z_Construct_UClass_UACFMountPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetDismountPoint", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::ACFWheeledVehiclePawn_eventGetDismountPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::ACFWheeledVehiclePawn_eventGetDismountPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetEntityCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "//acf entity interface\n" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
		{ "ToolTip", "acf entity interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetEntityCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::PropPointers), sizeof(ACFWheeledVehiclePawn_eventGetEntityCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWheeledVehiclePawn_eventGetEntityCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetEntityExtentRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetEntityExtentRadius", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::PropPointers), sizeof(ACFWheeledVehiclePawn_eventGetEntityExtentRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWheeledVehiclePawn_eventGetEntityExtentRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetInteractableName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetInteractableName", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::PropPointers), sizeof(ACFWheeledVehiclePawn_eventGetInteractableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWheeledVehiclePawn_eventGetInteractableName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics
	{
		struct ACFWheeledVehiclePawn_eventGetLastDamageInfo_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetLastDamageInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(0, nullptr) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "//END INTERACTION INTERFACE\n" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
		{ "ToolTip", "END INTERACTION INTERFACE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetLastDamageInfo", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::ACFWheeledVehiclePawn_eventGetLastDamageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::ACFWheeledVehiclePawn_eventGetLastDamageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics
	{
		struct ACFWheeledVehiclePawn_eventGetMountComponent_Parms
		{
			UACFMountableComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetMountComponent_Parms, ReturnValue), Z_Construct_UClass_UACFMountableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetMountComponent", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::ACFWheeledVehiclePawn_eventGetMountComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::ACFWheeledVehiclePawn_eventGetMountComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics
	{
		struct ACFWheeledVehiclePawn_eventGetStatisticsComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWheeledVehiclePawn_eventGetStatisticsComponent_Parms, ReturnValue), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "GetStatisticsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::ACFWheeledVehiclePawn_eventGetStatisticsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::ACFWheeledVehiclePawn_eventGetStatisticsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "HandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWheeledVehiclePawn_eventIsEntityAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWheeledVehiclePawn_eventIsEntityAlive_Parms), &Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "IsEntityAlive", nullptr, nullptr, Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::PropPointers), sizeof(ACFWheeledVehiclePawn_eventIsEntityAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFWheeledVehiclePawn_eventIsEntityAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWheeledVehiclePawn, nullptr, "OnVehicleDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFWheeledVehiclePawn);
	UClass* Z_Construct_UClass_AACFWheeledVehiclePawn_NoRegister()
	{
		return AACFWheeledVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AACFWheeledVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageHandlerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamageHandlerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionStimuliSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIPerceptionStimuliSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MountComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismountPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DismountPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VehicleName;
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
	UObject* (*const Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_AssignTeamToEntity, "AssignTeamToEntity" }, // 432182658
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_CanBeInteracted, "CanBeInteracted" }, // 1726668560
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDamageHandlerComponent, "GetDamageHandlerComponent" }, // 1843240359
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetDismountPoint, "GetDismountPoint" }, // 3663202293
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityCombatTeam, "GetEntityCombatTeam" }, // 3503697758
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetEntityExtentRadius, "GetEntityExtentRadius" }, // 4287141837
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetInteractableName, "GetInteractableName" }, // 1454919669
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetLastDamageInfo, "GetLastDamageInfo" }, // 2714432134
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetMountComponent, "GetMountComponent" }, // 1085841476
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_GetStatisticsComponent, "GetStatisticsComponent" }, // 3045083779
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_HandleDeath, "HandleDeath" }, // 1942400439
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_IsEntityAlive, "IsEntityAlive" }, // 2607774931
		{ &Z_Construct_UFunction_AACFWheeledVehiclePawn_OnVehicleDestroyed, "OnVehicleDestroyed" }, // 4038253434
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ACFWheeledVehiclePawn.h" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_OnTeamChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, OnTeamChanged), Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_OnTeamChanged_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_OnTeamChanged_MetaData) }; // 1220871232
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Used to identify who can attack this actor*/" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
		{ "ToolTip", "Used to identify who can attack this actor" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_StatisticsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_StatisticsComp = { "StatisticsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, StatisticsComp), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_StatisticsComp_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_StatisticsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_EffetsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_EffetsComp = { "EffetsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, EffetsComp), Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_EffetsComp_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_EffetsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DamageHandlerComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DamageHandlerComp = { "DamageHandlerComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, DamageHandlerComp), Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DamageHandlerComp_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DamageHandlerComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_AIPerceptionStimuliSource_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_AIPerceptionStimuliSource = { "AIPerceptionStimuliSource", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, AIPerceptionStimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_AIPerceptionStimuliSource_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_AIPerceptionStimuliSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_MountComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_MountComponent = { "MountComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, MountComponent), Z_Construct_UClass_UACFMountableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_MountComponent_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_MountComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DismountPoint_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DismountPoint = { "DismountPoint", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, DismountPoint), Z_Construct_UClass_UACFMountPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DismountPoint_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DismountPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_VehicleName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_VehicleName = { "VehicleName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWheeledVehiclePawn, VehicleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_VehicleName_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_VehicleName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFWheeledVehiclePawn.h" },
	};
#endif
	void Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AACFWheeledVehiclePawn*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFWheeledVehiclePawn), &Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead_MetaData), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_OnTeamChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_CombatTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_StatisticsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_EffetsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DamageHandlerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_AIPerceptionStimuliSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_MountComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_DismountPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_VehicleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::NewProp_bIsDead,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFWheeledVehiclePawn, IGenericTeamAgentInterface), false },  // 4142440172
			{ Z_Construct_UClass_UACFEntityInterface_NoRegister, (int32)VTABLE_OFFSET(AACFWheeledVehiclePawn, IACFEntityInterface), false },  // 2418734386
			{ Z_Construct_UClass_UACFInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AACFWheeledVehiclePawn, IACFInteractableInterface), false },  // 3929623987
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFWheeledVehiclePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::ClassParams = {
		&AACFWheeledVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFWheeledVehiclePawn()
	{
		if (!Z_Registration_Info_UClass_AACFWheeledVehiclePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFWheeledVehiclePawn.OuterSingleton, Z_Construct_UClass_AACFWheeledVehiclePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFWheeledVehiclePawn.OuterSingleton;
	}
	template<> VEHICLESYSTEM_API UClass* StaticClass<AACFWheeledVehiclePawn>()
	{
		return AACFWheeledVehiclePawn::StaticClass();
	}

	void AACFWheeledVehiclePawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsDead(TEXT("bIsDead"));

		const bool bIsValid = true
			&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AACFWheeledVehiclePawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFWheeledVehiclePawn);
	AACFWheeledVehiclePawn::~AACFWheeledVehiclePawn() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFWheeledVehiclePawn, AACFWheeledVehiclePawn::StaticClass, TEXT("AACFWheeledVehiclePawn"), &Z_Registration_Info_UClass_AACFWheeledVehiclePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFWheeledVehiclePawn), 1277993090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_1034757641(TEXT("/Script/VehicleSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

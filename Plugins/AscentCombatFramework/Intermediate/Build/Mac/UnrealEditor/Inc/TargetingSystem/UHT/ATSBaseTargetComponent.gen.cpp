// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystem/Public/ATSBaseTargetComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATSBaseTargetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSBaseTargetComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSBaseTargetComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetPointComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UATSBaseTargetComponent::execOnRep_CurrentTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execGetCurrentTargetPointLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentTargetPointLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execIsTargetInSight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetInSight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execGetCurrentTargetPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UATSTargetPointComponent**)Z_Param__Result=P_THIS->GetCurrentTargetPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execHasTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execGetCurrentTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execSetTargetPoint)
	{
		P_GET_OBJECT(UATSTargetPointComponent,Z_Param_targetPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetTargetPoint_Validate(Z_Param_targetPoint))
		{
			RPC_ValidateFailed(TEXT("SetTargetPoint_Validate"));
			return;
		}
		P_THIS->SetTargetPoint_Implementation(Z_Param_targetPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execSetTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetTarget_Validate(Z_Param_target))
		{
			RPC_ValidateFailed(TEXT("SetTarget_Validate"));
			return;
		}
		P_THIS->SetTarget_Implementation(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UATSBaseTargetComponent::execSetCurrentTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentTarget(Z_Param_target);
		P_NATIVE_END;
	}
	struct ATSBaseTargetComponent_eventSetTarget_Parms
	{
		AActor* target;
	};
	struct ATSBaseTargetComponent_eventSetTargetPoint_Parms
	{
		UATSTargetPointComponent* targetPoint;
	};
	static FName NAME_UATSBaseTargetComponent_SetTarget = FName(TEXT("SetTarget"));
	void UATSBaseTargetComponent::SetTarget(AActor* target)
	{
		ATSBaseTargetComponent_eventSetTarget_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UATSBaseTargetComponent_SetTarget),&Parms);
	}
	static FName NAME_UATSBaseTargetComponent_SetTargetPoint = FName(TEXT("SetTargetPoint"));
	void UATSBaseTargetComponent::SetTargetPoint(UATSTargetPointComponent* targetPoint)
	{
		ATSBaseTargetComponent_eventSetTargetPoint_Parms Parms;
		Parms.targetPoint=targetPoint;
		ProcessEvent(FindFunctionChecked(NAME_UATSBaseTargetComponent_SetTargetPoint),&Parms);
	}
	void UATSBaseTargetComponent::StaticRegisterNativesUATSBaseTargetComponent()
	{
		UClass* Class = UATSBaseTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentTarget", &UATSBaseTargetComponent::execGetCurrentTarget },
			{ "GetCurrentTargetPoint", &UATSBaseTargetComponent::execGetCurrentTargetPoint },
			{ "GetCurrentTargetPointLocation", &UATSBaseTargetComponent::execGetCurrentTargetPointLocation },
			{ "HasTarget", &UATSBaseTargetComponent::execHasTarget },
			{ "IsTargetInSight", &UATSBaseTargetComponent::execIsTargetInSight },
			{ "OnRep_CurrentTarget", &UATSBaseTargetComponent::execOnRep_CurrentTarget },
			{ "SetCurrentTarget", &UATSBaseTargetComponent::execSetCurrentTarget },
			{ "SetTarget", &UATSBaseTargetComponent::execSetTarget },
			{ "SetTargetPoint", &UATSBaseTargetComponent::execSetTargetPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics
	{
		struct ATSBaseTargetComponent_eventGetCurrentTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSBaseTargetComponent_eventGetCurrentTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Return the currently focused target*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Return the currently focused target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "GetCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::ATSBaseTargetComponent_eventGetCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::ATSBaseTargetComponent_eventGetCurrentTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics
	{
		struct ATSBaseTargetComponent_eventGetCurrentTargetPoint_Parms
		{
			UATSTargetPointComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSBaseTargetComponent_eventGetCurrentTargetPoint_Parms, ReturnValue), Z_Construct_UClass_UATSTargetPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Return the TargetPointComponent focused of the Current target*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Return the TargetPointComponent focused of the Current target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "GetCurrentTargetPoint", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::ATSBaseTargetComponent_eventGetCurrentTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::ATSBaseTargetComponent_eventGetCurrentTargetPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics
	{
		struct ATSBaseTargetComponent_eventGetCurrentTargetPointLocation_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSBaseTargetComponent_eventGetCurrentTargetPointLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Get the world location of current target point*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Get the world location of current target point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "GetCurrentTargetPointLocation", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::ATSBaseTargetComponent_eventGetCurrentTargetPointLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::ATSBaseTargetComponent_eventGetCurrentTargetPointLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics
	{
		struct ATSBaseTargetComponent_eventHasTarget_Parms
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
	void Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSBaseTargetComponent_eventHasTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSBaseTargetComponent_eventHasTarget_Parms), &Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Returns if there is a valid target*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Returns if there is a valid target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "HasTarget", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::ATSBaseTargetComponent_eventHasTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::ATSBaseTargetComponent_eventHasTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics
	{
		struct ATSBaseTargetComponent_eventIsTargetInSight_Parms
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
	void Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSBaseTargetComponent_eventIsTargetInSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSBaseTargetComponent_eventIsTargetInSight_Parms), &Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Returns true if the target is in sight with the actual pawn owned by the controller*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Returns true if the target is in sight with the actual pawn owned by the controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "IsTargetInSight", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::ATSBaseTargetComponent_eventIsTargetInSight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::ATSBaseTargetComponent_eventIsTargetInSight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "OnRep_CurrentTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics
	{
		struct ATSBaseTargetComponent_eventSetCurrentTarget_Parms
		{
			AActor* target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSBaseTargetComponent_eventSetCurrentTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Forces to target the selected actor*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Forces to target the selected actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "SetCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::ATSBaseTargetComponent_eventSetCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::ATSBaseTargetComponent_eventSetCurrentTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSBaseTargetComponent_eventSetTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "SetTarget", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::PropPointers), sizeof(ATSBaseTargetComponent_eventSetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(ATSBaseTargetComponent_eventSetTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::NewProp_targetPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::NewProp_targetPoint = { "targetPoint", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSBaseTargetComponent_eventSetTargetPoint_Parms, targetPoint), Z_Construct_UClass_UATSTargetPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::NewProp_targetPoint_MetaData), Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::NewProp_targetPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::NewProp_targetPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSBaseTargetComponent, nullptr, "SetTargetPoint", nullptr, nullptr, Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::PropPointers), sizeof(ATSBaseTargetComponent_eventSetTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(ATSBaseTargetComponent_eventSetTargetPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATSBaseTargetComponent);
	UClass* Z_Construct_UClass_UATSBaseTargetComponent_NoRegister()
	{
		return UATSBaseTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UATSBaseTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckLineSight_MetaData[];
#endif
		static void NewProp_bCheckLineSight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckLineSight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UATSBaseTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UATSBaseTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTarget, "GetCurrentTarget" }, // 292285955
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPoint, "GetCurrentTargetPoint" }, // 3631772180
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_GetCurrentTargetPointLocation, "GetCurrentTargetPointLocation" }, // 415237794
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_HasTarget, "HasTarget" }, // 11743742
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_IsTargetInSight, "IsTargetInSight" }, // 2519161616
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_OnRep_CurrentTarget, "OnRep_CurrentTarget" }, // 1309925784
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_SetCurrentTarget, "SetCurrentTarget" }, // 505076510
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_SetTarget, "SetTarget" }, // 3441640812
		{ &Z_Construct_UFunction_UATSBaseTargetComponent_SetTargetPoint, "SetTargetPoint" }, // 3567866913
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSBaseTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ATS" },
		{ "IncludePath", "ATSBaseTargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Checks if there is any blocking actor in the line sight to current target*/" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
		{ "ToolTip", "Checks if there is any blocking actor in the line sight to current target" },
	};
#endif
	void Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight_SetBit(void* Obj)
	{
		((UATSBaseTargetComponent*)Obj)->bCheckLineSight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight = { "bCheckLineSight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATSBaseTargetComponent), &Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight_MetaData), Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", "OnRep_CurrentTarget", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSBaseTargetComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTarget_MetaData), Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTargetPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATSBaseTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTargetPoint = { "CurrentTargetPoint", nullptr, (EPropertyFlags)0x0020080000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSBaseTargetComponent, CurrentTargetPoint), Z_Construct_UClass_UATSTargetPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTargetPoint_MetaData), Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTargetPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATSBaseTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_bCheckLineSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSBaseTargetComponent_Statics::NewProp_CurrentTargetPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UATSBaseTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATSBaseTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UATSBaseTargetComponent_Statics::ClassParams = {
		&UATSBaseTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UATSBaseTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UATSBaseTargetComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSBaseTargetComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UATSBaseTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UATSBaseTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATSBaseTargetComponent.OuterSingleton, Z_Construct_UClass_UATSBaseTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UATSBaseTargetComponent.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UATSBaseTargetComponent>()
	{
		return UATSBaseTargetComponent::StaticClass();
	}

	void UATSBaseTargetComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
		static const FName Name_CurrentTargetPoint(TEXT("CurrentTargetPoint"));

		const bool bIsValid = true
			&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
			&& Name_CurrentTargetPoint == ClassReps[(int32)ENetFields_Private::CurrentTargetPoint].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UATSBaseTargetComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UATSBaseTargetComponent);
	UATSBaseTargetComponent::~UATSBaseTargetComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UATSBaseTargetComponent, UATSBaseTargetComponent::StaticClass, TEXT("UATSBaseTargetComponent"), &Z_Registration_Info_UClass_UATSBaseTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATSBaseTargetComponent), 2109758747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_3647873228(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFMountableComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMountableComponent() {}
// Cross Module References
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EActionPriority();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountableComponent();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountableComponent_NoRegister();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountPointComponent_NoRegister();
	MOUNTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics
	{
		struct _Script_MountSystem_eventOnMountedStateChanged_Parms
		{
			bool inIsMounted;
		};
		static void NewProp_inIsMounted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inIsMounted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::NewProp_inIsMounted_SetBit(void* Obj)
	{
		((_Script_MountSystem_eventOnMountedStateChanged_Parms*)Obj)->inIsMounted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::NewProp_inIsMounted = { "inIsMounted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MountSystem_eventOnMountedStateChanged_Parms), &Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::NewProp_inIsMounted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::NewProp_inIsMounted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MountSystem, nullptr, "OnMountedStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::_Script_MountSystem_eventOnMountedStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::_Script_MountSystem_eventOnMountedStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMountedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMountedStateChanged, bool inIsMounted)
{
	struct _Script_MountSystem_eventOnMountedStateChanged_Parms
	{
		bool inIsMounted;
	};
	_Script_MountSystem_eventOnMountedStateChanged_Parms Parms;
	Parms.inIsMounted=inIsMounted ? true : false;
	OnMountedStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFMountableComponent::execOnRep_IsMounted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsMounted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetOwnerTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetOwnerTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execCanBeMounted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeMounted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execNeedsPossession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsPossession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetMountOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetMountOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetRider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetRider();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetMountActionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetMountActionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetMountTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetMountTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execIsMounted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMounted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execSetMountMesh)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_inMountMeshOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMountMesh(Z_Param_inMountMeshOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetMountMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetMountMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetDismountPoint)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_dismountPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFMountPointComponent**)Z_Param__Result=P_THIS->GetDismountPoint(Z_Param_Out_dismountPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetMountPointTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMountPointTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetMountPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMountPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execReleaseSustainedActionOnRider)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_actionTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseSustainedActionOnRider_Implementation(Z_Param_actionTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execTriggerActionOnRider)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionState);
		P_GET_ENUM(EActionPriority,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bCanBeStored);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerActionOnRider_Implementation(Z_Param_ActionState,EActionPriority(Z_Param_Priority),Z_Param_bCanBeStored,Z_Param_contextString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execStopMount)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_dismountPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMount_Implementation(Z_Param_dismountPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execStartMount)
	{
		P_GET_OBJECT(ACharacter,Z_Param_inRider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMount(Z_Param_inRider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetPawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetNearestMountPoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFMountPointComponent**)Z_Param__Result=P_THIS->GetNearestMountPoint(Z_Param_Out_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountableComponent::execGetNearestMountPointTag)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNearestMountPointTag(Z_Param_Out_location);
		P_NATIVE_END;
	}
	struct ACFMountableComponent_eventReleaseSustainedActionOnRider_Parms
	{
		FGameplayTag actionTag;
	};
	struct ACFMountableComponent_eventStopMount_Parms
	{
		FName dismountPoint;
	};
	struct ACFMountableComponent_eventTriggerActionOnRider_Parms
	{
		FGameplayTag ActionState;
		EActionPriority Priority;
		bool bCanBeStored;
		FString contextString;
	};
	static FName NAME_UACFMountableComponent_ReleaseSustainedActionOnRider = FName(TEXT("ReleaseSustainedActionOnRider"));
	void UACFMountableComponent::ReleaseSustainedActionOnRider(FGameplayTag actionTag)
	{
		ACFMountableComponent_eventReleaseSustainedActionOnRider_Parms Parms;
		Parms.actionTag=actionTag;
		ProcessEvent(FindFunctionChecked(NAME_UACFMountableComponent_ReleaseSustainedActionOnRider),&Parms);
	}
	static FName NAME_UACFMountableComponent_StopMount = FName(TEXT("StopMount"));
	void UACFMountableComponent::StopMount(FName dismountPoint)
	{
		ACFMountableComponent_eventStopMount_Parms Parms;
		Parms.dismountPoint=dismountPoint;
		ProcessEvent(FindFunctionChecked(NAME_UACFMountableComponent_StopMount),&Parms);
	}
	static FName NAME_UACFMountableComponent_TriggerActionOnRider = FName(TEXT("TriggerActionOnRider"));
	void UACFMountableComponent::TriggerActionOnRider(FGameplayTag ActionState, EActionPriority Priority, bool bCanBeStored, const FString& contextString)
	{
		ACFMountableComponent_eventTriggerActionOnRider_Parms Parms;
		Parms.ActionState=ActionState;
		Parms.Priority=Priority;
		Parms.bCanBeStored=bCanBeStored ? true : false;
		Parms.contextString=contextString;
		ProcessEvent(FindFunctionChecked(NAME_UACFMountableComponent_TriggerActionOnRider),&Parms);
	}
	void UACFMountableComponent::StaticRegisterNativesUACFMountableComponent()
	{
		UClass* Class = UACFMountableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeMounted", &UACFMountableComponent::execCanBeMounted },
			{ "GetDismountPoint", &UACFMountableComponent::execGetDismountPoint },
			{ "GetMountActionTag", &UACFMountableComponent::execGetMountActionTag },
			{ "GetMountMesh", &UACFMountableComponent::execGetMountMesh },
			{ "GetMountOwner", &UACFMountableComponent::execGetMountOwner },
			{ "GetMountPoint", &UACFMountableComponent::execGetMountPoint },
			{ "GetMountPointTransform", &UACFMountableComponent::execGetMountPointTransform },
			{ "GetMountTag", &UACFMountableComponent::execGetMountTag },
			{ "GetNearestMountPoint", &UACFMountableComponent::execGetNearestMountPoint },
			{ "GetNearestMountPointTag", &UACFMountableComponent::execGetNearestMountPointTag },
			{ "GetOwnerTeam", &UACFMountableComponent::execGetOwnerTeam },
			{ "GetPawnOwner", &UACFMountableComponent::execGetPawnOwner },
			{ "GetRider", &UACFMountableComponent::execGetRider },
			{ "IsMounted", &UACFMountableComponent::execIsMounted },
			{ "NeedsPossession", &UACFMountableComponent::execNeedsPossession },
			{ "OnRep_IsMounted", &UACFMountableComponent::execOnRep_IsMounted },
			{ "ReleaseSustainedActionOnRider", &UACFMountableComponent::execReleaseSustainedActionOnRider },
			{ "SetMountMesh", &UACFMountableComponent::execSetMountMesh },
			{ "StartMount", &UACFMountableComponent::execStartMount },
			{ "StopMount", &UACFMountableComponent::execStopMount },
			{ "TriggerActionOnRider", &UACFMountableComponent::execTriggerActionOnRider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics
	{
		struct ACFMountableComponent_eventCanBeMounted_Parms
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
	void Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFMountableComponent_eventCanBeMounted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountableComponent_eventCanBeMounted_Parms), &Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "CanBeMounted", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::ACFMountableComponent_eventCanBeMounted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::ACFMountableComponent_eventCanBeMounted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_CanBeMounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_CanBeMounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics
	{
		struct ACFMountableComponent_eventGetDismountPoint_Parms
		{
			FName dismountPoint;
			UACFMountPointComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dismountPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_dismountPoint;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_dismountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_dismountPoint = { "dismountPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetDismountPoint_Parms, dismountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_dismountPoint_MetaData), Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_dismountPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetDismountPoint_Parms, ReturnValue), Z_Construct_UClass_UACFMountPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_dismountPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_dismountPoint", "None" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetDismountPoint", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::ACFMountableComponent_eventGetDismountPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::ACFMountableComponent_eventGetDismountPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics
	{
		struct ACFMountableComponent_eventGetMountActionTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetMountActionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetMountActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::ACFMountableComponent_eventGetMountActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::ACFMountableComponent_eventGetMountActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics
	{
		struct ACFMountableComponent_eventGetMountMesh_Parms
		{
			UMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetMountMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetMountMesh", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::ACFMountableComponent_eventGetMountMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::ACFMountableComponent_eventGetMountMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetMountMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetMountMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics
	{
		struct ACFMountableComponent_eventGetMountOwner_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetMountOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetMountOwner", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::ACFMountableComponent_eventGetMountOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::ACFMountableComponent_eventGetMountOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetMountOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetMountOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics
	{
		struct ACFMountableComponent_eventGetMountPoint_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetMountPoint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetMountPoint", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::ACFMountableComponent_eventGetMountPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::ACFMountableComponent_eventGetMountPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetMountPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetMountPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics
	{
		struct ACFMountableComponent_eventGetMountPointTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetMountPointTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetMountPointTransform", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::ACFMountableComponent_eventGetMountPointTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::ACFMountableComponent_eventGetMountPointTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics
	{
		struct ACFMountableComponent_eventGetMountTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetMountTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetMountTag", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::ACFMountableComponent_eventGetMountTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::ACFMountableComponent_eventGetMountTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetMountTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetMountTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics
	{
		struct ACFMountableComponent_eventGetNearestMountPoint_Parms
		{
			FVector location;
			UACFMountPointComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetNearestMountPoint_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_location_MetaData), Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetNearestMountPoint_Parms, ReturnValue), Z_Construct_UClass_UACFMountPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetNearestMountPoint", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::ACFMountableComponent_eventGetNearestMountPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::ACFMountableComponent_eventGetNearestMountPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics
	{
		struct ACFMountableComponent_eventGetNearestMountPointTag_Parms
		{
			FVector location;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetNearestMountPointTag_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_location_MetaData), Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_location_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetNearestMountPointTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetNearestMountPointTag", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::ACFMountableComponent_eventGetNearestMountPointTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::ACFMountableComponent_eventGetNearestMountPointTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics
	{
		struct ACFMountableComponent_eventGetOwnerTeam_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetOwnerTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetOwnerTeam", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::ACFMountableComponent_eventGetOwnerTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::ACFMountableComponent_eventGetOwnerTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics
	{
		struct ACFMountableComponent_eventGetPawnOwner_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetPawnOwner", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::ACFMountableComponent_eventGetPawnOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::ACFMountableComponent_eventGetPawnOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics
	{
		struct ACFMountableComponent_eventGetRider_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventGetRider_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "GetRider", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::ACFMountableComponent_eventGetRider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::ACFMountableComponent_eventGetRider_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_GetRider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_GetRider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics
	{
		struct ACFMountableComponent_eventIsMounted_Parms
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
	void Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFMountableComponent_eventIsMounted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountableComponent_eventIsMounted_Parms), &Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "IsMounted", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::ACFMountableComponent_eventIsMounted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::ACFMountableComponent_eventIsMounted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_IsMounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_IsMounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics
	{
		struct ACFMountableComponent_eventNeedsPossession_Parms
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
	void Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFMountableComponent_eventNeedsPossession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountableComponent_eventNeedsPossession_Parms), &Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "NeedsPossession", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::ACFMountableComponent_eventNeedsPossession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::ACFMountableComponent_eventNeedsPossession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_NeedsPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_NeedsPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "OnRep_IsMounted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_actionTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::NewProp_actionTag = { "actionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventReleaseSustainedActionOnRider_Parms, actionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::NewProp_actionTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "ReleaseSustainedActionOnRider", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::PropPointers), sizeof(ACFMountableComponent_eventReleaseSustainedActionOnRider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFMountableComponent_eventReleaseSustainedActionOnRider_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics
	{
		struct ACFMountableComponent_eventSetMountMesh_Parms
		{
			UMeshComponent* inMountMeshOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inMountMeshOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inMountMeshOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::NewProp_inMountMeshOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::NewProp_inMountMeshOverride = { "inMountMeshOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventSetMountMesh_Parms, inMountMeshOverride), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::NewProp_inMountMeshOverride_MetaData), Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::NewProp_inMountMeshOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::NewProp_inMountMeshOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "SetMountMesh", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::ACFMountableComponent_eventSetMountMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::ACFMountableComponent_eventSetMountMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_SetMountMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_SetMountMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics
	{
		struct ACFMountableComponent_eventStartMount_Parms
		{
			ACharacter* inRider;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inRider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::NewProp_inRider = { "inRider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventStartMount_Parms, inRider), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::NewProp_inRider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "StartMount", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::ACFMountableComponent_eventStartMount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::ACFMountableComponent_eventStartMount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_StartMount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_StartMount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_dismountPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::NewProp_dismountPoint = { "dismountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventStopMount_Parms, dismountPoint), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::NewProp_dismountPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_dismountPoint", "None" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "StopMount", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::PropPointers), sizeof(ACFMountableComponent_eventStopMount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFMountableComponent_eventStopMount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_StopMount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_StopMount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static void NewProp_bCanBeStored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contextString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_contextString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventTriggerActionOnRider_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventTriggerActionOnRider_Parms, Priority), Z_Construct_UEnum_ActionsSystem_EActionPriority, METADATA_PARAMS(0, nullptr) }; // 675304996
	void Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_bCanBeStored_SetBit(void* Obj)
	{
		((ACFMountableComponent_eventTriggerActionOnRider_Parms*)Obj)->bCanBeStored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_bCanBeStored = { "bCanBeStored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountableComponent_eventTriggerActionOnRider_Parms), &Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_bCanBeStored_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountableComponent_eventTriggerActionOnRider_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_bCanBeStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_bCanBeStored", "false" },
		{ "CPP_Default_contextString", "" },
		{ "CPP_Default_Priority", "ELow" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountableComponent, nullptr, "TriggerActionOnRider", nullptr, nullptr, Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::PropPointers), sizeof(ACFMountableComponent_eventTriggerActionOnRider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFMountableComponent_eventTriggerActionOnRider_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFMountableComponent);
	UClass* Z_Construct_UClass_UACFMountableComponent_NoRegister()
	{
		return UACFMountableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFMountableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPossessMount_MetaData[];
#endif
		static void NewProp_bPossessMount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPossessMount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMountedStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMountedStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMounted_MetaData[];
#endif
		static void NewProp_bIsMounted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMounted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountTypeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MountTypeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MountActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountPointSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MountPointSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDismountPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultDismountPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFMountableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFMountableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFMountableComponent_CanBeMounted, "CanBeMounted" }, // 4220249426
		{ &Z_Construct_UFunction_UACFMountableComponent_GetDismountPoint, "GetDismountPoint" }, // 3063854379
		{ &Z_Construct_UFunction_UACFMountableComponent_GetMountActionTag, "GetMountActionTag" }, // 550808910
		{ &Z_Construct_UFunction_UACFMountableComponent_GetMountMesh, "GetMountMesh" }, // 3695527936
		{ &Z_Construct_UFunction_UACFMountableComponent_GetMountOwner, "GetMountOwner" }, // 2402941202
		{ &Z_Construct_UFunction_UACFMountableComponent_GetMountPoint, "GetMountPoint" }, // 278772378
		{ &Z_Construct_UFunction_UACFMountableComponent_GetMountPointTransform, "GetMountPointTransform" }, // 3354293207
		{ &Z_Construct_UFunction_UACFMountableComponent_GetMountTag, "GetMountTag" }, // 2065306221
		{ &Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPoint, "GetNearestMountPoint" }, // 4021146704
		{ &Z_Construct_UFunction_UACFMountableComponent_GetNearestMountPointTag, "GetNearestMountPointTag" }, // 3867844055
		{ &Z_Construct_UFunction_UACFMountableComponent_GetOwnerTeam, "GetOwnerTeam" }, // 286926031
		{ &Z_Construct_UFunction_UACFMountableComponent_GetPawnOwner, "GetPawnOwner" }, // 1094136954
		{ &Z_Construct_UFunction_UACFMountableComponent_GetRider, "GetRider" }, // 1763078800
		{ &Z_Construct_UFunction_UACFMountableComponent_IsMounted, "IsMounted" }, // 3086538605
		{ &Z_Construct_UFunction_UACFMountableComponent_NeedsPossession, "NeedsPossession" }, // 3484034765
		{ &Z_Construct_UFunction_UACFMountableComponent_OnRep_IsMounted, "OnRep_IsMounted" }, // 3612152064
		{ &Z_Construct_UFunction_UACFMountableComponent_ReleaseSustainedActionOnRider, "ReleaseSustainedActionOnRider" }, // 1967776879
		{ &Z_Construct_UFunction_UACFMountableComponent_SetMountMesh, "SetMountMesh" }, // 3090755096
		{ &Z_Construct_UFunction_UACFMountableComponent_StartMount, "StartMount" }, // 650281320
		{ &Z_Construct_UFunction_UACFMountableComponent_StopMount, "StopMount" }, // 362191147
		{ &Z_Construct_UFunction_UACFMountableComponent_TriggerActionOnRider, "TriggerActionOnRider" }, // 2384363657
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFMountableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount_SetBit(void* Obj)
	{
		((UACFMountableComponent*)Obj)->bPossessMount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount = { "bPossessMount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFMountableComponent), &Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_OnMountedStateChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_OnMountedStateChanged = { "OnMountedStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountableComponent, OnMountedStateChanged), Z_Construct_UDelegateFunction_MountSystem_OnMountedStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_OnMountedStateChanged_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_OnMountedStateChanged_MetaData) }; // 3649516947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted_SetBit(void* Obj)
	{
		((UACFMountableComponent*)Obj)->bIsMounted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted = { "bIsMounted", "OnRep_IsMounted", (EPropertyFlags)0x0020080101000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFMountableComponent), &Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountTypeTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountTypeTag = { "MountTypeTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountableComponent, MountTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountTypeTag_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountTypeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountActionTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountActionTag = { "MountActionTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountableComponent, MountActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountActionTag_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountPointSocket_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountPointSocket = { "MountPointSocket", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountableComponent, MountPointSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountPointSocket_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountPointSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_DefaultDismountPoint_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_DefaultDismountPoint = { "DefaultDismountPoint", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountableComponent, DefaultDismountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_DefaultDismountPoint_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_DefaultDismountPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_rider_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFMountableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_rider = { "rider", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountableComponent, rider), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_rider_MetaData), Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_rider_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFMountableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bPossessMount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_OnMountedStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_bIsMounted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountTypeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_MountPointSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_DefaultDismountPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountableComponent_Statics::NewProp_rider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFMountableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFMountableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFMountableComponent_Statics::ClassParams = {
		&UACFMountableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFMountableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFMountableComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountableComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFMountableComponent()
	{
		if (!Z_Registration_Info_UClass_UACFMountableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFMountableComponent.OuterSingleton, Z_Construct_UClass_UACFMountableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFMountableComponent.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<UACFMountableComponent>()
	{
		return UACFMountableComponent::StaticClass();
	}

	void UACFMountableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsMounted(TEXT("bIsMounted"));
		static const FName Name_rider(TEXT("rider"));

		const bool bIsValid = true
			&& Name_bIsMounted == ClassReps[(int32)ENetFields_Private::bIsMounted].Property->GetFName()
			&& Name_rider == ClassReps[(int32)ENetFields_Private::rider].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFMountableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFMountableComponent);
	UACFMountableComponent::~UACFMountableComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFMountableComponent, UACFMountableComponent::StaticClass, TEXT("UACFMountableComponent"), &Z_Registration_Info_UClass_UACFMountableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFMountableComponent), 1823430191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_4047190130(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

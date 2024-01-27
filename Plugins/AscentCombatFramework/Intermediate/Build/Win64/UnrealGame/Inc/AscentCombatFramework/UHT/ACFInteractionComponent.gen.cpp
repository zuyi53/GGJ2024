// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFInteractionComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFInteractionComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFInteractionComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFInteractionComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnInteractableRegistered_Parms
		{
			AActor* interctableActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interctableActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::NewProp_interctableActor = { "interctableActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnInteractableRegistered_Parms, interctableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::NewProp_interctableActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnInteractableRegistered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnInteractableRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnInteractableRegistered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteractableRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnInteractableRegistered, AActor* interctableActor)
{
	struct _Script_AscentCombatFramework_eventOnInteractableRegistered_Parms
	{
		AActor* interctableActor;
	};
	_Script_AscentCombatFramework_eventOnInteractableRegistered_Parms Parms;
	Parms.interctableActor=interctableActor;
	OnInteractableRegistered.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFInteractionComponent::execOnActorLeavedDetector)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param__overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param__otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param__otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param__otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLeavedDetector(Z_Param__overlappedComponent,Z_Param__otherActor,Z_Param__otherComp,Z_Param__otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execOnActorEnteredDetector)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param__overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param__otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param__otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param__otherBodyIndex);
		P_GET_UBOOL(Z_Param__bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out__SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEnteredDetector(Z_Param__overlappedComponent,Z_Param__otherActor,Z_Param__otherComp,Z_Param__otherBodyIndex,Z_Param__bFromSweep,Z_Param_Out__SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execSetCurrentBestInteractable)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentBestInteractable(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execUpdateInteractionArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInteractionArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execServerInteract)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_GET_OBJECT(AActor,Z_Param_bestInteractable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInteract_Implementation(Z_Param_interactionType,Z_Param_bestInteractable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execRemoveCollisionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_inTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCollisionChannel(ECollisionChannel(Z_Param_inTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execAddCollisionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_inTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionChannel(ECollisionChannel(Z_Param_inTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execEnableDetection)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableDetection(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execGetCurrentBestInteractableActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentBestInteractableActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFInteractionComponent::execInteract)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_interactionType);
		P_NATIVE_END;
	}
	struct ACFInteractionComponent_eventServerInteract_Parms
	{
		FString interactionType;
		AActor* bestInteractable;
	};
	static FName NAME_UACFInteractionComponent_ServerInteract = FName(TEXT("ServerInteract"));
	void UACFInteractionComponent::ServerInteract(const FString& interactionType, AActor* bestInteractable)
	{
		ACFInteractionComponent_eventServerInteract_Parms Parms;
		Parms.interactionType=interactionType;
		Parms.bestInteractable=bestInteractable;
		ProcessEvent(FindFunctionChecked(NAME_UACFInteractionComponent_ServerInteract),&Parms);
	}
	void UACFInteractionComponent::StaticRegisterNativesUACFInteractionComponent()
	{
		UClass* Class = UACFInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionChannel", &UACFInteractionComponent::execAddCollisionChannel },
			{ "EnableDetection", &UACFInteractionComponent::execEnableDetection },
			{ "GetCurrentBestInteractableActor", &UACFInteractionComponent::execGetCurrentBestInteractableActor },
			{ "Interact", &UACFInteractionComponent::execInteract },
			{ "OnActorEnteredDetector", &UACFInteractionComponent::execOnActorEnteredDetector },
			{ "OnActorLeavedDetector", &UACFInteractionComponent::execOnActorLeavedDetector },
			{ "RemoveCollisionChannel", &UACFInteractionComponent::execRemoveCollisionChannel },
			{ "ServerInteract", &UACFInteractionComponent::execServerInteract },
			{ "SetCurrentBestInteractable", &UACFInteractionComponent::execSetCurrentBestInteractable },
			{ "UpdateInteractionArea", &UACFInteractionComponent::execUpdateInteractionArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics
	{
		struct ACFInteractionComponent_eventAddCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> inTraceChannel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inTraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::NewProp_inTraceChannel = { "inTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventAddCollisionChannel_Parms, inTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::NewProp_inTraceChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "AddCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::ACFInteractionComponent_eventAddCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::ACFInteractionComponent_eventAddCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics
	{
		struct ACFInteractionComponent_eventEnableDetection_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ACFInteractionComponent_eventEnableDetection_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFInteractionComponent_eventEnableDetection_Parms), &Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "EnableDetection", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::ACFInteractionComponent_eventEnableDetection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::ACFInteractionComponent_eventEnableDetection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_EnableDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_EnableDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics
	{
		struct ACFInteractionComponent_eventGetCurrentBestInteractableActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventGetCurrentBestInteractableActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "GetCurrentBestInteractableActor", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::ACFInteractionComponent_eventGetCurrentBestInteractableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::ACFInteractionComponent_eventGetCurrentBestInteractableActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics
	{
		struct ACFInteractionComponent_eventInteract_Parms
		{
			FString interactionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_interactionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventInteract_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::NewProp_interactionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Interacts with the best interactable nearby, calls both the server and client function*/" },
		{ "CPP_Default_interactionType", "" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
		{ "ToolTip", "Interacts with the best interactable nearby, calls both the server and client function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::ACFInteractionComponent_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::ACFInteractionComponent_eventInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics
	{
		struct ACFInteractionComponent_eventOnActorEnteredDetector_Parms
		{
			UPrimitiveComponent* _overlappedComponent;
			AActor* _otherActor;
			UPrimitiveComponent* _otherComp;
			int32 _otherBodyIndex;
			bool _bFromSweep;
			FHitResult _SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp__otherBodyIndex;
		static void NewProp__bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__overlappedComponent = { "_overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorEnteredDetector_Parms, _overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__overlappedComponent_MetaData), Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__overlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherActor = { "_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorEnteredDetector_Parms, _otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherComp = { "_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorEnteredDetector_Parms, _otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherComp_MetaData), Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherBodyIndex = { "_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorEnteredDetector_Parms, _otherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__bFromSweep_SetBit(void* Obj)
	{
		((ACFInteractionComponent_eventOnActorEnteredDetector_Parms*)Obj)->_bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__bFromSweep = { "_bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFInteractionComponent_eventOnActorEnteredDetector_Parms), &Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__SweepResult = { "_SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorEnteredDetector_Parms, _SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__SweepResult_MetaData), Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::NewProp__SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "OnActorEnteredDetector", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::ACFInteractionComponent_eventOnActorEnteredDetector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::ACFInteractionComponent_eventOnActorEnteredDetector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics
	{
		struct ACFInteractionComponent_eventOnActorLeavedDetector_Parms
		{
			UPrimitiveComponent* _overlappedComponent;
			AActor* _otherActor;
			UPrimitiveComponent* _otherComp;
			int32 _otherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp__otherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__overlappedComponent = { "_overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorLeavedDetector_Parms, _overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__overlappedComponent_MetaData), Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__overlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherActor = { "_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorLeavedDetector_Parms, _otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherComp = { "_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorLeavedDetector_Parms, _otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherComp_MetaData), Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherBodyIndex = { "_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventOnActorLeavedDetector_Parms, _otherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::NewProp__otherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "OnActorLeavedDetector", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::ACFInteractionComponent_eventOnActorLeavedDetector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::ACFInteractionComponent_eventOnActorLeavedDetector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics
	{
		struct ACFInteractionComponent_eventRemoveCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> inTraceChannel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inTraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::NewProp_inTraceChannel = { "inTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventRemoveCollisionChannel_Parms, inTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::NewProp_inTraceChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "RemoveCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::ACFInteractionComponent_eventRemoveCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::ACFInteractionComponent_eventRemoveCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_interactionType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bestInteractable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventServerInteract_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_bestInteractable = { "bestInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventServerInteract_Parms, bestInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_interactionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::NewProp_bestInteractable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "ServerInteract", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::PropPointers), sizeof(ACFInteractionComponent_eventServerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractionComponent_eventServerInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_ServerInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics
	{
		struct ACFInteractionComponent_eventSetCurrentBestInteractable_Parms
		{
			AActor* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractionComponent_eventSetCurrentBestInteractable_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "SetCurrentBestInteractable", nullptr, nullptr, Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::ACFInteractionComponent_eventSetCurrentBestInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::ACFInteractionComponent_eventSetCurrentBestInteractable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractionComponent, nullptr, "UpdateInteractionArea", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFInteractionComponent);
	UClass* Z_Construct_UClass_UACFInteractionComponent_NoRegister()
	{
		return UACFInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractableRegistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractableRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionSucceded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionSucceded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractableArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnableOnBeginPlay_MetaData[];
#endif
		static void NewProp_bAutoEnableOnBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnableOnBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentBestInteractableActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentBestInteractableActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interactables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_interactables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFInteractionComponent_AddCollisionChannel, "AddCollisionChannel" }, // 2278939099
		{ &Z_Construct_UFunction_UACFInteractionComponent_EnableDetection, "EnableDetection" }, // 3161495159
		{ &Z_Construct_UFunction_UACFInteractionComponent_GetCurrentBestInteractableActor, "GetCurrentBestInteractableActor" }, // 812511638
		{ &Z_Construct_UFunction_UACFInteractionComponent_Interact, "Interact" }, // 226252882
		{ &Z_Construct_UFunction_UACFInteractionComponent_OnActorEnteredDetector, "OnActorEnteredDetector" }, // 982759500
		{ &Z_Construct_UFunction_UACFInteractionComponent_OnActorLeavedDetector, "OnActorLeavedDetector" }, // 1310218072
		{ &Z_Construct_UFunction_UACFInteractionComponent_RemoveCollisionChannel, "RemoveCollisionChannel" }, // 2825727956
		{ &Z_Construct_UFunction_UACFInteractionComponent_ServerInteract, "ServerInteract" }, // 3829643016
		{ &Z_Construct_UFunction_UACFInteractionComponent_SetCurrentBestInteractable, "SetCurrentBestInteractable" }, // 2501260841
		{ &Z_Construct_UFunction_UACFInteractionComponent_UpdateInteractionArea, "UpdateInteractionArea" }, // 4257432085
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/ACFInteractionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractableRegistered_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractableRegistered = { "OnInteractableRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, OnInteractableRegistered), Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractableRegistered_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractableRegistered_MetaData) }; // 541130490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractionSucceded_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractionSucceded = { "OnInteractionSucceded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, OnInteractionSucceded), Z_Construct_UDelegateFunction_AscentCombatFramework_OnInteractableRegistered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractionSucceded_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractionSucceded_MetaData) }; // 541130490
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels_Inner = { "CollisionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Channels used to check for interactable objects*/" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
		{ "ToolTip", "Channels used to check for interactable objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels = { "CollisionChannels", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, CollisionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_InteractableArea_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_InteractableArea = { "InteractableArea", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, InteractableArea), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_InteractableArea_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_InteractableArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay_SetBit(void* Obj)
	{
		((UACFInteractionComponent*)Obj)->bAutoEnableOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay = { "bAutoEnableOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFInteractionComponent), &Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_PawnOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_PawnOwner = { "PawnOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, PawnOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_PawnOwner_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_PawnOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_currentBestInteractableActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_currentBestInteractableActor = { "currentBestInteractableActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, currentBestInteractableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_currentBestInteractableActor_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_currentBestInteractableActor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables_Inner = { "interactables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables = { "interactables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInteractionComponent, interactables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables_MetaData), Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractableRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_OnInteractionSucceded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_CollisionChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_InteractableArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_bAutoEnableOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_PawnOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_currentBestInteractableActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInteractionComponent_Statics::NewProp_interactables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFInteractionComponent_Statics::ClassParams = {
		&UACFInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFInteractionComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractionComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UACFInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFInteractionComponent.OuterSingleton, Z_Construct_UClass_UACFInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFInteractionComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFInteractionComponent>()
	{
		return UACFInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFInteractionComponent);
	UACFInteractionComponent::~UACFInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFInteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFInteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFInteractionComponent, UACFInteractionComponent::StaticClass, TEXT("UACFInteractionComponent"), &Z_Registration_Info_UClass_UACFInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFInteractionComponent), 2932419977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFInteractionComponent_h_2730602743(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFInteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

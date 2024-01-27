// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFRiderComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFRiderComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountableComponent_NoRegister();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFRiderComponent();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFRiderComponent_NoRegister();
	MOUNTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics
	{
		struct _Script_MountSystem_eventOnRidingStateChanged_Parms
		{
			bool bIsRiding;
		};
		static void NewProp_bIsRiding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRiding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::NewProp_bIsRiding_SetBit(void* Obj)
	{
		((_Script_MountSystem_eventOnRidingStateChanged_Parms*)Obj)->bIsRiding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::NewProp_bIsRiding = { "bIsRiding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MountSystem_eventOnRidingStateChanged_Parms), &Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::NewProp_bIsRiding_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::NewProp_bIsRiding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MountSystem, nullptr, "OnRidingStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::_Script_MountSystem_eventOnRidingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::_Script_MountSystem_eventOnRidingStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRidingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRidingStateChanged, bool bIsRiding)
{
	struct _Script_MountSystem_eventOnRidingStateChanged_Parms
	{
		bool bIsRiding;
	};
	_Script_MountSystem_eventOnRidingStateChanged_Parms Parms;
	Parms.bIsRiding=bIsRiding ? true : false;
	OnRidingStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFRiderComponent::execOnRep_IsRiding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsRiding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execOnRep_Mount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execGetMountTypeTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetMountTypeTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execGetMountComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFMountableComponent**)Z_Param__Result=P_THIS->GetMountComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execGetMount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetMount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execStartDismount)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_dismountPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->StartDismount_Validate(Z_Param_dismountPoint))
		{
			RPC_ValidateFailed(TEXT("StartDismount_Validate"));
			return;
		}
		P_THIS->StartDismount_Implementation(Z_Param_dismountPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execStartMount)
	{
		P_GET_OBJECT(UACFMountableComponent,Z_Param_mount);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->StartMount_Validate(Z_Param_mount))
		{
			RPC_ValidateFailed(TEXT("StartMount_Validate"));
			return;
		}
		P_THIS->StartMount_Implementation(Z_Param_mount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFRiderComponent::execIsRiding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRiding();
		P_NATIVE_END;
	}
	struct ACFRiderComponent_eventStartDismount_Parms
	{
		FName dismountPoint;
	};
	struct ACFRiderComponent_eventStartMount_Parms
	{
		UACFMountableComponent* mount;
	};
	static FName NAME_UACFRiderComponent_StartDismount = FName(TEXT("StartDismount"));
	void UACFRiderComponent::StartDismount(FName const& dismountPoint)
	{
		ACFRiderComponent_eventStartDismount_Parms Parms;
		Parms.dismountPoint=dismountPoint;
		ProcessEvent(FindFunctionChecked(NAME_UACFRiderComponent_StartDismount),&Parms);
	}
	static FName NAME_UACFRiderComponent_StartMount = FName(TEXT("StartMount"));
	void UACFRiderComponent::StartMount(UACFMountableComponent* mount)
	{
		ACFRiderComponent_eventStartMount_Parms Parms;
		Parms.mount=mount;
		ProcessEvent(FindFunctionChecked(NAME_UACFRiderComponent_StartMount),&Parms);
	}
	void UACFRiderComponent::StaticRegisterNativesUACFRiderComponent()
	{
		UClass* Class = UACFRiderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMount", &UACFRiderComponent::execGetMount },
			{ "GetMountComp", &UACFRiderComponent::execGetMountComp },
			{ "GetMountTypeTag", &UACFRiderComponent::execGetMountTypeTag },
			{ "IsRiding", &UACFRiderComponent::execIsRiding },
			{ "OnRep_IsRiding", &UACFRiderComponent::execOnRep_IsRiding },
			{ "OnRep_Mount", &UACFRiderComponent::execOnRep_Mount },
			{ "StartDismount", &UACFRiderComponent::execStartDismount },
			{ "StartMount", &UACFRiderComponent::execStartMount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics
	{
		struct ACFRiderComponent_eventGetMount_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRiderComponent_eventGetMount_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "GetMount", nullptr, nullptr, Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::ACFRiderComponent_eventGetMount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::ACFRiderComponent_eventGetMount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRiderComponent_GetMount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_GetMount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics
	{
		struct ACFRiderComponent_eventGetMountComp_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRiderComponent_eventGetMountComp_Parms, ReturnValue), Z_Construct_UClass_UACFMountableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "GetMountComp", nullptr, nullptr, Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::ACFRiderComponent_eventGetMountComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::ACFRiderComponent_eventGetMountComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRiderComponent_GetMountComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_GetMountComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics
	{
		struct ACFRiderComponent_eventGetMountTypeTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRiderComponent_eventGetMountTypeTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "GetMountTypeTag", nullptr, nullptr, Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::ACFRiderComponent_eventGetMountTypeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::ACFRiderComponent_eventGetMountTypeTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics
	{
		struct ACFRiderComponent_eventIsRiding_Parms
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
	void Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFRiderComponent_eventIsRiding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFRiderComponent_eventIsRiding_Parms), &Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "IsRiding", nullptr, nullptr, Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::ACFRiderComponent_eventIsRiding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::ACFRiderComponent_eventIsRiding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRiderComponent_IsRiding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_IsRiding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "OnRep_IsRiding", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "OnRep_Mount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dismountPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_dismountPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::NewProp_dismountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::NewProp_dismountPoint = { "dismountPoint", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRiderComponent_eventStartDismount_Parms, dismountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::NewProp_dismountPoint_MetaData), Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::NewProp_dismountPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::NewProp_dismountPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_dismountPoint", "None" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "StartDismount", nullptr, nullptr, Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::PropPointers), sizeof(ACFRiderComponent_eventStartDismount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRiderComponent_eventStartDismount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRiderComponent_StartDismount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_StartDismount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::NewProp_mount_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::NewProp_mount = { "mount", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRiderComponent_eventStartMount_Parms, mount), Z_Construct_UClass_UACFMountableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::NewProp_mount_MetaData), Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::NewProp_mount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::NewProp_mount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFRiderComponent, nullptr, "StartMount", nullptr, nullptr, Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::PropPointers), sizeof(ACFRiderComponent_eventStartMount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRiderComponent_eventStartMount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFRiderComponent_StartMount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFRiderComponent_StartMount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFRiderComponent);
	UClass* Z_Construct_UClass_UACFRiderComponent_NoRegister()
	{
		return UACFRiderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFRiderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRidingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRidingStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRiding_MetaData[];
#endif
		static void NewProp_bIsRiding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRiding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_charOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_charOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFRiderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFRiderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFRiderComponent_GetMount, "GetMount" }, // 817719394
		{ &Z_Construct_UFunction_UACFRiderComponent_GetMountComp, "GetMountComp" }, // 3805397694
		{ &Z_Construct_UFunction_UACFRiderComponent_GetMountTypeTag, "GetMountTypeTag" }, // 439362896
		{ &Z_Construct_UFunction_UACFRiderComponent_IsRiding, "IsRiding" }, // 1245693439
		{ &Z_Construct_UFunction_UACFRiderComponent_OnRep_IsRiding, "OnRep_IsRiding" }, // 96314619
		{ &Z_Construct_UFunction_UACFRiderComponent_OnRep_Mount, "OnRep_Mount" }, // 3056486752
		{ &Z_Construct_UFunction_UACFRiderComponent_StartDismount, "StartDismount" }, // 2903802217
		{ &Z_Construct_UFunction_UACFRiderComponent_StartMount, "StartMount" }, // 3566205889
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFRiderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_OnRidingStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_OnRidingStateChanged = { "OnRidingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRiderComponent, OnRidingStateChanged), Z_Construct_UDelegateFunction_MountSystem_OnRidingStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_OnRidingStateChanged_MetaData), Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_OnRidingStateChanged_MetaData) }; // 323398320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding_SetBit(void* Obj)
	{
		((UACFRiderComponent*)Obj)->bIsRiding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding = { "bIsRiding", "OnRep_IsRiding", (EPropertyFlags)0x0020080101000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFRiderComponent), &Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding_MetaData), Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_Mount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_Mount = { "Mount", "OnRep_Mount", (EPropertyFlags)0x0040000100080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRiderComponent, Mount), Z_Construct_UClass_UACFMountableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_Mount_MetaData), Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_Mount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_charOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFRiderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_charOwner = { "charOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRiderComponent, charOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_charOwner_MetaData), Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_charOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFRiderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_OnRidingStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_bIsRiding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_Mount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderComponent_Statics::NewProp_charOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFRiderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFRiderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFRiderComponent_Statics::ClassParams = {
		&UACFRiderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFRiderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFRiderComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFRiderComponent()
	{
		if (!Z_Registration_Info_UClass_UACFRiderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFRiderComponent.OuterSingleton, Z_Construct_UClass_UACFRiderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFRiderComponent.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<UACFRiderComponent>()
	{
		return UACFRiderComponent::StaticClass();
	}

	void UACFRiderComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsRiding(TEXT("bIsRiding"));
		static const FName Name_Mount(TEXT("Mount"));

		const bool bIsValid = true
			&& Name_bIsRiding == ClassReps[(int32)ENetFields_Private::bIsRiding].Property->GetFName()
			&& Name_Mount == ClassReps[(int32)ENetFields_Private::Mount].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFRiderComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFRiderComponent);
	UACFRiderComponent::~UACFRiderComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFRiderComponent, UACFRiderComponent::StaticClass, TEXT("UACFRiderComponent"), &Z_Registration_Info_UClass_UACFRiderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFRiderComponent), 3999119009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_2698425180(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

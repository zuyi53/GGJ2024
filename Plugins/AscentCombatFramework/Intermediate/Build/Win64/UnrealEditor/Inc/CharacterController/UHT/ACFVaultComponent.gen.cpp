// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFVaultComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFVaultComponent() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFVaultComponent();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFVaultComponent_NoRegister();
	CHARACTERCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics
	{
		struct _Script_CharacterController_eventOnActivationStateChanged_Parms
		{
			bool isActive;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((_Script_CharacterController_eventOnActivationStateChanged_Parms*)Obj)->isActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CharacterController_eventOnActivationStateChanged_Parms), &Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharacterController, nullptr, "OnActivationStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnActivationStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::_Script_CharacterController_eventOnActivationStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActivationStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActivationStateChanged, bool isActive)
{
	struct _Script_CharacterController_eventOnActivationStateChanged_Parms
	{
		bool isActive;
	};
	_Script_CharacterController_eventOnActivationStateChanged_Parms Parms;
	Parms.isActive=isActive ? true : false;
	OnActivationStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFVaultComponent::execOnRep_Activated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Activated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execOnEnabledStateChanged)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnabledStateChanged_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execCanVault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanVault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execGetVaultableCollisionChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetVaultableCollisionChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execGetVaultActionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetVaultActionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execGetMantleActionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetMantleActionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execGetActorToVault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorToVault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execGetCharacterOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execSetVaultCollisionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVaultCollisionChannel(ECollisionChannel(Z_Param_channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execSetMantleActionTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMantleActionTag(Z_Param_Out_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execSetVaultActionTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVaultActionTag(Z_Param_Out_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execSetVaultingEnabled)
	{
		P_GET_UBOOL(Z_Param_inEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVaultingEnabled_Implementation(Z_Param_inEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFVaultComponent::execSetActorToVault)
	{
		P_GET_OBJECT(AActor,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorToVault(Z_Param_val);
		P_NATIVE_END;
	}
	struct ACFVaultComponent_eventOnEnabledStateChanged_Parms
	{
		bool bEnabled;
	};
	struct ACFVaultComponent_eventSetVaultingEnabled_Parms
	{
		bool inEnabled;
	};
	static FName NAME_UACFVaultComponent_OnEnabledStateChanged = FName(TEXT("OnEnabledStateChanged"));
	void UACFVaultComponent::OnEnabledStateChanged(bool bEnabled)
	{
		ACFVaultComponent_eventOnEnabledStateChanged_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFVaultComponent_OnEnabledStateChanged),&Parms);
	}
	static FName NAME_UACFVaultComponent_SetVaultingEnabled = FName(TEXT("SetVaultingEnabled"));
	void UACFVaultComponent::SetVaultingEnabled(bool inEnabled)
	{
		ACFVaultComponent_eventSetVaultingEnabled_Parms Parms;
		Parms.inEnabled=inEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFVaultComponent_SetVaultingEnabled),&Parms);
	}
	void UACFVaultComponent::StaticRegisterNativesUACFVaultComponent()
	{
		UClass* Class = UACFVaultComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanVault", &UACFVaultComponent::execCanVault },
			{ "GetActorToVault", &UACFVaultComponent::execGetActorToVault },
			{ "GetCharacterOwner", &UACFVaultComponent::execGetCharacterOwner },
			{ "GetMantleActionTag", &UACFVaultComponent::execGetMantleActionTag },
			{ "GetVaultableCollisionChannel", &UACFVaultComponent::execGetVaultableCollisionChannel },
			{ "GetVaultActionTag", &UACFVaultComponent::execGetVaultActionTag },
			{ "IsEnabled", &UACFVaultComponent::execIsEnabled },
			{ "OnEnabledStateChanged", &UACFVaultComponent::execOnEnabledStateChanged },
			{ "OnRep_Activated", &UACFVaultComponent::execOnRep_Activated },
			{ "SetActorToVault", &UACFVaultComponent::execSetActorToVault },
			{ "SetMantleActionTag", &UACFVaultComponent::execSetMantleActionTag },
			{ "SetVaultActionTag", &UACFVaultComponent::execSetVaultActionTag },
			{ "SetVaultCollisionChannel", &UACFVaultComponent::execSetVaultCollisionChannel },
			{ "SetVaultingEnabled", &UACFVaultComponent::execSetVaultingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics
	{
		struct ACFVaultComponent_eventCanVault_Parms
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
	void Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVaultComponent_eventCanVault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVaultComponent_eventCanVault_Parms), &Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "CanVault", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::ACFVaultComponent_eventCanVault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::ACFVaultComponent_eventCanVault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_CanVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_CanVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics
	{
		struct ACFVaultComponent_eventGetActorToVault_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventGetActorToVault_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "GetActorToVault", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::ACFVaultComponent_eventGetActorToVault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::ACFVaultComponent_eventGetActorToVault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_GetActorToVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_GetActorToVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics
	{
		struct ACFVaultComponent_eventGetCharacterOwner_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventGetCharacterOwner_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// GETTERS ///\n" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
		{ "ToolTip", "GETTERS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "GetCharacterOwner", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::ACFVaultComponent_eventGetCharacterOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::ACFVaultComponent_eventGetCharacterOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics
	{
		struct ACFVaultComponent_eventGetMantleActionTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventGetMantleActionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "GetMantleActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::ACFVaultComponent_eventGetMantleActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::ACFVaultComponent_eventGetMantleActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics
	{
		struct ACFVaultComponent_eventGetVaultableCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventGetVaultableCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "GetVaultableCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::ACFVaultComponent_eventGetVaultableCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::ACFVaultComponent_eventGetVaultableCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics
	{
		struct ACFVaultComponent_eventGetVaultActionTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventGetVaultActionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "GetVaultActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::ACFVaultComponent_eventGetVaultActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::ACFVaultComponent_eventGetVaultActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics
	{
		struct ACFVaultComponent_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFVaultComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVaultComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::ACFVaultComponent_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::ACFVaultComponent_eventIsEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ACFVaultComponent_eventOnEnabledStateChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVaultComponent_eventOnEnabledStateChanged_Parms), &Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled_MetaData), Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "OnEnabledStateChanged", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::PropPointers), sizeof(ACFVaultComponent_eventOnEnabledStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFVaultComponent_eventOnEnabledStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "OnRep_Activated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics
	{
		struct ACFVaultComponent_eventSetActorToVault_Parms
		{
			AActor* val;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventSetActorToVault_Parms, val), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Sets the best actor to vault*/" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
		{ "ToolTip", "Sets the best actor to vault" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "SetActorToVault", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::ACFVaultComponent_eventSetActorToVault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::ACFVaultComponent_eventSetActorToVault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_SetActorToVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_SetActorToVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics
	{
		struct ACFVaultComponent_eventSetMantleActionTag_Parms
		{
			FGameplayTag val;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::NewProp_val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventSetMantleActionTag_Parms, val), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::NewProp_val_MetaData), Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::NewProp_val_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Changes Mantle action at runtime*/" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
		{ "ToolTip", "Changes Mantle action at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "SetMantleActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::ACFVaultComponent_eventSetMantleActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::ACFVaultComponent_eventSetMantleActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics
	{
		struct ACFVaultComponent_eventSetVaultActionTag_Parms
		{
			FGameplayTag val;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::NewProp_val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventSetVaultActionTag_Parms, val), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::NewProp_val_MetaData), Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::NewProp_val_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Changes Vault action at runtime*/" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
		{ "ToolTip", "Changes Vault action at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "SetVaultActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::ACFVaultComponent_eventSetVaultActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::ACFVaultComponent_eventSetVaultActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics
	{
		struct ACFVaultComponent_eventSetVaultCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> channel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFVaultComponent_eventSetVaultCollisionChannel_Parms, channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::NewProp_channel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "SetVaultCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::ACFVaultComponent_eventSetVaultCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::ACFVaultComponent_eventSetVaultCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics
	{
		static void NewProp_inEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::NewProp_inEnabled_SetBit(void* Obj)
	{
		((ACFVaultComponent_eventSetVaultingEnabled_Parms*)Obj)->inEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::NewProp_inEnabled = { "inEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFVaultComponent_eventSetVaultingEnabled_Parms), &Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::NewProp_inEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::NewProp_inEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Enables/Disables vaulting Checks*/" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
		{ "ToolTip", "Enables/Disables vaulting Checks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFVaultComponent, nullptr, "SetVaultingEnabled", nullptr, nullptr, Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::PropPointers), sizeof(ACFVaultComponent_eventSetVaultingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFVaultComponent_eventSetVaultingEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFVaultComponent);
	UClass* Z_Construct_UClass_UACFVaultComponent_NoRegister()
	{
		return UACFVaultComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFVaultComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivationChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivationChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VaultActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnable_MetaData[];
#endif
		static void NewProp_bAutoEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultablesChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VaultablesChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVaultChecksEnabled_MetaData[];
#endif
		static void NewProp_bVaultChecksEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVaultChecksEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFVaultComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFVaultComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFVaultComponent_CanVault, "CanVault" }, // 528636161
		{ &Z_Construct_UFunction_UACFVaultComponent_GetActorToVault, "GetActorToVault" }, // 3053135064
		{ &Z_Construct_UFunction_UACFVaultComponent_GetCharacterOwner, "GetCharacterOwner" }, // 891343883
		{ &Z_Construct_UFunction_UACFVaultComponent_GetMantleActionTag, "GetMantleActionTag" }, // 1872962603
		{ &Z_Construct_UFunction_UACFVaultComponent_GetVaultableCollisionChannel, "GetVaultableCollisionChannel" }, // 863185917
		{ &Z_Construct_UFunction_UACFVaultComponent_GetVaultActionTag, "GetVaultActionTag" }, // 173002353
		{ &Z_Construct_UFunction_UACFVaultComponent_IsEnabled, "IsEnabled" }, // 466984741
		{ &Z_Construct_UFunction_UACFVaultComponent_OnEnabledStateChanged, "OnEnabledStateChanged" }, // 3991383786
		{ &Z_Construct_UFunction_UACFVaultComponent_OnRep_Activated, "OnRep_Activated" }, // 2072288972
		{ &Z_Construct_UFunction_UACFVaultComponent_SetActorToVault, "SetActorToVault" }, // 3009218038
		{ &Z_Construct_UFunction_UACFVaultComponent_SetMantleActionTag, "SetMantleActionTag" }, // 845491560
		{ &Z_Construct_UFunction_UACFVaultComponent_SetVaultActionTag, "SetVaultActionTag" }, // 1879575777
		{ &Z_Construct_UFunction_UACFVaultComponent_SetVaultCollisionChannel, "SetVaultCollisionChannel" }, // 1069905341
		{ &Z_Construct_UFunction_UACFVaultComponent_SetVaultingEnabled, "SetVaultingEnabled" }, // 4167037594
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "ACFVaultComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_OnActivationChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_OnActivationChanged = { "OnActivationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFVaultComponent, OnActivationChanged), Z_Construct_UDelegateFunction_CharacterController_OnActivationStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_OnActivationChanged_MetaData), Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_OnActivationChanged_MetaData) }; // 3719581912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultActionTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultActionTag = { "VaultActionTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFVaultComponent, VaultActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultActionTag_MetaData), Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_MantleActionTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_MantleActionTag = { "MantleActionTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFVaultComponent, MantleActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_MantleActionTag_MetaData), Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_MantleActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "// If this components should activate automatically on beginplay\n" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
		{ "ToolTip", "If this components should activate automatically on beginplay" },
	};
#endif
	void Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable_SetBit(void* Obj)
	{
		((UACFVaultComponent*)Obj)->bAutoEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable = { "bAutoEnable", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFVaultComponent), &Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable_MetaData), Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultablesChannel_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultablesChannel = { "VaultablesChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFVaultComponent, VaultablesChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultablesChannel_MetaData), Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultablesChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFVaultComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled_SetBit(void* Obj)
	{
		((UACFVaultComponent*)Obj)->bVaultChecksEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled = { "bVaultChecksEnabled", "OnRep_Activated", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFVaultComponent), &Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled_MetaData), Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFVaultComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_OnActivationChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_MantleActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bAutoEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_VaultablesChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFVaultComponent_Statics::NewProp_bVaultChecksEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFVaultComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFVaultComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFVaultComponent_Statics::ClassParams = {
		&UACFVaultComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFVaultComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFVaultComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFVaultComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFVaultComponent()
	{
		if (!Z_Registration_Info_UClass_UACFVaultComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFVaultComponent.OuterSingleton, Z_Construct_UClass_UACFVaultComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFVaultComponent.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFVaultComponent>()
	{
		return UACFVaultComponent::StaticClass();
	}

	void UACFVaultComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bVaultChecksEnabled(TEXT("bVaultChecksEnabled"));

		const bool bIsValid = true
			&& Name_bVaultChecksEnabled == ClassReps[(int32)ENetFields_Private::bVaultChecksEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFVaultComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFVaultComponent);
	UACFVaultComponent::~UACFVaultComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFVaultComponent, UACFVaultComponent::StaticClass, TEXT("UACFVaultComponent"), &Z_Registration_Info_UClass_UACFVaultComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFVaultComponent), 3387386444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_232806571(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

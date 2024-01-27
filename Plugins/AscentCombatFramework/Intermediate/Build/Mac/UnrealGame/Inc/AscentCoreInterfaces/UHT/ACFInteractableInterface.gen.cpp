// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/ACFInteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFInteractableInterface() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFInteractableInterface();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFInteractableInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCoreInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IACFInteractableInterface::execCanBeInteracted)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeInteracted_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFInteractableInterface::execGetInteractableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractableName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFInteractableInterface::execOnInteractableUnregisteredByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractableUnregisteredByPawn_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFInteractableInterface::execOnInteractableRegisteredByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractableRegisteredByPawn_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFInteractableInterface::execOnLocalInteractedByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalInteractedByPawn_Implementation(Z_Param_Pawn,Z_Param_interactionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFInteractableInterface::execOnInteractedByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractedByPawn_Implementation(Z_Param_Pawn,Z_Param_interactionType);
		P_NATIVE_END;
	}
	struct ACFInteractableInterface_eventCanBeInteracted_Parms
	{
		APawn* Pawn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFInteractableInterface_eventCanBeInteracted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFInteractableInterface_eventGetInteractableName_Parms
	{
		FText ReturnValue;
	};
	struct ACFInteractableInterface_eventOnInteractableRegisteredByPawn_Parms
	{
		APawn* Pawn;
	};
	struct ACFInteractableInterface_eventOnInteractableUnregisteredByPawn_Parms
	{
		APawn* Pawn;
	};
	struct ACFInteractableInterface_eventOnInteractedByPawn_Parms
	{
		APawn* Pawn;
		FString interactionType;
	};
	struct ACFInteractableInterface_eventOnLocalInteractedByPawn_Parms
	{
		APawn* Pawn;
		FString interactionType;
	};
	bool IACFInteractableInterface::CanBeInteracted(APawn* Pawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeInteracted instead.");
		ACFInteractableInterface_eventCanBeInteracted_Parms Parms;
		return Parms.ReturnValue;
	}
	FText IACFInteractableInterface::GetInteractableName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractableName instead.");
		ACFInteractableInterface_eventGetInteractableName_Parms Parms;
		return Parms.ReturnValue;
	}
	void IACFInteractableInterface::OnInteractableRegisteredByPawn(APawn* Pawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteractableRegisteredByPawn instead.");
	}
	void IACFInteractableInterface::OnInteractableUnregisteredByPawn(APawn* Pawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteractableUnregisteredByPawn instead.");
	}
	void IACFInteractableInterface::OnInteractedByPawn(APawn* Pawn, const FString& interactionType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteractedByPawn instead.");
	}
	void IACFInteractableInterface::OnLocalInteractedByPawn(APawn* Pawn, const FString& interactionType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocalInteractedByPawn instead.");
	}
	void UACFInteractableInterface::StaticRegisterNativesUACFInteractableInterface()
	{
		UClass* Class = UACFInteractableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeInteracted", &IACFInteractableInterface::execCanBeInteracted },
			{ "GetInteractableName", &IACFInteractableInterface::execGetInteractableName },
			{ "OnInteractableRegisteredByPawn", &IACFInteractableInterface::execOnInteractableRegisteredByPawn },
			{ "OnInteractableUnregisteredByPawn", &IACFInteractableInterface::execOnInteractableUnregisteredByPawn },
			{ "OnInteractedByPawn", &IACFInteractableInterface::execOnInteractedByPawn },
			{ "OnLocalInteractedByPawn", &IACFInteractableInterface::execOnLocalInteractedByPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventCanBeInteracted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFInteractableInterface_eventCanBeInteracted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFInteractableInterface_eventCanBeInteracted_Parms), &Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractableInterface, nullptr, "CanBeInteracted", nullptr, nullptr, Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::PropPointers), sizeof(ACFInteractableInterface_eventCanBeInteracted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractableInterface_eventCanBeInteracted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventGetInteractableName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractableInterface, nullptr, "GetInteractableName", nullptr, nullptr, Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::PropPointers), sizeof(ACFInteractableInterface_eventGetInteractableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractableInterface_eventGetInteractableName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventOnInteractableRegisteredByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractableInterface, nullptr, "OnInteractableRegisteredByPawn", nullptr, nullptr, Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::PropPointers), sizeof(ACFInteractableInterface_eventOnInteractableRegisteredByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractableInterface_eventOnInteractableRegisteredByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventOnInteractableUnregisteredByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractableInterface, nullptr, "OnInteractableUnregisteredByPawn", nullptr, nullptr, Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::PropPointers), sizeof(ACFInteractableInterface_eventOnInteractableUnregisteredByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractableInterface_eventOnInteractableUnregisteredByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventOnInteractedByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventOnInteractedByPawn_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::NewProp_interactionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_interactionType", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractableInterface, nullptr, "OnInteractedByPawn", nullptr, nullptr, Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::PropPointers), sizeof(ACFInteractableInterface_eventOnInteractedByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractableInterface_eventOnInteractedByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventOnLocalInteractedByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFInteractableInterface_eventOnLocalInteractedByPawn_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::NewProp_interactionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_interactionType", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFInteractableInterface, nullptr, "OnLocalInteractedByPawn", nullptr, nullptr, Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::PropPointers), sizeof(ACFInteractableInterface_eventOnLocalInteractedByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFInteractableInterface_eventOnLocalInteractedByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFInteractableInterface);
	UClass* Z_Construct_UClass_UACFInteractableInterface_NoRegister()
	{
		return UACFInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UACFInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractableInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFInteractableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFInteractableInterface_CanBeInteracted, "CanBeInteracted" }, // 745737379
		{ &Z_Construct_UFunction_UACFInteractableInterface_GetInteractableName, "GetInteractableName" }, // 1378080573
		{ &Z_Construct_UFunction_UACFInteractableInterface_OnInteractableRegisteredByPawn, "OnInteractableRegisteredByPawn" }, // 148644271
		{ &Z_Construct_UFunction_UACFInteractableInterface_OnInteractableUnregisteredByPawn, "OnInteractableUnregisteredByPawn" }, // 993996931
		{ &Z_Construct_UFunction_UACFInteractableInterface_OnInteractedByPawn, "OnInteractedByPawn" }, // 864484918
		{ &Z_Construct_UFunction_UACFInteractableInterface_OnLocalInteractedByPawn, "OnLocalInteractedByPawn" }, // 460334586
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractableInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/ACFInteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IACFInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFInteractableInterface_Statics::ClassParams = {
		&UACFInteractableInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInteractableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFInteractableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_UACFInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFInteractableInterface.OuterSingleton, Z_Construct_UClass_UACFInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFInteractableInterface.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UClass* StaticClass<UACFInteractableInterface>()
	{
		return UACFInteractableInterface::StaticClass();
	}
	UACFInteractableInterface::UACFInteractableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFInteractableInterface);
	UACFInteractableInterface::~UACFInteractableInterface() {}
	static FName NAME_UACFInteractableInterface_CanBeInteracted = FName(TEXT("CanBeInteracted"));
	bool IACFInteractableInterface::Execute_CanBeInteracted(UObject* O, APawn* Pawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFInteractableInterface::StaticClass()));
		ACFInteractableInterface_eventCanBeInteracted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFInteractableInterface_CanBeInteracted);
		if (Func)
		{
			Parms.Pawn=Pawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFInteractableInterface*)(O->GetNativeInterfaceAddress(UACFInteractableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanBeInteracted_Implementation(Pawn);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UACFInteractableInterface_GetInteractableName = FName(TEXT("GetInteractableName"));
	FText IACFInteractableInterface::Execute_GetInteractableName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFInteractableInterface::StaticClass()));
		ACFInteractableInterface_eventGetInteractableName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFInteractableInterface_GetInteractableName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFInteractableInterface*)(O->GetNativeInterfaceAddress(UACFInteractableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractableName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UACFInteractableInterface_OnInteractableRegisteredByPawn = FName(TEXT("OnInteractableRegisteredByPawn"));
	void IACFInteractableInterface::Execute_OnInteractableRegisteredByPawn(UObject* O, APawn* Pawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFInteractableInterface::StaticClass()));
		ACFInteractableInterface_eventOnInteractableRegisteredByPawn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFInteractableInterface_OnInteractableRegisteredByPawn);
		if (Func)
		{
			Parms.Pawn=Pawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFInteractableInterface*)(O->GetNativeInterfaceAddress(UACFInteractableInterface::StaticClass())))
		{
			I->OnInteractableRegisteredByPawn_Implementation(Pawn);
		}
	}
	static FName NAME_UACFInteractableInterface_OnInteractableUnregisteredByPawn = FName(TEXT("OnInteractableUnregisteredByPawn"));
	void IACFInteractableInterface::Execute_OnInteractableUnregisteredByPawn(UObject* O, APawn* Pawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFInteractableInterface::StaticClass()));
		ACFInteractableInterface_eventOnInteractableUnregisteredByPawn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFInteractableInterface_OnInteractableUnregisteredByPawn);
		if (Func)
		{
			Parms.Pawn=Pawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFInteractableInterface*)(O->GetNativeInterfaceAddress(UACFInteractableInterface::StaticClass())))
		{
			I->OnInteractableUnregisteredByPawn_Implementation(Pawn);
		}
	}
	static FName NAME_UACFInteractableInterface_OnInteractedByPawn = FName(TEXT("OnInteractedByPawn"));
	void IACFInteractableInterface::Execute_OnInteractedByPawn(UObject* O, APawn* Pawn, const FString& interactionType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFInteractableInterface::StaticClass()));
		ACFInteractableInterface_eventOnInteractedByPawn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFInteractableInterface_OnInteractedByPawn);
		if (Func)
		{
			Parms.Pawn=Pawn;
			Parms.interactionType=interactionType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFInteractableInterface*)(O->GetNativeInterfaceAddress(UACFInteractableInterface::StaticClass())))
		{
			I->OnInteractedByPawn_Implementation(Pawn,interactionType);
		}
	}
	static FName NAME_UACFInteractableInterface_OnLocalInteractedByPawn = FName(TEXT("OnLocalInteractedByPawn"));
	void IACFInteractableInterface::Execute_OnLocalInteractedByPawn(UObject* O, APawn* Pawn, const FString& interactionType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFInteractableInterface::StaticClass()));
		ACFInteractableInterface_eventOnLocalInteractedByPawn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFInteractableInterface_OnLocalInteractedByPawn);
		if (Func)
		{
			Parms.Pawn=Pawn;
			Parms.interactionType=interactionType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFInteractableInterface*)(O->GetNativeInterfaceAddress(UACFInteractableInterface::StaticClass())))
		{
			I->OnLocalInteractedByPawn_Implementation(Pawn,interactionType);
		}
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFInteractableInterface, UACFInteractableInterface::StaticClass, TEXT("UACFInteractableInterface"), &Z_Registration_Info_UClass_UACFInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFInteractableInterface), 3929623987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_3104714314(TEXT("/Script/AscentCoreInterfaces"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

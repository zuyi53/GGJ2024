// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/ACFEntityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFEntityInterface() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFEntityInterface();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFEntityInterface_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UFunction* Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AscentCoreInterfaces();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCoreInterfaces_eventOnTeamChanged_Parms
		{
			ETeam Team;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCoreInterfaces_eventOnTeamChanged_Parms, Team), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team_MetaData), Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team_MetaData) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This class does not need to be modified.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFEntityInterface.h" },
		{ "ToolTip", "This class does not need to be modified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCoreInterfaces, nullptr, "OnTeamChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::_Script_AscentCoreInterfaces_eventOnTeamChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::_Script_AscentCoreInterfaces_eventOnTeamChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTeamChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTeamChanged, const ETeam Team)
{
	struct _Script_AscentCoreInterfaces_eventOnTeamChanged_Parms
	{
		ETeam Team;
	};
	_Script_AscentCoreInterfaces_eventOnTeamChanged_Parms Parms;
	Parms.Team=Team;
	OnTeamChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(IACFEntityInterface::execAssignTeamToEntity)
	{
		P_GET_ENUM(ETeam,Z_Param_inCombatTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignTeamToEntity_Implementation(ETeam(Z_Param_inCombatTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFEntityInterface::execIsEntityAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEntityAlive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFEntityInterface::execGetEntityExtentRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntityExtentRadius_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFEntityInterface::execGetEntityCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetEntityCombatTeam_Implementation();
		P_NATIVE_END;
	}
	struct ACFEntityInterface_eventAssignTeamToEntity_Parms
	{
		ETeam inCombatTeam;
	};
	struct ACFEntityInterface_eventGetEntityCombatTeam_Parms
	{
		ETeam ReturnValue;

		/** Constructor, initializes return property only **/
		ACFEntityInterface_eventGetEntityCombatTeam_Parms()
			: ReturnValue((ETeam)0)
		{
		}
	};
	struct ACFEntityInterface_eventGetEntityExtentRadius_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFEntityInterface_eventGetEntityExtentRadius_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFEntityInterface_eventIsEntityAlive_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFEntityInterface_eventIsEntityAlive_Parms()
			: ReturnValue(false)
		{
		}
	};
	void IACFEntityInterface::AssignTeamToEntity(ETeam inCombatTeam)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AssignTeamToEntity instead.");
	}
	ETeam IACFEntityInterface::GetEntityCombatTeam() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEntityCombatTeam instead.");
		ACFEntityInterface_eventGetEntityCombatTeam_Parms Parms;
		return Parms.ReturnValue;
	}
	float IACFEntityInterface::GetEntityExtentRadius() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEntityExtentRadius instead.");
		ACFEntityInterface_eventGetEntityExtentRadius_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IACFEntityInterface::IsEntityAlive() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsEntityAlive instead.");
		ACFEntityInterface_eventIsEntityAlive_Parms Parms;
		return Parms.ReturnValue;
	}
	void UACFEntityInterface::StaticRegisterNativesUACFEntityInterface()
	{
		UClass* Class = UACFEntityInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignTeamToEntity", &IACFEntityInterface::execAssignTeamToEntity },
			{ "GetEntityCombatTeam", &IACFEntityInterface::execGetEntityCombatTeam },
			{ "GetEntityExtentRadius", &IACFEntityInterface::execGetEntityExtentRadius },
			{ "IsEntityAlive", &IACFEntityInterface::execIsEntityAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inCombatTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inCombatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::NewProp_inCombatTeam = { "inCombatTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEntityInterface_eventAssignTeamToEntity_Parms, inCombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::NewProp_inCombatTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFEntityInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEntityInterface, nullptr, "AssignTeamToEntity", nullptr, nullptr, Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::PropPointers), sizeof(ACFEntityInterface_eventAssignTeamToEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEntityInterface_eventAssignTeamToEntity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEntityInterface_eventGetEntityCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFEntityInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEntityInterface, nullptr, "GetEntityCombatTeam", nullptr, nullptr, Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::PropPointers), sizeof(ACFEntityInterface_eventGetEntityCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEntityInterface_eventGetEntityCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEntityInterface_eventGetEntityExtentRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Returns the radius of a sphere that can include all the mesh of the character. \n    Used for warp and distance calculations*/" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFEntityInterface.h" },
		{ "ToolTip", "Returns the radius of a sphere that can include all the mesh of the character.\n    Used for warp and distance calculations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEntityInterface, nullptr, "GetEntityExtentRadius", nullptr, nullptr, Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::PropPointers), sizeof(ACFEntityInterface_eventGetEntityExtentRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEntityInterface_eventGetEntityExtentRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEntityInterface_eventIsEntityAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEntityInterface_eventIsEntityAlive_Parms), &Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Interfaces/ACFEntityInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEntityInterface, nullptr, "IsEntityAlive", nullptr, nullptr, Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::PropPointers), sizeof(ACFEntityInterface_eventIsEntityAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEntityInterface_eventIsEntityAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFEntityInterface);
	UClass* Z_Construct_UClass_UACFEntityInterface_NoRegister()
	{
		return UACFEntityInterface::StaticClass();
	}
	struct Z_Construct_UClass_UACFEntityInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFEntityInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEntityInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFEntityInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFEntityInterface_AssignTeamToEntity, "AssignTeamToEntity" }, // 702841720
		{ &Z_Construct_UFunction_UACFEntityInterface_GetEntityCombatTeam, "GetEntityCombatTeam" }, // 683277001
		{ &Z_Construct_UFunction_UACFEntityInterface_GetEntityExtentRadius, "GetEntityExtentRadius" }, // 3981191396
		{ &Z_Construct_UFunction_UACFEntityInterface_IsEntityAlive, "IsEntityAlive" }, // 4220592910
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEntityInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEntityInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/ACFEntityInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFEntityInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IACFEntityInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFEntityInterface_Statics::ClassParams = {
		&UACFEntityInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEntityInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFEntityInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFEntityInterface()
	{
		if (!Z_Registration_Info_UClass_UACFEntityInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFEntityInterface.OuterSingleton, Z_Construct_UClass_UACFEntityInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFEntityInterface.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UClass* StaticClass<UACFEntityInterface>()
	{
		return UACFEntityInterface::StaticClass();
	}
	UACFEntityInterface::UACFEntityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFEntityInterface);
	UACFEntityInterface::~UACFEntityInterface() {}
	static FName NAME_UACFEntityInterface_AssignTeamToEntity = FName(TEXT("AssignTeamToEntity"));
	void IACFEntityInterface::Execute_AssignTeamToEntity(UObject* O, ETeam inCombatTeam)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFEntityInterface::StaticClass()));
		ACFEntityInterface_eventAssignTeamToEntity_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFEntityInterface_AssignTeamToEntity);
		if (Func)
		{
			Parms.inCombatTeam=inCombatTeam;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFEntityInterface*)(O->GetNativeInterfaceAddress(UACFEntityInterface::StaticClass())))
		{
			I->AssignTeamToEntity_Implementation(inCombatTeam);
		}
	}
	static FName NAME_UACFEntityInterface_GetEntityCombatTeam = FName(TEXT("GetEntityCombatTeam"));
	ETeam IACFEntityInterface::Execute_GetEntityCombatTeam(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFEntityInterface::StaticClass()));
		ACFEntityInterface_eventGetEntityCombatTeam_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFEntityInterface_GetEntityCombatTeam);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IACFEntityInterface*)(O->GetNativeInterfaceAddress(UACFEntityInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEntityCombatTeam_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UACFEntityInterface_GetEntityExtentRadius = FName(TEXT("GetEntityExtentRadius"));
	float IACFEntityInterface::Execute_GetEntityExtentRadius(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFEntityInterface::StaticClass()));
		ACFEntityInterface_eventGetEntityExtentRadius_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFEntityInterface_GetEntityExtentRadius);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IACFEntityInterface*)(O->GetNativeInterfaceAddress(UACFEntityInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEntityExtentRadius_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UACFEntityInterface_IsEntityAlive = FName(TEXT("IsEntityAlive"));
	bool IACFEntityInterface::Execute_IsEntityAlive(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFEntityInterface::StaticClass()));
		ACFEntityInterface_eventIsEntityAlive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFEntityInterface_IsEntityAlive);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IACFEntityInterface*)(O->GetNativeInterfaceAddress(UACFEntityInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsEntityAlive_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFEntityInterface, UACFEntityInterface::StaticClass, TEXT("UACFEntityInterface"), &Z_Registration_Info_UClass_UACFEntityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFEntityInterface), 2418734386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_712013696(TEXT("/Script/AscentCoreInterfaces"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

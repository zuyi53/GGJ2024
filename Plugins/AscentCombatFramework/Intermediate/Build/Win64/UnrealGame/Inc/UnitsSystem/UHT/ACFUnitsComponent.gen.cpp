// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsSystem/Public/ACFUnitsComponent.h"
#include "ACFAITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUnitsComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FBaseUnit();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UNITSSYSTEM_API UClass* Z_Construct_UClass_UACFUnitsComponent();
	UNITSSYSTEM_API UClass* Z_Construct_UClass_UACFUnitsComponent_NoRegister();
	UNITSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnitsSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics
	{
		struct _Script_UnitsSystem_eventOnUnitsChanged_Parms
		{
			TArray<FBaseUnit> newUnits;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_newUnits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newUnits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits_Inner = { "newUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseUnit, METADATA_PARAMS(0, nullptr) }; // 1237690347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits = { "newUnits", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnitsSystem_eventOnUnitsChanged_Parms, newUnits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits_MetaData), Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits_MetaData) }; // 1237690347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::NewProp_newUnits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnitsSystem, nullptr, "OnUnitsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::_Script_UnitsSystem_eventOnUnitsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::_Script_UnitsSystem_eventOnUnitsChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUnitsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUnitsChanged, TArray<FBaseUnit> const& newUnits)
{
	struct _Script_UnitsSystem_eventOnUnitsChanged_Parms
	{
		TArray<FBaseUnit> newUnits;
	};
	_Script_UnitsSystem_eventOnUnitsChanged_Parms Parms;
	Parms.newUnits=newUnits;
	OnUnitsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFUnitsComponent::execOnRepUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepUnits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUnitsComponent::execMoveUnitFromGroup)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_unit);
		P_GET_OBJECT(UACFGroupAIComponent,Z_Param_groupAI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveUnitFromGroup(Z_Param_Out_unit,Z_Param_groupAI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUnitsComponent::execMoveUnitToGroup)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_unit);
		P_GET_OBJECT(UACFGroupAIComponent,Z_Param_groupAI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveUnitToGroup(Z_Param_Out_unit,Z_Param_groupAI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUnitsComponent::execRemoveUnit)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUnit(Z_Param_Out_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUnitsComponent::execAddUnit)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUnit(Z_Param_Out_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUnitsComponent::execGetUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBaseUnit>*)Z_Param__Result=P_THIS->GetUnits();
		P_NATIVE_END;
	}
	void UACFUnitsComponent::StaticRegisterNativesUACFUnitsComponent()
	{
		UClass* Class = UACFUnitsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUnit", &UACFUnitsComponent::execAddUnit },
			{ "GetUnits", &UACFUnitsComponent::execGetUnits },
			{ "MoveUnitFromGroup", &UACFUnitsComponent::execMoveUnitFromGroup },
			{ "MoveUnitToGroup", &UACFUnitsComponent::execMoveUnitToGroup },
			{ "OnRepUnits", &UACFUnitsComponent::execOnRepUnits },
			{ "RemoveUnit", &UACFUnitsComponent::execRemoveUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics
	{
		struct ACFUnitsComponent_eventAddUnit_Parms
		{
			const TSubclassOf<AACFCharacter>  unit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::NewProp_unit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventAddUnit_Parms, unit), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::NewProp_unit_MetaData), Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::NewProp_unit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUnitsComponent, nullptr, "AddUnit", nullptr, nullptr, Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::ACFUnitsComponent_eventAddUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::ACFUnitsComponent_eventAddUnit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFUnitsComponent_AddUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFUnitsComponent_AddUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics
	{
		struct ACFUnitsComponent_eventGetUnits_Parms
		{
			TArray<FBaseUnit> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseUnit, METADATA_PARAMS(0, nullptr) }; // 1237690347
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventGetUnits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1237690347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUnitsComponent, nullptr, "GetUnits", nullptr, nullptr, Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::ACFUnitsComponent_eventGetUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::ACFUnitsComponent_eventGetUnits_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFUnitsComponent_GetUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFUnitsComponent_GetUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics
	{
		struct ACFUnitsComponent_eventMoveUnitFromGroup_Parms
		{
			const TSubclassOf<AACFCharacter>  unit;
			UACFGroupAIComponent* groupAI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupAI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groupAI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_unit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventMoveUnitFromGroup_Parms, unit), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_unit_MetaData), Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_unit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_groupAI_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_groupAI = { "groupAI", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventMoveUnitFromGroup_Parms, groupAI), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_groupAI_MetaData), Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_groupAI_MetaData) };
	void Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFUnitsComponent_eventMoveUnitFromGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFUnitsComponent_eventMoveUnitFromGroup_Parms), &Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_groupAI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUnitsComponent, nullptr, "MoveUnitFromGroup", nullptr, nullptr, Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::ACFUnitsComponent_eventMoveUnitFromGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::ACFUnitsComponent_eventMoveUnitFromGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics
	{
		struct ACFUnitsComponent_eventMoveUnitToGroup_Parms
		{
			const TSubclassOf<AACFCharacter>  unit;
			UACFGroupAIComponent* groupAI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupAI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groupAI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_unit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventMoveUnitToGroup_Parms, unit), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_unit_MetaData), Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_unit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_groupAI_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_groupAI = { "groupAI", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventMoveUnitToGroup_Parms, groupAI), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_groupAI_MetaData), Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_groupAI_MetaData) };
	void Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFUnitsComponent_eventMoveUnitToGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFUnitsComponent_eventMoveUnitToGroup_Parms), &Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_groupAI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUnitsComponent, nullptr, "MoveUnitToGroup", nullptr, nullptr, Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::ACFUnitsComponent_eventMoveUnitToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::ACFUnitsComponent_eventMoveUnitToGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUnitsComponent, nullptr, "OnRepUnits", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics
	{
		struct ACFUnitsComponent_eventRemoveUnit_Parms
		{
			const TSubclassOf<AACFCharacter>  unit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_unit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_unit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFUnitsComponent_eventRemoveUnit_Parms, unit), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_unit_MetaData), Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_unit_MetaData) };
	void Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFUnitsComponent_eventRemoveUnit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFUnitsComponent_eventRemoveUnit_Parms), &Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUnitsComponent, nullptr, "RemoveUnit", nullptr, nullptr, Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::ACFUnitsComponent_eventRemoveUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::ACFUnitsComponent_eventRemoveUnit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFUnitsComponent);
	UClass* Z_Construct_UClass_UACFUnitsComponent_NoRegister()
	{
		return UACFUnitsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFUnitsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Units_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Units;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnitsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnitsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUnitsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFUnitsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFUnitsComponent_AddUnit, "AddUnit" }, // 3075637203
		{ &Z_Construct_UFunction_UACFUnitsComponent_GetUnits, "GetUnits" }, // 2246493183
		{ &Z_Construct_UFunction_UACFUnitsComponent_MoveUnitFromGroup, "MoveUnitFromGroup" }, // 2822311195
		{ &Z_Construct_UFunction_UACFUnitsComponent_MoveUnitToGroup, "MoveUnitToGroup" }, // 3832433346
		{ &Z_Construct_UFunction_UACFUnitsComponent_OnRepUnits, "OnRepUnits" }, // 1809846497
		{ &Z_Construct_UFunction_UACFUnitsComponent_RemoveUnit, "RemoveUnit" }, // 1860591636
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUnitsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFUnitsComponent.h" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units_Inner = { "Units", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseUnit, METADATA_PARAMS(0, nullptr) }; // 1237690347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units = { "Units", "OnRepUnits", (EPropertyFlags)0x0020080100000035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUnitsComponent, Units), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units_MetaData), Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units_MetaData) }; // 1237690347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_OnUnitsChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFUnitsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_OnUnitsChanged = { "OnUnitsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUnitsComponent, OnUnitsChanged), Z_Construct_UDelegateFunction_UnitsSystem_OnUnitsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_OnUnitsChanged_MetaData), Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_OnUnitsChanged_MetaData) }; // 3255498235
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUnitsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_Units,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUnitsComponent_Statics::NewProp_OnUnitsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUnitsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUnitsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUnitsComponent_Statics::ClassParams = {
		&UACFUnitsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFUnitsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFUnitsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUnitsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFUnitsComponent()
	{
		if (!Z_Registration_Info_UClass_UACFUnitsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFUnitsComponent.OuterSingleton, Z_Construct_UClass_UACFUnitsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFUnitsComponent.OuterSingleton;
	}
	template<> UNITSSYSTEM_API UClass* StaticClass<UACFUnitsComponent>()
	{
		return UACFUnitsComponent::StaticClass();
	}

	void UACFUnitsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Units(TEXT("Units"));

		const bool bIsValid = true
			&& Name_Units == ClassReps[(int32)ENetFields_Private::Units].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFUnitsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUnitsComponent);
	UACFUnitsComponent::~UACFUnitsComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFUnitsComponent, UACFUnitsComponent::StaticClass, TEXT("UACFUnitsComponent"), &Z_Registration_Info_UClass_UACFUnitsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFUnitsComponent), 2783482605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_1938809443(TEXT("/Script/UnitsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGameState() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFGameState();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFGameState_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EBattleState();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamManagerComponent_NoRegister();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnBattleStateChanged_Parms
		{
			EBattleState battleState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_battleState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_battleState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_battleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState = { "battleState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnBattleStateChanged_Parms, battleState), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState_MetaData), Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState_MetaData) }; // 2786243359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::NewProp_battleState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnBattleStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnBattleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnBattleStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBattleStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnBattleStateChanged, EBattleState const& battleState)
{
	struct _Script_AscentCombatFramework_eventOnBattleStateChanged_Parms
	{
		EBattleState battleState;
	};
	_Script_AscentCombatFramework_eventOnBattleStateChanged_Parms Parms;
	Parms.battleState=battleState;
	OnBattleStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AACFGameState::execGetTeamManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFTeamManagerComponent**)Z_Param__Result=P_THIS->GetTeamManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFGameState::execGetEffectsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACMEffectsDispatcherComponent**)Z_Param__Result=P_THIS->GetEffectsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFGameState::execGetBattleState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBattleState*)Z_Param__Result=P_THIS->GetBattleState();
		P_NATIVE_END;
	}
	void AACFGameState::StaticRegisterNativesAACFGameState()
	{
		UClass* Class = AACFGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBattleState", &AACFGameState::execGetBattleState },
			{ "GetEffectsComponent", &AACFGameState::execGetEffectsComponent },
			{ "GetTeamManager", &AACFGameState::execGetTeamManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFGameState_GetBattleState_Statics
	{
		struct ACFGameState_eventGetBattleState_Parms
		{
			EBattleState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGameState_eventGetBattleState_Parms, ReturnValue), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(0, nullptr) }; // 2786243359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGameState, nullptr, "GetBattleState", nullptr, nullptr, Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::ACFGameState_eventGetBattleState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::ACFGameState_eventGetBattleState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGameState_GetBattleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGameState_GetBattleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics
	{
		struct ACFGameState_eventGetEffectsComponent_Parms
		{
			UACMEffectsDispatcherComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGameState_eventGetEffectsComponent_Parms, ReturnValue), Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGameState, nullptr, "GetEffectsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::ACFGameState_eventGetEffectsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::ACFGameState_eventGetEffectsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGameState_GetEffectsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGameState_GetEffectsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics
	{
		struct ACFGameState_eventGetTeamManager_Parms
		{
			UACFTeamManagerComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGameState_eventGetTeamManager_Parms, ReturnValue), Z_Construct_UClass_UACFTeamManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGameState, nullptr, "GetTeamManager", nullptr, nullptr, Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::ACFGameState_eventGetTeamManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::ACFGameState_eventGetTeamManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGameState_GetTeamManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGameState_GetTeamManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFGameState);
	UClass* Z_Construct_UClass_AACFGameState_NoRegister()
	{
		return AACFGameState::StaticClass();
	}
	struct Z_Construct_UClass_AACFGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_gameState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_gameState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBattleAIs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBattleAIs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBattleAIs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TeamManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBattleStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBattleStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFGameState_GetBattleState, "GetBattleState" }, // 3491269876
		{ &Z_Construct_UFunction_AACFGameState_GetEffectsComponent, "GetEffectsComponent" }, // 1166829290
		{ &Z_Construct_UFunction_AACFGameState_GetTeamManager, "GetTeamManager" }, // 1096909998
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/ACFGameState.h" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState = { "gameState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameState, gameState), Z_Construct_UEnum_AscentCombatFramework_EBattleState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState_MetaData), Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState_MetaData) }; // 2786243359
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs_Inner = { "InBattleAIs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs = { "InBattleAIs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameState, InBattleAIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs_MetaData), Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameState_Statics::NewProp_EffectsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_EffectsComp = { "EffectsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameState, EffectsComp), Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::NewProp_EffectsComp_MetaData), Z_Construct_UClass_AACFGameState_Statics::NewProp_EffectsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameState_Statics::NewProp_TeamManagerComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_TeamManagerComponent = { "TeamManagerComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameState, TeamManagerComponent), Z_Construct_UClass_UACFTeamManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::NewProp_TeamManagerComponent_MetaData), Z_Construct_UClass_AACFGameState_Statics::NewProp_TeamManagerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGameState_Statics::NewProp_OnBattleStateChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFGameState_Statics::NewProp_OnBattleStateChanged = { "OnBattleStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGameState, OnBattleStateChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnBattleStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::NewProp_OnBattleStateChanged_MetaData), Z_Construct_UClass_AACFGameState_Statics::NewProp_OnBattleStateChanged_MetaData) }; // 2990765603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_gameState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_InBattleAIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_EffectsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_TeamManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGameState_Statics::NewProp_OnBattleStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFGameState_Statics::ClassParams = {
		&AACFGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFGameState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGameState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFGameState()
	{
		if (!Z_Registration_Info_UClass_AACFGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFGameState.OuterSingleton, Z_Construct_UClass_AACFGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFGameState.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<AACFGameState>()
	{
		return AACFGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFGameState);
	AACFGameState::~AACFGameState() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFGameState, AACFGameState::StaticClass, TEXT("AACFGameState"), &Z_Registration_Info_UClass_AACFGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFGameState), 3743011219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameState_h_4148166207(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

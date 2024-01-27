// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFQuadrupedMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFQuadrupedMovementComponent() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCharacterMovementComponent();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFQuadrupedMovementComponent();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFQuadrupedMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	DEFINE_FUNCTION(UACFQuadrupedMovementComponent::execMoveForwardLocal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForwardLocal(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFQuadrupedMovementComponent::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_Value);
		P_NATIVE_END;
	}
	void UACFQuadrupedMovementComponent::StaticRegisterNativesUACFQuadrupedMovementComponent()
	{
		UClass* Class = UACFQuadrupedMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForwardLocal", &UACFQuadrupedMovementComponent::execMoveForwardLocal },
			{ "Turn", &UACFQuadrupedMovementComponent::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics
	{
		struct ACFQuadrupedMovementComponent_eventMoveForwardLocal_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFQuadrupedMovementComponent_eventMoveForwardLocal_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFQuadrupedMovementComponent, nullptr, "MoveForwardLocal", nullptr, nullptr, Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::ACFQuadrupedMovementComponent_eventMoveForwardLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::ACFQuadrupedMovementComponent_eventMoveForwardLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics
	{
		struct ACFQuadrupedMovementComponent_eventTurn_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFQuadrupedMovementComponent_eventTurn_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFQuadrupedMovementComponent, nullptr, "Turn", nullptr, nullptr, Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::ACFQuadrupedMovementComponent_eventTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::ACFQuadrupedMovementComponent_eventTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFQuadrupedMovementComponent);
	UClass* Z_Construct_UClass_UACFQuadrupedMovementComponent_NoRegister()
	{
		return UACFQuadrupedMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSpeedToForward_MetaData[];
#endif
		static void NewProp_bForceSpeedToForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSpeedToForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToForwardInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToForwardInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignBodyWithGround_MetaData[];
#endif
		static void NewProp_bAlignBodyWithGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignBodyWithGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignmentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignmentLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFQuadrupedMovementComponent_MoveForwardLocal, "MoveForwardLocal" }, // 269384155
		{ &Z_Construct_UFunction_UACFQuadrupedMovementComponent_Turn, "Turn" }, // 1327260842
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFQuadrupedMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward_MetaData[] = {
		{ "Category", "ACF | Quadruped" },
		{ "Comment", "/*Forces the movement to follow the forward vector of the actor. Usefull for horses or animals that can't strafe*/" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
		{ "ToolTip", "Forces the movement to follow the forward vector of the actor. Usefull for horses or animals that can't strafe" },
	};
#endif
	void Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward_SetBit(void* Obj)
	{
		((UACFQuadrupedMovementComponent*)Obj)->bForceSpeedToForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward = { "bForceSpeedToForward", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFQuadrupedMovementComponent), &Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward_MetaData), Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_SpeedToForwardInterpRate_MetaData[] = {
		{ "Category", "ACF | Quadruped" },
		{ "Comment", "/*Strength of the force forward*/" },
		{ "EditCondition", "bForceSpeedToForward" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
		{ "ToolTip", "Strength of the force forward" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_SpeedToForwardInterpRate = { "SpeedToForwardInterpRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFQuadrupedMovementComponent, SpeedToForwardInterpRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_SpeedToForwardInterpRate_MetaData), Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_SpeedToForwardInterpRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround_MetaData[] = {
		{ "Category", "ACF | Quadruped" },
		{ "Comment", "/*Aligns the body of the animal with the ground */" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
		{ "ToolTip", "Aligns the body of the animal with the ground" },
	};
#endif
	void Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround_SetBit(void* Obj)
	{
		((UACFQuadrupedMovementComponent*)Obj)->bAlignBodyWithGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround = { "bAlignBodyWithGround", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFQuadrupedMovementComponent), &Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround_MetaData), Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentSpeed_MetaData[] = {
		{ "Category", "ACF | Quadruped" },
		{ "Comment", "/*Speed of the lerp of the alignment*/" },
		{ "EditCondition", "bAlignBodyWithGround" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
		{ "ToolTip", "Speed of the lerp of the alignment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentSpeed = { "AlignmentSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFQuadrupedMovementComponent, AlignmentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentSpeed_MetaData), Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentLimit_MetaData[] = {
		{ "Category", "ACF | Quadruped" },
		{ "Comment", "/*Limit in degrees of the alignment*/" },
		{ "EditCondition", "bAlignBodyWithGround" },
		{ "ModuleRelativePath", "Public/Components/ACFQuadrupedMovementComponent.h" },
		{ "ToolTip", "Limit in degrees of the alignment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentLimit = { "AlignmentLimit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFQuadrupedMovementComponent, AlignmentLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentLimit_MetaData), Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentLimit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bForceSpeedToForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_SpeedToForwardInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_bAlignBodyWithGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::NewProp_AlignmentLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFQuadrupedMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::ClassParams = {
		&UACFQuadrupedMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFQuadrupedMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UACFQuadrupedMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFQuadrupedMovementComponent.OuterSingleton, Z_Construct_UClass_UACFQuadrupedMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFQuadrupedMovementComponent.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFQuadrupedMovementComponent>()
	{
		return UACFQuadrupedMovementComponent::StaticClass();
	}
	UACFQuadrupedMovementComponent::UACFQuadrupedMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFQuadrupedMovementComponent);
	UACFQuadrupedMovementComponent::~UACFQuadrupedMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFQuadrupedMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFQuadrupedMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFQuadrupedMovementComponent, UACFQuadrupedMovementComponent::StaticClass, TEXT("UACFQuadrupedMovementComponent"), &Z_Registration_Info_UClass_UACFQuadrupedMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFQuadrupedMovementComponent), 281265932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFQuadrupedMovementComponent_h_2430116403(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFQuadrupedMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFQuadrupedMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

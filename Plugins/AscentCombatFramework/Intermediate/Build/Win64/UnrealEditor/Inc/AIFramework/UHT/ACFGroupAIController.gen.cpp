// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/ACFGroupAIController.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGroupAIController() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFGroupAIController();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFGroupAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAgentInterface_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFGroupAIController::execHandlePerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFGroupAIController::execIsPartOfGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartOfGroup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFGroupAIController::execGetOwningGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetOwningGroup_Implementation();
		P_NATIVE_END;
	}
	struct ACFGroupAIController_eventGetOwningGroup_Parms
	{
		UACFGroupAIComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFGroupAIController_eventGetOwningGroup_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ACFGroupAIController_eventIsPartOfGroup_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFGroupAIController_eventIsPartOfGroup_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AACFGroupAIController_GetOwningGroup = FName(TEXT("GetOwningGroup"));
	UACFGroupAIComponent* AACFGroupAIController::GetOwningGroup()
	{
		ACFGroupAIController_eventGetOwningGroup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFGroupAIController_GetOwningGroup),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFGroupAIController_IsPartOfGroup = FName(TEXT("IsPartOfGroup"));
	bool AACFGroupAIController::IsPartOfGroup()
	{
		ACFGroupAIController_eventIsPartOfGroup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFGroupAIController_IsPartOfGroup),&Parms);
		return !!Parms.ReturnValue;
	}
	void AACFGroupAIController::StaticRegisterNativesAACFGroupAIController()
	{
		UClass* Class = AACFGroupAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningGroup", &AACFGroupAIController::execGetOwningGroup },
			{ "HandlePerceptionUpdated", &AACFGroupAIController::execHandlePerceptionUpdated },
			{ "IsPartOfGroup", &AACFGroupAIController::execIsPartOfGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIController_eventGetOwningGroup_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// <summary>\n/// /Groupable Entity Interface\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAIController.h" },
		{ "ToolTip", "<summary>\n/Groupable Entity Interface\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGroupAIController, nullptr, "GetOwningGroup", nullptr, nullptr, Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::PropPointers), sizeof(ACFGroupAIController_eventGetOwningGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFGroupAIController_eventGetOwningGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics
	{
		struct ACFGroupAIController_eventHandlePerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIController_eventHandlePerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAIController_eventHandlePerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGroupAIController, nullptr, "HandlePerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::ACFGroupAIController_eventHandlePerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::ACFGroupAIController_eventHandlePerceptionUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAIController_eventIsPartOfGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAIController_eventIsPartOfGroup_Parms), &Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFGroupAIController, nullptr, "IsPartOfGroup", nullptr, nullptr, Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::PropPointers), sizeof(ACFGroupAIController_eventIsPartOfGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFGroupAIController_eventIsPartOfGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFGroupAIController);
	UClass* Z_Construct_UClass_AACFGroupAIController_NoRegister()
	{
		return AACFGroupAIController::StaticClass();
	}
	struct Z_Construct_UClass_AACFGroupAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGroupPerception_MetaData[];
#endif
		static void NewProp_bUseGroupPerception_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGroupPerception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateControllerPositionTimeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateControllerPositionTimeInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFGroupAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFGroupAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFGroupAIController_GetOwningGroup, "GetOwningGroup" }, // 1423148703
		{ &Z_Construct_UFunction_AACFGroupAIController_HandlePerceptionUpdated, "HandlePerceptionUpdated" }, // 4070618240
		{ &Z_Construct_UFunction_AACFGroupAIController_IsPartOfGroup, "IsPartOfGroup" }, // 1222883618
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGroupAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Groups/ACFGroupAIController.h" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAIController.h" },
	};
#endif
	void Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception_SetBit(void* Obj)
	{
		((AACFGroupAIController*)Obj)->bUseGroupPerception = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception = { "bUseGroupPerception", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFGroupAIController), &Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception_MetaData), Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_UpdateControllerPositionTimeInterval_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_UpdateControllerPositionTimeInterval = { "UpdateControllerPositionTimeInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFGroupAIController, UpdateControllerPositionTimeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_UpdateControllerPositionTimeInterval_MetaData), Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_UpdateControllerPositionTimeInterval_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFGroupAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_bUseGroupPerception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFGroupAIController_Statics::NewProp_UpdateControllerPositionTimeInterval,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFGroupAIController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UACFGroupAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFGroupAIController, IACFGroupAgentInterface), false },  // 2420904889
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFGroupAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFGroupAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFGroupAIController_Statics::ClassParams = {
		&AACFGroupAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFGroupAIController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFGroupAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFGroupAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFGroupAIController()
	{
		if (!Z_Registration_Info_UClass_AACFGroupAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFGroupAIController.OuterSingleton, Z_Construct_UClass_AACFGroupAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFGroupAIController.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFGroupAIController>()
	{
		return AACFGroupAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFGroupAIController);
	AACFGroupAIController::~AACFGroupAIController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFGroupAIController, AACFGroupAIController::StaticClass, TEXT("AACFGroupAIController"), &Z_Registration_Info_UClass_AACFGroupAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFGroupAIController), 176762698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAIController_h_2081885067(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

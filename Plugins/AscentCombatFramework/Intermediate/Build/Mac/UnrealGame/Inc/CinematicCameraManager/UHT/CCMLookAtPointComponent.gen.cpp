// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMLookAtPointComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMLookAtPointComponent() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMLookAtPointComponent();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMLookAtPointComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References
	DEFINE_FUNCTION(UCCMLookAtPointComponent::execGetPointName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPointName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMLookAtPointComponent::execGetTargetPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetTargetPoint();
		P_NATIVE_END;
	}
	void UCCMLookAtPointComponent::StaticRegisterNativesUCCMLookAtPointComponent()
	{
		UClass* Class = UCCMLookAtPointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointName", &UCCMLookAtPointComponent::execGetPointName },
			{ "GetTargetPoint", &UCCMLookAtPointComponent::execGetTargetPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics
	{
		struct CCMLookAtPointComponent_eventGetPointName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMLookAtPointComponent_eventGetPointName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMLookAtPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMLookAtPointComponent, nullptr, "GetPointName", nullptr, nullptr, Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::CCMLookAtPointComponent_eventGetPointName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::CCMLookAtPointComponent_eventGetPointName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics
	{
		struct CCMLookAtPointComponent_eventGetTargetPoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMLookAtPointComponent_eventGetTargetPoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "Comment", "/*Returns a target point actor used for tracking*/" },
		{ "ModuleRelativePath", "Public/CCMLookAtPointComponent.h" },
		{ "ToolTip", "Returns a target point actor used for tracking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMLookAtPointComponent, nullptr, "GetTargetPoint", nullptr, nullptr, Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::CCMLookAtPointComponent_eventGetTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::CCMLookAtPointComponent_eventGetTargetPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCCMLookAtPointComponent);
	UClass* Z_Construct_UClass_UCCMLookAtPointComponent_NoRegister()
	{
		return UCCMLookAtPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCCMLookAtPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCCMLookAtPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCCMLookAtPointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCCMLookAtPointComponent_GetPointName, "GetPointName" }, // 2700831762
		{ &Z_Construct_UFunction_UCCMLookAtPointComponent_GetTargetPoint, "GetTargetPoint" }, // 1137564642
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMLookAtPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CCMLookAtPointComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CCMLookAtPointComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_PointName_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMLookAtPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_PointName = { "PointName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCCMLookAtPointComponent, PointName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_PointName_MetaData), Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_PointName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_targetPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/CCMLookAtPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_targetPoint = { "targetPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCCMLookAtPointComponent, targetPoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_targetPoint_MetaData), Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_targetPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCCMLookAtPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_PointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMLookAtPointComponent_Statics::NewProp_targetPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCCMLookAtPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCCMLookAtPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCCMLookAtPointComponent_Statics::ClassParams = {
		&UCCMLookAtPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCCMLookAtPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCCMLookAtPointComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMLookAtPointComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCCMLookAtPointComponent()
	{
		if (!Z_Registration_Info_UClass_UCCMLookAtPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCCMLookAtPointComponent.OuterSingleton, Z_Construct_UClass_UCCMLookAtPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCCMLookAtPointComponent.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<UCCMLookAtPointComponent>()
	{
		return UCCMLookAtPointComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCCMLookAtPointComponent);
	UCCMLookAtPointComponent::~UCCMLookAtPointComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMLookAtPointComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMLookAtPointComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCCMLookAtPointComponent, UCCMLookAtPointComponent::StaticClass, TEXT("UCCMLookAtPointComponent"), &Z_Registration_Info_UClass_UCCMLookAtPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCCMLookAtPointComponent), 482603103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMLookAtPointComponent_h_2838298364(TEXT("/Script/CinematicCameraManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMLookAtPointComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMLookAtPointComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

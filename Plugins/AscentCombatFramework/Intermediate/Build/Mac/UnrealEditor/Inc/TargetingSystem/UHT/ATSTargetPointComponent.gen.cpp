// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystem/Public/ATSTargetPointComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATSTargetPointComponent() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMLookAtPointComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetPointComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetPointComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UATSTargetPointComponent::execGetPointCameraEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPointCameraEvent();
		P_NATIVE_END;
	}
	void UATSTargetPointComponent::StaticRegisterNativesUATSTargetPointComponent()
	{
		UClass* Class = UATSTargetPointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointCameraEvent", &UATSTargetPointComponent::execGetPointCameraEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics
	{
		struct ATSTargetPointComponent_eventGetPointCameraEvent_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetPointComponent_eventGetPointCameraEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*Returns desired camera offset for this point*/" },
		{ "ModuleRelativePath", "Public/ATSTargetPointComponent.h" },
		{ "ToolTip", "Returns desired camera offset for this point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetPointComponent, nullptr, "GetPointCameraEvent", nullptr, nullptr, Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::ATSTargetPointComponent_eventGetPointCameraEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::ATSTargetPointComponent_eventGetPointCameraEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATSTargetPointComponent);
	UClass* Z_Construct_UClass_UATSTargetPointComponent_NoRegister()
	{
		return UATSTargetPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UATSTargetPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraEvent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UATSTargetPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCCMLookAtPointComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetPointComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UATSTargetPointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UATSTargetPointComponent_GetPointCameraEvent, "GetPointCameraEvent" }, // 1135111003
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetPointComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ATS" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ATSTargetPointComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATSTargetPointComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetPointComponent_Statics::NewProp_CameraEvent_MetaData[] = {
		{ "Category", "ATS" },
		{ "Comment", "/*The camera event triggered when this point gets targeted*/" },
		{ "ModuleRelativePath", "Public/ATSTargetPointComponent.h" },
		{ "ToolTip", "The camera event triggered when this point gets targeted" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UATSTargetPointComponent_Statics::NewProp_CameraEvent = { "CameraEvent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATSTargetPointComponent, CameraEvent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetPointComponent_Statics::NewProp_CameraEvent_MetaData), Z_Construct_UClass_UATSTargetPointComponent_Statics::NewProp_CameraEvent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATSTargetPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATSTargetPointComponent_Statics::NewProp_CameraEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UATSTargetPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATSTargetPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UATSTargetPointComponent_Statics::ClassParams = {
		&UATSTargetPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UATSTargetPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetPointComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UATSTargetPointComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetPointComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UATSTargetPointComponent()
	{
		if (!Z_Registration_Info_UClass_UATSTargetPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATSTargetPointComponent.OuterSingleton, Z_Construct_UClass_UATSTargetPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UATSTargetPointComponent.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UATSTargetPointComponent>()
	{
		return UATSTargetPointComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UATSTargetPointComponent);
	UATSTargetPointComponent::~UATSTargetPointComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetPointComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetPointComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UATSTargetPointComponent, UATSTargetPointComponent::StaticClass, TEXT("UATSTargetPointComponent"), &Z_Registration_Info_UClass_UATSTargetPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATSTargetPointComponent), 2470885557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetPointComponent_h_1030748802(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetPointComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetPointComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

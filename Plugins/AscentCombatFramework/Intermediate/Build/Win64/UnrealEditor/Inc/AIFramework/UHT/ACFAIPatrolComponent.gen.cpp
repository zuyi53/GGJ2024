// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFAIPatrolComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAIPatrolComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFPatrolPath_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAIPatrolComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAIPatrolComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFAIPatrolComponent::execGetPathToFollow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFPatrolPath**)Z_Param__Result=P_THIS->GetPathToFollow();
		P_NATIVE_END;
	}
	void UACFAIPatrolComponent::StaticRegisterNativesUACFAIPatrolComponent()
	{
		UClass* Class = UACFAIPatrolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPathToFollow", &UACFAIPatrolComponent::execGetPathToFollow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics
	{
		struct ACFAIPatrolComponent_eventGetPathToFollow_Parms
		{
			AACFPatrolPath* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIPatrolComponent_eventGetPathToFollow_Parms, ReturnValue), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIPatrolComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAIPatrolComponent, nullptr, "GetPathToFollow", nullptr, nullptr, Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::ACFAIPatrolComponent_eventGetPathToFollow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::ACFAIPatrolComponent_eventGetPathToFollow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAIPatrolComponent);
	UClass* Z_Construct_UClass_UACFAIPatrolComponent_NoRegister()
	{
		return UACFAIPatrolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFAIPatrolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathToFollow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAIPatrolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIPatrolComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAIPatrolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAIPatrolComponent_GetPathToFollow, "GetPathToFollow" }, // 2298513185
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIPatrolComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIPatrolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFAIPatrolComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ACFAIPatrolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAIPatrolComponent_Statics::NewProp_PathToFollow_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFAIPatrolComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAIPatrolComponent_Statics::NewProp_PathToFollow = { "PathToFollow", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAIPatrolComponent, PathToFollow), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIPatrolComponent_Statics::NewProp_PathToFollow_MetaData), Z_Construct_UClass_UACFAIPatrolComponent_Statics::NewProp_PathToFollow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAIPatrolComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAIPatrolComponent_Statics::NewProp_PathToFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAIPatrolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAIPatrolComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAIPatrolComponent_Statics::ClassParams = {
		&UACFAIPatrolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAIPatrolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIPatrolComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIPatrolComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAIPatrolComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAIPatrolComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFAIPatrolComponent()
	{
		if (!Z_Registration_Info_UClass_UACFAIPatrolComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAIPatrolComponent.OuterSingleton, Z_Construct_UClass_UACFAIPatrolComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAIPatrolComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFAIPatrolComponent>()
	{
		return UACFAIPatrolComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAIPatrolComponent);
	UACFAIPatrolComponent::~UACFAIPatrolComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIPatrolComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIPatrolComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAIPatrolComponent, UACFAIPatrolComponent::StaticClass, TEXT("UACFAIPatrolComponent"), &Z_Registration_Info_UClass_UACFAIPatrolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAIPatrolComponent), 659657386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIPatrolComponent_h_1608795570(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIPatrolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIPatrolComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

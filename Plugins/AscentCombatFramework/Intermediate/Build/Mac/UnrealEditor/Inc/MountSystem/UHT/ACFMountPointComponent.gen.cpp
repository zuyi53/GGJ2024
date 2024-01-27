// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFMountPointComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMountPointComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountPointComponent();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountPointComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFMountPointComponent::execGetPointTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPointTag();
		P_NATIVE_END;
	}
	void UACFMountPointComponent::StaticRegisterNativesUACFMountPointComponent()
	{
		UClass* Class = UACFMountPointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointTag", &UACFMountPointComponent::execGetPointTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics
	{
		struct ACFMountPointComponent_eventGetPointTag_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountPointComponent_eventGetPointTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountPointComponent, nullptr, "GetPointTag", nullptr, nullptr, Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::ACFMountPointComponent_eventGetPointTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::ACFMountPointComponent_eventGetPointTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountPointComponent_GetPointTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountPointComponent_GetPointTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFMountPointComponent);
	UClass* Z_Construct_UClass_UACFMountPointComponent_NoRegister()
	{
		return UACFMountPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFMountPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PointTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFMountPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountPointComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFMountPointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFMountPointComponent_GetPointTag, "GetPointTag" }, // 1838205354
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountPointComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ACFMountPointComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFMountPointComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountPointComponent_Statics::NewProp_PointTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountPointComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFMountPointComponent_Statics::NewProp_PointTag = { "PointTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFMountPointComponent, PointTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountPointComponent_Statics::NewProp_PointTag_MetaData), Z_Construct_UClass_UACFMountPointComponent_Statics::NewProp_PointTag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFMountPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountPointComponent_Statics::NewProp_PointTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFMountPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFMountPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFMountPointComponent_Statics::ClassParams = {
		&UACFMountPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFMountPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountPointComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFMountPointComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountPointComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFMountPointComponent()
	{
		if (!Z_Registration_Info_UClass_UACFMountPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFMountPointComponent.OuterSingleton, Z_Construct_UClass_UACFMountPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFMountPointComponent.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<UACFMountPointComponent>()
	{
		return UACFMountPointComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFMountPointComponent);
	UACFMountPointComponent::~UACFMountPointComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountPointComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountPointComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFMountPointComponent, UACFMountPointComponent::StaticClass, TEXT("UACFMountPointComponent"), &Z_Registration_Info_UClass_UACFMountPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFMountPointComponent), 2179526593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountPointComponent_h_876190370(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountPointComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountPointComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

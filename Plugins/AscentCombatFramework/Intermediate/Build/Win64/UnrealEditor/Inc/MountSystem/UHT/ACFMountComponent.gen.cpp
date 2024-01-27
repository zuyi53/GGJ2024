// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFMountComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMountComponent() {}
// Cross Module References
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountableComponent();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountComponent();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFMountComponent::execIsCompanion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompanion();
		P_NATIVE_END;
	}
	void UACFMountComponent::StaticRegisterNativesUACFMountComponent()
	{
		UClass* Class = UACFMountComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCompanion", &UACFMountComponent::execIsCompanion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics
	{
		struct ACFMountComponent_eventIsCompanion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFMountComponent_eventIsCompanion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountComponent_eventIsCompanion_Parms), &Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountComponent, nullptr, "IsCompanion", nullptr, nullptr, Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::ACFMountComponent_eventIsCompanion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::ACFMountComponent_eventIsCompanion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountComponent_IsCompanion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountComponent_IsCompanion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFMountComponent);
	UClass* Z_Construct_UClass_UACFMountComponent_NoRegister()
	{
		return UACFMountComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFMountComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerCompanion_MetaData[];
#endif
		static void NewProp_bIsPlayerCompanion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerCompanion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFMountComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFMountableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFMountComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFMountComponent_IsCompanion, "IsCompanion" }, // 1684259134
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACFMountComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFMountComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFMountComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion_SetBit(void* Obj)
	{
		((UACFMountComponent*)Obj)->bIsPlayerCompanion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion = { "bIsPlayerCompanion", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFMountComponent), &Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion_MetaData), Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFMountComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFMountComponent_Statics::NewProp_bIsPlayerCompanion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFMountComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFMountComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFMountComponent_Statics::ClassParams = {
		&UACFMountComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFMountComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFMountComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFMountComponent()
	{
		if (!Z_Registration_Info_UClass_UACFMountComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFMountComponent.OuterSingleton, Z_Construct_UClass_UACFMountComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFMountComponent.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<UACFMountComponent>()
	{
		return UACFMountComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFMountComponent);
	UACFMountComponent::~UACFMountComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFMountComponent, UACFMountComponent::StaticClass, TEXT("UACFMountComponent"), &Z_Registration_Info_UClass_UACFMountComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFMountComponent), 3037720735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountComponent_h_395954864(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

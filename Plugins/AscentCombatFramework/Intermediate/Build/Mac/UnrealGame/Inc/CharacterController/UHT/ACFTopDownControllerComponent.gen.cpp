// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFTopDownControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFTopDownControllerComponent() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFTopDownControllerComponent();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFTopDownControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	DEFINE_FUNCTION(UACFTopDownControllerComponent::execSetDestinationReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestinationReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFTopDownControllerComponent::execSetDestinationTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestinationTriggered();
		P_NATIVE_END;
	}
	void UACFTopDownControllerComponent::StaticRegisterNativesUACFTopDownControllerComponent()
	{
		UClass* Class = UACFTopDownControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDestinationReleased", &UACFTopDownControllerComponent::execSetDestinationReleased },
			{ "SetDestinationTriggered", &UACFTopDownControllerComponent::execSetDestinationTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFTopDownControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTopDownControllerComponent, nullptr, "SetDestinationReleased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*    UFUNCTION(BlueprintCallable, Category = ACF)*/" },
		{ "ModuleRelativePath", "Public/ACFTopDownControllerComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = ACF)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTopDownControllerComponent, nullptr, "SetDestinationTriggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFTopDownControllerComponent);
	UClass* Z_Construct_UClass_UACFTopDownControllerComponent_NoRegister()
	{
		return UACFTopDownControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFTopDownControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTopDownControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFTopDownControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationReleased, "SetDestinationReleased" }, // 1254167085
		{ &Z_Construct_UFunction_UACFTopDownControllerComponent_SetDestinationTriggered, "SetDestinationTriggered" }, // 3743867421
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTopDownControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ACFTopDownControllerComponent.h" },
		{ "ModuleRelativePath", "Public/ACFTopDownControllerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/** Click Input Action */" },
		{ "ModuleRelativePath", "Public/ACFTopDownControllerComponent.h" },
		{ "ToolTip", "Click Input Action" },
	};
#endif
	void Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UACFTopDownControllerComponent*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFTopDownControllerComponent), &Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
		{ "ModuleRelativePath", "Public/ACFTopDownControllerComponent.h" },
		{ "ToolTip", "Time Threshold to know if it was a short press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFTopDownControllerComponent, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
		{ "ModuleRelativePath", "Public/ACFTopDownControllerComponent.h" },
		{ "ToolTip", "FX Class that we will spawn when clicking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFTopDownControllerComponent, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_FXCursor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFTopDownControllerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTopDownControllerComponent_Statics::NewProp_FXCursor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTopDownControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTopDownControllerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTopDownControllerComponent_Statics::ClassParams = {
		&UACFTopDownControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFTopDownControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFTopDownControllerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTopDownControllerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFTopDownControllerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFTopDownControllerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFTopDownControllerComponent.OuterSingleton, Z_Construct_UClass_UACFTopDownControllerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFTopDownControllerComponent.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFTopDownControllerComponent>()
	{
		return UACFTopDownControllerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTopDownControllerComponent);
	UACFTopDownControllerComponent::~UACFTopDownControllerComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFTopDownControllerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFTopDownControllerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFTopDownControllerComponent, UACFTopDownControllerComponent::StaticClass, TEXT("UACFTopDownControllerComponent"), &Z_Registration_Info_UClass_UACFTopDownControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFTopDownControllerComponent), 885286393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFTopDownControllerComponent_h_1875052871(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFTopDownControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFTopDownControllerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

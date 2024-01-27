// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/UI/ACFDamageWidget.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDamageWidget() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageWidget();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageWidget_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct ACFDamageWidget_eventSetupDamageWidget_Parms
	{
		FACFDamageEvent damageEvent;
	};
	static FName NAME_UACFDamageWidget_SetupDamageWidget = FName(TEXT("SetupDamageWidget"));
	void UACFDamageWidget::SetupDamageWidget(FACFDamageEvent const& damageEvent)
	{
		ACFDamageWidget_eventSetupDamageWidget_Parms Parms;
		Parms.damageEvent=damageEvent;
		ProcessEvent(FindFunctionChecked(NAME_UACFDamageWidget_SetupDamageWidget),&Parms);
	}
	void UACFDamageWidget::StaticRegisterNativesUACFDamageWidget()
	{
	}
	struct Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFDamageWidget_eventSetupDamageWidget_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::NewProp_damageEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/UI/ACFDamageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFDamageWidget, nullptr, "SetupDamageWidget", nullptr, nullptr, Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::PropPointers), sizeof(ACFDamageWidget_eventSetupDamageWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFDamageWidget_eventSetupDamageWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDamageWidget);
	UClass* Z_Construct_UClass_UACFDamageWidget_NoRegister()
	{
		return UACFDamageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UACFDamageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDamageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFDamageWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFDamageWidget_SetupDamageWidget, "SetupDamageWidget" }, // 1716227641
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ACFDamageWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ACFDamageWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDamageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDamageWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDamageWidget_Statics::ClassParams = {
		&UACFDamageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDamageWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFDamageWidget()
	{
		if (!Z_Registration_Info_UClass_UACFDamageWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDamageWidget.OuterSingleton, Z_Construct_UClass_UACFDamageWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDamageWidget.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDamageWidget>()
	{
		return UACFDamageWidget::StaticClass();
	}
	UACFDamageWidget::UACFDamageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDamageWidget);
	UACFDamageWidget::~UACFDamageWidget() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFDamageWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFDamageWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDamageWidget, UACFDamageWidget::StaticClass, TEXT("UACFDamageWidget"), &Z_Registration_Info_UClass_UACFDamageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDamageWidget), 764883742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFDamageWidget_h_545876935(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFDamageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFDamageWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

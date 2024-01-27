// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/UI/ACFHUDUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFHUDUserWidget() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFHUDUserWidget();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFHUDUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct ACFHUDUserWidget_eventEnableCrosshair_Parms
	{
		bool bEnabled;
	};
	struct ACFHUDUserWidget_eventOnPossessedCharacterChanged_Parms
	{
		const AACFCharacter* newChar;
	};
	static FName NAME_UACFHUDUserWidget_EnableCrosshair = FName(TEXT("EnableCrosshair"));
	void UACFHUDUserWidget::EnableCrosshair(bool bEnabled)
	{
		ACFHUDUserWidget_eventEnableCrosshair_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFHUDUserWidget_EnableCrosshair),&Parms);
	}
	static FName NAME_UACFHUDUserWidget_OnPossessedCharacterChanged = FName(TEXT("OnPossessedCharacterChanged"));
	void UACFHUDUserWidget::OnPossessedCharacterChanged(const AACFCharacter* newChar)
	{
		ACFHUDUserWidget_eventOnPossessedCharacterChanged_Parms Parms;
		Parms.newChar=newChar;
		ProcessEvent(FindFunctionChecked(NAME_UACFHUDUserWidget_OnPossessedCharacterChanged),&Parms);
	}
	void UACFHUDUserWidget::StaticRegisterNativesUACFHUDUserWidget()
	{
	}
	struct Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ACFHUDUserWidget_eventEnableCrosshair_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFHUDUserWidget_eventEnableCrosshair_Parms), &Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/UI/ACFHUDUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFHUDUserWidget, nullptr, "EnableCrosshair", nullptr, nullptr, Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::PropPointers), sizeof(ACFHUDUserWidget_eventEnableCrosshair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFHUDUserWidget_eventEnableCrosshair_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::NewProp_newChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::NewProp_newChar = { "newChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFHUDUserWidget_eventOnPossessedCharacterChanged_Parms, newChar), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::NewProp_newChar_MetaData), Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::NewProp_newChar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::NewProp_newChar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/UI/ACFHUDUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFHUDUserWidget, nullptr, "OnPossessedCharacterChanged", nullptr, nullptr, Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::PropPointers), sizeof(ACFHUDUserWidget_eventOnPossessedCharacterChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFHUDUserWidget_eventOnPossessedCharacterChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFHUDUserWidget);
	UClass* Z_Construct_UClass_UACFHUDUserWidget_NoRegister()
	{
		return UACFHUDUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UACFHUDUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFHUDUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHUDUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFHUDUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFHUDUserWidget_EnableCrosshair, "EnableCrosshair" }, // 4093074593
		{ &Z_Construct_UFunction_UACFHUDUserWidget_OnPossessedCharacterChanged, "OnPossessedCharacterChanged" }, // 304580626
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHUDUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFHUDUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ACFHUDUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ACFHUDUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFHUDUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFHUDUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFHUDUserWidget_Statics::ClassParams = {
		&UACFHUDUserWidget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHUDUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFHUDUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFHUDUserWidget()
	{
		if (!Z_Registration_Info_UClass_UACFHUDUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFHUDUserWidget.OuterSingleton, Z_Construct_UClass_UACFHUDUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFHUDUserWidget.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFHUDUserWidget>()
	{
		return UACFHUDUserWidget::StaticClass();
	}
	UACFHUDUserWidget::UACFHUDUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFHUDUserWidget);
	UACFHUDUserWidget::~UACFHUDUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUDUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUDUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFHUDUserWidget, UACFHUDUserWidget::StaticClass, TEXT("UACFHUDUserWidget"), &Z_Registration_Info_UClass_UACFHUDUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFHUDUserWidget), 373012140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUDUserWidget_h_3086330978(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUDUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUDUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

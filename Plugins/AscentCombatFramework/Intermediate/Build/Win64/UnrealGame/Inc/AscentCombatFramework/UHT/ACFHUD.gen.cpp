// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/UI/ACFHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFHUD() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFHUD();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFHUD_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFHUDUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(AACFHUD::execHandleCharacterPossessedChanged)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_newChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCharacterPossessedChanged(Z_Param_newChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFHUD::execSetHudEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFHUD::execEnableCrosshair)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCrosshair(Z_Param_bEnable);
		P_NATIVE_END;
	}
	void AACFHUD::StaticRegisterNativesAACFHUD()
	{
		UClass* Class = AACFHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableCrosshair", &AACFHUD::execEnableCrosshair },
			{ "HandleCharacterPossessedChanged", &AACFHUD::execHandleCharacterPossessedChanged },
			{ "SetHudEnabled", &AACFHUD::execSetHudEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics
	{
		struct ACFHUD_eventEnableCrosshair_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ACFHUD_eventEnableCrosshair_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFHUD_eventEnableCrosshair_Parms), &Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/UI/ACFHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFHUD, nullptr, "EnableCrosshair", nullptr, nullptr, Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::ACFHUD_eventEnableCrosshair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::ACFHUD_eventEnableCrosshair_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFHUD_EnableCrosshair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFHUD_EnableCrosshair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics
	{
		struct ACFHUD_eventHandleCharacterPossessedChanged_Parms
		{
			const AACFCharacter* newChar;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::NewProp_newChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::NewProp_newChar = { "newChar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFHUD_eventHandleCharacterPossessedChanged_Parms, newChar), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::NewProp_newChar_MetaData), Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::NewProp_newChar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::NewProp_newChar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ACFHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFHUD, nullptr, "HandleCharacterPossessedChanged", nullptr, nullptr, Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::ACFHUD_eventHandleCharacterPossessedChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::ACFHUD_eventHandleCharacterPossessedChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics
	{
		struct ACFHUD_eventSetHudEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ACFHUD_eventSetHudEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFHUD_eventSetHudEnabled_Parms), &Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/UI/ACFHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFHUD, nullptr, "SetHudEnabled", nullptr, nullptr, Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::ACFHUD_eventSetHudEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::ACFHUD_eventSetHudEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFHUD_SetHudEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFHUD_SetHudEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFHUD);
	UClass* Z_Construct_UClass_AACFHUD_NoRegister()
	{
		return AACFHUD::StaticClass();
	}
	struct Z_Construct_UClass_AACFHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFHUD_EnableCrosshair, "EnableCrosshair" }, // 902644792
		{ &Z_Construct_UFunction_AACFHUD_HandleCharacterPossessedChanged, "HandleCharacterPossessedChanged" }, // 1638259782
		{ &Z_Construct_UFunction_AACFHUD_SetHudEnabled, "SetHudEnabled" }, // 472138846
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/ACFHUD.h" },
		{ "ModuleRelativePath", "Public/UI/ACFHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/UI/ACFHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFHUD, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFHUDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDClass_MetaData), Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ACFHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFHUD, HUDWidget), Z_Construct_UClass_UACFHUDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFHUD_Statics::NewProp_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFHUD_Statics::ClassParams = {
		&AACFHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFHUD()
	{
		if (!Z_Registration_Info_UClass_AACFHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFHUD.OuterSingleton, Z_Construct_UClass_AACFHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFHUD.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<AACFHUD>()
	{
		return AACFHUD::StaticClass();
	}
	AACFHUD::AACFHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFHUD);
	AACFHUD::~AACFHUD() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFHUD, AACFHUD::StaticClass, TEXT("AACFHUD"), &Z_Registration_Info_UClass_AACFHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFHUD), 4068953185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUD_h_3666116875(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_UI_ACFHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

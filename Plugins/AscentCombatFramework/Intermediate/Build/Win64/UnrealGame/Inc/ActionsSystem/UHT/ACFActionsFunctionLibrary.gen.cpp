// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFActionsFunctionLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionsFunctionLibrary() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsFunctionLibrary();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFActionsFunctionLibrary::execIsValidMovesetActionsTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFActionsFunctionLibrary::IsValidMovesetActionsTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsFunctionLibrary::execGetMovesetActionsTagRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFActionsFunctionLibrary::GetMovesetActionsTagRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsFunctionLibrary::execGetDefaultActionsState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFActionsFunctionLibrary::GetDefaultActionsState();
		P_NATIVE_END;
	}
	void UACFActionsFunctionLibrary::StaticRegisterNativesUACFActionsFunctionLibrary()
	{
		UClass* Class = UACFActionsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultActionsState", &UACFActionsFunctionLibrary::execGetDefaultActionsState },
			{ "GetMovesetActionsTagRoot", &UACFActionsFunctionLibrary::execGetMovesetActionsTagRoot },
			{ "IsValidMovesetActionsTag", &UACFActionsFunctionLibrary::execIsValidMovesetActionsTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics
	{
		struct ACFActionsFunctionLibrary_eventGetDefaultActionsState_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsFunctionLibrary_eventGetDefaultActionsState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFActionsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsFunctionLibrary, nullptr, "GetDefaultActionsState", nullptr, nullptr, Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::ACFActionsFunctionLibrary_eventGetDefaultActionsState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::ACFActionsFunctionLibrary_eventGetDefaultActionsState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics
	{
		struct ACFActionsFunctionLibrary_eventGetMovesetActionsTagRoot_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsFunctionLibrary_eventGetMovesetActionsTagRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFActionsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsFunctionLibrary, nullptr, "GetMovesetActionsTagRoot", nullptr, nullptr, Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::ACFActionsFunctionLibrary_eventGetMovesetActionsTagRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::ACFActionsFunctionLibrary_eventGetMovesetActionsTagRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics
	{
		struct ACFActionsFunctionLibrary_eventIsValidMovesetActionsTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsFunctionLibrary_eventIsValidMovesetActionsTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsFunctionLibrary_eventIsValidMovesetActionsTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsFunctionLibrary_eventIsValidMovesetActionsTag_Parms), &Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFActionsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsFunctionLibrary, nullptr, "IsValidMovesetActionsTag", nullptr, nullptr, Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::ACFActionsFunctionLibrary_eventIsValidMovesetActionsTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::ACFActionsFunctionLibrary_eventIsValidMovesetActionsTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionsFunctionLibrary);
	UClass* Z_Construct_UClass_UACFActionsFunctionLibrary_NoRegister()
	{
		return UACFActionsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFActionsFunctionLibrary_GetDefaultActionsState, "GetDefaultActionsState" }, // 1138071034
		{ &Z_Construct_UFunction_UACFActionsFunctionLibrary_GetMovesetActionsTagRoot, "GetMovesetActionsTagRoot" }, // 1164805496
		{ &Z_Construct_UFunction_UACFActionsFunctionLibrary_IsValidMovesetActionsTag, "IsValidMovesetActionsTag" }, // 2022681142
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ACFActionsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ACFActionsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::ClassParams = {
		&UACFActionsFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFActionsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UACFActionsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UACFActionsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionsFunctionLibrary.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFActionsFunctionLibrary>()
	{
		return UACFActionsFunctionLibrary::StaticClass();
	}
	UACFActionsFunctionLibrary::UACFActionsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionsFunctionLibrary);
	UACFActionsFunctionLibrary::~UACFActionsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionsFunctionLibrary, UACFActionsFunctionLibrary::StaticClass, TEXT("UACFActionsFunctionLibrary"), &Z_Registration_Info_UClass_UACFActionsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionsFunctionLibrary), 3177656398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsFunctionLibrary_h_2491138161(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

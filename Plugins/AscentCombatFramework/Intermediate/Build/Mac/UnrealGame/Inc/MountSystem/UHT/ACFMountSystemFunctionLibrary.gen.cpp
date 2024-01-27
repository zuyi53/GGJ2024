// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFMountSystemFunctionLibrary.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMountSystemFunctionLibrary() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountSystemFunctionLibrary();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFMountSystemFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFMountSystemFunctionLibrary::execDoesDamageInvolveLocalPlayer)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_GET_UBOOL_REF(Z_Param_Out_bIsVictim);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFMountSystemFunctionLibrary::DoesDamageInvolveLocalPlayer(Z_Param_Out_damageEvent,Z_Param_Out_bIsVictim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFMountSystemFunctionLibrary::execGetLocalRiderPlayerCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=UACFMountSystemFunctionLibrary::GetLocalRiderPlayerCharacter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UACFMountSystemFunctionLibrary::StaticRegisterNativesUACFMountSystemFunctionLibrary()
	{
		UClass* Class = UACFMountSystemFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesDamageInvolveLocalPlayer", &UACFMountSystemFunctionLibrary::execDoesDamageInvolveLocalPlayer },
			{ "GetLocalRiderPlayerCharacter", &UACFMountSystemFunctionLibrary::execGetLocalRiderPlayerCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics
	{
		struct ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms
		{
			FACFDamageEvent damageEvent;
			bool bIsVictim;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static void NewProp_bIsVictim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVictim;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	void Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_bIsVictim_SetBit(void* Obj)
	{
		((ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms*)Obj)->bIsVictim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_bIsVictim = { "bIsVictim", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms), &Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_bIsVictim_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms), &Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_damageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_bIsVictim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/ACFMountSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountSystemFunctionLibrary, nullptr, "DoesDamageInvolveLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::ACFMountSystemFunctionLibrary_eventDoesDamageInvolveLocalPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics
	{
		struct ACFMountSystemFunctionLibrary_eventGetLocalRiderPlayerCharacter_Parms
		{
			const UObject* WorldContextObject;
			AACFCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountSystemFunctionLibrary_eventGetLocalRiderPlayerCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMountSystemFunctionLibrary_eventGetLocalRiderPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "Comment", "/*Returns the local player OR his rider if locally controlled player is a rided mount*/" },
		{ "ModuleRelativePath", "Public/ACFMountSystemFunctionLibrary.h" },
		{ "ToolTip", "Returns the local player OR his rider if locally controlled player is a rided mount" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFMountSystemFunctionLibrary, nullptr, "GetLocalRiderPlayerCharacter", nullptr, nullptr, Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::ACFMountSystemFunctionLibrary_eventGetLocalRiderPlayerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::ACFMountSystemFunctionLibrary_eventGetLocalRiderPlayerCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFMountSystemFunctionLibrary);
	UClass* Z_Construct_UClass_UACFMountSystemFunctionLibrary_NoRegister()
	{
		return UACFMountSystemFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFMountSystemFunctionLibrary_DoesDamageInvolveLocalPlayer, "DoesDamageInvolveLocalPlayer" }, // 1266380308
		{ &Z_Construct_UFunction_UACFMountSystemFunctionLibrary_GetLocalRiderPlayerCharacter, "GetLocalRiderPlayerCharacter" }, // 4290494521
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACFMountSystemFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ACFMountSystemFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFMountSystemFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::ClassParams = {
		&UACFMountSystemFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFMountSystemFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UACFMountSystemFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFMountSystemFunctionLibrary.OuterSingleton, Z_Construct_UClass_UACFMountSystemFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFMountSystemFunctionLibrary.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<UACFMountSystemFunctionLibrary>()
	{
		return UACFMountSystemFunctionLibrary::StaticClass();
	}
	UACFMountSystemFunctionLibrary::UACFMountSystemFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFMountSystemFunctionLibrary);
	UACFMountSystemFunctionLibrary::~UACFMountSystemFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountSystemFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountSystemFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFMountSystemFunctionLibrary, UACFMountSystemFunctionLibrary::StaticClass, TEXT("UACFMountSystemFunctionLibrary"), &Z_Registration_Info_UClass_UACFMountSystemFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFMountSystemFunctionLibrary), 1528604150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountSystemFunctionLibrary_h_1430233778(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountSystemFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountSystemFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

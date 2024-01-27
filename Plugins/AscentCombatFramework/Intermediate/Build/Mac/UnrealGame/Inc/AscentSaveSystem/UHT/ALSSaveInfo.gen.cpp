// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSSaveInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSSaveInfo() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveInfo();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveInfo_NoRegister();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSSaveMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSSaveMetadata;
class UScriptStruct* FALSSaveMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSSaveMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSSaveMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSSaveMetadata, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSSaveMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_ALSSaveMetadata.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSSaveMetadata>()
{
	return FALSSaveMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSSaveMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapToLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALSSaveInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSSaveMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_SaveName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSSaveMetadata, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_SaveName_MetaData), Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_SaveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_MapToLoad_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_MapToLoad = { "MapToLoad", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSSaveMetadata, MapToLoad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_MapToLoad_MetaData), Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_MapToLoad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSSaveMetadata, Data), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_MapToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		nullptr,
		&NewStructOps,
		"ALSSaveMetadata",
		Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::PropPointers),
		sizeof(FALSSaveMetadata),
		alignof(FALSSaveMetadata),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSSaveMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSSaveMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSSaveMetadata.InnerSingleton, Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSSaveMetadata.InnerSingleton;
	}
	void UALSSaveInfo::StaticRegisterNativesUALSSaveInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSSaveInfo);
	UClass* Z_Construct_UClass_UALSSaveInfo_NoRegister()
	{
		return UALSSaveInfo::StaticClass();
	}
	struct Z_Construct_UClass_UALSSaveInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSSaveInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ALS" },
		{ "IncludePath", "ALSSaveInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALSSaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots_Inner = { "SaveSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FALSSaveMetadata, METADATA_PARAMS(0, nullptr) }; // 1414948734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots = { "SaveSlots", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveInfo, SaveSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots_MetaData), Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots_MetaData) }; // 1414948734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSSaveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveInfo_Statics::NewProp_SaveSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSSaveInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSSaveInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSSaveInfo_Statics::ClassParams = {
		&UALSSaveInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSSaveInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSSaveInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSSaveInfo()
	{
		if (!Z_Registration_Info_UClass_UALSSaveInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSSaveInfo.OuterSingleton, Z_Construct_UClass_UALSSaveInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSSaveInfo.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSSaveInfo>()
	{
		return UALSSaveInfo::StaticClass();
	}
	UALSSaveInfo::UALSSaveInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSSaveInfo);
	UALSSaveInfo::~UALSSaveInfo() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics::ScriptStructInfo[] = {
		{ FALSSaveMetadata::StaticStruct, Z_Construct_UScriptStruct_FALSSaveMetadata_Statics::NewStructOps, TEXT("ALSSaveMetadata"), &Z_Registration_Info_UScriptStruct_ALSSaveMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSSaveMetadata), 1414948734U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSSaveInfo, UALSSaveInfo::StaticClass, TEXT("UALSSaveInfo"), &Z_Registration_Info_UClass_UALSSaveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSSaveInfo), 3058164246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_1463219763(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

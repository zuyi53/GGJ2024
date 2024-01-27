// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAnimTypes() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FACFStruct();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFMovesetLayer_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFOverlayLayer_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFRiderLayer_NoRegister();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMoveset();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayLayer();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FRiderLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References

static_assert(std::is_polymorphic<FMoveset>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FMoveset cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Moveset;
class UScriptStruct* FMoveset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Moveset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Moveset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveset, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("Moveset"));
	}
	return Z_Registration_Info_UScriptStruct_Moveset.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FMoveset>()
{
	return FMoveset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoveset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moveset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Moveset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoveset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveset_Statics::NewProp_Moveset_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMoveset_Statics::NewProp_Moveset = { "Moveset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveset, Moveset), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFMovesetLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveset_Statics::NewProp_Moveset_MetaData), Z_Construct_UScriptStruct_FMoveset_Statics::NewProp_Moveset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveset_Statics::NewProp_Moveset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"Moveset",
		Z_Construct_UScriptStruct_FMoveset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveset_Statics::PropPointers),
		sizeof(FMoveset),
		alignof(FMoveset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoveset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMoveset()
	{
		if (!Z_Registration_Info_UScriptStruct_Moveset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Moveset.InnerSingleton, Z_Construct_UScriptStruct_FMoveset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Moveset.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOverlayLayer>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FOverlayLayer cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverlayLayer;
class UScriptStruct* FOverlayLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverlayLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverlayLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlayLayer, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("OverlayLayer"));
	}
	return Z_Registration_Info_UScriptStruct_OverlayLayer.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FOverlayLayer>()
{
	return FOverlayLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOverlayLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Overlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlayLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewProp_Overlay_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayLayer, Overlay), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFOverlayLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewProp_Overlay_MetaData), Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewProp_Overlay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverlayLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewProp_Overlay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlayLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"OverlayLayer",
		Z_Construct_UScriptStruct_FOverlayLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayLayer_Statics::PropPointers),
		sizeof(FOverlayLayer),
		alignof(FOverlayLayer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverlayLayer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayLayer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOverlayLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_OverlayLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverlayLayer.InnerSingleton, Z_Construct_UScriptStruct_FOverlayLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OverlayLayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRiderLayer>() == std::is_polymorphic<FACFStruct>(), "USTRUCT FRiderLayer cannot be polymorphic unless super FACFStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiderLayer;
class UScriptStruct* FRiderLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiderLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiderLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiderLayer, (UObject*)Z_Construct_UPackage__Script_CharacterController(), TEXT("RiderLayer"));
	}
	return Z_Registration_Info_UScriptStruct_RiderLayer.OuterSingleton;
}
template<> CHARACTERCONTROLLER_API UScriptStruct* StaticStruct<FRiderLayer>()
{
	return FRiderLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRiderLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiderLayer_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RiderLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRiderLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRiderLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiderLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRiderLayer_Statics::NewProp_RiderLayer_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRiderLayer_Statics::NewProp_RiderLayer = { "RiderLayer", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiderLayer, RiderLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFRiderLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiderLayer_Statics::NewProp_RiderLayer_MetaData), Z_Construct_UScriptStruct_FRiderLayer_Statics::NewProp_RiderLayer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiderLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiderLayer_Statics::NewProp_RiderLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiderLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
		Z_Construct_UScriptStruct_FACFStruct,
		&NewStructOps,
		"RiderLayer",
		Z_Construct_UScriptStruct_FRiderLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiderLayer_Statics::PropPointers),
		sizeof(FRiderLayer),
		alignof(FRiderLayer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiderLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiderLayer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiderLayer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRiderLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_RiderLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiderLayer.InnerSingleton, Z_Construct_UScriptStruct_FRiderLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RiderLayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimTypes_h_Statics::ScriptStructInfo[] = {
		{ FMoveset::StaticStruct, Z_Construct_UScriptStruct_FMoveset_Statics::NewStructOps, TEXT("Moveset"), &Z_Registration_Info_UScriptStruct_Moveset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoveset), 4170589687U) },
		{ FOverlayLayer::StaticStruct, Z_Construct_UScriptStruct_FOverlayLayer_Statics::NewStructOps, TEXT("OverlayLayer"), &Z_Registration_Info_UScriptStruct_OverlayLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverlayLayer), 1874702207U) },
		{ FRiderLayer::StaticStruct, Z_Construct_UScriptStruct_FRiderLayer_Statics::NewStructOps, TEXT("RiderLayer"), &Z_Registration_Info_UScriptStruct_RiderLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiderLayer), 3097526794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimTypes_h_2992444793(TEXT("/Script/CharacterController"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

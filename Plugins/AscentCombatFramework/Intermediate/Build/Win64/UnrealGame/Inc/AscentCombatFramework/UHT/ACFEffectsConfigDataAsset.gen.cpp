// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Config/ACFEffectsConfigDataAsset.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFEffectsConfigDataAsset() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsConfigDataAsset();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsConfigDataAsset_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEffectByDamageType();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFX();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFEffectsConfigDataAsset::StaticRegisterNativesUACFEffectsConfigDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFEffectsConfigDataAsset);
	UClass* Z_Construct_UClass_UACFEffectsConfigDataAsset_NoRegister()
	{
		return UACFEffectsConfigDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckForSurface_MetaData[];
#endif
		static void NewProp_bCheckForSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFootstepFX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFootstepFX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootstepEffectsBySurface_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepEffectsBySurface_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepEffectsBySurface_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FootstepEffectsBySurface;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectsByHitReaction_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectsByHitReaction_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageEffectsByHitReaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Config/ACFEffectsConfigDataAsset.h" },
		{ "ModuleRelativePath", "Public/Config/ACFEffectsConfigDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface_MetaData[] = {
		{ "Category", "ACF| Footstep" },
		{ "Comment", "/*Enable terrain material check for footsteps*/" },
		{ "ModuleRelativePath", "Public/Config/ACFEffectsConfigDataAsset.h" },
		{ "ToolTip", "Enable terrain material check for footsteps" },
	};
#endif
	void Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface_SetBit(void* Obj)
	{
		((UACFEffectsConfigDataAsset*)Obj)->bCheckForSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface = { "bCheckForSurface", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFEffectsConfigDataAsset), &Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface_MetaData), Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DefaultFootstepFX_MetaData[] = {
		{ "Category", "ACF| Footstep" },
		{ "Comment", "/*Effect played on Footstep when CheckForSurface is DISABLED*/" },
		{ "EditCondition", "!bCheckForSurface" },
		{ "ModuleRelativePath", "Public/Config/ACFEffectsConfigDataAsset.h" },
		{ "ToolTip", "Effect played on Footstep when CheckForSurface is DISABLED" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DefaultFootstepFX = { "DefaultFootstepFX", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsConfigDataAsset, DefaultFootstepFX), Z_Construct_UScriptStruct_FBaseFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DefaultFootstepFX_MetaData), Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DefaultFootstepFX_MetaData) }; // 974731263
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_ValueProp = { "FootstepEffectsBySurface", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBaseFX, METADATA_PARAMS(0, nullptr) }; // 974731263
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_Key_KeyProp = { "FootstepEffectsBySurface_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_MetaData[] = {
		{ "Category", "ACF| Footstep" },
		{ "Comment", "/*Effects played on Footstep when CheckForSurface is ENABLED, depending on the actual\n    terrain surface physical material*/" },
		{ "EditCondition", "bCheckForSurface" },
		{ "ModuleRelativePath", "Public/Config/ACFEffectsConfigDataAsset.h" },
		{ "ToolTip", "Effects played on Footstep when CheckForSurface is ENABLED, depending on the actual\n    terrain surface physical material" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface = { "FootstepEffectsBySurface", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsConfigDataAsset, FootstepEffectsBySurface), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_MetaData), Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_MetaData) }; // 2508321301 974731263
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction_Inner = { "DamageEffectsByHitReaction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffectByDamageType, METADATA_PARAMS(0, nullptr) }; // 2737378365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction_MetaData[] = {
		{ "Category", "ACF | Damages" },
		{ "Comment", "/*Effects triggered when this character gets hit depending on the DamageType Received.\n    Location will always be the impact point*/" },
		{ "ModuleRelativePath", "Public/Config/ACFEffectsConfigDataAsset.h" },
		{ "TitleProperty", "TagName" },
		{ "ToolTip", "Effects triggered when this character gets hit depending on the DamageType Received.\n    Location will always be the impact point" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction = { "DamageEffectsByHitReaction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsConfigDataAsset, DamageEffectsByHitReaction), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction_MetaData), Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction_MetaData) }; // 2737378365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_bCheckForSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DefaultFootstepFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_FootstepEffectsBySurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::NewProp_DamageEffectsByHitReaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFEffectsConfigDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::ClassParams = {
		&UACFEffectsConfigDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFEffectsConfigDataAsset()
	{
		if (!Z_Registration_Info_UClass_UACFEffectsConfigDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFEffectsConfigDataAsset.OuterSingleton, Z_Construct_UClass_UACFEffectsConfigDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFEffectsConfigDataAsset.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFEffectsConfigDataAsset>()
	{
		return UACFEffectsConfigDataAsset::StaticClass();
	}
	UACFEffectsConfigDataAsset::UACFEffectsConfigDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFEffectsConfigDataAsset);
	UACFEffectsConfigDataAsset::~UACFEffectsConfigDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Config_ACFEffectsConfigDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Config_ACFEffectsConfigDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFEffectsConfigDataAsset, UACFEffectsConfigDataAsset::StaticClass, TEXT("UACFEffectsConfigDataAsset"), &Z_Registration_Info_UClass_UACFEffectsConfigDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFEffectsConfigDataAsset), 1532689787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Config_ACFEffectsConfigDataAsset_h_647547518(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Config_ACFEffectsConfigDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Config_ACFEffectsConfigDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFOverlayLayer.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "ACFCCTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFOverlayLayer() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimLayer();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFOverlayLayer();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFOverlayLayer_NoRegister();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_EMovementStance();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayConfig();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	void UACFOverlayLayer::StaticRegisterNativesUACFOverlayLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFOverlayLayer);
	UClass* Z_Construct_UClass_UACFOverlayLayer_NoRegister()
	{
		return UACFOverlayLayer::StaticClass();
	}
	struct Z_Construct_UClass_UACFOverlayLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdleOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayBlendAlfa_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayBlendAlfa;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSwitchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSwitchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentOverlay_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFOverlayLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFAnimLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/ACFOverlayLayer.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "ACF | AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, AimOffset), Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOffset_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_IdleOverlay_MetaData[] = {
		{ "Category", "ACF | Overlay" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_IdleOverlay = { "IdleOverlay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, IdleOverlay), Z_Construct_UScriptStruct_FOverlayConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_IdleOverlay_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_IdleOverlay_MetaData) }; // 273665174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOverlay_MetaData[] = {
		{ "Category", "ACF | Overlay" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOverlay = { "AimOverlay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, AimOverlay), Z_Construct_UScriptStruct_FOverlayConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOverlay_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOverlay_MetaData) }; // 273665174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_BlockOverlay_MetaData[] = {
		{ "Category", "ACF | Overlay" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_BlockOverlay = { "BlockOverlay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, BlockOverlay), Z_Construct_UScriptStruct_FOverlayConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_BlockOverlay_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_BlockOverlay_MetaData) }; // 273665174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_CustomOverlay_MetaData[] = {
		{ "Category", "ACF | Overlay" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_CustomOverlay = { "CustomOverlay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, CustomOverlay), Z_Construct_UScriptStruct_FOverlayConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_CustomOverlay_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_CustomOverlay_MetaData) }; // 273665174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_OverlayBlendAlfa_MetaData[] = {
		{ "Category", "ACF | Overlay" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_OverlayBlendAlfa = { "OverlayBlendAlfa", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, OverlayBlendAlfa), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_OverlayBlendAlfa_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_OverlayBlendAlfa_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_DefaultSwitchTime_MetaData[] = {
		{ "Category", "ACF | Overlay" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_DefaultSwitchTime = { "DefaultSwitchTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, DefaultSwitchTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_DefaultSwitchTime_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_DefaultSwitchTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, MovementComp), Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_MovementComp_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_MovementComp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFOverlayLayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay = { "currentOverlay", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFOverlayLayer, currentOverlay), Z_Construct_UEnum_CharacterController_EMovementStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay_MetaData), Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay_MetaData) }; // 234945340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFOverlayLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_IdleOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_AimOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_BlockOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_CustomOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_OverlayBlendAlfa,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_DefaultSwitchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFOverlayLayer_Statics::NewProp_currentOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFOverlayLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFOverlayLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFOverlayLayer_Statics::ClassParams = {
		&UACFOverlayLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFOverlayLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFOverlayLayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFOverlayLayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFOverlayLayer()
	{
		if (!Z_Registration_Info_UClass_UACFOverlayLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFOverlayLayer.OuterSingleton, Z_Construct_UClass_UACFOverlayLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFOverlayLayer.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFOverlayLayer>()
	{
		return UACFOverlayLayer::StaticClass();
	}
	UACFOverlayLayer::UACFOverlayLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFOverlayLayer);
	UACFOverlayLayer::~UACFOverlayLayer() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFOverlayLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFOverlayLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFOverlayLayer, UACFOverlayLayer::StaticClass, TEXT("UACFOverlayLayer"), &Z_Registration_Info_UClass_UACFOverlayLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFOverlayLayer), 80215321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFOverlayLayer_h_2917264411(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFOverlayLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFOverlayLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

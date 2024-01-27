// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMSequenceNotifyState.h"
#include "CinematicCameraManager/Public/CCMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMSequenceNotifyState() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMSequenceNotifyState();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMSequenceNotifyState_NoRegister();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMSequenceEvent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References
	void UCCMSequenceNotifyState::StaticRegisterNativesUCCMSequenceNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCCMSequenceNotifyState);
	UClass* Z_Construct_UClass_UCCMSequenceNotifyState_NoRegister()
	{
		return UCCMSequenceNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UCCMSequenceNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnlyIfOwningPlayer_MetaData[];
#endif
		static void NewProp_bActivateOnlyIfOwningPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnlyIfOwningPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCCMSequenceNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMSequenceNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMSequenceNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "CCMSequenceNotifyState.h" },
		{ "ModuleRelativePath", "Public/CCMSequenceNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMSequenceNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer_SetBit(void* Obj)
	{
		((UCCMSequenceNotifyState*)Obj)->bActivateOnlyIfOwningPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer = { "bActivateOnlyIfOwningPlayer", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCCMSequenceNotifyState), &Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer_MetaData), Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_SequenceModifier_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMSequenceNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_SequenceModifier = { "SequenceModifier", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCCMSequenceNotifyState, SequenceModifier), Z_Construct_UScriptStruct_FCCMSequenceEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_SequenceModifier_MetaData), Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_SequenceModifier_MetaData) }; // 584148919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCCMSequenceNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_bActivateOnlyIfOwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMSequenceNotifyState_Statics::NewProp_SequenceModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCCMSequenceNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCCMSequenceNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCCMSequenceNotifyState_Statics::ClassParams = {
		&UCCMSequenceNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCCMSequenceNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCCMSequenceNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMSequenceNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UCCMSequenceNotifyState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMSequenceNotifyState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCCMSequenceNotifyState()
	{
		if (!Z_Registration_Info_UClass_UCCMSequenceNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCCMSequenceNotifyState.OuterSingleton, Z_Construct_UClass_UCCMSequenceNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCCMSequenceNotifyState.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<UCCMSequenceNotifyState>()
	{
		return UCCMSequenceNotifyState::StaticClass();
	}
	UCCMSequenceNotifyState::UCCMSequenceNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCCMSequenceNotifyState);
	UCCMSequenceNotifyState::~UCCMSequenceNotifyState() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMSequenceNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMSequenceNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCCMSequenceNotifyState, UCCMSequenceNotifyState::StaticClass, TEXT("UCCMSequenceNotifyState"), &Z_Registration_Info_UClass_UCCMSequenceNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCCMSequenceNotifyState), 3321437743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMSequenceNotifyState_h_2339059700(TEXT("/Script/CinematicCameraManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMSequenceNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMSequenceNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFAnimLayer.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAnimLayer() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimLayer();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	DEFINE_FUNCTION(UACFAnimLayer::execOnDeactivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeactivated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAnimLayer::execOnActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivated_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UACFAnimLayer_OnActivated = FName(TEXT("OnActivated"));
	void UACFAnimLayer::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFAnimLayer_OnActivated),NULL);
	}
	static FName NAME_UACFAnimLayer_OnDeactivated = FName(TEXT("OnDeactivated"));
	void UACFAnimLayer::OnDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFAnimLayer_OnDeactivated),NULL);
	}
	void UACFAnimLayer::StaticRegisterNativesUACFAnimLayer()
	{
		UClass* Class = UACFAnimLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActivated", &UACFAnimLayer::execOnActivated },
			{ "OnDeactivated", &UACFAnimLayer::execOnDeactivated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAnimLayer_OnActivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimLayer_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called when this layer is activated*/" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimLayer.h" },
		{ "ToolTip", "Called when this layer is activated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimLayer_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimLayer, nullptr, "OnActivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimLayer_OnActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimLayer_OnActivated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAnimLayer_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimLayer_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAnimLayer_OnDeactivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAnimLayer_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called when the action is finished. Normally if BindActionToAnimation is set to true\n        this is called when the animation is finished*/" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimLayer.h" },
		{ "ToolTip", "Called when the action is finished. Normally if BindActionToAnimation is set to true\n        this is called when the animation is finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAnimLayer_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAnimLayer, nullptr, "OnDeactivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAnimLayer_OnDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFAnimLayer_OnDeactivated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFAnimLayer_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFAnimLayer_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAnimLayer);
	UClass* Z_Construct_UClass_UACFAnimLayer_NoRegister()
	{
		return UACFAnimLayer::StaticClass();
	}
	struct Z_Construct_UClass_UACFAnimLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAnimLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimLayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAnimLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAnimLayer_OnActivated, "OnActivated" }, // 1629383412
		{ &Z_Construct_UFunction_UACFAnimLayer_OnDeactivated, "OnDeactivated" }, // 4159346261
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimLayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAnimLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/ACFAnimLayer.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFAnimLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAnimLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAnimLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAnimLayer_Statics::ClassParams = {
		&UACFAnimLayer::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAnimLayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFAnimLayer()
	{
		if (!Z_Registration_Info_UClass_UACFAnimLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAnimLayer.OuterSingleton, Z_Construct_UClass_UACFAnimLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAnimLayer.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFAnimLayer>()
	{
		return UACFAnimLayer::StaticClass();
	}
	UACFAnimLayer::UACFAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAnimLayer);
	UACFAnimLayer::~UACFAnimLayer() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAnimLayer, UACFAnimLayer::StaticClass, TEXT("UACFAnimLayer"), &Z_Registration_Info_UClass_UACFAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAnimLayer), 3609690279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimLayer_h_2404396453(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

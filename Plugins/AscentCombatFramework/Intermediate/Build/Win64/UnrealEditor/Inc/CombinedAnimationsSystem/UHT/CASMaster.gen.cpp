// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombinedAnimationsSystem/Public/CASMaster.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCASMaster() {}
// Cross Module References
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASMaster();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CombinedAnimationsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UCASMaster::execMulticastPlayAnimMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulticastPlayAnimMontage_Validate(Z_Param_AnimMontage,Z_Param_character))
		{
			RPC_ValidateFailed(TEXT("MulticastPlayAnimMontage_Validate"));
			return;
		}
		P_THIS->MulticastPlayAnimMontage_Implementation(Z_Param_AnimMontage,Z_Param_character);
		P_NATIVE_END;
	}
	struct CASMaster_eventMulticastPlayAnimMontage_Parms
	{
		UAnimMontage* AnimMontage;
		ACharacter* character;
	};
	static FName NAME_UCASMaster_MulticastPlayAnimMontage = FName(TEXT("MulticastPlayAnimMontage"));
	void UCASMaster::MulticastPlayAnimMontage(UAnimMontage* AnimMontage, ACharacter* character)
	{
		CASMaster_eventMulticastPlayAnimMontage_Parms Parms;
		Parms.AnimMontage=AnimMontage;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UCASMaster_MulticastPlayAnimMontage),&Parms);
	}
	void UCASMaster::StaticRegisterNativesUCASMaster()
	{
		UClass* Class = UCASMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastPlayAnimMontage", &UCASMaster::execMulticastPlayAnimMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASMaster_eventMulticastPlayAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASMaster_eventMulticastPlayAnimMontage_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASMaster, nullptr, "MulticastPlayAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::PropPointers), sizeof(CASMaster_eventMulticastPlayAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASMaster_eventMulticastPlayAnimMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASMaster);
	UClass* Z_Construct_UClass_UCASMaster_NoRegister()
	{
		return UCASMaster::StaticClass();
	}
	struct Z_Construct_UClass_UCASMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASMaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCASMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCASMaster_MulticastPlayAnimMontage, "MulticastPlayAnimMontage" }, // 3431634732
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASMaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASMaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CASMaster.h" },
		{ "ModuleRelativePath", "Public/CASMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASMaster_Statics::ClassParams = {
		&UCASMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASMaster_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCASMaster()
	{
		if (!Z_Registration_Info_UClass_UCASMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASMaster.OuterSingleton, Z_Construct_UClass_UCASMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASMaster.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASMaster>()
	{
		return UCASMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASMaster);
	UCASMaster::~UCASMaster() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCASMaster, UCASMaster::StaticClass, TEXT("UCASMaster"), &Z_Registration_Info_UClass_UCASMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASMaster), 316165569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASMaster_h_3587910688(TEXT("/Script/CombinedAnimationsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

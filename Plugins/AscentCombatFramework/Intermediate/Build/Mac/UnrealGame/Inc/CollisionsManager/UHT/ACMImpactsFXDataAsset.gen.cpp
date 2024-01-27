// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollisionsManager/Public/ACMImpactsFXDataAsset.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMImpactsFXDataAsset() {}
// Cross Module References
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMImpactsFXDataAsset();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMImpactsFXDataAsset_NoRegister();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFX();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactsArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CollisionsManager();
// End Cross Module References
	DEFINE_FUNCTION(UACMImpactsFXDataAsset::execTryGetImpactFX)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UDamageType> ,Z_Param_Out_damageImpacting);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_materialImpacted);
		P_GET_STRUCT_REF(FBaseFX,Z_Param_Out_outFXtoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetImpactFX(Z_Param_Out_damageImpacting,Z_Param_materialImpacted,Z_Param_Out_outFXtoPlay);
		P_NATIVE_END;
	}
	void UACMImpactsFXDataAsset::StaticRegisterNativesUACMImpactsFXDataAsset()
	{
		UClass* Class = UACMImpactsFXDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryGetImpactFX", &UACMImpactsFXDataAsset::execTryGetImpactFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics
	{
		struct ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms
		{
			const TSubclassOf<UDamageType>  damageImpacting;
			UPhysicalMaterial* materialImpacted;
			FBaseFX outFXtoPlay;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageImpacting_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_damageImpacting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialImpacted;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outFXtoPlay;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_damageImpacting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_damageImpacting = { "damageImpacting", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms, damageImpacting), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_damageImpacting_MetaData), Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_damageImpacting_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_materialImpacted = { "materialImpacted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms, materialImpacted), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_outFXtoPlay = { "outFXtoPlay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms, outFXtoPlay), Z_Construct_UScriptStruct_FBaseFX, METADATA_PARAMS(0, nullptr) }; // 974731263
	void Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms), &Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_damageImpacting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_materialImpacted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_outFXtoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMImpactsFXDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMImpactsFXDataAsset, nullptr, "TryGetImpactFX", nullptr, nullptr, Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::ACMImpactsFXDataAsset_eventTryGetImpactFX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMImpactsFXDataAsset);
	UClass* Z_Construct_UClass_UACMImpactsFXDataAsset_NoRegister()
	{
		return UACMImpactsFXDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UACMImpactsFXDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactFXsByDamageType_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ImpactFXsByDamageType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactFXsByDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImpactFXsByDamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACMImpactsFXDataAsset_TryGetImpactFX, "TryGetImpactFX" }, // 3625270022
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACMImpactsFXDataAsset.h" },
		{ "ModuleRelativePath", "Public/ACMImpactsFXDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_ValueProp = { "ImpactFXsByDamageType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FImpactsArray, METADATA_PARAMS(0, nullptr) }; // 2184133029
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_Key_KeyProp = { "ImpactFXsByDamageType_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMImpactsFXDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType = { "ImpactFXsByDamageType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMImpactsFXDataAsset, ImpactFXsByDamageType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_MetaData), Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_MetaData) }; // 2184133029
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::NewProp_ImpactFXsByDamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMImpactsFXDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::ClassParams = {
		&UACMImpactsFXDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACMImpactsFXDataAsset()
	{
		if (!Z_Registration_Info_UClass_UACMImpactsFXDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMImpactsFXDataAsset.OuterSingleton, Z_Construct_UClass_UACMImpactsFXDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACMImpactsFXDataAsset.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UClass* StaticClass<UACMImpactsFXDataAsset>()
	{
		return UACMImpactsFXDataAsset::StaticClass();
	}
	UACMImpactsFXDataAsset::UACMImpactsFXDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACMImpactsFXDataAsset);
	UACMImpactsFXDataAsset::~UACMImpactsFXDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMImpactsFXDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMImpactsFXDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACMImpactsFXDataAsset, UACMImpactsFXDataAsset::StaticClass, TEXT("UACMImpactsFXDataAsset"), &Z_Registration_Info_UClass_UACMImpactsFXDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMImpactsFXDataAsset), 3390234101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMImpactsFXDataAsset_h_3478079735(TEXT("/Script/CollisionsManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMImpactsFXDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMImpactsFXDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

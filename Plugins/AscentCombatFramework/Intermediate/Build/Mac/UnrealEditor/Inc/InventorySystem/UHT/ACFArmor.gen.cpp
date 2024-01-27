// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFArmor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFArmor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFArmor();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFArmor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFEquippableItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFArmor::execGetArmorMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkinnedAsset**)Z_Param__Result=P_THIS->GetArmorMesh_Implementation();
		P_NATIVE_END;
	}
	struct ACFArmor_eventGetArmorMesh_Parms
	{
		USkinnedAsset* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFArmor_eventGetArmorMesh_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_AACFArmor_GetArmorMesh = FName(TEXT("GetArmorMesh"));
	USkinnedAsset* AACFArmor::GetArmorMesh() const
	{
		ACFArmor_eventGetArmorMesh_Parms Parms;
		const_cast<AACFArmor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFArmor_GetArmorMesh),&Parms);
		return Parms.ReturnValue;
	}
	void AACFArmor::StaticRegisterNativesAACFArmor()
	{
		UClass* Class = AACFArmor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArmorMesh", &AACFArmor::execGetArmorMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFArmor_eventGetArmorMesh_Parms, ReturnValue), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFArmor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFArmor, nullptr, "GetArmorMesh", nullptr, nullptr, Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::PropPointers), sizeof(ACFArmor_eventGetArmorMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFArmor_eventGetArmorMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFArmor_GetArmorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFArmor_GetArmorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFArmor);
	UClass* Z_Construct_UClass_AACFArmor_NoRegister()
	{
		return AACFArmor::StaticClass();
	}
	struct Z_Construct_UClass_AACFArmor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFArmor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFEquippableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFArmor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFArmor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFArmor_GetArmorMesh, "GetArmorMesh" }, // 2493338753
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFArmor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFArmor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ACFArmor.h" },
		{ "ModuleRelativePath", "Public/Items/ACFArmor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFArmor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFArmor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFArmor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFArmor, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFArmor_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_AACFArmor_Statics::NewProp_MeshComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFArmor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFArmor_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFArmor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFArmor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFArmor_Statics::ClassParams = {
		&AACFArmor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFArmor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFArmor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFArmor_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFArmor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFArmor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFArmor()
	{
		if (!Z_Registration_Info_UClass_AACFArmor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFArmor.OuterSingleton, Z_Construct_UClass_AACFArmor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFArmor.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFArmor>()
	{
		return AACFArmor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFArmor);
	AACFArmor::~AACFArmor() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFArmor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFArmor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFArmor, AACFArmor::StaticClass, TEXT("AACFArmor"), &Z_Registration_Info_UClass_AACFArmor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFArmor), 1971246621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFArmor_h_4039065116(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFArmor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFArmor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

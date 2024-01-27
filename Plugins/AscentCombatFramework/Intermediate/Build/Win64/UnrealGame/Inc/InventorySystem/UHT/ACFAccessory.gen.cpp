// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFAccessory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAccessory() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFAccessory();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFAccessory_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFEquippableItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFAccessory::execGetAttachmentSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetAttachmentSocket();
		P_NATIVE_END;
	}
	void AACFAccessory::StaticRegisterNativesAACFAccessory()
	{
		UClass* Class = AACFAccessory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachmentSocket", &AACFAccessory::execGetAttachmentSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics
	{
		struct ACFAccessory_eventGetAttachmentSocket_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAccessory_eventGetAttachmentSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFAccessory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAccessory, nullptr, "GetAttachmentSocket", nullptr, nullptr, Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::ACFAccessory_eventGetAttachmentSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::ACFAccessory_eventGetAttachmentSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFAccessory);
	UClass* Z_Construct_UClass_AACFAccessory_NoRegister()
	{
		return AACFAccessory::StaticClass();
	}
	struct Z_Construct_UClass_AACFAccessory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentSocket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFAccessory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFEquippableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAccessory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFAccessory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFAccessory_GetAttachmentSocket, "GetAttachmentSocket" }, // 1268225980
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAccessory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAccessory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/ACFAccessory.h" },
		{ "ModuleRelativePath", "Public/Items/ACFAccessory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAccessory_Statics::NewProp_AttachmentSocket_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFAccessory.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AACFAccessory_Statics::NewProp_AttachmentSocket = { "AttachmentSocket", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAccessory, AttachmentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAccessory_Statics::NewProp_AttachmentSocket_MetaData), Z_Construct_UClass_AACFAccessory_Statics::NewProp_AttachmentSocket_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFAccessory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAccessory_Statics::NewProp_AttachmentSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFAccessory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFAccessory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFAccessory_Statics::ClassParams = {
		&AACFAccessory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFAccessory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFAccessory_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAccessory_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFAccessory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAccessory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFAccessory()
	{
		if (!Z_Registration_Info_UClass_AACFAccessory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFAccessory.OuterSingleton, Z_Construct_UClass_AACFAccessory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFAccessory.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFAccessory>()
	{
		return AACFAccessory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFAccessory);
	AACFAccessory::~AACFAccessory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFAccessory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFAccessory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFAccessory, AACFAccessory::StaticClass, TEXT("AACFAccessory"), &Z_Registration_Info_UClass_AACFAccessory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFAccessory), 1096575729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFAccessory_h_2908444130(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFAccessory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFAccessory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

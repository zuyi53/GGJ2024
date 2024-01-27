// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFMeleeWeapon.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMeleeWeapon() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFMeleeWeapon();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFMeleeWeapon_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWeapon();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnWeaponHit_Parms
		{
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnWeaponHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnWeaponHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::_Script_InventorySystem_eventOnWeaponHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::_Script_InventorySystem_eventOnWeaponHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWeaponHit_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponHit, FHitResult HitResult)
{
	struct _Script_InventorySystem_eventOnWeaponHit_Parms
	{
		FHitResult HitResult;
	};
	_Script_InventorySystem_eventOnWeaponHit_Parms Parms;
	Parms.HitResult=HitResult;
	OnWeaponHit.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AACFMeleeWeapon::execHandleAttackHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAttackHit(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFMeleeWeapon::execStopWeaponSwing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWeaponSwing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFMeleeWeapon::execStartWeaponSwing)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_traceChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWeaponSwing(Z_Param_Out_traceChannels);
		P_NATIVE_END;
	}
	void AACFMeleeWeapon::StaticRegisterNativesAACFMeleeWeapon()
	{
		UClass* Class = AACFMeleeWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAttackHit", &AACFMeleeWeapon::execHandleAttackHit },
			{ "StartWeaponSwing", &AACFMeleeWeapon::execStartWeaponSwing },
			{ "StopWeaponSwing", &AACFMeleeWeapon::execStopWeaponSwing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics
	{
		struct ACFMeleeWeapon_eventHandleAttackHit_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMeleeWeapon_eventHandleAttackHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::NewProp_HitResult_MetaData), Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFMeleeWeapon, nullptr, "HandleAttackHit", nullptr, nullptr, Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::ACFMeleeWeapon_eventHandleAttackHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::ACFMeleeWeapon_eventHandleAttackHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics
	{
		struct ACFMeleeWeapon_eventStartWeaponSwing_Parms
		{
			TArray<FName> traceChannels;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_traceChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels_Inner = { "traceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels = { "traceChannels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFMeleeWeapon_eventStartWeaponSwing_Parms, traceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels_MetaData), Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::NewProp_traceChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFMeleeWeapon, nullptr, "StartWeaponSwing", nullptr, nullptr, Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::ACFMeleeWeapon_eventStartWeaponSwing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::ACFMeleeWeapon_eventStartWeaponSwing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFMeleeWeapon, nullptr, "StopWeaponSwing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFMeleeWeapon);
	UClass* Z_Construct_UClass_AACFMeleeWeapon_NoRegister()
	{
		return AACFMeleeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AACFMeleeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VFXCylinderHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VFXCylinderHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFMeleeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFMeleeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFMeleeWeapon_HandleAttackHit, "HandleAttackHit" }, // 1026408190
		{ &Z_Construct_UFunction_AACFMeleeWeapon_StartWeaponSwing, "StartWeaponSwing" }, // 1661008246
		{ &Z_Construct_UFunction_AACFMeleeWeapon_StopWeaponSwing, "StopWeaponSwing" }, // 624571412
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFMeleeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ACFMeleeWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_OnWeaponHit_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_OnWeaponHit = { "OnWeaponHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFMeleeWeapon, OnWeaponHit), Z_Construct_UDelegateFunction_InventorySystem_OnWeaponHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_OnWeaponHit_MetaData), Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_OnWeaponHit_MetaData) }; // 1157845822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_VFXCylinderHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/ACFMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_VFXCylinderHeight = { "VFXCylinderHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFMeleeWeapon, VFXCylinderHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_VFXCylinderHeight_MetaData), Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_VFXCylinderHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFMeleeWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_OnWeaponHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFMeleeWeapon_Statics::NewProp_VFXCylinderHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFMeleeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFMeleeWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFMeleeWeapon_Statics::ClassParams = {
		&AACFMeleeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFMeleeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFMeleeWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMeleeWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFMeleeWeapon()
	{
		if (!Z_Registration_Info_UClass_AACFMeleeWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFMeleeWeapon.OuterSingleton, Z_Construct_UClass_AACFMeleeWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFMeleeWeapon.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFMeleeWeapon>()
	{
		return AACFMeleeWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFMeleeWeapon);
	AACFMeleeWeapon::~AACFMeleeWeapon() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMeleeWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMeleeWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFMeleeWeapon, AACFMeleeWeapon::StaticClass, TEXT("AACFMeleeWeapon"), &Z_Registration_Info_UClass_AACFMeleeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFMeleeWeapon), 2024221197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMeleeWeapon_h_1881148421(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMeleeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMeleeWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

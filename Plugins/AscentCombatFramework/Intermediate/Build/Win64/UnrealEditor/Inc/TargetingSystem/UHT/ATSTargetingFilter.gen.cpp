// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystem/Public/ATSTargetingFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATSTargetingFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetingFilter();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetingFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UATSTargetingFilter::execIsActorTargetable)
	{
		P_GET_OBJECT(AActor,Z_Param_componentOwner);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorTargetable_Implementation(Z_Param_componentOwner,Z_Param_Target);
		P_NATIVE_END;
	}
	struct ATSTargetingFilter_eventIsActorTargetable_Parms
	{
		const AActor* componentOwner;
		const AActor* Target;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ATSTargetingFilter_eventIsActorTargetable_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UATSTargetingFilter_IsActorTargetable = FName(TEXT("IsActorTargetable"));
	bool UATSTargetingFilter::IsActorTargetable(const AActor* componentOwner, const AActor* Target)
	{
		ATSTargetingFilter_eventIsActorTargetable_Parms Parms;
		Parms.componentOwner=componentOwner;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_UATSTargetingFilter_IsActorTargetable),&Parms);
		return !!Parms.ReturnValue;
	}
	void UATSTargetingFilter::StaticRegisterNativesUATSTargetingFilter()
	{
		UClass* Class = UATSTargetingFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActorTargetable", &UATSTargetingFilter::execIsActorTargetable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_componentOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_componentOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_componentOwner = { "componentOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingFilter_eventIsActorTargetable_Parms, componentOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_componentOwner_MetaData), Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_componentOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetingFilter_eventIsActorTargetable_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_Target_MetaData) };
	void Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ATSTargetingFilter_eventIsActorTargetable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATSTargetingFilter_eventIsActorTargetable_Parms), &Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_componentOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetingFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetingFilter, nullptr, "IsActorTargetable", nullptr, nullptr, Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::PropPointers), sizeof(ATSTargetingFilter_eventIsActorTargetable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::PropPointers) < 2048);
	static_assert(sizeof(ATSTargetingFilter_eventIsActorTargetable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATSTargetingFilter);
	UClass* Z_Construct_UClass_UATSTargetingFilter_NoRegister()
	{
		return UATSTargetingFilter::StaticClass();
	}
	struct Z_Construct_UClass_UATSTargetingFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UATSTargetingFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingFilter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UATSTargetingFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UATSTargetingFilter_IsActorTargetable, "IsActorTargetable" }, // 3445317435
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingFilter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetingFilter_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "ATSTargetingFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATSTargetingFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UATSTargetingFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATSTargetingFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UATSTargetingFilter_Statics::ClassParams = {
		&UATSTargetingFilter::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetingFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UATSTargetingFilter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UATSTargetingFilter()
	{
		if (!Z_Registration_Info_UClass_UATSTargetingFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATSTargetingFilter.OuterSingleton, Z_Construct_UClass_UATSTargetingFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UATSTargetingFilter.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UATSTargetingFilter>()
	{
		return UATSTargetingFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UATSTargetingFilter);
	UATSTargetingFilter::~UATSTargetingFilter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UATSTargetingFilter, UATSTargetingFilter::StaticClass, TEXT("UATSTargetingFilter"), &Z_Registration_Info_UClass_UATSTargetingFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATSTargetingFilter), 3777621123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingFilter_h_2959918983(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/ACFGroupAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGroupAgentInterface() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAgentInterface();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAgentInterface_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(IACFGroupAgentInterface::execIsPartOfGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartOfGroup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IACFGroupAgentInterface::execGetOwningGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetOwningGroup_Implementation();
		P_NATIVE_END;
	}
	struct ACFGroupAgentInterface_eventGetOwningGroup_Parms
	{
		UACFGroupAIComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFGroupAgentInterface_eventGetOwningGroup_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ACFGroupAgentInterface_eventIsPartOfGroup_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFGroupAgentInterface_eventIsPartOfGroup_Parms()
			: ReturnValue(false)
		{
		}
	};
	UACFGroupAIComponent* IACFGroupAgentInterface::GetOwningGroup()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOwningGroup instead.");
		ACFGroupAgentInterface_eventGetOwningGroup_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IACFGroupAgentInterface::IsPartOfGroup()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsPartOfGroup instead.");
		ACFGroupAgentInterface_eventIsPartOfGroup_Parms Parms;
		return Parms.ReturnValue;
	}
	void UACFGroupAgentInterface::StaticRegisterNativesUACFGroupAgentInterface()
	{
		UClass* Class = UACFGroupAgentInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningGroup", &IACFGroupAgentInterface::execGetOwningGroup },
			{ "IsPartOfGroup", &IACFGroupAgentInterface::execIsPartOfGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFGroupAgentInterface_eventGetOwningGroup_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAgentInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAgentInterface, nullptr, "GetOwningGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::PropPointers), sizeof(ACFGroupAgentInterface_eventGetOwningGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFGroupAgentInterface_eventGetOwningGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFGroupAgentInterface_eventIsPartOfGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFGroupAgentInterface_eventIsPartOfGroup_Parms), &Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAgentInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGroupAgentInterface, nullptr, "IsPartOfGroup", nullptr, nullptr, Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::PropPointers), sizeof(ACFGroupAgentInterface_eventIsPartOfGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFGroupAgentInterface_eventIsPartOfGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFGroupAgentInterface);
	UClass* Z_Construct_UClass_UACFGroupAgentInterface_NoRegister()
	{
		return UACFGroupAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UACFGroupAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFGroupAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAgentInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFGroupAgentInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFGroupAgentInterface_GetOwningGroup, "GetOwningGroup" }, // 217677436
		{ &Z_Construct_UFunction_UACFGroupAgentInterface_IsPartOfGroup, "IsPartOfGroup" }, // 3681439848
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAgentInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGroupAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/ACFGroupAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFGroupAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IACFGroupAgentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFGroupAgentInterface_Statics::ClassParams = {
		&UACFGroupAgentInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGroupAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFGroupAgentInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFGroupAgentInterface()
	{
		if (!Z_Registration_Info_UClass_UACFGroupAgentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFGroupAgentInterface.OuterSingleton, Z_Construct_UClass_UACFGroupAgentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFGroupAgentInterface.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFGroupAgentInterface>()
	{
		return UACFGroupAgentInterface::StaticClass();
	}
	UACFGroupAgentInterface::UACFGroupAgentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFGroupAgentInterface);
	UACFGroupAgentInterface::~UACFGroupAgentInterface() {}
	static FName NAME_UACFGroupAgentInterface_GetOwningGroup = FName(TEXT("GetOwningGroup"));
	UACFGroupAIComponent* IACFGroupAgentInterface::Execute_GetOwningGroup(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFGroupAgentInterface::StaticClass()));
		ACFGroupAgentInterface_eventGetOwningGroup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFGroupAgentInterface_GetOwningGroup);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFGroupAgentInterface*)(O->GetNativeInterfaceAddress(UACFGroupAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetOwningGroup_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UACFGroupAgentInterface_IsPartOfGroup = FName(TEXT("IsPartOfGroup"));
	bool IACFGroupAgentInterface::Execute_IsPartOfGroup(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UACFGroupAgentInterface::StaticClass()));
		ACFGroupAgentInterface_eventIsPartOfGroup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UACFGroupAgentInterface_IsPartOfGroup);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IACFGroupAgentInterface*)(O->GetNativeInterfaceAddress(UACFGroupAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsPartOfGroup_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAgentInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAgentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFGroupAgentInterface, UACFGroupAgentInterface::StaticClass, TEXT("UACFGroupAgentInterface"), &Z_Registration_Info_UClass_UACFGroupAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFGroupAgentInterface), 2420904889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAgentInterface_h_3977706607(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFGroupAgentInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

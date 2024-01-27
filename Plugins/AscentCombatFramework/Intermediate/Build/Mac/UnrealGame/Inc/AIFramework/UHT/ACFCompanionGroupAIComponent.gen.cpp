// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFCompanionGroupAIComponent.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCompanionGroupAIComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCompanionGroupAIComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCompanionGroupAIComponent_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFCompanionGroupAIComponent::execHandlePossessedCharacterChanged)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param__char);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePossessedCharacterChanged(Z_Param__char);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCompanionGroupAIComponent::execHandleLeadHits)
	{
		P_GET_OBJECT(AActor,Z_Param_damaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLeadHits(Z_Param_damaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCompanionGroupAIComponent::execHandleLeadGetHit)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLeadGetHit(Z_Param_Out_damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCompanionGroupAIComponent::execAddExpToTheGroup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Exp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExpToTheGroup(Z_Param_Exp);
		P_NATIVE_END;
	}
	void UACFCompanionGroupAIComponent::StaticRegisterNativesUACFCompanionGroupAIComponent()
	{
		UClass* Class = UACFCompanionGroupAIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExpToTheGroup", &UACFCompanionGroupAIComponent::execAddExpToTheGroup },
			{ "HandleLeadGetHit", &UACFCompanionGroupAIComponent::execHandleLeadGetHit },
			{ "HandleLeadHits", &UACFCompanionGroupAIComponent::execHandleLeadHits },
			{ "HandlePossessedCharacterChanged", &UACFCompanionGroupAIComponent::execHandlePossessedCharacterChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics
	{
		struct ACFCompanionGroupAIComponent_eventAddExpToTheGroup_Parms
		{
			int32 Exp;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionGroupAIComponent_eventAddExpToTheGroup_Parms, Exp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::NewProp_Exp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCompanionGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCompanionGroupAIComponent, nullptr, "AddExpToTheGroup", nullptr, nullptr, Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::ACFCompanionGroupAIComponent_eventAddExpToTheGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::ACFCompanionGroupAIComponent_eventAddExpToTheGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics
	{
		struct ACFCompanionGroupAIComponent_eventHandleLeadGetHit_Parms
		{
			FACFDamageEvent damage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::NewProp_damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionGroupAIComponent_eventHandleLeadGetHit_Parms, damage), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::NewProp_damage_MetaData), Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::NewProp_damage_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCompanionGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCompanionGroupAIComponent, nullptr, "HandleLeadGetHit", nullptr, nullptr, Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::ACFCompanionGroupAIComponent_eventHandleLeadGetHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::ACFCompanionGroupAIComponent_eventHandleLeadGetHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics
	{
		struct ACFCompanionGroupAIComponent_eventHandleLeadHits_Parms
		{
			AActor* damaged;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_damaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::NewProp_damaged = { "damaged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionGroupAIComponent_eventHandleLeadHits_Parms, damaged), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::NewProp_damaged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCompanionGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCompanionGroupAIComponent, nullptr, "HandleLeadHits", nullptr, nullptr, Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::ACFCompanionGroupAIComponent_eventHandleLeadHits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::ACFCompanionGroupAIComponent_eventHandleLeadHits_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics
	{
		struct ACFCompanionGroupAIComponent_eventHandlePossessedCharacterChanged_Parms
		{
			const AACFCharacter* _char;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__char_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__char;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::NewProp__char_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::NewProp__char = { "_char", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCompanionGroupAIComponent_eventHandlePossessedCharacterChanged_Parms, _char), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::NewProp__char_MetaData), Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::NewProp__char_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::NewProp__char,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCompanionGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCompanionGroupAIComponent, nullptr, "HandlePossessedCharacterChanged", nullptr, nullptr, Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::ACFCompanionGroupAIComponent_eventHandlePossessedCharacterChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::ACFCompanionGroupAIComponent_eventHandlePossessedCharacterChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCompanionGroupAIComponent);
	UClass* Z_Construct_UClass_UACFCompanionGroupAIComponent_NoRegister()
	{
		return UACFCompanionGroupAIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_contr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFGroupAIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCompanionGroupAIComponent_AddExpToTheGroup, "AddExpToTheGroup" }, // 3641872565
		{ &Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadGetHit, "HandleLeadGetHit" }, // 2121771691
		{ &Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandleLeadHits, "HandleLeadHits" }, // 2311819205
		{ &Z_Construct_UFunction_UACFCompanionGroupAIComponent_HandlePossessedCharacterChanged, "HandlePossessedCharacterChanged" }, // 682726052
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ACFCompanionGroupAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFCompanionGroupAIComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::NewProp_contr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCompanionGroupAIComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::NewProp_contr = { "contr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCompanionGroupAIComponent, contr), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::NewProp_contr_MetaData), Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::NewProp_contr_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::NewProp_contr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCompanionGroupAIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::ClassParams = {
		&UACFCompanionGroupAIComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCompanionGroupAIComponent()
	{
		if (!Z_Registration_Info_UClass_UACFCompanionGroupAIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCompanionGroupAIComponent.OuterSingleton, Z_Construct_UClass_UACFCompanionGroupAIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCompanionGroupAIComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFCompanionGroupAIComponent>()
	{
		return UACFCompanionGroupAIComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCompanionGroupAIComponent);
	UACFCompanionGroupAIComponent::~UACFCompanionGroupAIComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCompanionGroupAIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCompanionGroupAIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCompanionGroupAIComponent, UACFCompanionGroupAIComponent::StaticClass, TEXT("UACFCompanionGroupAIComponent"), &Z_Registration_Info_UClass_UACFCompanionGroupAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCompanionGroupAIComponent), 2191306262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCompanionGroupAIComponent_h_834270650(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCompanionGroupAIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCompanionGroupAIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

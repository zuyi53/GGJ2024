// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombinedAnimationsSystem/Public/CASAnimCondition.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCASAnimCondition() {}
// Cross Module References
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASANDCondition();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASANDCondition_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimCondition();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimCondition_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimSlaveComponent_NoRegister();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASORCondition();
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASORCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CombinedAnimationsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UCASAnimCondition::execGetOwnerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCASAnimSlaveComponent**)Z_Param__Result=P_THIS->GetOwnerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCASAnimCondition::execVerifyCondition)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_animTag);
		P_GET_OBJECT(ACharacter,Z_Param_animMaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->VerifyCondition_Implementation(Z_Param_Out_animTag,Z_Param_animMaster);
		P_NATIVE_END;
	}
	struct CASAnimCondition_eventVerifyCondition_Parms
	{
		FGameplayTag animTag;
		const ACharacter* animMaster;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CASAnimCondition_eventVerifyCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UCASAnimCondition_VerifyCondition = FName(TEXT("VerifyCondition"));
	bool UCASAnimCondition::VerifyCondition(FGameplayTag const& animTag, const ACharacter* animMaster)
	{
		CASAnimCondition_eventVerifyCondition_Parms Parms;
		Parms.animTag=animTag;
		Parms.animMaster=animMaster;
		ProcessEvent(FindFunctionChecked(NAME_UCASAnimCondition_VerifyCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UCASAnimCondition::StaticRegisterNativesUCASAnimCondition()
	{
		UClass* Class = UCASAnimCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnerComponent", &UCASAnimCondition::execGetOwnerComponent },
			{ "VerifyCondition", &UCASAnimCondition::execVerifyCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics
	{
		struct CASAnimCondition_eventGetOwnerComponent_Parms
		{
			UCASAnimSlaveComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimCondition_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UCASAnimSlaveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimCondition, nullptr, "GetOwnerComponent", nullptr, nullptr, Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::CASAnimCondition_eventGetOwnerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::CASAnimCondition_eventGetOwnerComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animMaster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animMaster;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animTag = { "animTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimCondition_eventVerifyCondition_Parms, animTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animTag_MetaData), Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animMaster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animMaster = { "animMaster", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CASAnimCondition_eventVerifyCondition_Parms, animMaster), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animMaster_MetaData), Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animMaster_MetaData) };
	void Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CASAnimCondition_eventVerifyCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CASAnimCondition_eventVerifyCondition_Parms), &Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_animMaster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCASAnimCondition, nullptr, "VerifyCondition", nullptr, nullptr, Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::PropPointers), sizeof(CASAnimCondition_eventVerifyCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::PropPointers) < 2048);
	static_assert(sizeof(CASAnimCondition_eventVerifyCondition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCASAnimCondition_VerifyCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCASAnimCondition_VerifyCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASAnimCondition);
	UClass* Z_Construct_UClass_UCASAnimCondition_NoRegister()
	{
		return UCASAnimCondition::StaticClass();
	}
	struct Z_Construct_UClass_UCASAnimCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ownerCompoment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ownerCompoment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASAnimCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimCondition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCASAnimCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCASAnimCondition_GetOwnerComponent, "GetOwnerComponent" }, // 1407928449
		{ &Z_Construct_UFunction_UCASAnimCondition_VerifyCondition, "VerifyCondition" }, // 3203279588
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimCondition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CAS" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "CASAnimCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASAnimCondition_Statics::NewProp_ownerCompoment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCASAnimCondition_Statics::NewProp_ownerCompoment = { "ownerCompoment", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASAnimCondition, ownerCompoment), Z_Construct_UClass_UCASAnimSlaveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimCondition_Statics::NewProp_ownerCompoment_MetaData), Z_Construct_UClass_UCASAnimCondition_Statics::NewProp_ownerCompoment_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCASAnimCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASAnimCondition_Statics::NewProp_ownerCompoment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASAnimCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASAnimCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASAnimCondition_Statics::ClassParams = {
		&UCASAnimCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCASAnimCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimCondition_Statics::PropPointers),
		0,
		0x009030A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASAnimCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASAnimCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCASAnimCondition()
	{
		if (!Z_Registration_Info_UClass_UCASAnimCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASAnimCondition.OuterSingleton, Z_Construct_UClass_UCASAnimCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASAnimCondition.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASAnimCondition>()
	{
		return UCASAnimCondition::StaticClass();
	}
	UCASAnimCondition::UCASAnimCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASAnimCondition);
	UCASAnimCondition::~UCASAnimCondition() {}
	void UCASORCondition::StaticRegisterNativesUCASORCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASORCondition);
	UClass* Z_Construct_UClass_UCASORCondition_NoRegister()
	{
		return UCASORCondition::StaticClass();
	}
	struct Z_Construct_UClass_UCASORCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrConditions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OrConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASORCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCASAnimCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASORCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASORCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CAS CAS" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "CASAnimCondition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_Inner_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_Inner = { "OrConditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCASAnimCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_Inner_MetaData), Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions = { "OrConditions", nullptr, (EPropertyFlags)0x0020088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASORCondition, OrConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_MetaData), Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCASORCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASORCondition_Statics::NewProp_OrConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASORCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASORCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASORCondition_Statics::ClassParams = {
		&UCASORCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCASORCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCASORCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASORCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASORCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASORCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCASORCondition()
	{
		if (!Z_Registration_Info_UClass_UCASORCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASORCondition.OuterSingleton, Z_Construct_UClass_UCASORCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASORCondition.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASORCondition>()
	{
		return UCASORCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASORCondition);
	UCASORCondition::~UCASORCondition() {}
	void UCASANDCondition::StaticRegisterNativesUCASANDCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCASANDCondition);
	UClass* Z_Construct_UClass_UCASANDCondition_NoRegister()
	{
		return UCASANDCondition::StaticClass();
	}
	struct Z_Construct_UClass_UCASANDCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ANDConditions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ANDConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ANDConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ANDConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCASANDCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCASAnimCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_CombinedAnimationsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASANDCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASANDCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CAS CAS" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "CASAnimCondition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_Inner_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_Inner = { "ANDConditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCASAnimCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_Inner_MetaData), Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CASAnimCondition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions = { "ANDConditions", nullptr, (EPropertyFlags)0x0020088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCASANDCondition, ANDConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_MetaData), Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCASANDCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCASANDCondition_Statics::NewProp_ANDConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCASANDCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCASANDCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCASANDCondition_Statics::ClassParams = {
		&UCASANDCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCASANDCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCASANDCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCASANDCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCASANDCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCASANDCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCASANDCondition()
	{
		if (!Z_Registration_Info_UClass_UCASANDCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCASANDCondition.OuterSingleton, Z_Construct_UClass_UCASANDCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCASANDCondition.OuterSingleton;
	}
	template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<UCASANDCondition>()
	{
		return UCASANDCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCASANDCondition);
	UCASANDCondition::~UCASANDCondition() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCASAnimCondition, UCASAnimCondition::StaticClass, TEXT("UCASAnimCondition"), &Z_Registration_Info_UClass_UCASAnimCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASAnimCondition), 2866459798U) },
		{ Z_Construct_UClass_UCASORCondition, UCASORCondition::StaticClass, TEXT("UCASORCondition"), &Z_Registration_Info_UClass_UCASORCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASORCondition), 2431748198U) },
		{ Z_Construct_UClass_UCASANDCondition, UCASANDCondition::StaticClass, TEXT("UCASANDCondition"), &Z_Registration_Info_UClass_UCASANDCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCASANDCondition), 1614353200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimCondition_h_1735814796(TEXT("/Script/CombinedAnimationsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

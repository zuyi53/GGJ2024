// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFActionCondition.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionCondition() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFActionCondition();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFActionCondition_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFANDActionCondition();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFANDActionCondition_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFDistanceActionCondition();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFDistanceActionCondition_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFORActionCondition();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFORActionCondition_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFStatisticActionCondition();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFStatisticActionCondition_NoRegister();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EConditionType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConditionType;
	static UEnum* EConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIFramework_EConditionType, (UObject*)Z_Construct_UPackage__Script_AIFramework(), TEXT("EConditionType"));
		}
		return Z_Registration_Info_UEnum_EConditionType.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UEnum* StaticEnum<EConditionType>()
	{
		return EConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIFramework_EConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIFramework_EConditionType_Statics::Enumerators[] = {
		{ "EConditionType::EBelow", (int64)EConditionType::EBelow },
		{ "EConditionType::EEqual", (int64)EConditionType::EEqual },
		{ "EConditionType::EAbove", (int64)EConditionType::EAbove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIFramework_EConditionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "EAbove.Comment", "/**\n *\n */" },
		{ "EAbove.DisplayName", "Is Above" },
		{ "EAbove.Name", "EConditionType::EAbove" },
		{ "EBelow.Comment", "/**\n *\n */" },
		{ "EBelow.DisplayName", "Is Below" },
		{ "EBelow.Name", "EConditionType::EBelow" },
		{ "EEqual.Comment", "/**\n *\n */" },
		{ "EEqual.DisplayName", "Is Nearly Equal" },
		{ "EEqual.Name", "EConditionType::EEqual" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIFramework_EConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIFramework,
		nullptr,
		"EConditionType",
		"EConditionType",
		Z_Construct_UEnum_AIFramework_EConditionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EConditionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIFramework_EConditionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIFramework_EConditionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AIFramework_EConditionType()
	{
		if (!Z_Registration_Info_UEnum_EConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConditionType.InnerSingleton, Z_Construct_UEnum_AIFramework_EConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConditionType.InnerSingleton;
	}
	DEFINE_FUNCTION(UACFActionCondition::execIsConditionMet)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_character);
		P_NATIVE_END;
	}
	struct ACFActionCondition_eventIsConditionMet_Parms
	{
		const AACFCharacter* character;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFActionCondition_eventIsConditionMet_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UACFActionCondition_IsConditionMet = FName(TEXT("IsConditionMet"));
	bool UACFActionCondition::IsConditionMet(const AACFCharacter* character)
	{
		ACFActionCondition_eventIsConditionMet_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionCondition_IsConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	void UACFActionCondition::StaticRegisterNativesUACFActionCondition()
	{
		UClass* Class = UACFActionCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsConditionMet", &UACFActionCondition::execIsConditionMet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionCondition_eventIsConditionMet_Parms, character), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_character_MetaData), Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_character_MetaData) };
	void Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionCondition_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionCondition_eventIsConditionMet_Parms), &Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionCondition, nullptr, "IsConditionMet", nullptr, nullptr, Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::PropPointers), sizeof(ACFActionCondition_eventIsConditionMet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionCondition_eventIsConditionMet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionCondition_IsConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionCondition_IsConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionCondition);
	UClass* Z_Construct_UClass_UACFActionCondition_NoRegister()
	{
		return UACFActionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionCondition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFActionCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFActionCondition_IsConditionMet, "IsConditionMet" }, // 4236489061
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionCondition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ACF" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "ACFActionCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionCondition_Statics::ClassParams = {
		&UACFActionCondition::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionCondition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFActionCondition()
	{
		if (!Z_Registration_Info_UClass_UACFActionCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionCondition.OuterSingleton, Z_Construct_UClass_UACFActionCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionCondition.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFActionCondition>()
	{
		return UACFActionCondition::StaticClass();
	}
	UACFActionCondition::UACFActionCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionCondition);
	UACFActionCondition::~UACFActionCondition() {}
	void UACFORActionCondition::StaticRegisterNativesUACFORActionCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFORActionCondition);
	UClass* Z_Construct_UClass_UACFORActionCondition_NoRegister()
	{
		return UACFORActionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFORActionCondition_Statics
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
	UObject* (*const Z_Construct_UClass_UACFORActionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFActionCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFORActionCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFORActionCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ACF ACF" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "ACFActionCondition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_Inner_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_Inner = { "OrConditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UACFActionCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_Inner_MetaData), Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions = { "OrConditions", nullptr, (EPropertyFlags)0x0020088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFORActionCondition, OrConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_MetaData), Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFORActionCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFORActionCondition_Statics::NewProp_OrConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFORActionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFORActionCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFORActionCondition_Statics::ClassParams = {
		&UACFORActionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFORActionCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFORActionCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFORActionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFORActionCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFORActionCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFORActionCondition()
	{
		if (!Z_Registration_Info_UClass_UACFORActionCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFORActionCondition.OuterSingleton, Z_Construct_UClass_UACFORActionCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFORActionCondition.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFORActionCondition>()
	{
		return UACFORActionCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFORActionCondition);
	UACFORActionCondition::~UACFORActionCondition() {}
	void UACFANDActionCondition::StaticRegisterNativesUACFANDActionCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFANDActionCondition);
	UClass* Z_Construct_UClass_UACFANDActionCondition_NoRegister()
	{
		return UACFANDActionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFANDActionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndConditions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AndConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AndConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFANDActionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFActionCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFANDActionCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFANDActionCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ACF ACF" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "ACFActionCondition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_Inner_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_Inner = { "AndConditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UACFActionCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_Inner_MetaData), Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions = { "AndConditions", nullptr, (EPropertyFlags)0x0010008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFANDActionCondition, AndConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_MetaData), Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFANDActionCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFANDActionCondition_Statics::NewProp_AndConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFANDActionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFANDActionCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFANDActionCondition_Statics::ClassParams = {
		&UACFANDActionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFANDActionCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFANDActionCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFANDActionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFANDActionCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFANDActionCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFANDActionCondition()
	{
		if (!Z_Registration_Info_UClass_UACFANDActionCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFANDActionCondition.OuterSingleton, Z_Construct_UClass_UACFANDActionCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFANDActionCondition.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFANDActionCondition>()
	{
		return UACFANDActionCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFANDActionCondition);
	UACFANDActionCondition::~UACFANDActionCondition() {}
	void UACFDistanceActionCondition::StaticRegisterNativesUACFDistanceActionCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDistanceActionCondition);
	UClass* Z_Construct_UClass_UACFDistanceActionCondition_NoRegister()
	{
		return UACFDistanceActionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFDistanceActionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearlyEqualAcceptance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearlyEqualAcceptance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDistanceActionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFActionCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDistanceActionCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ACF ACF" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "ACFActionCondition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType_MetaData[] = {
		{ "Category", "Conditions" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDistanceActionCondition, ConditionType), Z_Construct_UEnum_AIFramework_EConditionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType_MetaData), Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType_MetaData) }; // 1973317841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Conditions" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDistanceActionCondition, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_Distance_MetaData), Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_Distance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_NearlyEqualAcceptance_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditCondition", "ConditionType == EConditionType::EEqual" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_NearlyEqualAcceptance = { "NearlyEqualAcceptance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDistanceActionCondition, NearlyEqualAcceptance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_NearlyEqualAcceptance_MetaData), Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_NearlyEqualAcceptance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDistanceActionCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_ConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDistanceActionCondition_Statics::NewProp_NearlyEqualAcceptance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDistanceActionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDistanceActionCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDistanceActionCondition_Statics::ClassParams = {
		&UACFDistanceActionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFDistanceActionCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDistanceActionCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDistanceActionCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFDistanceActionCondition()
	{
		if (!Z_Registration_Info_UClass_UACFDistanceActionCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDistanceActionCondition.OuterSingleton, Z_Construct_UClass_UACFDistanceActionCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDistanceActionCondition.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFDistanceActionCondition>()
	{
		return UACFDistanceActionCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDistanceActionCondition);
	UACFDistanceActionCondition::~UACFDistanceActionCondition() {}
	void UACFStatisticActionCondition::StaticRegisterNativesUACFStatisticActionCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFStatisticActionCondition);
	UClass* Z_Construct_UClass_UACFStatisticActionCondition_NoRegister()
	{
		return UACFStatisticActionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFStatisticActionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatisticTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StatisticValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearlyEqualAcceptance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearlyEqualAcceptance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFStatisticActionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFActionCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStatisticActionCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default ACF" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "ACFActionCondition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType_MetaData[] = {
		{ "Category", "Conditions" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFStatisticActionCondition, ConditionType), Z_Construct_UEnum_AIFramework_EConditionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType_MetaData), Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType_MetaData) }; // 1973317841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticTag_MetaData[] = {
		{ "Category", "Conditions" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticTag = { "StatisticTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFStatisticActionCondition, StatisticTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticTag_MetaData), Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticValue_MetaData[] = {
		{ "Category", "Conditions" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticValue = { "StatisticValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFStatisticActionCondition, StatisticValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticValue_MetaData), Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_NearlyEqualAcceptance_MetaData[] = {
		{ "Category", "Conditions" },
		{ "EditCondition", "ConditionType != EConditionType::EEqual" },
		{ "ModuleRelativePath", "Public/ACFActionCondition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_NearlyEqualAcceptance = { "NearlyEqualAcceptance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFStatisticActionCondition, NearlyEqualAcceptance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_NearlyEqualAcceptance_MetaData), Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_NearlyEqualAcceptance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFStatisticActionCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_ConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_StatisticValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFStatisticActionCondition_Statics::NewProp_NearlyEqualAcceptance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFStatisticActionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFStatisticActionCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFStatisticActionCondition_Statics::ClassParams = {
		&UACFStatisticActionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFStatisticActionCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFStatisticActionCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFStatisticActionCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFStatisticActionCondition()
	{
		if (!Z_Registration_Info_UClass_UACFStatisticActionCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFStatisticActionCondition.OuterSingleton, Z_Construct_UClass_UACFStatisticActionCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFStatisticActionCondition.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFStatisticActionCondition>()
	{
		return UACFStatisticActionCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFStatisticActionCondition);
	UACFStatisticActionCondition::~UACFStatisticActionCondition() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics::EnumInfo[] = {
		{ EConditionType_StaticEnum, TEXT("EConditionType"), &Z_Registration_Info_UEnum_EConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1973317841U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionCondition, UACFActionCondition::StaticClass, TEXT("UACFActionCondition"), &Z_Registration_Info_UClass_UACFActionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionCondition), 639576618U) },
		{ Z_Construct_UClass_UACFORActionCondition, UACFORActionCondition::StaticClass, TEXT("UACFORActionCondition"), &Z_Registration_Info_UClass_UACFORActionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFORActionCondition), 1725661960U) },
		{ Z_Construct_UClass_UACFANDActionCondition, UACFANDActionCondition::StaticClass, TEXT("UACFANDActionCondition"), &Z_Registration_Info_UClass_UACFANDActionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFANDActionCondition), 3928395444U) },
		{ Z_Construct_UClass_UACFDistanceActionCondition, UACFDistanceActionCondition::StaticClass, TEXT("UACFDistanceActionCondition"), &Z_Registration_Info_UClass_UACFDistanceActionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDistanceActionCondition), 439294603U) },
		{ Z_Construct_UClass_UACFStatisticActionCondition, UACFStatisticActionCondition::StaticClass, TEXT("UACFStatisticActionCondition"), &Z_Registration_Info_UClass_UACFStatisticActionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFStatisticActionCondition), 2218059287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_156735868(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFActionCondition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

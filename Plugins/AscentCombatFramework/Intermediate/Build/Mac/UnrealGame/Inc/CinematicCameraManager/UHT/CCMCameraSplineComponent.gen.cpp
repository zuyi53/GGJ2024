// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMCameraSplineComponent.h"
#include "CinematicCameraManager/Public/CCMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMCameraSplineComponent() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMCameraSplineComponent();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMCameraSplineComponent_NoRegister();
	CINEMATICCAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCCMCameraSequenceSettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References
	DEFINE_FUNCTION(UCCMCameraSplineComponent::execGetLookAtPointLocationByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_lookAtPointName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetLookAtPointLocationByName(Z_Param_Out_lookAtPointName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraSplineComponent::execGetSequenceLookAtPointLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetSequenceLookAtPointLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraSplineComponent::execGetCameraSequenceSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCCMCameraSequenceSettings*)Z_Param__Result=P_THIS->GetCameraSequenceSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCCMCameraSplineComponent::execGetCameraSequenceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCameraSequenceName();
		P_NATIVE_END;
	}
	void UCCMCameraSplineComponent::StaticRegisterNativesUCCMCameraSplineComponent()
	{
		UClass* Class = UCCMCameraSplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraSequenceName", &UCCMCameraSplineComponent::execGetCameraSequenceName },
			{ "GetCameraSequenceSettings", &UCCMCameraSplineComponent::execGetCameraSequenceSettings },
			{ "GetLookAtPointLocationByName", &UCCMCameraSplineComponent::execGetLookAtPointLocationByName },
			{ "GetSequenceLookAtPointLocation", &UCCMCameraSplineComponent::execGetSequenceLookAtPointLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics
	{
		struct CCMCameraSplineComponent_eventGetCameraSequenceName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraSplineComponent_eventGetCameraSequenceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraSplineComponent, nullptr, "GetCameraSequenceName", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::CCMCameraSplineComponent_eventGetCameraSequenceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::CCMCameraSplineComponent_eventGetCameraSequenceName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics
	{
		struct CCMCameraSplineComponent_eventGetCameraSequenceSettings_Parms
		{
			FCCMCameraSequenceSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraSplineComponent_eventGetCameraSequenceSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings, METADATA_PARAMS(0, nullptr) }; // 2134631071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraSplineComponent, nullptr, "GetCameraSequenceSettings", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::CCMCameraSplineComponent_eventGetCameraSequenceSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::CCMCameraSplineComponent_eventGetCameraSequenceSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics
	{
		struct CCMCameraSplineComponent_eventGetLookAtPointLocationByName_Parms
		{
			FName lookAtPointName;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAtPointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_lookAtPointName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_lookAtPointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_lookAtPointName = { "lookAtPointName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraSplineComponent_eventGetLookAtPointLocationByName_Parms, lookAtPointName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_lookAtPointName_MetaData), Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_lookAtPointName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraSplineComponent_eventGetLookAtPointLocationByName_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_lookAtPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraSplineComponent, nullptr, "GetLookAtPointLocationByName", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::CCMCameraSplineComponent_eventGetLookAtPointLocationByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::CCMCameraSplineComponent_eventGetLookAtPointLocationByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics
	{
		struct CCMCameraSplineComponent_eventGetSequenceLookAtPointLocation_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CCMCameraSplineComponent_eventGetSequenceLookAtPointLocation_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCCMCameraSplineComponent, nullptr, "GetSequenceLookAtPointLocation", nullptr, nullptr, Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::CCMCameraSplineComponent_eventGetSequenceLookAtPointLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::CCMCameraSplineComponent_eventGetSequenceLookAtPointLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCCMCameraSplineComponent);
	UClass* Z_Construct_UClass_UCCMCameraSplineComponent_NoRegister()
	{
		return UCCMCameraSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCCMCameraSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCCMCameraSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCCMCameraSplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceName, "GetCameraSequenceName" }, // 2894810881
		{ &Z_Construct_UFunction_UCCMCameraSplineComponent_GetCameraSequenceSettings, "GetCameraSequenceSettings" }, // 1715374354
		{ &Z_Construct_UFunction_UCCMCameraSplineComponent_GetLookAtPointLocationByName, "GetLookAtPointLocationByName" }, // 1370428929
		{ &Z_Construct_UFunction_UCCMCameraSplineComponent_GetSequenceLookAtPointLocation, "GetSequenceLookAtPointLocation" }, // 3448894829
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMCameraSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "CCMCameraSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceName_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCCMCameraSplineComponent, SequenceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceName_MetaData), Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceSettings_MetaData[] = {
		{ "Category", "CCM" },
		{ "ModuleRelativePath", "Public/CCMCameraSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceSettings = { "SequenceSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCCMCameraSplineComponent, SequenceSettings), Z_Construct_UScriptStruct_FCCMCameraSequenceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceSettings_MetaData), Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceSettings_MetaData) }; // 2134631071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCCMCameraSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMCameraSplineComponent_Statics::NewProp_SequenceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCCMCameraSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCCMCameraSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCCMCameraSplineComponent_Statics::ClassParams = {
		&UCCMCameraSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCCMCameraSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCCMCameraSplineComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMCameraSplineComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCCMCameraSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UCCMCameraSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCCMCameraSplineComponent.OuterSingleton, Z_Construct_UClass_UCCMCameraSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCCMCameraSplineComponent.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<UCCMCameraSplineComponent>()
	{
		return UCCMCameraSplineComponent::StaticClass();
	}
	UCCMCameraSplineComponent::UCCMCameraSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCCMCameraSplineComponent);
	UCCMCameraSplineComponent::~UCCMCameraSplineComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraSplineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCCMCameraSplineComponent, UCCMCameraSplineComponent::StaticClass, TEXT("UCCMCameraSplineComponent"), &Z_Registration_Info_UClass_UCCMCameraSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCCMCameraSplineComponent), 1426650570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraSplineComponent_h_2208776200(TEXT("/Script/CinematicCameraManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraSplineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

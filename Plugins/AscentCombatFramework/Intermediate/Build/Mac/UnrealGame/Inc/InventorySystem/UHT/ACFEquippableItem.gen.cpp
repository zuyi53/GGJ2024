// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFEquippableItem.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFEquippableItem() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFEquippableItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFEquippableItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFEquippableItem::execOnItemUnEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemUnEquipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFEquippableItem::execOnItemEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemEquipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFEquippableItem::execSetAttributesRequirement)
	{
		P_GET_TARRAY_REF(FAttribute,Z_Param_Out_inAttributeReq);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttributesRequirement(Z_Param_Out_inAttributeReq);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFEquippableItem::execSetAttributeSetModifier)
	{
		P_GET_STRUCT_REF(FAttributesSetModifier,Z_Param_Out_inAttributeModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttributeSetModifier(Z_Param_Out_inAttributeModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFEquippableItem::execGetAttributeRequirement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAttribute>*)Z_Param__Result=P_THIS->GetAttributeRequirement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFEquippableItem::execGetAttributeSetModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributesSetModifier*)Z_Param__Result=P_THIS->GetAttributeSetModifier();
		P_NATIVE_END;
	}
	static FName NAME_AACFEquippableItem_OnItemEquipped = FName(TEXT("OnItemEquipped"));
	void AACFEquippableItem::OnItemEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFEquippableItem_OnItemEquipped),NULL);
	}
	static FName NAME_AACFEquippableItem_OnItemUnEquipped = FName(TEXT("OnItemUnEquipped"));
	void AACFEquippableItem::OnItemUnEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFEquippableItem_OnItemUnEquipped),NULL);
	}
	void AACFEquippableItem::StaticRegisterNativesAACFEquippableItem()
	{
		UClass* Class = AACFEquippableItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeRequirement", &AACFEquippableItem::execGetAttributeRequirement },
			{ "GetAttributeSetModifier", &AACFEquippableItem::execGetAttributeSetModifier },
			{ "OnItemEquipped", &AACFEquippableItem::execOnItemEquipped },
			{ "OnItemUnEquipped", &AACFEquippableItem::execOnItemUnEquipped },
			{ "SetAttributeSetModifier", &AACFEquippableItem::execSetAttributeSetModifier },
			{ "SetAttributesRequirement", &AACFEquippableItem::execSetAttributesRequirement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics
	{
		struct ACFEquippableItem_eventGetAttributeRequirement_Parms
		{
			TArray<FAttribute> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquippableItem_eventGetAttributeRequirement_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 262406853
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFEquippableItem, nullptr, "GetAttributeRequirement", nullptr, nullptr, Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::ACFEquippableItem_eventGetAttributeRequirement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::ACFEquippableItem_eventGetAttributeRequirement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics
	{
		struct ACFEquippableItem_eventGetAttributeSetModifier_Parms
		{
			FAttributesSetModifier ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquippableItem_eventGetAttributeSetModifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(0, nullptr) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFEquippableItem, nullptr, "GetAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::ACFEquippableItem_eventGetAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::ACFEquippableItem_eventGetAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFEquippableItem, nullptr, "OnItemEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFEquippableItem, nullptr, "OnItemUnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics
	{
		struct ACFEquippableItem_eventSetAttributeSetModifier_Parms
		{
			FAttributesSetModifier inAttributeModifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inAttributeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inAttributeModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::NewProp_inAttributeModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::NewProp_inAttributeModifier = { "inAttributeModifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquippableItem_eventSetAttributeSetModifier_Parms, inAttributeModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::NewProp_inAttributeModifier_MetaData), Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::NewProp_inAttributeModifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::NewProp_inAttributeModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFEquippableItem, nullptr, "SetAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::ACFEquippableItem_eventSetAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::ACFEquippableItem_eventSetAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics
	{
		struct ACFEquippableItem_eventSetAttributesRequirement_Parms
		{
			TArray<FAttribute> inAttributeReq;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inAttributeReq_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inAttributeReq_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inAttributeReq;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq_Inner = { "inAttributeReq", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq = { "inAttributeReq", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEquippableItem_eventSetAttributesRequirement_Parms, inAttributeReq), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq_MetaData), Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq_MetaData) }; // 262406853
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::NewProp_inAttributeReq,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFEquippableItem, nullptr, "SetAttributesRequirement", nullptr, nullptr, Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::ACFEquippableItem_eventSetAttributesRequirement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::ACFEquippableItem_eventSetAttributesRequirement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFEquippableItem);
	UClass* Z_Construct_UClass_AACFEquippableItem_NoRegister()
	{
		return AACFEquippableItem::StaticClass();
	}
	struct Z_Construct_UClass_AACFEquippableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnequipSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnequipSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeModifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAttributesRequirement_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributesRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAttributesRequirement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFEquippableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFEquippableItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFEquippableItem_GetAttributeRequirement, "GetAttributeRequirement" }, // 1024611993
		{ &Z_Construct_UFunction_AACFEquippableItem_GetAttributeSetModifier, "GetAttributeSetModifier" }, // 1365210442
		{ &Z_Construct_UFunction_AACFEquippableItem_OnItemEquipped, "OnItemEquipped" }, // 1096649410
		{ &Z_Construct_UFunction_AACFEquippableItem_OnItemUnEquipped, "OnItemUnEquipped" }, // 3946677428
		{ &Z_Construct_UFunction_AACFEquippableItem_SetAttributeSetModifier, "SetAttributeSetModifier" }, // 1445034431
		{ &Z_Construct_UFunction_AACFEquippableItem_SetAttributesRequirement, "SetAttributesRequirement" }, // 3089737118
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFEquippableItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/ACFEquippableItem.h" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_EquipSound_MetaData[] = {
		{ "Category", "ACF | Equippable" },
		{ "Comment", "/*Played when equipped*/" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
		{ "ToolTip", "Played when equipped" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFEquippableItem, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_EquipSound_MetaData), Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_EquipSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_UnequipSound_MetaData[] = {
		{ "Category", "ACF | Equippable" },
		{ "Comment", "/*Played when unequipped*/" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
		{ "ToolTip", "Played when unequipped" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_UnequipSound = { "UnequipSound", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFEquippableItem, UnequipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_UnequipSound_MetaData), Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_UnequipSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_AttributeModifier_MetaData[] = {
		{ "Category", "ACF | Equippable" },
		{ "Comment", "/*Modifier applied once this item is equipped*/" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
		{ "ToolTip", "Modifier applied once this item is equipped" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_AttributeModifier = { "AttributeModifier", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFEquippableItem, AttributeModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_AttributeModifier_MetaData), Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_AttributeModifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement_Inner = { "PrimaryAttributesRequirement", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(0, nullptr) }; // 262406853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement_MetaData[] = {
		{ "Category", "ACF | Equippable" },
		{ "Comment", "/*Attributes requirement to equip this item*/" },
		{ "ModuleRelativePath", "Public/Items/ACFEquippableItem.h" },
		{ "ToolTip", "Attributes requirement to equip this item" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement = { "PrimaryAttributesRequirement", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFEquippableItem, PrimaryAttributesRequirement), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement_MetaData), Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement_MetaData) }; // 262406853
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFEquippableItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_EquipSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_UnequipSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_AttributeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFEquippableItem_Statics::NewProp_PrimaryAttributesRequirement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFEquippableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFEquippableItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFEquippableItem_Statics::ClassParams = {
		&AACFEquippableItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFEquippableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFEquippableItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFEquippableItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFEquippableItem()
	{
		if (!Z_Registration_Info_UClass_AACFEquippableItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFEquippableItem.OuterSingleton, Z_Construct_UClass_AACFEquippableItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFEquippableItem.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFEquippableItem>()
	{
		return AACFEquippableItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFEquippableItem);
	AACFEquippableItem::~AACFEquippableItem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFEquippableItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFEquippableItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFEquippableItem, AACFEquippableItem::StaticClass, TEXT("AACFEquippableItem"), &Z_Registration_Info_UClass_AACFEquippableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFEquippableItem), 320026916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFEquippableItem_h_3303172062(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFEquippableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFEquippableItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFWeapon.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFWeapon() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSetModifier();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFEquippableItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWeapon();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWeapon_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EHandleType();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffects();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponEffects;
class UScriptStruct* FWeaponEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponEffects, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("WeaponEffects"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponEffects.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FWeaponEffects>()
{
	return FWeaponEffects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponEffects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackSound_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackSound = { "AttackSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponEffects, AttackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackSound_MetaData), Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackParticle_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackParticle = { "AttackParticle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponEffects, AttackParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackParticle_MetaData), Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackParticle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewProp_AttackParticle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"WeaponEffects",
		Z_Construct_UScriptStruct_FWeaponEffects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffects_Statics::PropPointers),
		sizeof(FWeaponEffects),
		alignof(FWeaponEffects),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponEffects_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffects_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffects()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponEffects.InnerSingleton, Z_Construct_UScriptStruct_FWeaponEffects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponEffects.InnerSingleton;
	}
	DEFINE_FUNCTION(AACFWeapon::execInternal_OnWeaponSheathed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnWeaponSheathed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execInternal_OnWeaponUnsheathed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnWeaponUnsheathed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execOnWeaponSheathed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponSheathed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execOnWeaponUnsheathed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponUnsheathed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetUnsheatedAttributeSetModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributesSetModifier*)Z_Param__Result=P_THIS->GetUnsheatedAttributeSetModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execSetUnsheatedAttributeSetModifier)
	{
		P_GET_STRUCT_REF(FAttributesSetModifier,Z_Param_Out_inAttributeModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnsheatedAttributeSetModifier(Z_Param_Out_inAttributeModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetLeftHandleIKPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLeftHandleIKPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execSetIsUsingLeftHandIK)
	{
		P_GET_UBOOL(Z_Param_newVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsingLeftHandIK(Z_Param_newVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execIsUsingLeftHandIK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingLeftHandIK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execSetHandleType)
	{
		P_GET_ENUM(EHandleType,Z_Param_newType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandleType(EHandleType(Z_Param_newType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execOverridesMainHandMovesetActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverridesMainHandMovesetActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execOverridesMainHandOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverridesMainHandOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execOverridesMainHandMoveset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverridesMainHandMoveset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetEquippedSocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetEquippedSocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetOnBodySocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetOnBodySocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetAssociatedMovesetOverlayTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetAssociatedMovesetOverlayTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetAssociatedMovesetActionsTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetAssociatedMovesetActionsTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetAssociatedMovesetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetAssociatedMovesetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetWeaponType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetWeaponType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFWeapon::execGetHandleType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHandleType*)Z_Param__Result=P_THIS->GetHandleType();
		P_NATIVE_END;
	}
	static FName NAME_AACFWeapon_OnWeaponSheathed = FName(TEXT("OnWeaponSheathed"));
	void AACFWeapon::OnWeaponSheathed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFWeapon_OnWeaponSheathed),NULL);
	}
	static FName NAME_AACFWeapon_OnWeaponUnsheathed = FName(TEXT("OnWeaponUnsheathed"));
	void AACFWeapon::OnWeaponUnsheathed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFWeapon_OnWeaponUnsheathed),NULL);
	}
	void AACFWeapon::StaticRegisterNativesAACFWeapon()
	{
		UClass* Class = AACFWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssociatedMovesetActionsTag", &AACFWeapon::execGetAssociatedMovesetActionsTag },
			{ "GetAssociatedMovesetOverlayTag", &AACFWeapon::execGetAssociatedMovesetOverlayTag },
			{ "GetAssociatedMovesetTag", &AACFWeapon::execGetAssociatedMovesetTag },
			{ "GetEquippedSocketName", &AACFWeapon::execGetEquippedSocketName },
			{ "GetHandleType", &AACFWeapon::execGetHandleType },
			{ "GetLeftHandleIKPosition", &AACFWeapon::execGetLeftHandleIKPosition },
			{ "GetMeshComponent", &AACFWeapon::execGetMeshComponent },
			{ "GetOnBodySocketName", &AACFWeapon::execGetOnBodySocketName },
			{ "GetUnsheatedAttributeSetModifier", &AACFWeapon::execGetUnsheatedAttributeSetModifier },
			{ "GetWeaponType", &AACFWeapon::execGetWeaponType },
			{ "Internal_OnWeaponSheathed", &AACFWeapon::execInternal_OnWeaponSheathed },
			{ "Internal_OnWeaponUnsheathed", &AACFWeapon::execInternal_OnWeaponUnsheathed },
			{ "IsUsingLeftHandIK", &AACFWeapon::execIsUsingLeftHandIK },
			{ "OnWeaponSheathed", &AACFWeapon::execOnWeaponSheathed },
			{ "OnWeaponUnsheathed", &AACFWeapon::execOnWeaponUnsheathed },
			{ "OverridesMainHandMoveset", &AACFWeapon::execOverridesMainHandMoveset },
			{ "OverridesMainHandMovesetActions", &AACFWeapon::execOverridesMainHandMovesetActions },
			{ "OverridesMainHandOverlay", &AACFWeapon::execOverridesMainHandOverlay },
			{ "SetHandleType", &AACFWeapon::execSetHandleType },
			{ "SetIsUsingLeftHandIK", &AACFWeapon::execSetIsUsingLeftHandIK },
			{ "SetUnsheatedAttributeSetModifier", &AACFWeapon::execSetUnsheatedAttributeSetModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics
	{
		struct ACFWeapon_eventGetAssociatedMovesetActionsTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetAssociatedMovesetActionsTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetAssociatedMovesetActionsTag", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::ACFWeapon_eventGetAssociatedMovesetActionsTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::ACFWeapon_eventGetAssociatedMovesetActionsTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics
	{
		struct ACFWeapon_eventGetAssociatedMovesetOverlayTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetAssociatedMovesetOverlayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetAssociatedMovesetOverlayTag", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::ACFWeapon_eventGetAssociatedMovesetOverlayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::ACFWeapon_eventGetAssociatedMovesetOverlayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics
	{
		struct ACFWeapon_eventGetAssociatedMovesetTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetAssociatedMovesetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetAssociatedMovesetTag", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::ACFWeapon_eventGetAssociatedMovesetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::ACFWeapon_eventGetAssociatedMovesetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics
	{
		struct ACFWeapon_eventGetEquippedSocketName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetEquippedSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetEquippedSocketName", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::ACFWeapon_eventGetEquippedSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::ACFWeapon_eventGetEquippedSocketName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics
	{
		struct ACFWeapon_eventGetHandleType_Parms
		{
			EHandleType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetHandleType_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_EHandleType, METADATA_PARAMS(0, nullptr) }; // 376480541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetHandleType", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::ACFWeapon_eventGetHandleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::ACFWeapon_eventGetHandleType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetHandleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetHandleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics
	{
		struct ACFWeapon_eventGetLeftHandleIKPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetLeftHandleIKPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetLeftHandleIKPosition", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::ACFWeapon_eventGetLeftHandleIKPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::ACFWeapon_eventGetLeftHandleIKPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics
	{
		struct ACFWeapon_eventGetMeshComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetMeshComponent", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::ACFWeapon_eventGetMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::ACFWeapon_eventGetMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics
	{
		struct ACFWeapon_eventGetOnBodySocketName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetOnBodySocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetOnBodySocketName", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::ACFWeapon_eventGetOnBodySocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::ACFWeapon_eventGetOnBodySocketName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics
	{
		struct ACFWeapon_eventGetUnsheatedAttributeSetModifier_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetUnsheatedAttributeSetModifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(0, nullptr) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetUnsheatedAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::ACFWeapon_eventGetUnsheatedAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::ACFWeapon_eventGetUnsheatedAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics
	{
		struct ACFWeapon_eventGetWeaponType_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventGetWeaponType_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "GetWeaponType", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::ACFWeapon_eventGetWeaponType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::ACFWeapon_eventGetWeaponType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_GetWeaponType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_GetWeaponType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "Internal_OnWeaponSheathed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "Internal_OnWeaponUnsheathed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics
	{
		struct ACFWeapon_eventIsUsingLeftHandIK_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWeapon_eventIsUsingLeftHandIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWeapon_eventIsUsingLeftHandIK_Parms), &Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "IsUsingLeftHandIK", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::ACFWeapon_eventIsUsingLeftHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::ACFWeapon_eventIsUsingLeftHandIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "OnWeaponSheathed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "OnWeaponUnsheathed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics
	{
		struct ACFWeapon_eventOverridesMainHandMoveset_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWeapon_eventOverridesMainHandMoveset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWeapon_eventOverridesMainHandMoveset_Parms), &Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "OverridesMainHandMoveset", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::ACFWeapon_eventOverridesMainHandMoveset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::ACFWeapon_eventOverridesMainHandMoveset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics
	{
		struct ACFWeapon_eventOverridesMainHandMovesetActions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWeapon_eventOverridesMainHandMovesetActions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWeapon_eventOverridesMainHandMovesetActions_Parms), &Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "OverridesMainHandMovesetActions", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::ACFWeapon_eventOverridesMainHandMovesetActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::ACFWeapon_eventOverridesMainHandMovesetActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics
	{
		struct ACFWeapon_eventOverridesMainHandOverlay_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFWeapon_eventOverridesMainHandOverlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWeapon_eventOverridesMainHandOverlay_Parms), &Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "OverridesMainHandOverlay", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::ACFWeapon_eventOverridesMainHandOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::ACFWeapon_eventOverridesMainHandOverlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics
	{
		struct ACFWeapon_eventSetHandleType_Parms
		{
			EHandleType newType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::NewProp_newType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::NewProp_newType = { "newType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventSetHandleType_Parms, newType), Z_Construct_UEnum_InventorySystem_EHandleType, METADATA_PARAMS(0, nullptr) }; // 376480541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::NewProp_newType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::NewProp_newType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "SetHandleType", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::ACFWeapon_eventSetHandleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::ACFWeapon_eventSetHandleType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_SetHandleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_SetHandleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics
	{
		struct ACFWeapon_eventSetIsUsingLeftHandIK_Parms
		{
			bool newVal;
		};
		static void NewProp_newVal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::NewProp_newVal_SetBit(void* Obj)
	{
		((ACFWeapon_eventSetIsUsingLeftHandIK_Parms*)Obj)->newVal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::NewProp_newVal = { "newVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFWeapon_eventSetIsUsingLeftHandIK_Parms), &Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::NewProp_newVal_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::NewProp_newVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "SetIsUsingLeftHandIK", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::ACFWeapon_eventSetIsUsingLeftHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::ACFWeapon_eventSetIsUsingLeftHandIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics
	{
		struct ACFWeapon_eventSetUnsheatedAttributeSetModifier_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::NewProp_inAttributeModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::NewProp_inAttributeModifier = { "inAttributeModifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFWeapon_eventSetUnsheatedAttributeSetModifier_Parms, inAttributeModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::NewProp_inAttributeModifier_MetaData), Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::NewProp_inAttributeModifier_MetaData) }; // 1351211516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::NewProp_inAttributeModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFWeapon, nullptr, "SetUnsheatedAttributeSetModifier", nullptr, nullptr, Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::ACFWeapon_eventSetUnsheatedAttributeSetModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::ACFWeapon_eventSetUnsheatedAttributeSetModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFWeapon);
	UClass* Z_Construct_UClass_AACFWeapon_NoRegister()
	{
		return AACFWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AACFWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandlePos_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandlePos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandleIKPos_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftHandleIKPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMainHandMoveset_MetaData[];
#endif
		static void NewProp_bOverrideMainHandMoveset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMainHandMoveset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMainHandMovesetActions_MetaData[];
#endif
		static void NewProp_bOverrideMainHandMovesetActions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMainHandMovesetActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMainHandOverlay_MetaData[];
#endif
		static void NewProp_bOverrideMainHandOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMainHandOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeftHandIKPosition_MetaData[];
#endif
		static void NewProp_bUseLeftHandIKPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeftHandIKPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moveset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moveset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetActions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBodySocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnBodySocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHandsSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InHandsSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnchantment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentEnchantment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsheathedAttributeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnsheathedAttributeModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFEquippableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetActionsTag, "GetAssociatedMovesetActionsTag" }, // 1367694764
		{ &Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetOverlayTag, "GetAssociatedMovesetOverlayTag" }, // 1085807275
		{ &Z_Construct_UFunction_AACFWeapon_GetAssociatedMovesetTag, "GetAssociatedMovesetTag" }, // 744035278
		{ &Z_Construct_UFunction_AACFWeapon_GetEquippedSocketName, "GetEquippedSocketName" }, // 2717299052
		{ &Z_Construct_UFunction_AACFWeapon_GetHandleType, "GetHandleType" }, // 3278791901
		{ &Z_Construct_UFunction_AACFWeapon_GetLeftHandleIKPosition, "GetLeftHandleIKPosition" }, // 1370474544
		{ &Z_Construct_UFunction_AACFWeapon_GetMeshComponent, "GetMeshComponent" }, // 3679212739
		{ &Z_Construct_UFunction_AACFWeapon_GetOnBodySocketName, "GetOnBodySocketName" }, // 1895604577
		{ &Z_Construct_UFunction_AACFWeapon_GetUnsheatedAttributeSetModifier, "GetUnsheatedAttributeSetModifier" }, // 2328972553
		{ &Z_Construct_UFunction_AACFWeapon_GetWeaponType, "GetWeaponType" }, // 3078784986
		{ &Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponSheathed, "Internal_OnWeaponSheathed" }, // 3304509199
		{ &Z_Construct_UFunction_AACFWeapon_Internal_OnWeaponUnsheathed, "Internal_OnWeaponUnsheathed" }, // 1067377169
		{ &Z_Construct_UFunction_AACFWeapon_IsUsingLeftHandIK, "IsUsingLeftHandIK" }, // 2571950854
		{ &Z_Construct_UFunction_AACFWeapon_OnWeaponSheathed, "OnWeaponSheathed" }, // 908903300
		{ &Z_Construct_UFunction_AACFWeapon_OnWeaponUnsheathed, "OnWeaponUnsheathed" }, // 1510754403
		{ &Z_Construct_UFunction_AACFWeapon_OverridesMainHandMoveset, "OverridesMainHandMoveset" }, // 2016074590
		{ &Z_Construct_UFunction_AACFWeapon_OverridesMainHandMovesetActions, "OverridesMainHandMovesetActions" }, // 4283009226
		{ &Z_Construct_UFunction_AACFWeapon_OverridesMainHandOverlay, "OverridesMainHandOverlay" }, // 152882777
		{ &Z_Construct_UFunction_AACFWeapon_SetHandleType, "SetHandleType" }, // 1667675909
		{ &Z_Construct_UFunction_AACFWeapon_SetIsUsingLeftHandIK, "SetIsUsingLeftHandIK" }, // 521403281
		{ &Z_Construct_UFunction_AACFWeapon_SetUnsheatedAttributeSetModifier, "SetUnsheatedAttributeSetModifier" }, // 899669611
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ACFWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandlePos_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandlePos = { "HandlePos", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, HandlePos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandlePos_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandlePos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_LeftHandleIKPos_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_LeftHandleIKPos = { "LeftHandleIKPos", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, LeftHandleIKPos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_LeftHandleIKPos_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_LeftHandleIKPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, CollisionComp), Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_CollisionComp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType = { "HandleType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, HandleType), Z_Construct_UEnum_InventorySystem_EHandleType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType_MetaData) }; // 376480541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "EditCondition", "HandleType == EHandleType::OffHand" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset_SetBit(void* Obj)
	{
		((AACFWeapon*)Obj)->bOverrideMainHandMoveset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset = { "bOverrideMainHandMoveset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFWeapon), &Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "EditCondition", "HandleType == EHandleType::OffHand" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions_SetBit(void* Obj)
	{
		((AACFWeapon*)Obj)->bOverrideMainHandMovesetActions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions = { "bOverrideMainHandMovesetActions", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFWeapon), &Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "EditCondition", "HandleType == EHandleType::OffHand" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay_SetBit(void* Obj)
	{
		((AACFWeapon*)Obj)->bOverrideMainHandOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay = { "bOverrideMainHandOverlay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFWeapon), &Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "EditCondition", "HandleType == EHandleType::TwoHanded" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition_SetBit(void* Obj)
	{
		((AACFWeapon*)Obj)->bUseLeftHandIKPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition = { "bUseLeftHandIKPosition", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFWeapon), &Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_AttachmentOffset_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Tag identifying the actual weapontype*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Tag identifying the actual weapontype" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_AttachmentOffset = { "AttachmentOffset", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, AttachmentOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_AttachmentOffset_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_AttachmentOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Tag identifying the actual weapontype*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Tag identifying the actual weapontype" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, WeaponType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_WeaponType_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_WeaponType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_Moveset_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Once this weapon is equipped, the equipping character will try to switch to this moveset*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Once this weapon is equipped, the equipping character will try to switch to this moveset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_Moveset = { "Moveset", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, Moveset), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_Moveset_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_Moveset_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetOverlay_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Once this weapon is equipped, the equipping character will try to add this overlay*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Once this weapon is equipped, the equipping character will try to add this overlay" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetOverlay = { "MovesetOverlay", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, MovesetOverlay), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetOverlay_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetOverlay_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetActions_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Once this weapon is equipped, those are the actions that can be triggered*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Once this weapon is equipped, those are the actions that can be triggered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetActions = { "MovesetActions", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, MovesetActions), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetActions_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetActions_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_OnBodySocketName_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Socket in which this weapon will be attached once it is equipped on the back of the character*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Socket in which this weapon will be attached once it is equipped on the back of the character" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_OnBodySocketName = { "OnBodySocketName", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, OnBodySocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_OnBodySocketName_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_OnBodySocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_InHandsSocketName_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Socket in which this weapon will be attached once it is unsheathed*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Socket in which this weapon will be attached once it is unsheathed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_InHandsSocketName = { "InHandsSocketName", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, InHandsSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_InHandsSocketName_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_InHandsSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_CurrentEnchantment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_CurrentEnchantment = { "CurrentEnchantment", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, CurrentEnchantment), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_CurrentEnchantment_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_CurrentEnchantment_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_UnsheathedAttributeModifier_MetaData[] = {
		{ "Category", "ACF | Weapon" },
		{ "Comment", "/*Modifier applied once this item is equipped*/" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
		{ "ToolTip", "Modifier applied once this item is equipped" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_UnsheathedAttributeModifier = { "UnsheathedAttributeModifier", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, UnsheathedAttributeModifier), Z_Construct_UScriptStruct_FAttributesSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_UnsheathedAttributeModifier_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_UnsheathedAttributeModifier_MetaData) }; // 1351211516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AACFWeapon_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandlePos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_LeftHandleIKPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_HandleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMoveset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandMovesetActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_bOverrideMainHandOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_bUseLeftHandIKPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_AttachmentOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_Moveset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_MovesetActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_OnBodySocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_InHandsSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_CurrentEnchantment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_UnsheathedAttributeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFWeapon_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFWeapon_Statics::ClassParams = {
		&AACFWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFWeapon()
	{
		if (!Z_Registration_Info_UClass_AACFWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFWeapon.OuterSingleton, Z_Construct_UClass_AACFWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFWeapon.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFWeapon>()
	{
		return AACFWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFWeapon);
	AACFWeapon::~AACFWeapon() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics::ScriptStructInfo[] = {
		{ FWeaponEffects::StaticStruct, Z_Construct_UScriptStruct_FWeaponEffects_Statics::NewStructOps, TEXT("WeaponEffects"), &Z_Registration_Info_UScriptStruct_WeaponEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponEffects), 1098845135U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFWeapon, AACFWeapon::StaticClass, TEXT("AACFWeapon"), &Z_Registration_Info_UClass_AACFWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFWeapon), 3524420855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_955045858(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

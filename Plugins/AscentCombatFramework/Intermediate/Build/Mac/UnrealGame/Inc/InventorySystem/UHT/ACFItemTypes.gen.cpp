// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFItemTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFItemTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFItemTypes();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFItemTypes_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EHandleType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EShootingType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EShootTargetType();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFItemGenerationRule();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemGenerationSlot();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularPart();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileHitPolicy;
	static UEnum* EProjectileHitPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectileHitPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectileHitPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EProjectileHitPolicy"));
		}
		return Z_Registration_Info_UEnum_EProjectileHitPolicy.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EProjectileHitPolicy>()
	{
		return EProjectileHitPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::Enumerators[] = {
		{ "EProjectileHitPolicy::DestroyOnHit", (int64)EProjectileHitPolicy::DestroyOnHit },
		{ "EProjectileHitPolicy::AttachOnHit", (int64)EProjectileHitPolicy::AttachOnHit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::Enum_MetaDataParams[] = {
		{ "AttachOnHit.Comment", "/**\n * \n */" },
		{ "AttachOnHit.DisplayName", "Attach On Hit" },
		{ "AttachOnHit.Name", "EProjectileHitPolicy::AttachOnHit" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DestroyOnHit.Comment", "/**\n * \n */" },
		{ "DestroyOnHit.DisplayName", "Destroy On Hit" },
		{ "DestroyOnHit.Name", "EProjectileHitPolicy::DestroyOnHit" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		"EProjectileHitPolicy",
		"EProjectileHitPolicy",
		Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy()
	{
		if (!Z_Registration_Info_UEnum_EProjectileHitPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileHitPolicy.InnerSingleton, Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectileHitPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandleType;
	static UEnum* EHandleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EHandleType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EHandleType"));
		}
		return Z_Registration_Info_UEnum_EHandleType.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EHandleType>()
	{
		return EHandleType_StaticEnum();
	}
	struct Z_Construct_UEnum_InventorySystem_EHandleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventorySystem_EHandleType_Statics::Enumerators[] = {
		{ "EHandleType::OneHanded", (int64)EHandleType::OneHanded },
		{ "EHandleType::OffHand", (int64)EHandleType::OffHand },
		{ "EHandleType::TwoHanded", (int64)EHandleType::TwoHanded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventorySystem_EHandleType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
		{ "OffHand.DisplayName", "Off-Hand Weapon" },
		{ "OffHand.Name", "EHandleType::OffHand" },
		{ "OneHanded.DisplayName", "One Hand" },
		{ "OneHanded.Name", "EHandleType::OneHanded" },
		{ "TwoHanded.DisplayName", "Two Handed Weapon" },
		{ "TwoHanded.Name", "EHandleType::TwoHanded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EHandleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		"EHandleType",
		"EHandleType",
		Z_Construct_UEnum_InventorySystem_EHandleType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EHandleType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EHandleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EHandleType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InventorySystem_EHandleType()
	{
		if (!Z_Registration_Info_UEnum_EHandleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandleType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EHandleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandleType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootTargetType;
	static UEnum* EShootTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShootTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShootTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EShootTargetType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EShootTargetType"));
		}
		return Z_Registration_Info_UEnum_EShootTargetType.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EShootTargetType>()
	{
		return EShootTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::Enumerators[] = {
		{ "EShootTargetType::CameraTowardsFocus", (int64)EShootTargetType::CameraTowardsFocus },
		{ "EShootTargetType::PawnForward", (int64)EShootTargetType::PawnForward },
		{ "EShootTargetType::PawnTowardsFocus", (int64)EShootTargetType::PawnTowardsFocus },
		{ "EShootTargetType::WeaponForward", (int64)EShootTargetType::WeaponForward },
		{ "EShootTargetType::WeaponTowardsFocus", (int64)EShootTargetType::WeaponTowardsFocus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraTowardsFocus.Comment", "// From the player's camera towards camera focus\n" },
		{ "CameraTowardsFocus.Name", "EShootTargetType::CameraTowardsFocus" },
		{ "CameraTowardsFocus.ToolTip", "From the player's camera towards camera focus" },
		{ "Comment", "/** Defines how to the shoot trace is handled */" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
		{ "PawnForward.Comment", "// From the pawn's center, in the pawn's orientation\n" },
		{ "PawnForward.Name", "EShootTargetType::PawnForward" },
		{ "PawnForward.ToolTip", "From the pawn's center, in the pawn's orientation" },
		{ "PawnTowardsFocus.Comment", "// From the pawn's center, oriented towards camera focus\n" },
		{ "PawnTowardsFocus.Name", "EShootTargetType::PawnTowardsFocus" },
		{ "PawnTowardsFocus.ToolTip", "From the pawn's center, oriented towards camera focus" },
		{ "ToolTip", "Defines how to the shoot trace is handled" },
		{ "WeaponForward.Comment", "// From the weapon's muzzle or location, in the pawn's orientation\n" },
		{ "WeaponForward.Name", "EShootTargetType::WeaponForward" },
		{ "WeaponForward.ToolTip", "From the weapon's muzzle or location, in the pawn's orientation" },
		{ "WeaponTowardsFocus.Comment", "// From the weapon's muzzle or location, towards camera focus\n" },
		{ "WeaponTowardsFocus.Name", "EShootTargetType::WeaponTowardsFocus" },
		{ "WeaponTowardsFocus.ToolTip", "From the weapon's muzzle or location, towards camera focus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		"EShootTargetType",
		"EShootTargetType",
		Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InventorySystem_EShootTargetType()
	{
		if (!Z_Registration_Info_UEnum_EShootTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootTargetType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EShootTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShootTargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_InventorySystem_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventorySystem_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Armor", (int64)EItemType::Armor },
		{ "EItemType::MeleeWeapon", (int64)EItemType::MeleeWeapon },
		{ "EItemType::RangedWeapon", (int64)EItemType::RangedWeapon },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Material", (int64)EItemType::Material },
		{ "EItemType::Accessory", (int64)EItemType::Accessory },
		{ "EItemType::Projectile", (int64)EItemType::Projectile },
		{ "EItemType::Other", (int64)EItemType::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventorySystem_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "Accessory.DisplayName", "Accessory" },
		{ "Accessory.Name", "EItemType::Accessory" },
		{ "Armor.DisplayName", "Armor" },
		{ "Armor.Name", "EItemType::Armor" },
		{ "BlueprintType", "true" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "Material.DisplayName", "Material" },
		{ "Material.Name", "EItemType::Material" },
		{ "MeleeWeapon.DisplayName", "Melee Weapon" },
		{ "MeleeWeapon.Name", "EItemType::MeleeWeapon" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "EItemType::Other" },
		{ "Projectile.DisplayName", "Ammo" },
		{ "Projectile.Name", "EItemType::Projectile" },
		{ "RangedWeapon.DisplayName", "RangedWeapon" },
		{ "RangedWeapon.Name", "EItemType::RangedWeapon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_InventorySystem_EItemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EItemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InventorySystem_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularPart;
class UScriptStruct* FModularPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularPart, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ModularPart"));
	}
	return Z_Registration_Info_UScriptStruct_ModularPart.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FModularPart>()
{
	return FModularPart::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModularPart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularPart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModularPart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularPart>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_ItemSlot_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularPart, ItemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_ItemSlot_MetaData), Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_ItemSlot_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularPart, meshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_meshComp_MetaData), Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_meshComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_ItemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularPart_Statics::NewProp_meshComp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularPart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"ModularPart",
		Z_Construct_UScriptStruct_FModularPart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPart_Statics::PropPointers),
		sizeof(FModularPart),
		alignof(FModularPart),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularPart_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPart_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FModularPart()
	{
		if (!Z_Registration_Info_UScriptStruct_ModularPart.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularPart.InnerSingleton, Z_Construct_UScriptStruct_FModularPart_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModularPart.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemGenerationSlot>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemGenerationSlot cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemGenerationSlot;
class UScriptStruct* FItemGenerationSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemGenerationSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemGenerationSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemGenerationSlot, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemGenerationSlot"));
	}
	return Z_Registration_Info_UScriptStruct_ItemGenerationSlot.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemGenerationSlot>()
{
	return FItemGenerationSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemGenerationSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemGenerationSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemGenerationSlot, Category), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Category_MetaData), Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Category_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemGenerationSlot, Rarity), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Rarity_MetaData), Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Rarity_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemGenerationSlot, ItemClass), Z_Construct_UClass_AACFItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_ItemClass_MetaData), Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_ItemClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewProp_ItemClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemGenerationSlot",
		Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::PropPointers),
		sizeof(FItemGenerationSlot),
		alignof(FItemGenerationSlot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemGenerationSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemGenerationSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemGenerationSlot.InnerSingleton, Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemGenerationSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFItemGenerationRule;
class UScriptStruct* FACFItemGenerationRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFItemGenerationRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFItemGenerationRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFItemGenerationRule, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ACFItemGenerationRule"));
	}
	return Z_Registration_Info_UScriptStruct_ACFItemGenerationRule.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FACFItemGenerationRule>()
{
	return FACFItemGenerationRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinItemCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinItemCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxItemCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxItemCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFItemGenerationRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFItemGenerationRule, Category), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Category_MetaData), Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Category_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFItemGenerationRule, Rarity), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Rarity_MetaData), Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Rarity_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MinItemCount_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MinItemCount = { "MinItemCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFItemGenerationRule, MinItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MinItemCount_MetaData), Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MinItemCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MaxItemCount_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MaxItemCount = { "MaxItemCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFItemGenerationRule, MaxItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MaxItemCount_MetaData), Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MaxItemCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MinItemCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewProp_MaxItemCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"ACFItemGenerationRule",
		Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::PropPointers),
		sizeof(FACFItemGenerationRule),
		alignof(FACFItemGenerationRule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFItemGenerationRule()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFItemGenerationRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFItemGenerationRule.InnerSingleton, Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFItemGenerationRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootingType;
	static UEnum* EShootingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShootingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShootingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EShootingType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EShootingType"));
		}
		return Z_Registration_Info_UEnum_EShootingType.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EShootingType>()
	{
		return EShootingType_StaticEnum();
	}
	struct Z_Construct_UEnum_InventorySystem_EShootingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventorySystem_EShootingType_Statics::Enumerators[] = {
		{ "EShootingType::EProjectile", (int64)EShootingType::EProjectile },
		{ "EShootingType::ESwipeTrace", (int64)EShootingType::ESwipeTrace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventorySystem_EShootingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EProjectile.DisplayName", "Shoot Projectile" },
		{ "EProjectile.Name", "EShootingType::EProjectile" },
		{ "ESwipeTrace.DisplayName", "Shoot Swipe Trace" },
		{ "ESwipeTrace.Name", "EShootingType::ESwipeTrace" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EShootingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		"EShootingType",
		"EShootingType",
		Z_Construct_UEnum_InventorySystem_EShootingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EShootingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EShootingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EShootingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InventorySystem_EShootingType()
	{
		if (!Z_Registration_Info_UEnum_EShootingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootingType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EShootingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShootingType.InnerSingleton;
	}
	void UACFItemTypes::StaticRegisterNativesUACFItemTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFItemTypes);
	UClass* Z_Construct_UClass_UACFItemTypes_NoRegister()
	{
		return UACFItemTypes::StaticClass();
	}
	struct Z_Construct_UClass_UACFItemTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFItemTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFItemTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFItemTypes.h" },
		{ "ModuleRelativePath", "Public/ACFItemTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFItemTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFItemTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFItemTypes_Statics::ClassParams = {
		&UACFItemTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFItemTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFItemTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFItemTypes()
	{
		if (!Z_Registration_Info_UClass_UACFItemTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFItemTypes.OuterSingleton, Z_Construct_UClass_UACFItemTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFItemTypes.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFItemTypes>()
	{
		return UACFItemTypes::StaticClass();
	}
	UACFItemTypes::UACFItemTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFItemTypes);
	UACFItemTypes::~UACFItemTypes() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::EnumInfo[] = {
		{ EProjectileHitPolicy_StaticEnum, TEXT("EProjectileHitPolicy"), &Z_Registration_Info_UEnum_EProjectileHitPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2342663762U) },
		{ EHandleType_StaticEnum, TEXT("EHandleType"), &Z_Registration_Info_UEnum_EHandleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 376480541U) },
		{ EShootTargetType_StaticEnum, TEXT("EShootTargetType"), &Z_Registration_Info_UEnum_EShootTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4018612882U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2567701869U) },
		{ EShootingType_StaticEnum, TEXT("EShootingType"), &Z_Registration_Info_UEnum_EShootingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 963781288U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::ScriptStructInfo[] = {
		{ FModularPart::StaticStruct, Z_Construct_UScriptStruct_FModularPart_Statics::NewStructOps, TEXT("ModularPart"), &Z_Registration_Info_UScriptStruct_ModularPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularPart), 3627703985U) },
		{ FItemGenerationSlot::StaticStruct, Z_Construct_UScriptStruct_FItemGenerationSlot_Statics::NewStructOps, TEXT("ItemGenerationSlot"), &Z_Registration_Info_UScriptStruct_ItemGenerationSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemGenerationSlot), 3795919290U) },
		{ FACFItemGenerationRule::StaticStruct, Z_Construct_UScriptStruct_FACFItemGenerationRule_Statics::NewStructOps, TEXT("ACFItemGenerationRule"), &Z_Registration_Info_UScriptStruct_ACFItemGenerationRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFItemGenerationRule), 2976150633U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFItemTypes, UACFItemTypes::StaticClass, TEXT("UACFItemTypes"), &Z_Registration_Info_UClass_UACFItemTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFItemTypes), 3271699343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_49787947(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

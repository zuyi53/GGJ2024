// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDamageType() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageType_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UAreaDamageType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UAreaDamageType_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UFallDamageType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UFallDamageType_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UMeleeDamageType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UMeleeDamageType_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_URangedDamageType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_URangedDamageType_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_USpellDamageType();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_USpellDamageType_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageZone();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFDamageType::StaticRegisterNativesUACFDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDamageType);
	UClass* Z_Construct_UClass_UACFDamageType_NoRegister()
	{
		return UACFDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UACFDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/ACFDamageType.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDamageType_Statics::ClassParams = {
		&UACFDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDamageType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFDamageType()
	{
		if (!Z_Registration_Info_UClass_UACFDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDamageType.OuterSingleton, Z_Construct_UClass_UACFDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDamageType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDamageType>()
	{
		return UACFDamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDamageType);
	UACFDamageType::~UACFDamageType() {}
	void UMeleeDamageType::StaticRegisterNativesUMeleeDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeDamageType);
	UClass* Z_Construct_UClass_UMeleeDamageType_NoRegister()
	{
		return UMeleeDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeDamageType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeDamageType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFDamageType.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeDamageType_Statics::ClassParams = {
		&UMeleeDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeDamageType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMeleeDamageType()
	{
		if (!Z_Registration_Info_UClass_UMeleeDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeDamageType.OuterSingleton, Z_Construct_UClass_UMeleeDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeleeDamageType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UMeleeDamageType>()
	{
		return UMeleeDamageType::StaticClass();
	}
	UMeleeDamageType::UMeleeDamageType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeDamageType);
	UMeleeDamageType::~UMeleeDamageType() {}
	void URangedDamageType::StaticRegisterNativesURangedDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URangedDamageType);
	UClass* Z_Construct_UClass_URangedDamageType_NoRegister()
	{
		return URangedDamageType::StaticClass();
	}
	struct Z_Construct_UClass_URangedDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangedDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangedDamageType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedDamageType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFDamageType.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangedDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangedDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URangedDamageType_Statics::ClassParams = {
		&URangedDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URangedDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_URangedDamageType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URangedDamageType()
	{
		if (!Z_Registration_Info_UClass_URangedDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URangedDamageType.OuterSingleton, Z_Construct_UClass_URangedDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URangedDamageType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<URangedDamageType>()
	{
		return URangedDamageType::StaticClass();
	}
	URangedDamageType::URangedDamageType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangedDamageType);
	URangedDamageType::~URangedDamageType() {}
	void UAreaDamageType::StaticRegisterNativesUAreaDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAreaDamageType);
	UClass* Z_Construct_UClass_UAreaDamageType_NoRegister()
	{
		return UAreaDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UAreaDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAreaDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAreaDamageType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAreaDamageType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFDamageType.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAreaDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAreaDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAreaDamageType_Statics::ClassParams = {
		&UAreaDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAreaDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UAreaDamageType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAreaDamageType()
	{
		if (!Z_Registration_Info_UClass_UAreaDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAreaDamageType.OuterSingleton, Z_Construct_UClass_UAreaDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAreaDamageType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UAreaDamageType>()
	{
		return UAreaDamageType::StaticClass();
	}
	UAreaDamageType::UAreaDamageType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAreaDamageType);
	UAreaDamageType::~UAreaDamageType() {}
	void USpellDamageType::StaticRegisterNativesUSpellDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpellDamageType);
	UClass* Z_Construct_UClass_USpellDamageType_NoRegister()
	{
		return USpellDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USpellDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellDamageType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellDamageType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFDamageType.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpellDamageType_Statics::ClassParams = {
		&USpellDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_USpellDamageType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpellDamageType()
	{
		if (!Z_Registration_Info_UClass_USpellDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpellDamageType.OuterSingleton, Z_Construct_UClass_USpellDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpellDamageType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<USpellDamageType>()
	{
		return USpellDamageType::StaticClass();
	}
	USpellDamageType::USpellDamageType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellDamageType);
	USpellDamageType::~USpellDamageType() {}
	void UFallDamageType::StaticRegisterNativesUFallDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFallDamageType);
	UClass* Z_Construct_UClass_UFallDamageType_NoRegister()
	{
		return UFallDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UFallDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFallDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFallDamageType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFallDamageType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFDamageType.h" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFallDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFallDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFallDamageType_Statics::ClassParams = {
		&UFallDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFallDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UFallDamageType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFallDamageType()
	{
		if (!Z_Registration_Info_UClass_UFallDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFallDamageType.OuterSingleton, Z_Construct_UClass_UFallDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFallDamageType.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UFallDamageType>()
	{
		return UFallDamageType::StaticClass();
	}
	UFallDamageType::UFallDamageType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFallDamageType);
	UFallDamageType::~UFallDamageType() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFDamageEvent;
class UScriptStruct* FACFDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFDamageEvent, (UObject*)Z_Construct_UPackage__Script_AscentCombatFramework(), TEXT("ACFDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ACFDamageEvent.OuterSingleton;
}
template<> ASCENTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FACFDamageEvent>()
{
	return FACFDamageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResponseAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResponseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contextString_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_contextString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageDealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageDealer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageReceiver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageReceiver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageZone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageZone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCritical_MetaData[];
#endif
		static void NewProp_bIsCritical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCritical;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFDamageEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_HitResponseAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_HitResponseAction = { "HitResponseAction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, HitResponseAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_HitResponseAction_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_HitResponseAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_contextString_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_contextString_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_contextString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDealer_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDealer = { "DamageDealer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, DamageDealer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDealer_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDealer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageReceiver_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageReceiver = { "DamageReceiver", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, DamageReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageReceiver_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageReceiver_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_PhysMaterial_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_PhysMaterial_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone = { "DamageZone", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, DamageZone), Z_Construct_UEnum_AscentCombatFramework_EDamageZone, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone_MetaData) }; // 3143454798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_FinalDamage_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_FinalDamage = { "FinalDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, FinalDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_FinalDamage_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_FinalDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitResult_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitResult_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitResult_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitDirection_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitDirection = { "hitDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, hitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitDirection_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageClass = { "DamageClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, DamageClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageClass_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageClass_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection = { "DamageDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFDamageEvent, DamageDirection), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection_MetaData) }; // 1707824474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFDamageType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical_SetBit(void* Obj)
	{
		((FACFDamageEvent*)Obj)->bIsCritical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical = { "bIsCritical", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FACFDamageEvent), &Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical_MetaData), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFDamageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_HitResponseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_contextString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDealer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageReceiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_FinalDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_hitDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_DamageDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewProp_bIsCritical,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
		nullptr,
		&NewStructOps,
		"ACFDamageEvent",
		Z_Construct_UScriptStruct_FACFDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::PropPointers),
		sizeof(FACFDamageEvent),
		alignof(FACFDamageEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFDamageEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFDamageEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFDamageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FACFDamageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFDamageEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics::ScriptStructInfo[] = {
		{ FACFDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FACFDamageEvent_Statics::NewStructOps, TEXT("ACFDamageEvent"), &Z_Registration_Info_UScriptStruct_ACFDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFDamageEvent), 4032775443U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDamageType, UACFDamageType::StaticClass, TEXT("UACFDamageType"), &Z_Registration_Info_UClass_UACFDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDamageType), 638317411U) },
		{ Z_Construct_UClass_UMeleeDamageType, UMeleeDamageType::StaticClass, TEXT("UMeleeDamageType"), &Z_Registration_Info_UClass_UMeleeDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeDamageType), 284939298U) },
		{ Z_Construct_UClass_URangedDamageType, URangedDamageType::StaticClass, TEXT("URangedDamageType"), &Z_Registration_Info_UClass_URangedDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URangedDamageType), 2612059069U) },
		{ Z_Construct_UClass_UAreaDamageType, UAreaDamageType::StaticClass, TEXT("UAreaDamageType"), &Z_Registration_Info_UClass_UAreaDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAreaDamageType), 3370964565U) },
		{ Z_Construct_UClass_USpellDamageType, USpellDamageType::StaticClass, TEXT("USpellDamageType"), &Z_Registration_Info_UClass_USpellDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpellDamageType), 461863515U) },
		{ Z_Construct_UClass_UFallDamageType, UFallDamageType::StaticClass, TEXT("UFallDamageType"), &Z_Registration_Info_UClass_UFallDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFallDamageType), 3635294996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_2058178142(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFDamageType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

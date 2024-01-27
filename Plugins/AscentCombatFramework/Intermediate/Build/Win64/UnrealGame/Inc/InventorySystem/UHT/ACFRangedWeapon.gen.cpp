// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFRangedWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFRangedWeapon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFRangedWeapon();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFRangedWeapon_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWeapon();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFShootingComponent_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EShootingType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EShootTargetType();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFRangedWeapon::execNeedsReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execCanShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execGetShootingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFShootingComponent**)Z_Param__Result=P_THIS->GetShootingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execGetShootingType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EShootingType*)Z_Param__Result=P_THIS->GetShootingType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execGetShootingSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetShootingSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execGetCurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execGetAmmoMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAmmoMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execGetProjectileSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectileSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execReload)
	{
		P_GET_UBOOL(Z_Param_bTryToEquipAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload_Implementation(Z_Param_bTryToEquipAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execShootProjectile)
	{
		P_GET_ENUM(EShootTargetType,Z_Param_targetType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_GET_OBJECT(UClass,Z_Param_projectileOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootProjectile_Implementation(EShootTargetType(Z_Param_targetType),Z_Param_charge,Z_Param_projectileOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execSwipeTraceShoot)
	{
		P_GET_ENUM(EShootTargetType,Z_Param_targetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwipeTraceShoot_Implementation(EShootTargetType(Z_Param_targetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execShootAtDirection)
	{
		P_GET_STRUCT(FRotator,Z_Param_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_GET_OBJECT(UClass,Z_Param_projectileOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootAtDirection_Implementation(Z_Param_direction,Z_Param_charge,Z_Param_projectileOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execShootAtActor)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_randomDeviation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_GET_OBJECT(UClass,Z_Param_projectileOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootAtActor_Implementation(Z_Param_target,Z_Param_randomDeviation,Z_Param_charge,Z_Param_projectileOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFRangedWeapon::execShoot)
	{
		P_GET_STRUCT(FRotator,Z_Param_deltaRot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_GET_OBJECT(UClass,Z_Param_projectileOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot_Implementation(Z_Param_deltaRot,Z_Param_charge,Z_Param_projectileOverride);
		P_NATIVE_END;
	}
	struct ACFRangedWeapon_eventReload_Parms
	{
		bool bTryToEquipAmmo;
	};
	struct ACFRangedWeapon_eventShoot_Parms
	{
		FRotator deltaRot;
		float charge;
		TSubclassOf<AACFProjectile>  projectileOverride;
	};
	struct ACFRangedWeapon_eventShootAtActor_Parms
	{
		const AActor* target;
		float randomDeviation;
		float charge;
		TSubclassOf<AACFProjectile>  projectileOverride;
	};
	struct ACFRangedWeapon_eventShootAtDirection_Parms
	{
		FRotator direction;
		float charge;
		TSubclassOf<AACFProjectile>  projectileOverride;
	};
	struct ACFRangedWeapon_eventShootProjectile_Parms
	{
		EShootTargetType targetType;
		float charge;
		TSubclassOf<AACFProjectile>  projectileOverride;
	};
	struct ACFRangedWeapon_eventSwipeTraceShoot_Parms
	{
		EShootTargetType targetType;
	};
	static FName NAME_AACFRangedWeapon_Reload = FName(TEXT("Reload"));
	void AACFRangedWeapon::Reload(bool bTryToEquipAmmo)
	{
		ACFRangedWeapon_eventReload_Parms Parms;
		Parms.bTryToEquipAmmo=bTryToEquipAmmo ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AACFRangedWeapon_Reload),&Parms);
	}
	static FName NAME_AACFRangedWeapon_Shoot = FName(TEXT("Shoot"));
	void AACFRangedWeapon::Shoot(FRotator const& deltaRot, float charge, TSubclassOf<AACFProjectile>  projectileOverride)
	{
		ACFRangedWeapon_eventShoot_Parms Parms;
		Parms.deltaRot=deltaRot;
		Parms.charge=charge;
		Parms.projectileOverride=projectileOverride;
		ProcessEvent(FindFunctionChecked(NAME_AACFRangedWeapon_Shoot),&Parms);
	}
	static FName NAME_AACFRangedWeapon_ShootAtActor = FName(TEXT("ShootAtActor"));
	void AACFRangedWeapon::ShootAtActor(const AActor* target, float randomDeviation, float charge, TSubclassOf<AACFProjectile>  projectileOverride)
	{
		ACFRangedWeapon_eventShootAtActor_Parms Parms;
		Parms.target=target;
		Parms.randomDeviation=randomDeviation;
		Parms.charge=charge;
		Parms.projectileOverride=projectileOverride;
		ProcessEvent(FindFunctionChecked(NAME_AACFRangedWeapon_ShootAtActor),&Parms);
	}
	static FName NAME_AACFRangedWeapon_ShootAtDirection = FName(TEXT("ShootAtDirection"));
	void AACFRangedWeapon::ShootAtDirection(FRotator const& direction, float charge, TSubclassOf<AACFProjectile>  projectileOverride)
	{
		ACFRangedWeapon_eventShootAtDirection_Parms Parms;
		Parms.direction=direction;
		Parms.charge=charge;
		Parms.projectileOverride=projectileOverride;
		ProcessEvent(FindFunctionChecked(NAME_AACFRangedWeapon_ShootAtDirection),&Parms);
	}
	static FName NAME_AACFRangedWeapon_ShootProjectile = FName(TEXT("ShootProjectile"));
	void AACFRangedWeapon::ShootProjectile(EShootTargetType targetType, float charge, TSubclassOf<AACFProjectile>  projectileOverride)
	{
		ACFRangedWeapon_eventShootProjectile_Parms Parms;
		Parms.targetType=targetType;
		Parms.charge=charge;
		Parms.projectileOverride=projectileOverride;
		ProcessEvent(FindFunctionChecked(NAME_AACFRangedWeapon_ShootProjectile),&Parms);
	}
	static FName NAME_AACFRangedWeapon_SwipeTraceShoot = FName(TEXT("SwipeTraceShoot"));
	void AACFRangedWeapon::SwipeTraceShoot(EShootTargetType targetType)
	{
		ACFRangedWeapon_eventSwipeTraceShoot_Parms Parms;
		Parms.targetType=targetType;
		ProcessEvent(FindFunctionChecked(NAME_AACFRangedWeapon_SwipeTraceShoot),&Parms);
	}
	void AACFRangedWeapon::StaticRegisterNativesAACFRangedWeapon()
	{
		UClass* Class = AACFRangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanShoot", &AACFRangedWeapon::execCanShoot },
			{ "GetAmmoMagazine", &AACFRangedWeapon::execGetAmmoMagazine },
			{ "GetCurrentAmmo", &AACFRangedWeapon::execGetCurrentAmmo },
			{ "GetProjectileSpeed", &AACFRangedWeapon::execGetProjectileSpeed },
			{ "GetShootingComponent", &AACFRangedWeapon::execGetShootingComponent },
			{ "GetShootingSocket", &AACFRangedWeapon::execGetShootingSocket },
			{ "GetShootingType", &AACFRangedWeapon::execGetShootingType },
			{ "NeedsReload", &AACFRangedWeapon::execNeedsReload },
			{ "Reload", &AACFRangedWeapon::execReload },
			{ "Shoot", &AACFRangedWeapon::execShoot },
			{ "ShootAtActor", &AACFRangedWeapon::execShootAtActor },
			{ "ShootAtDirection", &AACFRangedWeapon::execShootAtDirection },
			{ "ShootProjectile", &AACFRangedWeapon::execShootProjectile },
			{ "SwipeTraceShoot", &AACFRangedWeapon::execSwipeTraceShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics
	{
		struct ACFRangedWeapon_eventCanShoot_Parms
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
	void Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFRangedWeapon_eventCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFRangedWeapon_eventCanShoot_Parms), &Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "CanShoot", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::ACFRangedWeapon_eventCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::ACFRangedWeapon_eventCanShoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_CanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_CanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics
	{
		struct ACFRangedWeapon_eventGetAmmoMagazine_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventGetAmmoMagazine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "GetAmmoMagazine", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::ACFRangedWeapon_eventGetAmmoMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::ACFRangedWeapon_eventGetAmmoMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics
	{
		struct ACFRangedWeapon_eventGetCurrentAmmo_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "GetCurrentAmmo", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::ACFRangedWeapon_eventGetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::ACFRangedWeapon_eventGetCurrentAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics
	{
		struct ACFRangedWeapon_eventGetProjectileSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventGetProjectileSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "GetProjectileSpeed", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::ACFRangedWeapon_eventGetProjectileSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::ACFRangedWeapon_eventGetProjectileSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics
	{
		struct ACFRangedWeapon_eventGetShootingComponent_Parms
		{
			UACFShootingComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventGetShootingComponent_Parms, ReturnValue), Z_Construct_UClass_UACFShootingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "GetShootingComponent", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::ACFRangedWeapon_eventGetShootingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::ACFRangedWeapon_eventGetShootingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics
	{
		struct ACFRangedWeapon_eventGetShootingSocket_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventGetShootingSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "GetShootingSocket", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::ACFRangedWeapon_eventGetShootingSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::ACFRangedWeapon_eventGetShootingSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics
	{
		struct ACFRangedWeapon_eventGetShootingType_Parms
		{
			EShootingType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventGetShootingType_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_EShootingType, METADATA_PARAMS(0, nullptr) }; // 963781288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "GetShootingType", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::ACFRangedWeapon_eventGetShootingType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::ACFRangedWeapon_eventGetShootingType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_GetShootingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_GetShootingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics
	{
		struct ACFRangedWeapon_eventNeedsReload_Parms
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
	void Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFRangedWeapon_eventNeedsReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFRangedWeapon_eventNeedsReload_Parms), &Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "NeedsReload", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::ACFRangedWeapon_eventNeedsReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::ACFRangedWeapon_eventNeedsReload_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_NeedsReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_NeedsReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics
	{
		static void NewProp_bTryToEquipAmmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToEquipAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::NewProp_bTryToEquipAmmo_SetBit(void* Obj)
	{
		((ACFRangedWeapon_eventReload_Parms*)Obj)->bTryToEquipAmmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::NewProp_bTryToEquipAmmo = { "bTryToEquipAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFRangedWeapon_eventReload_Parms), &Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::NewProp_bTryToEquipAmmo_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::NewProp_bTryToEquipAmmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "Reload", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::PropPointers), sizeof(ACFRangedWeapon_eventReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRangedWeapon_eventReload_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_deltaRot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_charge;
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_deltaRot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_deltaRot = { "deltaRot", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShoot_Parms, deltaRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_deltaRot_MetaData), Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_deltaRot_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShoot_Parms, charge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_projectileOverride = { "projectileOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShoot_Parms, projectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_deltaRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::NewProp_projectileOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Shoots at owner's eyesight*/" },
		{ "CPP_Default_charge", "1.000000" },
		{ "CPP_Default_deltaRot", "" },
		{ "CPP_Default_projectileOverride", "None" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
		{ "ToolTip", "Shoots at owner's eyesight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "Shoot", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::PropPointers), sizeof(ACFRangedWeapon_eventShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRangedWeapon_eventShoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_randomDeviation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_charge;
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtActor_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_target_MetaData), Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_target_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_randomDeviation = { "randomDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtActor_Parms, randomDeviation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtActor_Parms, charge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_projectileOverride = { "projectileOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtActor_Parms, projectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_randomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::NewProp_projectileOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Shoots at the target actor*/" },
		{ "CPP_Default_charge", "1.000000" },
		{ "CPP_Default_projectileOverride", "None" },
		{ "CPP_Default_randomDeviation", "5.000000" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
		{ "ToolTip", "Shoots at the target actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "ShootAtActor", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::PropPointers), sizeof(ACFRangedWeapon_eventShootAtActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRangedWeapon_eventShootAtActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_charge;
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtDirection_Parms, direction), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtDirection_Parms, charge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_projectileOverride = { "projectileOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootAtDirection_Parms, projectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::NewProp_projectileOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Shoots at the provided direction */" },
		{ "CPP_Default_charge", "1.000000" },
		{ "CPP_Default_projectileOverride", "None" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
		{ "ToolTip", "Shoots at the provided direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "ShootAtDirection", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::PropPointers), sizeof(ACFRangedWeapon_eventShootAtDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRangedWeapon_eventShootAtDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_targetType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_targetType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_charge;
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_targetType = { "targetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootProjectile_Parms, targetType), Z_Construct_UEnum_InventorySystem_EShootTargetType, METADATA_PARAMS(0, nullptr) }; // 4018612882
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootProjectile_Parms, charge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_projectileOverride = { "projectileOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventShootProjectile_Parms, projectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_targetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_targetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::NewProp_projectileOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Tries to shoot the provided projectile or the one equipped in the Ammo slot following the targetType rule*/" },
		{ "CPP_Default_charge", "1.000000" },
		{ "CPP_Default_projectileOverride", "None" },
		{ "CPP_Default_targetType", "WeaponTowardsFocus" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
		{ "ToolTip", "Tries to shoot the provided projectile or the one equipped in the Ammo slot following the targetType rule" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "ShootProjectile", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::PropPointers), sizeof(ACFRangedWeapon_eventShootProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRangedWeapon_eventShootProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_targetType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_targetType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::NewProp_targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::NewProp_targetType = { "targetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFRangedWeapon_eventSwipeTraceShoot_Parms, targetType), Z_Construct_UEnum_InventorySystem_EShootTargetType, METADATA_PARAMS(0, nullptr) }; // 4018612882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::NewProp_targetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::NewProp_targetType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Tries to swipe shoot following the targetType rule*/" },
		{ "CPP_Default_targetType", "CameraTowardsFocus" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
		{ "ToolTip", "Tries to swipe shoot following the targetType rule" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFRangedWeapon, nullptr, "SwipeTraceShoot", nullptr, nullptr, Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::PropPointers), sizeof(ACFRangedWeapon_eventSwipeTraceShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFRangedWeapon_eventSwipeTraceShoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFRangedWeapon);
	UClass* Z_Construct_UClass_AACFRangedWeapon_NoRegister()
	{
		return AACFRangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AACFRangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShootingComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShootingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShootingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TryEquipAmmos_MetaData[];
#endif
		static void NewProp_TryEquipAmmos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TryEquipAmmos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFRangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFRangedWeapon_CanShoot, "CanShoot" }, // 757244596
		{ &Z_Construct_UFunction_AACFRangedWeapon_GetAmmoMagazine, "GetAmmoMagazine" }, // 2352958445
		{ &Z_Construct_UFunction_AACFRangedWeapon_GetCurrentAmmo, "GetCurrentAmmo" }, // 760578384
		{ &Z_Construct_UFunction_AACFRangedWeapon_GetProjectileSpeed, "GetProjectileSpeed" }, // 3776100142
		{ &Z_Construct_UFunction_AACFRangedWeapon_GetShootingComponent, "GetShootingComponent" }, // 390965758
		{ &Z_Construct_UFunction_AACFRangedWeapon_GetShootingSocket, "GetShootingSocket" }, // 1714283630
		{ &Z_Construct_UFunction_AACFRangedWeapon_GetShootingType, "GetShootingType" }, // 2401734697
		{ &Z_Construct_UFunction_AACFRangedWeapon_NeedsReload, "NeedsReload" }, // 4006776009
		{ &Z_Construct_UFunction_AACFRangedWeapon_Reload, "Reload" }, // 4254063899
		{ &Z_Construct_UFunction_AACFRangedWeapon_Shoot, "Shoot" }, // 1401480011
		{ &Z_Construct_UFunction_AACFRangedWeapon_ShootAtActor, "ShootAtActor" }, // 1155898807
		{ &Z_Construct_UFunction_AACFRangedWeapon_ShootAtDirection, "ShootAtDirection" }, // 978335818
		{ &Z_Construct_UFunction_AACFRangedWeapon_ShootProjectile, "ShootProjectile" }, // 2827612446
		{ &Z_Construct_UFunction_AACFRangedWeapon_SwipeTraceShoot, "SwipeTraceShoot" }, // 3004058534
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Items/ACFRangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingComp = { "ShootingComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFRangedWeapon, ShootingComp), Z_Construct_UClass_UACFShootingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingComp_MetaData), Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingComp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType_MetaData[] = {
		{ "Category", "ACF | Weapon|Ranged" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType = { "ShootingType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFRangedWeapon, ShootingType), Z_Construct_UEnum_InventorySystem_EShootingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType_MetaData), Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType_MetaData) }; // 963781288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos_MetaData[] = {
		{ "Category", "ACF | Weapon|Ranged" },
		{ "ModuleRelativePath", "Public/Items/ACFRangedWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos_SetBit(void* Obj)
	{
		((AACFRangedWeapon*)Obj)->TryEquipAmmos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos = { "TryEquipAmmos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFRangedWeapon), &Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos_MetaData), Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFRangedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_ShootingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRangedWeapon_Statics::NewProp_TryEquipAmmos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFRangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFRangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFRangedWeapon_Statics::ClassParams = {
		&AACFRangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFRangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFRangedWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRangedWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFRangedWeapon()
	{
		if (!Z_Registration_Info_UClass_AACFRangedWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFRangedWeapon.OuterSingleton, Z_Construct_UClass_AACFRangedWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFRangedWeapon.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFRangedWeapon>()
	{
		return AACFRangedWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFRangedWeapon);
	AACFRangedWeapon::~AACFRangedWeapon() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFRangedWeapon, AACFRangedWeapon::StaticClass, TEXT("AACFRangedWeapon"), &Z_Registration_Info_UClass_AACFRangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFRangedWeapon), 2122761269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_2252043203(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

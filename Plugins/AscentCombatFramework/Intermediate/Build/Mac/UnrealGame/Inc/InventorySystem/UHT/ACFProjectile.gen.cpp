// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFProjectile() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFInteractableInterface_NoRegister();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFEquippableItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	DEFINE_FUNCTION(AACFProjectile::execHandleProjectileHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProjectileHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execHandleAttackHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAttackHit(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execGetInteractableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractableName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execCanBeInteracted)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeInteracted_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execOnInteractedByPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FStrProperty,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractedByPawn_Implementation(Z_Param_Pawn,Z_Param_interactionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execAttachToHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_UBOOL(Z_Param_inPickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToHit(Z_Param_Out_HitResult,Z_Param_inPickable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execActivateDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execSetupProjectile)
	{
		P_GET_OBJECT(APawn,Z_Param_inOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupProjectile(Z_Param_inOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execGetDropOnDeathPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDropOnDeathPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execShouldBeDroppedOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBeDroppedOnDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execGetCollisionComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACMCollisionManagerComponent**)Z_Param__Result=P_THIS->GetCollisionComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execGetStaticMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetStaticMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFProjectile::execGetProjectileMovementComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProjectileMovementComponent**)Z_Param__Result=P_THIS->GetProjectileMovementComp();
		P_NATIVE_END;
	}
	struct ACFProjectile_eventCanBeInteracted_Parms
	{
		APawn* Pawn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFProjectile_eventCanBeInteracted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFProjectile_eventGetInteractableName_Parms
	{
		FText ReturnValue;
	};
	struct ACFProjectile_eventOnInteractedByPawn_Parms
	{
		APawn* Pawn;
		FString interactionType;
	};
	static FName NAME_AACFProjectile_CanBeInteracted = FName(TEXT("CanBeInteracted"));
	bool AACFProjectile::CanBeInteracted(APawn* Pawn)
	{
		ACFProjectile_eventCanBeInteracted_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AACFProjectile_CanBeInteracted),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFProjectile_GetInteractableName = FName(TEXT("GetInteractableName"));
	FText AACFProjectile::GetInteractableName()
	{
		ACFProjectile_eventGetInteractableName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFProjectile_GetInteractableName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFProjectile_OnInteractedByPawn = FName(TEXT("OnInteractedByPawn"));
	void AACFProjectile::OnInteractedByPawn(APawn* Pawn, const FString& interactionType)
	{
		ACFProjectile_eventOnInteractedByPawn_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.interactionType=interactionType;
		ProcessEvent(FindFunctionChecked(NAME_AACFProjectile_OnInteractedByPawn),&Parms);
	}
	void AACFProjectile::StaticRegisterNativesAACFProjectile()
	{
		UClass* Class = AACFProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateDamage", &AACFProjectile::execActivateDamage },
			{ "AttachToHit", &AACFProjectile::execAttachToHit },
			{ "CanBeInteracted", &AACFProjectile::execCanBeInteracted },
			{ "GetCollisionComp", &AACFProjectile::execGetCollisionComp },
			{ "GetDropOnDeathPercentage", &AACFProjectile::execGetDropOnDeathPercentage },
			{ "GetInteractableName", &AACFProjectile::execGetInteractableName },
			{ "GetProjectileMovementComp", &AACFProjectile::execGetProjectileMovementComp },
			{ "GetStaticMesh", &AACFProjectile::execGetStaticMesh },
			{ "HandleAttackHit", &AACFProjectile::execHandleAttackHit },
			{ "HandleProjectileHit", &AACFProjectile::execHandleProjectileHit },
			{ "OnInteractedByPawn", &AACFProjectile::execOnInteractedByPawn },
			{ "SetupProjectile", &AACFProjectile::execSetupProjectile },
			{ "ShouldBeDroppedOnDeath", &AACFProjectile::execShouldBeDroppedOnDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFProjectile_ActivateDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_ActivateDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_ActivateDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "ActivateDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_ActivateDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_ActivateDamage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFProjectile_ActivateDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_ActivateDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics
	{
		struct ACFProjectile_eventAttachToHit_Parms
		{
			FHitResult HitResult;
			bool inPickable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_inPickable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inPickable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventAttachToHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_HitResult_MetaData), Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	void Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_inPickable_SetBit(void* Obj)
	{
		((ACFProjectile_eventAttachToHit_Parms*)Obj)->inPickable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_inPickable = { "inPickable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFProjectile_eventAttachToHit_Parms), &Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_inPickable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::NewProp_inPickable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "AttachToHit", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::ACFProjectile_eventAttachToHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::ACFProjectile_eventAttachToHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_AttachToHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_AttachToHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventCanBeInteracted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFProjectile_eventCanBeInteracted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFProjectile_eventCanBeInteracted_Parms), &Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "CanBeInteracted", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::PropPointers), sizeof(ACFProjectile_eventCanBeInteracted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFProjectile_eventCanBeInteracted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_CanBeInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_CanBeInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics
	{
		struct ACFProjectile_eventGetCollisionComp_Parms
		{
			UACMCollisionManagerComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventGetCollisionComp_Parms, ReturnValue), Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "GetCollisionComp", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::ACFProjectile_eventGetCollisionComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::ACFProjectile_eventGetCollisionComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_GetCollisionComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_GetCollisionComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics
	{
		struct ACFProjectile_eventGetDropOnDeathPercentage_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventGetDropOnDeathPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "GetDropOnDeathPercentage", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::ACFProjectile_eventGetDropOnDeathPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::ACFProjectile_eventGetDropOnDeathPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventGetInteractableName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "GetInteractableName", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::PropPointers), sizeof(ACFProjectile_eventGetInteractableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFProjectile_eventGetInteractableName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_GetInteractableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_GetInteractableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics
	{
		struct ACFProjectile_eventGetProjectileMovementComp_Parms
		{
			UProjectileMovementComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventGetProjectileMovementComp_Parms, ReturnValue), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "GetProjectileMovementComp", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::ACFProjectile_eventGetProjectileMovementComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::ACFProjectile_eventGetProjectileMovementComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics
	{
		struct ACFProjectile_eventGetStaticMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventGetStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "GetStaticMesh", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::ACFProjectile_eventGetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::ACFProjectile_eventGetStaticMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_GetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_GetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics
	{
		struct ACFProjectile_eventHandleAttackHit_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventHandleAttackHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::NewProp_HitResult_MetaData), Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "HandleAttackHit", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::ACFProjectile_eventHandleAttackHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::ACFProjectile_eventHandleAttackHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_HandleAttackHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_HandleAttackHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics
	{
		struct ACFProjectile_eventHandleProjectileHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventHandleProjectileHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventHandleProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventHandleProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventHandleProjectileHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventHandleProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "HandleProjectileHit", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::ACFProjectile_eventHandleProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::ACFProjectile_eventHandleProjectileHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_HandleProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_HandleProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_interactionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventOnInteractedByPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventOnInteractedByPawn_Parms, interactionType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData), Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_interactionType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::NewProp_interactionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* called when player interact with object of this class */" },
		{ "CPP_Default_interactionType", "" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
		{ "ToolTip", "called when player interact with object of this class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "OnInteractedByPawn", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::PropPointers), sizeof(ACFProjectile_eventOnInteractedByPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFProjectile_eventOnInteractedByPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics
	{
		struct ACFProjectile_eventSetupProjectile_Parms
		{
			APawn* inOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::NewProp_inOwner = { "inOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFProjectile_eventSetupProjectile_Parms, inOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::NewProp_inOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "SetupProjectile", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::ACFProjectile_eventSetupProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::ACFProjectile_eventSetupProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_SetupProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_SetupProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics
	{
		struct ACFProjectile_eventShouldBeDroppedOnDeath_Parms
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
	void Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFProjectile_eventShouldBeDroppedOnDeath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFProjectile_eventShouldBeDroppedOnDeath_Parms), &Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFProjectile, nullptr, "ShouldBeDroppedOnDeath", nullptr, nullptr, Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::ACFProjectile_eventShouldBeDroppedOnDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::ACFProjectile_eventShouldBeDroppedOnDeath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFProjectile);
	UClass* Z_Construct_UClass_AACFProjectile_NoRegister()
	{
		return AACFProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AACFProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProjectileMovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifespan;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedLifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttachedLifespan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDroppableWhenAttached_MetaData[];
#endif
		static void NewProp_bDroppableWhenAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDroppableWhenAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropRatePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropRatePercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFEquippableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFProjectile_ActivateDamage, "ActivateDamage" }, // 4204014400
		{ &Z_Construct_UFunction_AACFProjectile_AttachToHit, "AttachToHit" }, // 1014153852
		{ &Z_Construct_UFunction_AACFProjectile_CanBeInteracted, "CanBeInteracted" }, // 1698981828
		{ &Z_Construct_UFunction_AACFProjectile_GetCollisionComp, "GetCollisionComp" }, // 1354817187
		{ &Z_Construct_UFunction_AACFProjectile_GetDropOnDeathPercentage, "GetDropOnDeathPercentage" }, // 4221675867
		{ &Z_Construct_UFunction_AACFProjectile_GetInteractableName, "GetInteractableName" }, // 3421944494
		{ &Z_Construct_UFunction_AACFProjectile_GetProjectileMovementComp, "GetProjectileMovementComp" }, // 2986739756
		{ &Z_Construct_UFunction_AACFProjectile_GetStaticMesh, "GetStaticMesh" }, // 1963066286
		{ &Z_Construct_UFunction_AACFProjectile_HandleAttackHit, "HandleAttackHit" }, // 3281325967
		{ &Z_Construct_UFunction_AACFProjectile_HandleProjectileHit, "HandleProjectileHit" }, // 3035608148
		{ &Z_Construct_UFunction_AACFProjectile_OnInteractedByPawn, "OnInteractedByPawn" }, // 1010238594
		{ &Z_Construct_UFunction_AACFProjectile_SetupProjectile, "SetupProjectile" }, // 2152380124
		{ &Z_Construct_UFunction_AACFProjectile_ShouldBeDroppedOnDeath, "ShouldBeDroppedOnDeath" }, // 4277771396
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ACFProjectile.h" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_SphereComp_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_SphereComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_MeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileMovementComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileMovementComp_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileMovementComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, CollisionComp), Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_CollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileLifespan_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileLifespan = { "ProjectileLifespan", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, ProjectileLifespan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileLifespan_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileLifespan_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/* If this projectile must destroy itself on hit or attach to the actor hit*/" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
		{ "ToolTip", "If this projectile must destroy itself on hit or attach to the actor hit" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy = { "HitPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, HitPolicy), Z_Construct_UEnum_InventorySystem_EProjectileHitPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy_MetaData) }; // 2342663762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_AttachedLifespan_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "EditCondition", "HitPolicy == EProjectileHitPolicy::AttachOnHit" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_AttachedLifespan = { "AttachedLifespan", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, AttachedLifespan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_AttachedLifespan_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_AttachedLifespan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/* If this is set to true when this projectile is attached to an acfcharacter and\n    this character dies, the projectile can be dropped as world item*/" },
		{ "EditCondition", "HitPolicy == EProjectileHitPolicy::AttachOnHit" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
		{ "ToolTip", "If this is set to true when this projectile is attached to an acfcharacter and\n   this character dies, the projectile can be dropped as world item" },
	};
#endif
	void Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached_SetBit(void* Obj)
	{
		((AACFProjectile*)Obj)->bDroppableWhenAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached = { "bDroppableWhenAttached", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFProjectile), &Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectile_Statics::NewProp_DropRatePercentage_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/* When attached to an adversary, the chance that this item will be dropped when it dies*/" },
		{ "EditCondition", "HitPolicy == EProjectileHitPolicy::AttachOnHit" },
		{ "ModuleRelativePath", "Public/Items/ACFProjectile.h" },
		{ "ToolTip", "When attached to an adversary, the chance that this item will be dropped when it dies" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectile_Statics::NewProp_DropRatePercentage = { "DropRatePercentage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFProjectile, DropRatePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::NewProp_DropRatePercentage_MetaData), Z_Construct_UClass_AACFProjectile_Statics::NewProp_DropRatePercentage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileMovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_ProjectileLifespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_HitPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_AttachedLifespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_bDroppableWhenAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectile_Statics::NewProp_DropRatePercentage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UACFInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AACFProjectile, IACFInteractableInterface), false },  // 3929623987
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFProjectile_Statics::ClassParams = {
		&AACFProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFProjectile_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFProjectile()
	{
		if (!Z_Registration_Info_UClass_AACFProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFProjectile.OuterSingleton, Z_Construct_UClass_AACFProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFProjectile.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFProjectile>()
	{
		return AACFProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFProjectile);
	AACFProjectile::~AACFProjectile() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFProjectile, AACFProjectile::StaticClass, TEXT("AACFProjectile"), &Z_Registration_Info_UClass_AACFProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFProjectile), 1522822686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_2561447030(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

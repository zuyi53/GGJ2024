// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFShootingComponent.h"
#include "CollisionsManager/Public/ACMTypes.h"
#include "Components/ACFEquipmentComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFShootingComponent() {}
// Cross Module References
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFShootingComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFShootingComponent_NoRegister();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventOnCurrentAmmoChanged_Parms
		{
			int32 currentAmmoInMagazine;
			int32 totalAmmo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmmoInMagazine;
		static const UECodeGen_Private::FIntPropertyParams NewProp_totalAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_currentAmmoInMagazine = { "currentAmmoInMagazine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnCurrentAmmoChanged_Parms, currentAmmoInMagazine), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnCurrentAmmoChanged_Parms, totalAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_currentAmmoInMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_totalAmmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnCurrentAmmoChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnCurrentAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnCurrentAmmoChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCurrentAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentAmmoChanged, int32 currentAmmoInMagazine, int32 totalAmmo)
{
	struct _Script_InventorySystem_eventOnCurrentAmmoChanged_Parms
	{
		int32 currentAmmoInMagazine;
		int32 totalAmmo;
	};
	_Script_InventorySystem_eventOnCurrentAmmoChanged_Parms Parms;
	Parms.currentAmmoInMagazine=currentAmmoInMagazine;
	Parms.totalAmmo=totalAmmo;
	OnCurrentAmmoChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFShootingComponent::execSetUseMagazine)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseMagazine(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetUseMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execPlayMuzzleEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMuzzleEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetTotalAmmoCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalAmmoCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetCurrentAmmoInMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmoInMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetTotalEquippedAmmoCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalEquippedAmmoCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetAmmoMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmmoMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetAllowedProjectiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<AACFProjectile> >*)Z_Param__Result=P_THIS->GetAllowedProjectiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetShootingMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetShootingMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetProjectileStartSocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetProjectileStartSocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetShootingSocketPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetShootingSocketPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execTryGetAllowedAmmoFromInventory)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_outAmmoSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetAllowedAmmoFromInventory(Z_Param_Out_outAmmoSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execIsFullMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFullMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execNeedsReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execCanUseProjectile)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFProjectile> ,Z_Param_Out_projectileClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseProjectile(Z_Param_Out_projectileClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execCanShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execTryEquipAmmoFromInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryEquipAmmoFromInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execReload)
	{
		P_GET_UBOOL(Z_Param_bTryToEquipAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload_Implementation(Z_Param_bTryToEquipAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execReduceAmmoMagazine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceAmmoMagazine_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execSwipeTraceShootAtDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwipeTraceShootAtDirection(Z_Param_Out_start,Z_Param_Out_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execShootAtDirection)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_GET_OBJECT(UClass,Z_Param_projectileOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootAtDirection(Z_Param_Out_direction,Z_Param_charge,Z_Param_projectileOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execShootAtActor)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_randomDeviation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_charge);
		P_GET_OBJECT(UClass,Z_Param_projectileOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootAtActor(Z_Param_target,Z_Param_randomDeviation,Z_Param_charge,Z_Param_projectileOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execGetProjectileSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectileSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execReinitializeShootingComponent)
	{
		P_GET_OBJECT(APawn,Z_Param_inOwner);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_inStartSocket);
		P_GET_STRUCT_REF(FImpactFX,Z_Param_Out_inShootingFX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeShootingComponent(Z_Param_inOwner,Z_Param_inMesh,Z_Param_inStartSocket,Z_Param_Out_inShootingFX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execSetupShootingComponent)
	{
		P_GET_OBJECT(APawn,Z_Param_inOwner);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetupShootingComponent_Validate(Z_Param_inOwner,Z_Param_inMesh))
		{
			RPC_ValidateFailed(TEXT("SetupShootingComponent_Validate"));
			return;
		}
		P_THIS->SetupShootingComponent_Implementation(Z_Param_inOwner,Z_Param_inMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execInternal_SetupComponent)
	{
		P_GET_OBJECT(APawn,Z_Param_inOwner);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Internal_SetupComponent_Validate(Z_Param_inOwner,Z_Param_inMesh))
		{
			RPC_ValidateFailed(TEXT("Internal_SetupComponent_Validate"));
			return;
		}
		P_THIS->Internal_SetupComponent_Implementation(Z_Param_inOwner,Z_Param_inMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFShootingComponent::execOnRep_currentMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_currentMagazine();
		P_NATIVE_END;
	}
	struct ACFShootingComponent_eventInternal_SetupComponent_Parms
	{
		APawn* inOwner;
		UMeshComponent* inMesh;
	};
	struct ACFShootingComponent_eventReduceAmmoMagazine_Parms
	{
		int32 amount;
	};
	struct ACFShootingComponent_eventReload_Parms
	{
		bool bTryToEquipAmmo;
	};
	struct ACFShootingComponent_eventSetupShootingComponent_Parms
	{
		APawn* inOwner;
		UMeshComponent* inMesh;
	};
	static FName NAME_UACFShootingComponent_Internal_SetupComponent = FName(TEXT("Internal_SetupComponent"));
	void UACFShootingComponent::Internal_SetupComponent(APawn* inOwner, UMeshComponent* inMesh)
	{
		ACFShootingComponent_eventInternal_SetupComponent_Parms Parms;
		Parms.inOwner=inOwner;
		Parms.inMesh=inMesh;
		ProcessEvent(FindFunctionChecked(NAME_UACFShootingComponent_Internal_SetupComponent),&Parms);
	}
	static FName NAME_UACFShootingComponent_PlayMuzzleEffect = FName(TEXT("PlayMuzzleEffect"));
	void UACFShootingComponent::PlayMuzzleEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFShootingComponent_PlayMuzzleEffect),NULL);
	}
	static FName NAME_UACFShootingComponent_ReduceAmmoMagazine = FName(TEXT("ReduceAmmoMagazine"));
	void UACFShootingComponent::ReduceAmmoMagazine(int32 amount)
	{
		ACFShootingComponent_eventReduceAmmoMagazine_Parms Parms;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_UACFShootingComponent_ReduceAmmoMagazine),&Parms);
	}
	static FName NAME_UACFShootingComponent_Reload = FName(TEXT("Reload"));
	void UACFShootingComponent::Reload(bool bTryToEquipAmmo)
	{
		ACFShootingComponent_eventReload_Parms Parms;
		Parms.bTryToEquipAmmo=bTryToEquipAmmo ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFShootingComponent_Reload),&Parms);
	}
	static FName NAME_UACFShootingComponent_SetupShootingComponent = FName(TEXT("SetupShootingComponent"));
	void UACFShootingComponent::SetupShootingComponent(APawn* inOwner, UMeshComponent* inMesh)
	{
		ACFShootingComponent_eventSetupShootingComponent_Parms Parms;
		Parms.inOwner=inOwner;
		Parms.inMesh=inMesh;
		ProcessEvent(FindFunctionChecked(NAME_UACFShootingComponent_SetupShootingComponent),&Parms);
	}
	void UACFShootingComponent::StaticRegisterNativesUACFShootingComponent()
	{
		UClass* Class = UACFShootingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanShoot", &UACFShootingComponent::execCanShoot },
			{ "CanUseProjectile", &UACFShootingComponent::execCanUseProjectile },
			{ "GetAllowedProjectiles", &UACFShootingComponent::execGetAllowedProjectiles },
			{ "GetAmmoMagazine", &UACFShootingComponent::execGetAmmoMagazine },
			{ "GetCurrentAmmoInMagazine", &UACFShootingComponent::execGetCurrentAmmoInMagazine },
			{ "GetProjectileSpeed", &UACFShootingComponent::execGetProjectileSpeed },
			{ "GetProjectileStartSocketName", &UACFShootingComponent::execGetProjectileStartSocketName },
			{ "GetShootingMesh", &UACFShootingComponent::execGetShootingMesh },
			{ "GetShootingSocketPosition", &UACFShootingComponent::execGetShootingSocketPosition },
			{ "GetTotalAmmoCount", &UACFShootingComponent::execGetTotalAmmoCount },
			{ "GetTotalEquippedAmmoCount", &UACFShootingComponent::execGetTotalEquippedAmmoCount },
			{ "GetUseMagazine", &UACFShootingComponent::execGetUseMagazine },
			{ "Internal_SetupComponent", &UACFShootingComponent::execInternal_SetupComponent },
			{ "IsFullMagazine", &UACFShootingComponent::execIsFullMagazine },
			{ "NeedsReload", &UACFShootingComponent::execNeedsReload },
			{ "OnRep_currentMagazine", &UACFShootingComponent::execOnRep_currentMagazine },
			{ "PlayMuzzleEffect", &UACFShootingComponent::execPlayMuzzleEffect },
			{ "ReduceAmmoMagazine", &UACFShootingComponent::execReduceAmmoMagazine },
			{ "ReinitializeShootingComponent", &UACFShootingComponent::execReinitializeShootingComponent },
			{ "Reload", &UACFShootingComponent::execReload },
			{ "SetupShootingComponent", &UACFShootingComponent::execSetupShootingComponent },
			{ "SetUseMagazine", &UACFShootingComponent::execSetUseMagazine },
			{ "ShootAtActor", &UACFShootingComponent::execShootAtActor },
			{ "ShootAtDirection", &UACFShootingComponent::execShootAtDirection },
			{ "SwipeTraceShootAtDirection", &UACFShootingComponent::execSwipeTraceShootAtDirection },
			{ "TryEquipAmmoFromInventory", &UACFShootingComponent::execTryEquipAmmoFromInventory },
			{ "TryGetAllowedAmmoFromInventory", &UACFShootingComponent::execTryGetAllowedAmmoFromInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics
	{
		struct ACFShootingComponent_eventCanShoot_Parms
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
	void Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventCanShoot_Parms), &Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "CanShoot", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::ACFShootingComponent_eventCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::ACFShootingComponent_eventCanShoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_CanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_CanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics
	{
		struct ACFShootingComponent_eventCanUseProjectile_Parms
		{
			const TSubclassOf<AACFProjectile>  projectileClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_projectileClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventCanUseProjectile_Parms, projectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_projectileClass_MetaData), Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_projectileClass_MetaData) };
	void Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventCanUseProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventCanUseProjectile_Parms), &Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_projectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "CanUseProjectile", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::ACFShootingComponent_eventCanUseProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::ACFShootingComponent_eventCanUseProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics
	{
		struct ACFShootingComponent_eventGetAllowedProjectiles_Parms
		{
			TArray<TSubclassOf<AACFProjectile> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetAllowedProjectiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetAllowedProjectiles", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::ACFShootingComponent_eventGetAllowedProjectiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::ACFShootingComponent_eventGetAllowedProjectiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics
	{
		struct ACFShootingComponent_eventGetAmmoMagazine_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetAmmoMagazine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetAmmoMagazine", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::ACFShootingComponent_eventGetAmmoMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::ACFShootingComponent_eventGetAmmoMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics
	{
		struct ACFShootingComponent_eventGetCurrentAmmoInMagazine_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetCurrentAmmoInMagazine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetCurrentAmmoInMagazine", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::ACFShootingComponent_eventGetCurrentAmmoInMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::ACFShootingComponent_eventGetCurrentAmmoInMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics
	{
		struct ACFShootingComponent_eventGetProjectileSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetProjectileSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetProjectileSpeed", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::ACFShootingComponent_eventGetProjectileSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::ACFShootingComponent_eventGetProjectileSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics
	{
		struct ACFShootingComponent_eventGetProjectileStartSocketName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetProjectileStartSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetProjectileStartSocketName", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::ACFShootingComponent_eventGetProjectileStartSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::ACFShootingComponent_eventGetProjectileStartSocketName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics
	{
		struct ACFShootingComponent_eventGetShootingMesh_Parms
		{
			UMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetShootingMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetShootingMesh", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::ACFShootingComponent_eventGetShootingMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::ACFShootingComponent_eventGetShootingMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics
	{
		struct ACFShootingComponent_eventGetShootingSocketPosition_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetShootingSocketPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetShootingSocketPosition", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::ACFShootingComponent_eventGetShootingSocketPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::ACFShootingComponent_eventGetShootingSocketPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics
	{
		struct ACFShootingComponent_eventGetTotalAmmoCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetTotalAmmoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetTotalAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::ACFShootingComponent_eventGetTotalAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::ACFShootingComponent_eventGetTotalAmmoCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics
	{
		struct ACFShootingComponent_eventGetTotalEquippedAmmoCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventGetTotalEquippedAmmoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetTotalEquippedAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::ACFShootingComponent_eventGetTotalEquippedAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::ACFShootingComponent_eventGetTotalEquippedAmmoCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics
	{
		struct ACFShootingComponent_eventGetUseMagazine_Parms
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
	void Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventGetUseMagazine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventGetUseMagazine_Parms), &Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "GetUseMagazine", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::ACFShootingComponent_eventGetUseMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::ACFShootingComponent_eventGetUseMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inOwner = { "inOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventInternal_SetupComponent_Parms, inOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inMesh = { "inMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventInternal_SetupComponent_Parms, inMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inMesh_MetaData), Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::NewProp_inMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "Internal_SetupComponent", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::PropPointers), sizeof(ACFShootingComponent_eventInternal_SetupComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFShootingComponent_eventInternal_SetupComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics
	{
		struct ACFShootingComponent_eventIsFullMagazine_Parms
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
	void Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventIsFullMagazine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventIsFullMagazine_Parms), &Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "IsFullMagazine", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::ACFShootingComponent_eventIsFullMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::ACFShootingComponent_eventIsFullMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics
	{
		struct ACFShootingComponent_eventNeedsReload_Parms
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
	void Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventNeedsReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventNeedsReload_Parms), &Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "NeedsReload", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::ACFShootingComponent_eventNeedsReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::ACFShootingComponent_eventNeedsReload_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_NeedsReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_NeedsReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "OnRep_currentMagazine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "PlayMuzzleEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventReduceAmmoMagazine_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "ReduceAmmoMagazine", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::PropPointers), sizeof(ACFShootingComponent_eventReduceAmmoMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFShootingComponent_eventReduceAmmoMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics
	{
		struct ACFShootingComponent_eventReinitializeShootingComponent_Parms
		{
			APawn* inOwner;
			UMeshComponent* inMesh;
			FName inStartSocket;
			FImpactFX inShootingFX;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_inStartSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inShootingFX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inShootingFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inOwner = { "inOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventReinitializeShootingComponent_Parms, inOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inMesh = { "inMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventReinitializeShootingComponent_Parms, inMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inMesh_MetaData), Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inMesh_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inStartSocket = { "inStartSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventReinitializeShootingComponent_Parms, inStartSocket), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inShootingFX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inShootingFX = { "inShootingFX", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventReinitializeShootingComponent_Parms, inShootingFX), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inShootingFX_MetaData), Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inShootingFX_MetaData) }; // 1796853546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inStartSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::NewProp_inShootingFX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "ReinitializeShootingComponent", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::ACFShootingComponent_eventReinitializeShootingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::ACFShootingComponent_eventReinitializeShootingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_Reload_Statics
	{
		static void NewProp_bTryToEquipAmmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToEquipAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::NewProp_bTryToEquipAmmo_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventReload_Parms*)Obj)->bTryToEquipAmmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::NewProp_bTryToEquipAmmo = { "bTryToEquipAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventReload_Parms), &Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::NewProp_bTryToEquipAmmo_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::NewProp_bTryToEquipAmmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Fills the magazine with ammos. If TryToEquipAmmo is set to true\n    it will try to reload also using ammos not in the equipment, taking them from\n    the inventory*/" },
		{ "CPP_Default_bTryToEquipAmmo", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
		{ "ToolTip", "Fills the magazine with ammos. If TryToEquipAmmo is set to true\n    it will try to reload also using ammos not in the equipment, taking them from\n    the inventory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "Reload", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::PropPointers), sizeof(ACFShootingComponent_eventReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFShootingComponent_eventReload_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inOwner = { "inOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventSetupShootingComponent_Parms, inOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inMesh = { "inMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventSetupShootingComponent_Parms, inMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inMesh_MetaData), Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::NewProp_inMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "SetupShootingComponent", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::PropPointers), sizeof(ACFShootingComponent_eventSetupShootingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFShootingComponent_eventSetupShootingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics
	{
		struct ACFShootingComponent_eventSetUseMagazine_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::NewProp_val_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventSetUseMagazine_Parms*)Obj)->val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventSetUseMagazine_Parms), &Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::NewProp_val_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "SetUseMagazine", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::ACFShootingComponent_eventSetUseMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::ACFShootingComponent_eventSetUseMagazine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics
	{
		struct ACFShootingComponent_eventShootAtActor_Parms
		{
			const AActor* target;
			float randomDeviation;
			float charge;
			TSubclassOf<AACFProjectile>  projectileOverride;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtActor_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_target_MetaData), Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_target_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_randomDeviation = { "randomDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtActor_Parms, randomDeviation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtActor_Parms, charge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_projectileOverride = { "projectileOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtActor_Parms, projectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_randomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::NewProp_projectileOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_charge", "1.000000" },
		{ "CPP_Default_projectileOverride", "None" },
		{ "CPP_Default_randomDeviation", "5.000000" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "ShootAtActor", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::ACFShootingComponent_eventShootAtActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::ACFShootingComponent_eventShootAtActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_ShootAtActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_ShootAtActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics
	{
		struct ACFShootingComponent_eventShootAtDirection_Parms
		{
			FRotator direction;
			float charge;
			TSubclassOf<AACFProjectile>  projectileOverride;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtDirection_Parms, direction), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_charge = { "charge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtDirection_Parms, charge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_projectileOverride = { "projectileOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventShootAtDirection_Parms, projectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::NewProp_projectileOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_charge", "1.000000" },
		{ "CPP_Default_projectileOverride", "None" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "ShootAtDirection", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::ACFShootingComponent_eventShootAtDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::ACFShootingComponent_eventShootAtDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics
	{
		struct ACFShootingComponent_eventSwipeTraceShootAtDirection_Parms
		{
			FVector start;
			FVector direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventSwipeTraceShootAtDirection_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_start_MetaData), Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventSwipeTraceShootAtDirection_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "SwipeTraceShootAtDirection", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::ACFShootingComponent_eventSwipeTraceShootAtDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::ACFShootingComponent_eventSwipeTraceShootAtDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics
	{
		struct ACFShootingComponent_eventTryEquipAmmoFromInventory_Parms
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
	void Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventTryEquipAmmoFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventTryEquipAmmoFromInventory_Parms), &Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "TryEquipAmmoFromInventory", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::ACFShootingComponent_eventTryEquipAmmoFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::ACFShootingComponent_eventTryEquipAmmoFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics
	{
		struct ACFShootingComponent_eventTryGetAllowedAmmoFromInventory_Parms
		{
			FInventoryItem outAmmoSlot;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAmmoSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::NewProp_outAmmoSlot = { "outAmmoSlot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFShootingComponent_eventTryGetAllowedAmmoFromInventory_Parms, outAmmoSlot), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 892597640
	void Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFShootingComponent_eventTryGetAllowedAmmoFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFShootingComponent_eventTryGetAllowedAmmoFromInventory_Parms), &Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::NewProp_outAmmoSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFShootingComponent, nullptr, "TryGetAllowedAmmoFromInventory", nullptr, nullptr, Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::ACFShootingComponent_eventTryGetAllowedAmmoFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::ACFShootingComponent_eventTryGetAllowedAmmoFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFShootingComponent);
	UClass* Z_Construct_UClass_UACFShootingComponent_NoRegister()
	{
		return UACFShootingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFShootingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileStartSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileStartSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingEffect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShootingEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeAmmo_MetaData[];
#endif
		static void NewProp_bConsumeAmmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoSlot;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedProjectiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedProjectiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedProjectiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMagazine_MetaData[];
#endif
		static void NewProp_bUseMagazine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMagazine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoMagazine_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoMagazine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClassBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClassBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileShotSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileShotSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shootingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMagazine_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentMagazine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentAmmoChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentAmmoChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFShootingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFShootingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFShootingComponent_CanShoot, "CanShoot" }, // 2796597730
		{ &Z_Construct_UFunction_UACFShootingComponent_CanUseProjectile, "CanUseProjectile" }, // 2477374491
		{ &Z_Construct_UFunction_UACFShootingComponent_GetAllowedProjectiles, "GetAllowedProjectiles" }, // 1434133174
		{ &Z_Construct_UFunction_UACFShootingComponent_GetAmmoMagazine, "GetAmmoMagazine" }, // 2402935917
		{ &Z_Construct_UFunction_UACFShootingComponent_GetCurrentAmmoInMagazine, "GetCurrentAmmoInMagazine" }, // 1182896297
		{ &Z_Construct_UFunction_UACFShootingComponent_GetProjectileSpeed, "GetProjectileSpeed" }, // 3483862282
		{ &Z_Construct_UFunction_UACFShootingComponent_GetProjectileStartSocketName, "GetProjectileStartSocketName" }, // 2519113543
		{ &Z_Construct_UFunction_UACFShootingComponent_GetShootingMesh, "GetShootingMesh" }, // 1368172426
		{ &Z_Construct_UFunction_UACFShootingComponent_GetShootingSocketPosition, "GetShootingSocketPosition" }, // 1526742260
		{ &Z_Construct_UFunction_UACFShootingComponent_GetTotalAmmoCount, "GetTotalAmmoCount" }, // 1124870646
		{ &Z_Construct_UFunction_UACFShootingComponent_GetTotalEquippedAmmoCount, "GetTotalEquippedAmmoCount" }, // 3705024797
		{ &Z_Construct_UFunction_UACFShootingComponent_GetUseMagazine, "GetUseMagazine" }, // 3432798340
		{ &Z_Construct_UFunction_UACFShootingComponent_Internal_SetupComponent, "Internal_SetupComponent" }, // 841997972
		{ &Z_Construct_UFunction_UACFShootingComponent_IsFullMagazine, "IsFullMagazine" }, // 1833669794
		{ &Z_Construct_UFunction_UACFShootingComponent_NeedsReload, "NeedsReload" }, // 1008348277
		{ &Z_Construct_UFunction_UACFShootingComponent_OnRep_currentMagazine, "OnRep_currentMagazine" }, // 2757553365
		{ &Z_Construct_UFunction_UACFShootingComponent_PlayMuzzleEffect, "PlayMuzzleEffect" }, // 4030117121
		{ &Z_Construct_UFunction_UACFShootingComponent_ReduceAmmoMagazine, "ReduceAmmoMagazine" }, // 1556004195
		{ &Z_Construct_UFunction_UACFShootingComponent_ReinitializeShootingComponent, "ReinitializeShootingComponent" }, // 4088662099
		{ &Z_Construct_UFunction_UACFShootingComponent_Reload, "Reload" }, // 981259693
		{ &Z_Construct_UFunction_UACFShootingComponent_SetupShootingComponent, "SetupShootingComponent" }, // 2862821453
		{ &Z_Construct_UFunction_UACFShootingComponent_SetUseMagazine, "SetUseMagazine" }, // 232257011
		{ &Z_Construct_UFunction_UACFShootingComponent_ShootAtActor, "ShootAtActor" }, // 1828694690
		{ &Z_Construct_UFunction_UACFShootingComponent_ShootAtDirection, "ShootAtDirection" }, // 2041195932
		{ &Z_Construct_UFunction_UACFShootingComponent_SwipeTraceShootAtDirection, "SwipeTraceShootAtDirection" }, // 2633937841
		{ &Z_Construct_UFunction_UACFShootingComponent_TryEquipAmmoFromInventory, "TryEquipAmmoFromInventory" }, // 4277595549
		{ &Z_Construct_UFunction_UACFShootingComponent_TryGetAllowedAmmoFromInventory, "TryGetAllowedAmmoFromInventory" }, // 250986033
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFShootingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileStartSocket_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileStartSocket = { "ProjectileStartSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, ProjectileStartSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileStartSocket_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileStartSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootingEffect_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootingEffect = { "ShootingEffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, ShootingEffect), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootingEffect_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootingEffect_MetaData) }; // 1796853546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo_MetaData[] = {
		{ "Category", "ACF | Ammo" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo_SetBit(void* Obj)
	{
		((UACFShootingComponent*)Obj)->bConsumeAmmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo = { "bConsumeAmmo", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFShootingComponent), &Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoSlot_MetaData[] = {
		{ "Category", "ACF | Ammo" },
		{ "EditCondition", "bConsumeAmmo" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoSlot = { "AmmoSlot", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, AmmoSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoSlot_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoSlot_MetaData) }; // 2083603574
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles_Inner = { "AllowedProjectiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles_MetaData[] = {
		{ "Category", "ACF | Ammo" },
		{ "EditCondition", "bConsumeAmmo" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles = { "AllowedProjectiles", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, AllowedProjectiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine_MetaData[] = {
		{ "Category", "ACF | Ammo" },
		{ "Comment", "/*If this is set to true means that this weapon will need to be Reload every time his ammo in \n    magazine are 0 to continue shooting. */" },
		{ "EditCondition", "bConsumeAmmo" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
		{ "ToolTip", "If this is set to true means that this weapon will need to be Reload every time his ammo in\n    magazine are 0 to continue shooting." },
	};
#endif
	void Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine_SetBit(void* Obj)
	{
		((UACFShootingComponent*)Obj)->bUseMagazine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine = { "bUseMagazine", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFShootingComponent), &Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoMagazine_MetaData[] = {
		{ "Category", "ACF | Ammo" },
		{ "EditCondition", "bUseMagazine" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoMagazine = { "AmmoMagazine", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, AmmoMagazine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoMagazine_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoMagazine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileClassBP_MetaData[] = {
		{ "Category", "ACF | Ammo" },
		{ "EditCondition", "bConsumeAmmo == false" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileClassBP = { "ProjectileClassBP", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, ProjectileClassBP), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileClassBP_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileClassBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileShotSpeed_MetaData[] = {
		{ "Category", "ACF | Projectile Shoot Config" },
		{ "Comment", "/*Speed at wich the projectile is shot*/" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
		{ "ToolTip", "Speed at wich the projectile is shot" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileShotSpeed = { "ProjectileShotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, ProjectileShotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileShotSpeed_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileShotSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRadius_MetaData[] = {
		{ "Category", "ACF | SwipeTrace Shoot Config" },
		{ "Comment", "/*Radius of the shooting trace. 0 means linetrace*/" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
		{ "ToolTip", "Radius of the shooting trace. 0 means linetrace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRadius = { "ShootRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, ShootRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRadius_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRange_MetaData[] = {
		{ "Category", "ACF | SwipeTrace Shoot Config" },
		{ "Comment", "/*Distance at which the trace is done*/" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
		{ "ToolTip", "Distance at which the trace is done" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRange = { "ShootRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, ShootRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRange_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_shootingMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_shootingMesh = { "shootingMesh", nullptr, (EPropertyFlags)0x0040000000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, shootingMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_shootingMesh_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_shootingMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_characterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_characterOwner = { "characterOwner", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, characterOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_characterOwner_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_characterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_currentMagazine_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_currentMagazine = { "currentMagazine", "OnRep_currentMagazine", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, currentMagazine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_currentMagazine_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_currentMagazine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_OnCurrentAmmoChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFShootingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_OnCurrentAmmoChanged = { "OnCurrentAmmoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootingComponent, OnCurrentAmmoChanged), Z_Construct_UDelegateFunction_InventorySystem_OnCurrentAmmoChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_OnCurrentAmmoChanged_MetaData), Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_OnCurrentAmmoChanged_MetaData) }; // 2142354734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFShootingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileStartSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootingEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bConsumeAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AllowedProjectiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_bUseMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_AmmoMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileClassBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ProjectileShotSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_ShootRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_shootingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_characterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_currentMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootingComponent_Statics::NewProp_OnCurrentAmmoChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFShootingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFShootingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFShootingComponent_Statics::ClassParams = {
		&UACFShootingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFShootingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFShootingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFShootingComponent()
	{
		if (!Z_Registration_Info_UClass_UACFShootingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFShootingComponent.OuterSingleton, Z_Construct_UClass_UACFShootingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFShootingComponent.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFShootingComponent>()
	{
		return UACFShootingComponent::StaticClass();
	}

	void UACFShootingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_shootingMesh(TEXT("shootingMesh"));
		static const FName Name_characterOwner(TEXT("characterOwner"));
		static const FName Name_currentMagazine(TEXT("currentMagazine"));

		const bool bIsValid = true
			&& Name_shootingMesh == ClassReps[(int32)ENetFields_Private::shootingMesh].Property->GetFName()
			&& Name_characterOwner == ClassReps[(int32)ENetFields_Private::characterOwner].Property->GetFName()
			&& Name_currentMagazine == ClassReps[(int32)ENetFields_Private::currentMagazine].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFShootingComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFShootingComponent);
	UACFShootingComponent::~UACFShootingComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFShootingComponent, UACFShootingComponent::StaticClass, TEXT("UACFShootingComponent"), &Z_Registration_Info_UClass_UACFShootingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFShootingComponent), 1303722597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_3188905755(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

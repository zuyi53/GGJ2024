// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsSystem/Public/ACFUnitTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUnitTypes() {}
// Cross Module References
	UNITSSYSTEM_API UEnum* Z_Construct_UEnum_UnitsSystem_EConqueredState();
	UPackage* Z_Construct_UPackage__Script_UnitsSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConqueredState;
	static UEnum* EConqueredState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConqueredState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConqueredState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnitsSystem_EConqueredState, (UObject*)Z_Construct_UPackage__Script_UnitsSystem(), TEXT("EConqueredState"));
		}
		return Z_Registration_Info_UEnum_EConqueredState.OuterSingleton;
	}
	template<> UNITSSYSTEM_API UEnum* StaticEnum<EConqueredState>()
	{
		return EConqueredState_StaticEnum();
	}
	struct Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::Enumerators[] = {
		{ "EConqueredState::ENotConquered", (int64)EConqueredState::ENotConquered },
		{ "EConqueredState::EConquerStart", (int64)EConqueredState::EConquerStart },
		{ "EConqueredState::EConquerInProgress", (int64)EConqueredState::EConquerInProgress },
		{ "EConqueredState::EConquered", (int64)EConqueredState::EConquered },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "EConquered.Comment", "/**\n * \n */" },
		{ "EConquered.DisplayName", "Conquered" },
		{ "EConquered.Name", "EConqueredState::EConquered" },
		{ "EConquerInProgress.Comment", "/**\n * \n */" },
		{ "EConquerInProgress.DisplayName", "Conquer In Progress" },
		{ "EConquerInProgress.Name", "EConqueredState::EConquerInProgress" },
		{ "EConquerStart.Comment", "/**\n * \n */" },
		{ "EConquerStart.DisplayName", "Conquer Setup" },
		{ "EConquerStart.Name", "EConqueredState::EConquerStart" },
		{ "ENotConquered.Comment", "/**\n * \n */" },
		{ "ENotConquered.DisplayName", "Not Conquered" },
		{ "ENotConquered.Name", "EConqueredState::ENotConquered" },
		{ "ModuleRelativePath", "Public/ACFUnitTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnitsSystem,
		nullptr,
		"EConqueredState",
		"EConqueredState",
		Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnitsSystem_EConqueredState()
	{
		if (!Z_Registration_Info_UEnum_EConqueredState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConqueredState.InnerSingleton, Z_Construct_UEnum_UnitsSystem_EConqueredState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConqueredState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitTypes_h_Statics::EnumInfo[] = {
		{ EConqueredState_StaticEnum, TEXT("EConqueredState"), &Z_Registration_Info_UEnum_EConqueredState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4082868624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitTypes_h_2829459177(TEXT("/Script/UnitsSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

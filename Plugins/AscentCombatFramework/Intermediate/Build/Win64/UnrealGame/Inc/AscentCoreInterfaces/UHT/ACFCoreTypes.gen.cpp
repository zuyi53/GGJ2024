// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFCoreTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCoreTypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFCoreTypes();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFCoreTypes_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EBattleType();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FACFStruct();
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCoreInterfaces();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
	static UEnum* ETeam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCoreInterfaces_ETeam, (UObject*)Z_Construct_UPackage__Script_AscentCoreInterfaces(), TEXT("ETeam"));
		}
		return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::Enumerators[] = {
		{ "ETeam::ETeam1", (int64)ETeam::ETeam1 },
		{ "ETeam::ETeam2", (int64)ETeam::ETeam2 },
		{ "ETeam::ETeam3", (int64)ETeam::ETeam3 },
		{ "ETeam::ETeam4", (int64)ETeam::ETeam4 },
		{ "ETeam::ENeutral", (int64)ETeam::ENeutral },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ENeutral.Comment", "/**\n *\n */" },
		{ "ENeutral.DisplayName", "Neutral" },
		{ "ENeutral.Name", "ETeam::ENeutral" },
		{ "ETeam1.Comment", "/**\n *\n */" },
		{ "ETeam1.DisplayName", "Team 1" },
		{ "ETeam1.Name", "ETeam::ETeam1" },
		{ "ETeam2.Comment", "/**\n *\n */" },
		{ "ETeam2.DisplayName", "Team 2" },
		{ "ETeam2.Name", "ETeam::ETeam2" },
		{ "ETeam3.Comment", "/**\n *\n */" },
		{ "ETeam3.DisplayName", "Team 3" },
		{ "ETeam3.Name", "ETeam::ETeam3" },
		{ "ETeam4.Comment", "/**\n *\n */" },
		{ "ETeam4.DisplayName", "Team 4" },
		{ "ETeam4.Name", "ETeam::ETeam4" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
		nullptr,
		"ETeam",
		"ETeam",
		Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam()
	{
		if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_AscentCoreInterfaces_ETeam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBattleType;
	static UEnum* EBattleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBattleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBattleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCoreInterfaces_EBattleType, (UObject*)Z_Construct_UPackage__Script_AscentCoreInterfaces(), TEXT("EBattleType"));
		}
		return Z_Registration_Info_UEnum_EBattleType.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UEnum* StaticEnum<EBattleType>()
	{
		return EBattleType_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::Enumerators[] = {
		{ "EBattleType::ETeamBased", (int64)EBattleType::ETeamBased },
		{ "EBattleType::EEveryoneAgainstEveryone", (int64)EBattleType::EEveryoneAgainstEveryone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EEveryoneAgainstEveryone.DisplayName", "Everyone Against Everyone" },
		{ "EEveryoneAgainstEveryone.Name", "EBattleType::EEveryoneAgainstEveryone" },
		{ "ETeamBased.DisplayName", "Team Based" },
		{ "ETeamBased.Name", "EBattleType::ETeamBased" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
		nullptr,
		"EBattleType",
		"EBattleType",
		Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EBattleType()
	{
		if (!Z_Registration_Info_UEnum_EBattleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBattleType.InnerSingleton, Z_Construct_UEnum_AscentCoreInterfaces_EBattleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBattleType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TeamInfo;
class UScriptStruct* FTeamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TeamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TeamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamInfo, (UObject*)Z_Construct_UPackage__Script_AscentCoreInterfaces(), TEXT("TeamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TeamInfo.OuterSingleton;
}
template<> ASCENTCOREINTERFACES_API UScriptStruct* StaticStruct<FTeamInfo>()
{
	return FTeamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTeamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Relationship_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Relationship_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Relationship_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Relationship_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Relationship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockingCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingCollisionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_DisplayName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_ValueProp = { "Relationship", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 1739044789
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_Key_KeyProp = { "Relationship_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, Relationship), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_MetaData), Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_MetaData) }; // 2489062856 1739044789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_CollisionChannel_MetaData), Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_CollisionChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_BlockingCollisionChannel_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_BlockingCollisionChannel = { "BlockingCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, BlockingCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_BlockingCollisionChannel_MetaData), Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_BlockingCollisionChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Relationship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_BlockingCollisionChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
		nullptr,
		&NewStructOps,
		"TeamInfo",
		Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers),
		sizeof(FTeamInfo),
		alignof(FTeamInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TeamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TeamInfo.InnerSingleton, Z_Construct_UScriptStruct_FTeamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TeamInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ACFStruct;
class UScriptStruct* FACFStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ACFStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ACFStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFStruct, (UObject*)Z_Construct_UPackage__Script_AscentCoreInterfaces(), TEXT("ACFStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ACFStruct.OuterSingleton;
}
template<> ASCENTCOREINTERFACES_API UScriptStruct* StaticStruct<FACFStruct>()
{
	return FACFStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FACFStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFStruct_Statics::NewProp_TagName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFStruct_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FACFStruct, TagName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFStruct_Statics::NewProp_TagName_MetaData), Z_Construct_UScriptStruct_FACFStruct_Statics::NewProp_TagName_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFStruct_Statics::NewProp_TagName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
		nullptr,
		&NewStructOps,
		"ACFStruct",
		Z_Construct_UScriptStruct_FACFStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFStruct_Statics::PropPointers),
		sizeof(FACFStruct),
		alignof(FACFStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FACFStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FACFStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ACFStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ACFStruct.InnerSingleton, Z_Construct_UScriptStruct_FACFStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ACFStruct.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EACFDirection;
	static UEnum* EACFDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EACFDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EACFDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, (UObject*)Z_Construct_UPackage__Script_AscentCoreInterfaces(), TEXT("EACFDirection"));
		}
		return Z_Registration_Info_UEnum_EACFDirection.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UEnum* StaticEnum<EACFDirection>()
	{
		return EACFDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::Enumerators[] = {
		{ "EACFDirection::Front", (int64)EACFDirection::Front },
		{ "EACFDirection::Back", (int64)EACFDirection::Back },
		{ "EACFDirection::Left", (int64)EACFDirection::Left },
		{ "EACFDirection::Right", (int64)EACFDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "EACFDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Front.Name", "EACFDirection::Front" },
		{ "Left.Name", "EACFDirection::Left" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
		{ "Right.Name", "EACFDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
		nullptr,
		"EACFDirection",
		"EACFDirection",
		Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection()
	{
		if (!Z_Registration_Info_UEnum_EACFDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EACFDirection.InnerSingleton, Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EACFDirection.InnerSingleton;
	}
	void UACFCoreTypes::StaticRegisterNativesUACFCoreTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCoreTypes);
	UClass* Z_Construct_UClass_UACFCoreTypes_NoRegister()
	{
		return UACFCoreTypes::StaticClass();
	}
	struct Z_Construct_UClass_UACFCoreTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCoreTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFCoreTypes.h" },
		{ "ModuleRelativePath", "Public/ACFCoreTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCoreTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCoreTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCoreTypes_Statics::ClassParams = {
		&UACFCoreTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCoreTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFCoreTypes()
	{
		if (!Z_Registration_Info_UClass_UACFCoreTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCoreTypes.OuterSingleton, Z_Construct_UClass_UACFCoreTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCoreTypes.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UClass* StaticClass<UACFCoreTypes>()
	{
		return UACFCoreTypes::StaticClass();
	}
	UACFCoreTypes::UACFCoreTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCoreTypes);
	UACFCoreTypes::~UACFCoreTypes() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2489062856U) },
		{ EBattleType_StaticEnum, TEXT("EBattleType"), &Z_Registration_Info_UEnum_EBattleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151822261U) },
		{ EACFDirection_StaticEnum, TEXT("EACFDirection"), &Z_Registration_Info_UEnum_EACFDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1707824474U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::ScriptStructInfo[] = {
		{ FTeamInfo::StaticStruct, Z_Construct_UScriptStruct_FTeamInfo_Statics::NewStructOps, TEXT("TeamInfo"), &Z_Registration_Info_UScriptStruct_TeamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTeamInfo), 2227953295U) },
		{ FACFStruct::StaticStruct, Z_Construct_UScriptStruct_FACFStruct_Statics::NewStructOps, TEXT("ACFStruct"), &Z_Registration_Info_UScriptStruct_ACFStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FACFStruct), 2179320492U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCoreTypes, UACFCoreTypes::StaticClass, TEXT("UACFCoreTypes"), &Z_Registration_Info_UClass_UACFCoreTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCoreTypes), 1724152780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_3717865035(TEXT("/Script/AscentCoreInterfaces"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFCoreTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

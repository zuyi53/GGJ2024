// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSSaveTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSSaveTypes() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveTypes();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveTypes_NoRegister();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSActorData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSActorLoaded();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSBaseData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSComponentData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSLevelData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSObjectData();
	ASCENTSAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FALSPlayerData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSBaseData;
class UScriptStruct* FALSBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSBaseData, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_ALSBaseData.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSBaseData>()
{
	return FALSBaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSBaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alsName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_alsName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSBaseData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSBaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSBaseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSBaseData_Statics::NewProp_alsName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FALSBaseData_Statics::NewProp_alsName = { "alsName", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSBaseData, alsName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSBaseData_Statics::NewProp_alsName_MetaData), Z_Construct_UScriptStruct_FALSBaseData_Statics::NewProp_alsName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSBaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSBaseData_Statics::NewProp_alsName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSBaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		nullptr,
		&NewStructOps,
		"ALSBaseData",
		Z_Construct_UScriptStruct_FALSBaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSBaseData_Statics::PropPointers),
		sizeof(FALSBaseData),
		alignof(FALSBaseData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSBaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSBaseData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSBaseData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSBaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSBaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSBaseData.InnerSingleton, Z_Construct_UScriptStruct_FALSBaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSBaseData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FALSObjectData>() == std::is_polymorphic<FALSBaseData>(), "USTRUCT FALSObjectData cannot be polymorphic unless super FALSBaseData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSObjectData;
class UScriptStruct* FALSObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSObjectData, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_ALSObjectData.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSObjectData>()
{
	return FALSObjectData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSObjectData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSObjectData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Object */" },
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
		{ "ToolTip", "Represents a serialized Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSObjectData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSObjectData, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Class_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSObjectData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSObjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSObjectData_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		Z_Construct_UScriptStruct_FALSBaseData,
		&NewStructOps,
		"ALSObjectData",
		Z_Construct_UScriptStruct_FALSObjectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSObjectData_Statics::PropPointers),
		sizeof(FALSObjectData),
		alignof(FALSObjectData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSObjectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSObjectData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSObjectData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSObjectData()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSObjectData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSObjectData.InnerSingleton, Z_Construct_UScriptStruct_FALSObjectData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSObjectData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FALSComponentData>() == std::is_polymorphic<FALSObjectData>(), "USTRUCT FALSComponentData cannot be polymorphic unless super FALSObjectData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSComponentData;
class UScriptStruct* FALSComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSComponentData, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_ALSComponentData.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSComponentData>()
{
	return FALSComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Component */" },
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
		{ "ToolTip", "Represents a serialized Component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSComponentData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSComponentData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSComponentData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentData_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FALSComponentData_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSComponentData_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		Z_Construct_UScriptStruct_FALSObjectData,
		&NewStructOps,
		"ALSComponentData",
		Z_Construct_UScriptStruct_FALSComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentData_Statics::PropPointers),
		sizeof(FALSComponentData),
		alignof(FALSComponentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSComponentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSComponentData.InnerSingleton, Z_Construct_UScriptStruct_FALSComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSComponentData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FALSActorData>() == std::is_polymorphic<FALSObjectData>(), "USTRUCT FALSActorData cannot be polymorphic unless super FALSObjectData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSActorData;
class UScriptStruct* FALSActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSActorData, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSActorData"));
	}
	return Z_Registration_Info_UScriptStruct_ALSActorData.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSActorData>()
{
	return FALSActorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSActorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentRecords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRecords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentRecords;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSActorData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Actor */" },
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
		{ "ToolTip", "Represents a serialized Actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSActorData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords_Inner = { "ComponentRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FALSComponentData, METADATA_PARAMS(0, nullptr) }; // 1851718406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords = { "ComponentRecords", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSActorData, ComponentRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords_MetaData), Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords_MetaData) }; // 1851718406
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSActorData, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((FALSActorData*)Obj)->bHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSActorData), &Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame_MetaData), Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSActorData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSActorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_ComponentRecords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_bHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSActorData_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		Z_Construct_UScriptStruct_FALSObjectData,
		&NewStructOps,
		"ALSActorData",
		Z_Construct_UScriptStruct_FALSActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::PropPointers),
		sizeof(FALSActorData),
		alignof(FALSActorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSActorData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSActorData()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSActorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSActorData.InnerSingleton, Z_Construct_UScriptStruct_FALSActorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSActorData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FALSLevelData>() == std::is_polymorphic<FALSObjectData>(), "USTRUCT FALSLevelData cannot be polymorphic unless super FALSObjectData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSLevelData;
class UScriptStruct* FALSLevelData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSLevelData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSLevelData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSLevelData, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSLevelData"));
	}
	return Z_Registration_Info_UScriptStruct_ALSLevelData.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSLevelData>()
{
	return FALSLevelData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSLevelData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSLevelData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a level in the world (streaming or persistent) */" },
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
		{ "ToolTip", "Represents a level in the world (streaming or persistent)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSLevelData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FALSActorData, METADATA_PARAMS(0, nullptr) }; // 1096397488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors_MetaData[] = {
		{ "Comment", "/** Records of the World Actors */" },
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
		{ "ToolTip", "Records of the World Actors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSLevelData, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors_MetaData), Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors_MetaData) }; // 1096397488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSLevelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSLevelData_Statics::NewProp_Actors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		Z_Construct_UScriptStruct_FALSObjectData,
		&NewStructOps,
		"ALSLevelData",
		Z_Construct_UScriptStruct_FALSLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLevelData_Statics::PropPointers),
		sizeof(FALSLevelData),
		alignof(FALSLevelData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLevelData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSLevelData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLevelData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSLevelData()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSLevelData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSLevelData.InnerSingleton, Z_Construct_UScriptStruct_FALSLevelData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSLevelData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSActorLoaded;
class UScriptStruct* FALSActorLoaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSActorLoaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSActorLoaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSActorLoaded, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSActorLoaded"));
	}
	return Z_Registration_Info_UScriptStruct_ALSActorLoaded.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSActorLoaded>()
{
	return FALSActorLoaded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSActorLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSActorLoaded_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSActorLoaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSActorLoaded>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSActorLoaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		nullptr,
		&NewStructOps,
		"ALSActorLoaded",
		nullptr,
		0,
		sizeof(FALSActorLoaded),
		alignof(FALSActorLoaded),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSActorLoaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSActorLoaded_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FALSActorLoaded()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSActorLoaded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSActorLoaded.InnerSingleton, Z_Construct_UScriptStruct_FALSActorLoaded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSActorLoaded.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSPlayerData;
class UScriptStruct* FALSPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSPlayerData, (UObject*)Z_Construct_UPackage__Script_AscentSaveSystem(), TEXT("ALSPlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_ALSPlayerData.OuterSingleton;
}
template<> ASCENTSAVESYSTEM_API UScriptStruct* StaticStruct<FALSPlayerData>()
{
	return FALSPlayerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSPlayerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSPlayerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSPlayerData, Pawn), Z_Construct_UScriptStruct_FALSActorData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_Pawn_MetaData), Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_Pawn_MetaData) }; // 1096397488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSPlayerData, PlayerController), Z_Construct_UScriptStruct_FALSActorData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_PlayerController_MetaData), Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_PlayerController_MetaData) }; // 1096397488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewProp_PlayerController,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
		nullptr,
		&NewStructOps,
		"ALSPlayerData",
		Z_Construct_UScriptStruct_FALSPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSPlayerData_Statics::PropPointers),
		sizeof(FALSPlayerData),
		alignof(FALSPlayerData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSPlayerData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSPlayerData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSPlayerData()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSPlayerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FALSPlayerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSPlayerData.InnerSingleton;
	}
	void UALSSaveTypes::StaticRegisterNativesUALSSaveTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSSaveTypes);
	UClass* Z_Construct_UClass_UALSSaveTypes_NoRegister()
	{
		return UALSSaveTypes::StaticClass();
	}
	struct Z_Construct_UClass_UALSSaveTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSSaveTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ALSSaveTypes.h" },
		{ "ModuleRelativePath", "Public/ALSSaveTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSSaveTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSSaveTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSSaveTypes_Statics::ClassParams = {
		&UALSSaveTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSSaveTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UALSSaveTypes()
	{
		if (!Z_Registration_Info_UClass_UALSSaveTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSSaveTypes.OuterSingleton, Z_Construct_UClass_UALSSaveTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSSaveTypes.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSSaveTypes>()
	{
		return UALSSaveTypes::StaticClass();
	}
	UALSSaveTypes::UALSSaveTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSSaveTypes);
	UALSSaveTypes::~UALSSaveTypes() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics::ScriptStructInfo[] = {
		{ FALSBaseData::StaticStruct, Z_Construct_UScriptStruct_FALSBaseData_Statics::NewStructOps, TEXT("ALSBaseData"), &Z_Registration_Info_UScriptStruct_ALSBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSBaseData), 4102342093U) },
		{ FALSObjectData::StaticStruct, Z_Construct_UScriptStruct_FALSObjectData_Statics::NewStructOps, TEXT("ALSObjectData"), &Z_Registration_Info_UScriptStruct_ALSObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSObjectData), 929774525U) },
		{ FALSComponentData::StaticStruct, Z_Construct_UScriptStruct_FALSComponentData_Statics::NewStructOps, TEXT("ALSComponentData"), &Z_Registration_Info_UScriptStruct_ALSComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSComponentData), 1851718406U) },
		{ FALSActorData::StaticStruct, Z_Construct_UScriptStruct_FALSActorData_Statics::NewStructOps, TEXT("ALSActorData"), &Z_Registration_Info_UScriptStruct_ALSActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSActorData), 1096397488U) },
		{ FALSLevelData::StaticStruct, Z_Construct_UScriptStruct_FALSLevelData_Statics::NewStructOps, TEXT("ALSLevelData"), &Z_Registration_Info_UScriptStruct_ALSLevelData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSLevelData), 3047046923U) },
		{ FALSActorLoaded::StaticStruct, Z_Construct_UScriptStruct_FALSActorLoaded_Statics::NewStructOps, TEXT("ALSActorLoaded"), &Z_Registration_Info_UScriptStruct_ALSActorLoaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSActorLoaded), 2377424442U) },
		{ FALSPlayerData::StaticStruct, Z_Construct_UScriptStruct_FALSPlayerData_Statics::NewStructOps, TEXT("ALSPlayerData"), &Z_Registration_Info_UScriptStruct_ALSPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSPlayerData), 1608635447U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSSaveTypes, UALSSaveTypes::StaticClass, TEXT("UALSSaveTypes"), &Z_Registration_Info_UClass_UALSSaveTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSSaveTypes), 1023390454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_1464372627(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

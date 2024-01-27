// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFCommandsManagerComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCommandsManagerComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFBaseCommand_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCommandsManagerComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCommandsManagerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFCommandsManagerComponent::execHasPendingCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPendingCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCommandsManagerComponent::execTerminateCurrentCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TerminateCurrentCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCommandsManagerComponent::execTriggerCommand)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_command);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->TriggerCommand_Validate(Z_Param_command))
		{
			RPC_ValidateFailed(TEXT("TriggerCommand_Validate"));
			return;
		}
		P_THIS->TriggerCommand_Implementation(Z_Param_command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCommandsManagerComponent::execExecutePendingCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ExecutePendingCommand_Validate())
		{
			RPC_ValidateFailed(TEXT("ExecutePendingCommand_Validate"));
			return;
		}
		P_THIS->ExecutePendingCommand_Implementation();
		P_NATIVE_END;
	}
	struct ACFCommandsManagerComponent_eventTriggerCommand_Parms
	{
		FGameplayTag command;
	};
	static FName NAME_UACFCommandsManagerComponent_ExecutePendingCommand = FName(TEXT("ExecutePendingCommand"));
	void UACFCommandsManagerComponent::ExecutePendingCommand()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFCommandsManagerComponent_ExecutePendingCommand),NULL);
	}
	static FName NAME_UACFCommandsManagerComponent_TriggerCommand = FName(TEXT("TriggerCommand"));
	void UACFCommandsManagerComponent::TriggerCommand(FGameplayTag const& command)
	{
		ACFCommandsManagerComponent_eventTriggerCommand_Parms Parms;
		Parms.command=command;
		ProcessEvent(FindFunctionChecked(NAME_UACFCommandsManagerComponent_TriggerCommand),&Parms);
	}
	void UACFCommandsManagerComponent::StaticRegisterNativesUACFCommandsManagerComponent()
	{
		UClass* Class = UACFCommandsManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePendingCommand", &UACFCommandsManagerComponent::execExecutePendingCommand },
			{ "HasPendingCommands", &UACFCommandsManagerComponent::execHasPendingCommands },
			{ "TerminateCurrentCommand", &UACFCommandsManagerComponent::execTerminateCurrentCommand },
			{ "TriggerCommand", &UACFCommandsManagerComponent::execTriggerCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCommandsManagerComponent, nullptr, "ExecutePendingCommand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics
	{
		struct ACFCommandsManagerComponent_eventHasPendingCommands_Parms
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
	void Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCommandsManagerComponent_eventHasPendingCommands_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCommandsManagerComponent_eventHasPendingCommands_Parms), &Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCommandsManagerComponent, nullptr, "HasPendingCommands", nullptr, nullptr, Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::ACFCommandsManagerComponent_eventHasPendingCommands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::ACFCommandsManagerComponent_eventHasPendingCommands_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCommandsManagerComponent, nullptr, "TerminateCurrentCommand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_command_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::NewProp_command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCommandsManagerComponent_eventTriggerCommand_Parms, command), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::NewProp_command_MetaData), Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::NewProp_command_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::NewProp_command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCommandsManagerComponent, nullptr, "TriggerCommand", nullptr, nullptr, Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::PropPointers), sizeof(ACFCommandsManagerComponent_eventTriggerCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCommandsManagerComponent_eventTriggerCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCommandsManagerComponent);
	UClass* Z_Construct_UClass_UACFCommandsManagerComponent_NoRegister()
	{
		return UACFCommandsManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCommandsManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commands_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_commands_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_commands_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commands_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_commands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_controllerOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controllerOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentCommand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCommandsManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCommandsManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCommandsManagerComponent_ExecutePendingCommand, "ExecutePendingCommand" }, // 410722705
		{ &Z_Construct_UFunction_UACFCommandsManagerComponent_HasPendingCommands, "HasPendingCommands" }, // 374901504
		{ &Z_Construct_UFunction_UACFCommandsManagerComponent_TerminateCurrentCommand, "TerminateCurrentCommand" }, // 3539297262
		{ &Z_Construct_UFunction_UACFCommandsManagerComponent_TriggerCommand, "TriggerCommand" }, // 351802220
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCommandsManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFCommandsManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_ValueProp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_ValueProp = { "commands", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UACFBaseCommand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_ValueProp_MetaData), Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_ValueProp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_Key_KeyProp = { "commands_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands = { "commands", nullptr, (EPropertyFlags)0x002008800001000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCommandsManagerComponent, commands), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_MetaData), Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_controllerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_controllerOwner = { "controllerOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCommandsManagerComponent, controllerOwner), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_controllerOwner_MetaData), Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_controllerOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_currentCommand_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCommandsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_currentCommand = { "currentCommand", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCommandsManagerComponent, currentCommand), Z_Construct_UClass_UACFBaseCommand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_currentCommand_MetaData), Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_currentCommand_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCommandsManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_commands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_controllerOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCommandsManagerComponent_Statics::NewProp_currentCommand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCommandsManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCommandsManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCommandsManagerComponent_Statics::ClassParams = {
		&UACFCommandsManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCommandsManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCommandsManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCommandsManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCommandsManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFCommandsManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCommandsManagerComponent.OuterSingleton, Z_Construct_UClass_UACFCommandsManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCommandsManagerComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFCommandsManagerComponent>()
	{
		return UACFCommandsManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCommandsManagerComponent);
	UACFCommandsManagerComponent::~UACFCommandsManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCommandsManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCommandsManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCommandsManagerComponent, UACFCommandsManagerComponent::StaticClass, TEXT("UACFCommandsManagerComponent"), &Z_Registration_Info_UClass_UACFCommandsManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCommandsManagerComponent), 1435604722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCommandsManagerComponent_h_2470047000(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCommandsManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCommandsManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

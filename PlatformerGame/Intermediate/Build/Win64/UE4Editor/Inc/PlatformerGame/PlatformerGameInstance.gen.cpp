// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameInstance() {}
// Cross Module References
	PLATFORMERGAME_API UEnum* Z_Construct_UEnum_PlatformerGame_EInputMode();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	PLATFORMERGAME_API UEnum* Z_Construct_UEnum_PlatformerGame_EGameState();
	PLATFORMERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSearchResult();
	PLATFORMERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionSetting();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_UPlatformerGameInstance_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_UPlatformerGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlatformerGame_EInputMode, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("EInputMode"));
		}
		return Singleton;
	}
	template<> PLATFORMERGAME_API UEnum* StaticEnum<EInputMode>()
	{
		return EInputMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputMode(EInputMode_StaticEnum, TEXT("/Script/PlatformerGame"), TEXT("EInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlatformerGame_EInputMode_Hash() { return 1021005774U; }
	UEnum* Z_Construct_UEnum_PlatformerGame_EInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputMode"), 0, Get_Z_Construct_UEnum_PlatformerGame_EInputMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputMode::EUIOnly", (int64)EInputMode::EUIOnly },
				{ "EInputMode::EUIAndGame", (int64)EInputMode::EUIAndGame },
				{ "EInputMode::EGameOnly", (int64)EInputMode::EGameOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* ENUM TO TRACK INPUT STATES */" },
				{ "EGameOnly.DisplayName", "Game Only" },
				{ "EGameOnly.Name", "EInputMode::EGameOnly" },
				{ "EUIAndGame.DisplayName", "UI And Game" },
				{ "EUIAndGame.Name", "EInputMode::EUIAndGame" },
				{ "EUIOnly.DisplayName", "UI Only" },
				{ "EUIOnly.Name", "EInputMode::EUIOnly" },
				{ "ModuleRelativePath", "PlatformerGameInstance.h" },
				{ "ToolTip", "ENUM TO TRACK INPUT STATES" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlatformerGame,
				nullptr,
				"EInputMode",
				"EInputMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlatformerGame_EGameState, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> PLATFORMERGAME_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/PlatformerGame"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlatformerGame_EGameState_Hash() { return 2600594042U; }
	UEnum* Z_Construct_UEnum_PlatformerGame_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_PlatformerGame_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::ENone", (int64)EGameState::ENone },
				{ "EGameState::ELoadingScreen", (int64)EGameState::ELoadingScreen },
				{ "EGameState::EStartup", (int64)EGameState::EStartup },
				{ "EGameState::EMainMenu", (int64)EGameState::EMainMenu },
				{ "EGameState::EMultiplayerHome", (int64)EGameState::EMultiplayerHome },
				{ "EGameState::EMultiplayerJoin", (int64)EGameState::EMultiplayerJoin },
				{ "EGameState::EMultiplayerHost", (int64)EGameState::EMultiplayerHost },
				{ "EGameState::EMultiplayerInGame", (int64)EGameState::EMultiplayerInGame },
				{ "EGameState::ETravelling", (int64)EGameState::ETravelling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* ENUM FOR CONTROLLING GAME STATE */" },
				{ "ELoadingScreen.DisplayName", "Loading" },
				{ "ELoadingScreen.Name", "EGameState::ELoadingScreen" },
				{ "EMainMenu.DisplayName", "Main Menu" },
				{ "EMainMenu.Name", "EGameState::EMainMenu" },
				{ "EMultiplayerHome.DisplayName", "Multiplayer Home" },
				{ "EMultiplayerHome.Name", "EGameState::EMultiplayerHome" },
				{ "EMultiplayerHost.DisplayName", "Multiplayer Host" },
				{ "EMultiplayerHost.Name", "EGameState::EMultiplayerHost" },
				{ "EMultiplayerInGame.DisplayName", "Multiplayer In Game" },
				{ "EMultiplayerInGame.Name", "EGameState::EMultiplayerInGame" },
				{ "EMultiplayerJoin.DisplayName", "Mulitplayer Join" },
				{ "EMultiplayerJoin.Name", "EGameState::EMultiplayerJoin" },
				{ "ENone.DisplayName", "None" },
				{ "ENone.Name", "EGameState::ENone" },
				{ "EStartup.DisplayName", "Startup" },
				{ "EStartup.Name", "EGameState::EStartup" },
				{ "ETravelling.DisplayName", "Travelling" },
				{ "ETravelling.Name", "EGameState::ETravelling" },
				{ "ModuleRelativePath", "PlatformerGameInstance.h" },
				{ "ToolTip", "ENUM FOR CONTROLLING GAME STATE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlatformerGame,
				nullptr,
				"EGameState",
				"EGameState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBlueprintSearchResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLATFORMERGAME_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintSearchResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintSearchResult, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("BlueprintSearchResult"), sizeof(FBlueprintSearchResult), Get_Z_Construct_UScriptStruct_FBlueprintSearchResult_Hash());
	}
	return Singleton;
}
template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<FBlueprintSearchResult>()
{
	return FBlueprintSearchResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintSearchResult(FBlueprintSearchResult::StaticStruct, TEXT("/Script/PlatformerGame"), TEXT("BlueprintSearchResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlatformerGame_StaticRegisterNativesFBlueprintSearchResult
{
	FScriptStruct_PlatformerGame_StaticRegisterNativesFBlueprintSearchResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintSearchResult")),new UScriptStruct::TCppStructOps<FBlueprintSearchResult>);
	}
} ScriptStruct_PlatformerGame_StaticRegisterNativesFBlueprintSearchResult;
	struct Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInProgress_MetaData[];
#endif
		static void NewProp_bIsInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PingInMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Type for holding our SearchResult and exposing the needed properties to blueprints*/" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "Type for holding our SearchResult and exposing the needed properties to blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintSearchResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSearchResult, ServerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress_SetBit(void* Obj)
	{
		((FBlueprintSearchResult*)Obj)->bIsInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress = { "bIsInProgress", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlueprintSearchResult), &Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSearchResult, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_PingInMs_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_PingInMs = { "PingInMs", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSearchResult, PingInMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_PingInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_PingInMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSearchResult, CurrentPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_CurrentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_CurrentPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSearchResult, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MaxPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_bIsInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_PingInMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_CurrentPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::NewProp_MaxPlayers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
		nullptr,
		&NewStructOps,
		"BlueprintSearchResult",
		sizeof(FBlueprintSearchResult),
		alignof(FBlueprintSearchResult),
		Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSearchResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintSearchResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformerGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintSearchResult"), sizeof(FBlueprintSearchResult), Get_Z_Construct_UScriptStruct_FBlueprintSearchResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintSearchResult_Hash() { return 1489016462U; }
class UScriptStruct* FBlueprintSessionSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLATFORMERGAME_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintSessionSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintSessionSetting, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("BlueprintSessionSetting"), sizeof(FBlueprintSessionSetting), Get_Z_Construct_UScriptStruct_FBlueprintSessionSetting_Hash());
	}
	return Singleton;
}
template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<FBlueprintSessionSetting>()
{
	return FBlueprintSessionSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintSessionSetting(FBlueprintSessionSetting::StaticStruct, TEXT("/Script/PlatformerGame"), TEXT("BlueprintSessionSetting"), false, nullptr, nullptr);
static struct FScriptStruct_PlatformerGame_StaticRegisterNativesFBlueprintSessionSetting
{
	FScriptStruct_PlatformerGame_StaticRegisterNativesFBlueprintSessionSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintSessionSetting")),new UScriptStruct::TCppStructOps<FBlueprintSessionSetting>);
	}
} ScriptStruct_PlatformerGame_StaticRegisterNativesFBlueprintSessionSetting;
	struct Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Type for providing special settings for the hosted server */" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "Type for providing special settings for the hosted server" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintSessionSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_key_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSessionSetting, key), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintSessionSetting, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::NewProp_value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
		nullptr,
		&NewStructOps,
		"BlueprintSessionSetting",
		sizeof(FBlueprintSessionSetting),
		alignof(FBlueprintSessionSetting),
		Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintSessionSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformerGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintSessionSetting"), sizeof(FBlueprintSessionSetting), Get_Z_Construct_UScriptStruct_FBlueprintSessionSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintSessionSetting_Hash() { return 2319712207U; }
	DEFINE_FUNCTION(UPlatformerGameInstance::execLeaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execSetOrUpdateSessionSpecialSettingString)
	{
		P_GET_STRUCT(FBlueprintSessionSetting,Z_Param_newSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrUpdateSessionSpecialSettingString(Z_Param_newSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execGetSessionSpecialSettingString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSessionSpecialSettingString(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execJoinGame)
	{
		P_GET_STRUCT(FBlueprintSearchResult,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGame(Z_Param_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execFindGames)
	{
		P_GET_UBOOL(Z_Param_bIsLAN);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindGames(Z_Param_bIsLAN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execHostGame)
	{
		P_GET_UBOOL(Z_Param_bIsLAN);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumPlayers);
		P_GET_TARRAY(FBlueprintSessionSetting,Z_Param_sessionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostGame(Z_Param_bIsLAN,Z_Param_MaxNumPlayers,Z_Param_sessionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execSetInputMode)
	{
		P_GET_ENUM(EInputMode,Z_Param_newInputMode);
		P_GET_UBOOL(Z_Param_bShowMouseCursor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputMode(EInputMode(Z_Param_newInputMode),Z_Param_bShowMouseCursor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execGetCurrentGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameState*)Z_Param__Result=P_THIS->GetCurrentGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformerGameInstance::execChangeState)
	{
		P_GET_ENUM(EGameState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState(EGameState(Z_Param_newState));
		P_NATIVE_END;
	}
	void UPlatformerGameInstance::StaticRegisterNativesUPlatformerGameInstance()
	{
		UClass* Class = UPlatformerGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &UPlatformerGameInstance::execChangeState },
			{ "FindGames", &UPlatformerGameInstance::execFindGames },
			{ "GetCurrentGameState", &UPlatformerGameInstance::execGetCurrentGameState },
			{ "GetSessionSpecialSettingString", &UPlatformerGameInstance::execGetSessionSpecialSettingString },
			{ "HostGame", &UPlatformerGameInstance::execHostGame },
			{ "JoinGame", &UPlatformerGameInstance::execJoinGame },
			{ "LeaveGame", &UPlatformerGameInstance::execLeaveGame },
			{ "SetInputMode", &UPlatformerGameInstance::execSetInputMode },
			{ "SetOrUpdateSessionSpecialSettingString", &UPlatformerGameInstance::execSetOrUpdateSessionSpecialSettingString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics
	{
		struct PlatformerGameInstance_eventChangeState_Parms
		{
			EGameState newState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventChangeState_Parms, newState), Z_Construct_UEnum_PlatformerGame_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Game Instance" },
		{ "Comment", "/* STATE CHANGES */" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "STATE CHANGES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "ChangeState", nullptr, nullptr, sizeof(PlatformerGameInstance_eventChangeState_Parms), Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics
	{
		struct PlatformerGameInstance_eventFindGames_Parms
		{
			bool bIsLAN;
		};
		static void NewProp_bIsLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLAN;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::NewProp_bIsLAN_SetBit(void* Obj)
	{
		((PlatformerGameInstance_eventFindGames_Parms*)Obj)->bIsLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::NewProp_bIsLAN = { "bIsLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformerGameInstance_eventFindGames_Parms), &Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::NewProp_bIsLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::NewProp_bIsLAN,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Management" },
		{ "Comment", "//blueprint function for finding games\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "blueprint function for finding games" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "FindGames", nullptr, nullptr, sizeof(PlatformerGameInstance_eventFindGames_Parms), Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_FindGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_FindGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics
	{
		struct PlatformerGameInstance_eventGetCurrentGameState_Parms
		{
			EGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventGetCurrentGameState_Parms, ReturnValue), Z_Construct_UEnum_PlatformerGame_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Game Instance" },
		{ "Comment", "//Get current game state\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "Get current game state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "GetCurrentGameState", nullptr, nullptr, sizeof(PlatformerGameInstance_eventGetCurrentGameState_Parms), Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics
	{
		struct PlatformerGameInstance_eventGetSessionSpecialSettingString_Parms
		{
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventGetSessionSpecialSettingString_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventGetSessionSpecialSettingString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Management" },
		{ "Comment", "/* UPDATING SESSION *///function for getting the current value of a special setting for the active session\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "UPDATING SESSION //function for getting the current value of a special setting for the active session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "GetSessionSpecialSettingString", nullptr, nullptr, sizeof(PlatformerGameInstance_eventGetSessionSpecialSettingString_Parms), Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics
	{
		struct PlatformerGameInstance_eventHostGame_Parms
		{
			bool bIsLAN;
			int32 MaxNumPlayers;
			TArray<FBlueprintSessionSetting> sessionSettings;
		};
		static void NewProp_bIsLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumPlayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sessionSettings_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sessionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_bIsLAN_SetBit(void* Obj)
	{
		((PlatformerGameInstance_eventHostGame_Parms*)Obj)->bIsLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_bIsLAN = { "bIsLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformerGameInstance_eventHostGame_Parms), &Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_bIsLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_MaxNumPlayers = { "MaxNumPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventHostGame_Parms, MaxNumPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_sessionSettings_Inner = { "sessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_sessionSettings = { "sessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventHostGame_Parms, sessionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_bIsLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_MaxNumPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_sessionSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::NewProp_sessionSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Management" },
		{ "Comment", "/* SESSION CREATION *///function for hosting a session from blueprints\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "SESSION CREATION //function for hosting a session from blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "HostGame", nullptr, nullptr, sizeof(PlatformerGameInstance_eventHostGame_Parms), Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_HostGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_HostGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics
	{
		struct PlatformerGameInstance_eventJoinGame_Parms
		{
			FBlueprintSearchResult result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventJoinGame_Parms, result), Z_Construct_UScriptStruct_FBlueprintSearchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Management" },
		{ "Comment", "/* JOIN SESSIONS *///Blueprint function for joining a session\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "JOIN SESSIONS //Blueprint function for joining a session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "JoinGame", nullptr, nullptr, sizeof(PlatformerGameInstance_eventJoinGame_Parms), Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_JoinGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_JoinGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Management" },
		{ "Comment", "/* DESTROYING A SESSION / LEAVING GAME *///Blueprint function for leaving game\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "DESTROYING A SESSION / LEAVING GAME //Blueprint function for leaving game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "LeaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics
	{
		struct PlatformerGameInstance_eventSetInputMode_Parms
		{
			EInputMode newInputMode;
			bool bShowMouseCursor;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newInputMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newInputMode;
		static void NewProp_bShowMouseCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMouseCursor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_newInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_newInputMode = { "newInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventSetInputMode_Parms, newInputMode), Z_Construct_UEnum_PlatformerGame_EInputMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_bShowMouseCursor_SetBit(void* Obj)
	{
		((PlatformerGameInstance_eventSetInputMode_Parms*)Obj)->bShowMouseCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_bShowMouseCursor = { "bShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformerGameInstance_eventSetInputMode_Parms), &Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_bShowMouseCursor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_newInputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_newInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::NewProp_bShowMouseCursor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Game Instance" },
		{ "Comment", "/* Input mode handling *///function for setting the input mode\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "Input mode handling //function for setting the input mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "SetInputMode", nullptr, nullptr, sizeof(PlatformerGameInstance_eventSetInputMode_Parms), Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics
	{
		struct PlatformerGameInstance_eventSetOrUpdateSessionSpecialSettingString_Parms
		{
			FBlueprintSessionSetting newSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::NewProp_newSetting = { "newSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameInstance_eventSetOrUpdateSessionSpecialSettingString_Parms, newSetting), Z_Construct_UScriptStruct_FBlueprintSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::NewProp_newSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Management" },
		{ "Comment", "//function for creating a new or updating an existing special setting on the active session\n//host only\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "function for creating a new or updating an existing special setting on the active session\nhost only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformerGameInstance, nullptr, "SetOrUpdateSessionSpecialSettingString", nullptr, nullptr, sizeof(PlatformerGameInstance_eventSetOrUpdateSessionSpecialSettingString_Parms), Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformerGameInstance_NoRegister()
	{
		return UPlatformerGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformerGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cMainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cMPHome_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cMPHome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cMPJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cMPJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cMPHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cMPHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cLoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cLoadingScreen;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentInputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentInputMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowingMouseCursor_MetaData[];
#endif
		static void NewProp_bIsShowingMouseCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowingMouseCursor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_searchResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_searchResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFinishedSearchingForGames_MetaData[];
#endif
		static void NewProp_bHasFinishedSearchingForGames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFinishedSearchingForGames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSearchingForGames_MetaData[];
#endif
		static void NewProp_bSearchingForGames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchingForGames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformerGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformerGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformerGameInstance_ChangeState, "ChangeState" }, // 3548203673
		{ &Z_Construct_UFunction_UPlatformerGameInstance_FindGames, "FindGames" }, // 1343301760
		{ &Z_Construct_UFunction_UPlatformerGameInstance_GetCurrentGameState, "GetCurrentGameState" }, // 1888246820
		{ &Z_Construct_UFunction_UPlatformerGameInstance_GetSessionSpecialSettingString, "GetSessionSpecialSettingString" }, // 2904794786
		{ &Z_Construct_UFunction_UPlatformerGameInstance_HostGame, "HostGame" }, // 4292770466
		{ &Z_Construct_UFunction_UPlatformerGameInstance_JoinGame, "JoinGame" }, // 4096784696
		{ &Z_Construct_UFunction_UPlatformerGameInstance_LeaveGame, "LeaveGame" }, // 1748866231
		{ &Z_Construct_UFunction_UPlatformerGameInstance_SetInputMode, "SetInputMode" }, // 1533514234
		{ &Z_Construct_UFunction_UPlatformerGameInstance_SetOrUpdateSessionSpecialSettingString, "SetOrUpdateSessionSpecialSettingString" }, // 3865700351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlatformerGameInstance.h" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMainMenu_MetaData[] = {
		{ "Category", "State Manager" },
		{ "Comment", "/* Widget references */" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "Widget references" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMainMenu = { "cMainMenu", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, cMainMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHome_MetaData[] = {
		{ "Category", "State Manager" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHome = { "cMPHome", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, cMPHome), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHome_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPJoin_MetaData[] = {
		{ "Category", "State Manager" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPJoin = { "cMPJoin", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, cMPJoin), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHost_MetaData[] = {
		{ "Category", "State Manager" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHost = { "cMPHost", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, cMPHost), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cLoadingScreen_MetaData[] = {
		{ "Category", "State Manager" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cLoadingScreen = { "cLoadingScreen", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, cLoadingScreen), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cLoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cLoadingScreen_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode_MetaData[] = {
		{ "Category", "Platformer Game Instance" },
		{ "Comment", "//Current Input Mode\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "Current Input Mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode = { "CurrentInputMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, CurrentInputMode), Z_Construct_UEnum_PlatformerGame_EInputMode, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor_MetaData[] = {
		{ "Category", "Platformer Game Instance" },
		{ "Comment", "//are we displaying the mouse cursor\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "are we displaying the mouse cursor" },
	};
#endif
	void Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor_SetBit(void* Obj)
	{
		((UPlatformerGameInstance*)Obj)->bIsShowingMouseCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor = { "bIsShowingMouseCursor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlatformerGameInstance), &Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults_Inner = { "searchResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintSearchResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults_MetaData[] = {
		{ "Category", "Session Management" },
		{ "Comment", "/* FINDING SESSIONS *///Array for holding our search results\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "FINDING SESSIONS //Array for holding our search results" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults = { "searchResults", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformerGameInstance, searchResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames_MetaData[] = {
		{ "Category", "Session Management" },
		{ "Comment", "//booleans for keeping track of search status\n" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
		{ "ToolTip", "booleans for keeping track of search status" },
	};
#endif
	void Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames_SetBit(void* Obj)
	{
		((UPlatformerGameInstance*)Obj)->bHasFinishedSearchingForGames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames = { "bHasFinishedSearchingForGames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlatformerGameInstance), &Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames_MetaData[] = {
		{ "Category", "Session Management" },
		{ "ModuleRelativePath", "PlatformerGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames_SetBit(void* Obj)
	{
		((UPlatformerGameInstance*)Obj)->bSearchingForGames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames = { "bSearchingForGames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlatformerGameInstance), &Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformerGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cMPHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_cLoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_CurrentInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bIsShowingMouseCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_searchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bHasFinishedSearchingForGames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerGameInstance_Statics::NewProp_bSearchingForGames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformerGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformerGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformerGameInstance_Statics::ClassParams = {
		&UPlatformerGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlatformerGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformerGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformerGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformerGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformerGameInstance, 4056342631);
	template<> PLATFORMERGAME_API UClass* StaticClass<UPlatformerGameInstance>()
	{
		return UPlatformerGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformerGameInstance(Z_Construct_UClass_UPlatformerGameInstance, &UPlatformerGameInstance::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("UPlatformerGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformerGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

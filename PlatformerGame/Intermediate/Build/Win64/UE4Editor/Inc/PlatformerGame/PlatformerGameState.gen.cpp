// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameState() {}
// Cross Module References
	PLATFORMERGAME_API UEnum* Z_Construct_UEnum_PlatformerGame_EMatchState();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	PLATFORMERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpecification();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerGameState_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EMatchState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlatformerGame_EMatchState, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("EMatchState"));
		}
		return Singleton;
	}
	template<> PLATFORMERGAME_API UEnum* StaticEnum<EMatchState>()
	{
		return EMatchState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMatchState(EMatchState_StaticEnum, TEXT("/Script/PlatformerGame"), TEXT("EMatchState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlatformerGame_EMatchState_Hash() { return 1231767549U; }
	UEnum* Z_Construct_UEnum_PlatformerGame_EMatchState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMatchState"), 0, Get_Z_Construct_UEnum_PlatformerGame_EMatchState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMatchState::ENotConnected", (int64)EMatchState::ENotConnected },
				{ "EMatchState::EWaitingForPlayers", (int64)EMatchState::EWaitingForPlayers },
				{ "EMatchState::EStartingGame", (int64)EMatchState::EStartingGame },
				{ "EMatchState::EGameInProgress", (int64)EMatchState::EGameInProgress },
				{ "EMatchState::EGameComplete", (int64)EMatchState::EGameComplete },
				{ "EMatchState::ERestartingGame", (int64)EMatchState::ERestartingGame },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* ENUM FOR DEFINING MATCH STATE */" },
				{ "EGameComplete.DisplayName", "Game Complete" },
				{ "EGameComplete.Name", "EMatchState::EGameComplete" },
				{ "EGameInProgress.DisplayName", "Game In Progress" },
				{ "EGameInProgress.Name", "EMatchState::EGameInProgress" },
				{ "ENotConnected.DisplayName", "Not Connected" },
				{ "ENotConnected.Name", "EMatchState::ENotConnected" },
				{ "ERestartingGame.DisplayName", "Restarting Game" },
				{ "ERestartingGame.Name", "EMatchState::ERestartingGame" },
				{ "EStartingGame.DisplayName", "Starting Game" },
				{ "EStartingGame.Name", "EMatchState::EStartingGame" },
				{ "EWaitingForPlayers.DisplayName", "Waiting For Players" },
				{ "EWaitingForPlayers.Name", "EMatchState::EWaitingForPlayers" },
				{ "ModuleRelativePath", "PlatformerGameState.h" },
				{ "ToolTip", "ENUM FOR DEFINING MATCH STATE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlatformerGame,
				nullptr,
				"EMatchState",
				"EMatchState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCharacterSpecification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLATFORMERGAME_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSpecification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSpecification, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("CharacterSpecification"), sizeof(FCharacterSpecification), Get_Z_Construct_UScriptStruct_FCharacterSpecification_Hash());
	}
	return Singleton;
}
template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<FCharacterSpecification>()
{
	return FCharacterSpecification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSpecification(FCharacterSpecification::StaticStruct, TEXT("/Script/PlatformerGame"), TEXT("CharacterSpecification"), false, nullptr, nullptr);
static struct FScriptStruct_PlatformerGame_StaticRegisterNativesFCharacterSpecification
{
	FScriptStruct_PlatformerGame_StaticRegisterNativesFCharacterSpecification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSpecification")),new UScriptStruct::TCppStructOps<FCharacterSpecification>);
	}
} ScriptStruct_PlatformerGame_StaticRegisterNativesFCharacterSpecification;
	struct Z_Construct_UScriptStruct_FCharacterSpecification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* STRUCT FOR DEFINING A CHARACTER FOR THE CHARACTER SELECT SCREEN */" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "STRUCT FOR DEFINING A CHARACTER FOR THE CHARACTER SELECT SCREEN" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSpecification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpecification, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon = { "CharacterIcon", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpecification, CharacterIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpecification, CharacterClass), Z_Construct_UClass_ABaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSpecification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
		nullptr,
		&NewStructOps,
		"CharacterSpecification",
		sizeof(FCharacterSpecification),
		alignof(FCharacterSpecification),
		Z_Construct_UScriptStruct_FCharacterSpecification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpecification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSpecification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformerGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSpecification"), sizeof(FCharacterSpecification), Get_Z_Construct_UScriptStruct_FCharacterSpecification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSpecification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSpecification_Hash() { return 4021885728U; }
	DEFINE_FUNCTION(APlatformerGameState::execUpdateMatchTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->UpdateMatchTime_Validate(Z_Param_NewTime))
		{
			RPC_ValidateFailed(TEXT("UpdateMatchTime_Validate"));
			return;
		}
		P_THIS->UpdateMatchTime_Implementation(Z_Param_NewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerGameState::execGetMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMatchState*)Z_Param__Result=P_THIS->GetMatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerGameState::execChangeState)
	{
		P_GET_ENUM(EMatchState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState_Implementation(EMatchState(Z_Param_newState));
		P_NATIVE_END;
	}
	static FName NAME_APlatformerGameState_ChangeState = FName(TEXT("ChangeState"));
	void APlatformerGameState::ChangeState(EMatchState newState)
	{
		PlatformerGameState_eventChangeState_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_APlatformerGameState_ChangeState),&Parms);
	}
	static FName NAME_APlatformerGameState_UpdateMatchTime = FName(TEXT("UpdateMatchTime"));
	void APlatformerGameState::UpdateMatchTime(float NewTime)
	{
		PlatformerGameState_eventUpdateMatchTime_Parms Parms;
		Parms.NewTime=NewTime;
		ProcessEvent(FindFunctionChecked(NAME_APlatformerGameState_UpdateMatchTime),&Parms);
	}
	void APlatformerGameState::StaticRegisterNativesAPlatformerGameState()
	{
		UClass* Class = APlatformerGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &APlatformerGameState::execChangeState },
			{ "GetMatchState", &APlatformerGameState::execGetMatchState },
			{ "UpdateMatchTime", &APlatformerGameState::execUpdateMatchTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameState_eventChangeState_Parms, newState), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Match State" },
		{ "Comment", "//For changing state\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "For changing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerGameState, nullptr, "ChangeState", nullptr, nullptr, sizeof(PlatformerGameState_eventChangeState_Parms), Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerGameState_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics
	{
		struct PlatformerGameState_eventGetMatchState_Parms
		{
			EMatchState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameState_eventGetMatchState_Parms, ReturnValue), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Match State" },
		{ "Comment", "//get current state\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "get current state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerGameState, nullptr, "GetMatchState", nullptr, nullptr, sizeof(PlatformerGameState_eventGetMatchState_Parms), Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerGameState_GetMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameState_eventUpdateMatchTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Match State" },
		{ "Comment", "//Update match time\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "Update match time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerGameState, nullptr, "UpdateMatchTime", nullptr, nullptr, sizeof(PlatformerGameState_eventUpdateMatchTime_Parms), Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformerGameState_NoRegister()
	{
		return APlatformerGameState::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentMatchState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentMatchState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cChangingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cChangingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cGameInProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cGameInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cWaitingForPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cWaitingForPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformerGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformerGameState_ChangeState, "ChangeState" }, // 3750608227
		{ &Z_Construct_UFunction_APlatformerGameState_GetMatchState, "GetMatchState" }, // 2021996314
		{ &Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime, "UpdateMatchTime" }, // 2522629635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformerGameState.h" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlatformerGameState" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime = { "TotalMatchTime", nullptr, (EPropertyFlags)0x0040000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, TotalMatchTime), METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlatformerGameState" },
		{ "Comment", "//the current state, replicated\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "the current state, replicated" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState = { "CurrentMatchState", nullptr, (EPropertyFlags)0x0040000000000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, CurrentMatchState), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "Match State" },
		{ "Comment", "//Character list we'll specify in the editor:\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "Character list we'll specify in the editor:" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterSpecification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel = { "cChangingLevel", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, cChangingLevel), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress = { "cGameInProgress", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, cGameInProgress), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers_MetaData[] = {
		{ "Category", "Match State" },
		{ "Comment", "/* CLASS REFERENCES TO SCREENS TO BE DISPLAYED DURING A MATCH */" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "CLASS REFERENCES TO SCREENS TO BE DISPLAYED DURING A MATCH" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers = { "cWaitingForPlayers", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, cWaitingForPlayers), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameState_Statics::ClassParams = {
		&APlatformerGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformerGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerGameState, 1579582730);
	template<> PLATFORMERGAME_API UClass* StaticClass<APlatformerGameState>()
	{
		return APlatformerGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerGameState(Z_Construct_UClass_APlatformerGameState, &APlatformerGameState::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APlatformerGameState"), false, nullptr, nullptr, nullptr);

	void APlatformerGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentMatchState(TEXT("CurrentMatchState"));
		static const FName Name_TotalMatchTime(TEXT("TotalMatchTime"));

		const bool bIsValid = true
			&& Name_CurrentMatchState == ClassReps[(int32)ENetFields_Private::CurrentMatchState].Property->GetFName()
			&& Name_TotalMatchTime == ClassReps[(int32)ENetFields_Private::TotalMatchTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlatformerGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

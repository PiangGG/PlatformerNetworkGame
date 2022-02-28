// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameState() {}
// Cross Module References
	PLATFORMERGAME_API UEnum* Z_Construct_UEnum_PlatformerGame_EMatchState();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	PLATFORMERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpecification();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerGameState_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMatchState;
	static UEnum* EMatchState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMatchState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMatchState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlatformerGame_EMatchState, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("EMatchState"));
		}
		return Z_Registration_Info_UEnum_EMatchState.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UEnum* StaticEnum<EMatchState>()
	{
		return EMatchState_StaticEnum();
	}
	struct Z_Construct_UEnum_PlatformerGame_EMatchState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::Enumerators[] = {
		{ "EMatchState::ENotConnected", (int64)EMatchState::ENotConnected },
		{ "EMatchState::EWaitingForPlayers", (int64)EMatchState::EWaitingForPlayers },
		{ "EMatchState::EStartingGame", (int64)EMatchState::EStartingGame },
		{ "EMatchState::EGameInProgress", (int64)EMatchState::EGameInProgress },
		{ "EMatchState::EGameComplete", (int64)EMatchState::EGameComplete },
		{ "EMatchState::ERestartingGame", (int64)EMatchState::ERestartingGame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PlatformerGame,
		nullptr,
		"EMatchState",
		"EMatchState",
		Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PlatformerGame_EMatchState()
	{
		if (!Z_Registration_Info_UEnum_EMatchState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMatchState.InnerSingleton, Z_Construct_UEnum_PlatformerGame_EMatchState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMatchState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterSpecification;
class UScriptStruct* FCharacterSpecification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterSpecification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterSpecification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSpecification, Z_Construct_UPackage__Script_PlatformerGame(), TEXT("CharacterSpecification"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterSpecification.OuterSingleton;
}
template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<FCharacterSpecification>()
{
	return FCharacterSpecification::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterSpecification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::Struct_MetaDataParams[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpecification, CharacterClass), Z_Construct_UClass_ABaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon = { "CharacterIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpecification, CharacterIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpecification, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSpecification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewProp_CharacterName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSpecification_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_CharacterSpecification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterSpecification.InnerSingleton, Z_Construct_UScriptStruct_FCharacterSpecification_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterSpecification.InnerSingleton;
	}
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameState_eventChangeState_Parms, newState), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(nullptr, 0) }; // 3777831726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Match State" },
		{ "Comment", "//For changing state\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "For changing state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerGameState, nullptr, "ChangeState", nullptr, nullptr, sizeof(PlatformerGameState_eventChangeState_Parms), Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerGameState_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformerGameState_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics
	{
		struct PlatformerGameState_eventGetMatchState_Parms
		{
			EMatchState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameState_eventGetMatchState_Parms, ReturnValue), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(nullptr, 0) }; // 3777831726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Match State" },
		{ "Comment", "//get current state\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "get current state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerGameState, nullptr, "GetMatchState", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PlatformerGameState_eventGetMatchState_Parms), Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerGameState_GetMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformerGameState_GetMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerGameState_eventUpdateMatchTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Match State" },
		{ "Comment", "//Update match time\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "Update match time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerGameState, nullptr, "UpdateMatchTime", nullptr, nullptr, sizeof(PlatformerGameState_eventUpdateMatchTime_Parms), Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerGameState);
	UClass* Z_Construct_UClass_APlatformerGameState_NoRegister()
	{
		return APlatformerGameState::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cWaitingForPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cWaitingForPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cGameInProgress_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cGameInProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cChangingLevel_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cChangingLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMatchState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMatchState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMatchState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMatchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMatchTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformerGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformerGameState_ChangeState, "ChangeState" }, // 3282801357
		{ &Z_Construct_UFunction_APlatformerGameState_GetMatchState, "GetMatchState" }, // 892793203
		{ &Z_Construct_UFunction_APlatformerGameState_UpdateMatchTime, "UpdateMatchTime" }, // 1767581906
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameState.h" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers_MetaData[] = {
		{ "Category", "Match State" },
		{ "Comment", "/* CLASS REFERENCES TO SCREENS TO BE DISPLAYED DURING A MATCH */" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "CLASS REFERENCES TO SCREENS TO BE DISPLAYED DURING A MATCH" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers = { "cWaitingForPlayers", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, cWaitingForPlayers), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress = { "cGameInProgress", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, cGameInProgress), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel_MetaData[] = {
		{ "Category", "Match State" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel = { "cChangingLevel", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, cChangingLevel), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterSpecification, METADATA_PARAMS(nullptr, 0) }; // 1375111916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "Match State" },
		{ "Comment", "//Character list we'll specify in the editor:\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "Character list we'll specify in the editor:" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_MetaData)) }; // 1375111916
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlatformerGameState" },
		{ "Comment", "//the current state, replicated\n" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
		{ "ToolTip", "the current state, replicated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState = { "CurrentMatchState", nullptr, (EPropertyFlags)0x0040000000000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, CurrentMatchState), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_MetaData)) }; // 3777831726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlatformerGameState" },
		{ "ModuleRelativePath", "PlatformerGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime = { "TotalMatchTime", nullptr, (EPropertyFlags)0x0040000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerGameState, TotalMatchTime), METADATA_PARAMS(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cWaitingForPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cGameInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_cChangingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_CurrentMatchState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameState_Statics::NewProp_TotalMatchTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameState_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_APlatformerGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameState.OuterSingleton, Z_Construct_UClass_APlatformerGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerGameState.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<APlatformerGameState>()
	{
		return APlatformerGameState::StaticClass();
	}

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
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::EnumInfo[] = {
		{ EMatchState_StaticEnum, TEXT("EMatchState"), &Z_Registration_Info_UEnum_EMatchState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3777831726U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::ScriptStructInfo[] = {
		{ FCharacterSpecification::StaticStruct, Z_Construct_UScriptStruct_FCharacterSpecification_Statics::NewStructOps, TEXT("CharacterSpecification"), &Z_Registration_Info_UScriptStruct_CharacterSpecification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterSpecification), 1375111916U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameState, APlatformerGameState::StaticClass, TEXT("APlatformerGameState"), &Z_Registration_Info_UClass_APlatformerGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameState), 2555599993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_402705300(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

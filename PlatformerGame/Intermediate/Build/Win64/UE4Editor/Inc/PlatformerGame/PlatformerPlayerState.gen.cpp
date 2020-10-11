// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerPlayerState() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerPlayerState_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	PLATFORMERGAME_API UEnum* Z_Construct_UEnum_PlatformerGame_EMatchState();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlatformerPlayerState::execSelectCharacter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SelectCharacter_Validate(Z_Param_index))
		{
			RPC_ValidateFailed(TEXT("SelectCharacter_Validate"));
			return;
		}
		P_THIS->SelectCharacter_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerPlayerState::execToggleSpectator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ToggleSpectator_Validate())
		{
			RPC_ValidateFailed(TEXT("ToggleSpectator_Validate"));
			return;
		}
		P_THIS->ToggleSpectator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerPlayerState::execToggleReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ToggleReady_Validate())
		{
			RPC_ValidateFailed(TEXT("ToggleReady_Validate"));
			return;
		}
		P_THIS->ToggleReady_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerPlayerState::execReceiveDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerPlayerState::execCollectHeart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectHeart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformerPlayerState::execCollectCoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectCoin();
		P_NATIVE_END;
	}
	static FName NAME_APlatformerPlayerState_SelectCharacter = FName(TEXT("SelectCharacter"));
	void APlatformerPlayerState::SelectCharacter(int32 index)
	{
		PlatformerPlayerState_eventSelectCharacter_Parms Parms;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_APlatformerPlayerState_SelectCharacter),&Parms);
	}
	static FName NAME_APlatformerPlayerState_ToggleReady = FName(TEXT("ToggleReady"));
	void APlatformerPlayerState::ToggleReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlatformerPlayerState_ToggleReady),NULL);
	}
	static FName NAME_APlatformerPlayerState_ToggleSpectator = FName(TEXT("ToggleSpectator"));
	void APlatformerPlayerState::ToggleSpectator()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlatformerPlayerState_ToggleSpectator),NULL);
	}
	void APlatformerPlayerState::StaticRegisterNativesAPlatformerPlayerState()
	{
		UClass* Class = APlatformerPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectCoin", &APlatformerPlayerState::execCollectCoin },
			{ "CollectHeart", &APlatformerPlayerState::execCollectHeart },
			{ "ReceiveDamage", &APlatformerPlayerState::execReceiveDamage },
			{ "SelectCharacter", &APlatformerPlayerState::execSelectCharacter },
			{ "ToggleReady", &APlatformerPlayerState::execToggleReady },
			{ "ToggleSpectator", &APlatformerPlayerState::execToggleSpectator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformerPlayerState_CollectCoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerState_CollectCoin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerState_CollectCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerState, nullptr, "CollectCoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerState_CollectCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_CollectCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerState_CollectCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerState_CollectCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerPlayerState_CollectHeart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerState_CollectHeart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerState_CollectHeart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerState, nullptr, "CollectHeart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerState_CollectHeart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_CollectHeart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerState_CollectHeart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerState_CollectHeart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics
	{
		struct PlatformerPlayerState_eventReceiveDamage_Parms
		{
			int32 amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerPlayerState_eventReceiveDamage_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerState, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(PlatformerPlayerState_eventReceiveDamage_Parms), Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformerPlayerState_eventSelectCharacter_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerState, nullptr, "SelectCharacter", nullptr, nullptr, sizeof(PlatformerPlayerState_eventSelectCharacter_Parms), Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerPlayerState_ToggleReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerState_ToggleReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Player State" },
		{ "Comment", "//we'll also need server functions for changing these\n" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
		{ "ToolTip", "we'll also need server functions for changing these" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerState_ToggleReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerState, nullptr, "ToggleReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerState_ToggleReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_ToggleReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerState_ToggleReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerState_ToggleReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerState, nullptr, "ToggleSpectator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformerPlayerState_NoRegister()
	{
		return APlatformerPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectedCharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpectator_MetaData[];
#endif
		static void NewProp_bSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[];
#endif
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalMatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentLocalMatchState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentLocalMatchState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfDeaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCoinsCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfCoinsCollected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPowerup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedPowerup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformerPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformerPlayerState_CollectCoin, "CollectCoin" }, // 3516533622
		{ &Z_Construct_UFunction_APlatformerPlayerState_CollectHeart, "CollectHeart" }, // 2244595529
		{ &Z_Construct_UFunction_APlatformerPlayerState_ReceiveDamage, "ReceiveDamage" }, // 2410389891
		{ &Z_Construct_UFunction_APlatformerPlayerState_SelectCharacter, "SelectCharacter" }, // 542319297
		{ &Z_Construct_UFunction_APlatformerPlayerState_ToggleReady, "ToggleReady" }, // 62679731
		{ &Z_Construct_UFunction_APlatformerPlayerState_ToggleSpectator, "ToggleSpectator" }, // 4293767444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformerPlayerState.h" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedCharacterIndex_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "Comment", "//int for keeping track of selected character\n" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
		{ "ToolTip", "int for keeping track of selected character" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedCharacterIndex = { "SelectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, SelectedCharacterIndex), METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedCharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedCharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "Comment", "//boolean for keeping track of whether a player wants to specate\n" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
		{ "ToolTip", "boolean for keeping track of whether a player wants to specate" },
	};
#endif
	void Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator_SetBit(void* Obj)
	{
		((APlatformerPlayerState*)Obj)->bSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator = { "bSpectator", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlatformerPlayerState), &Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "Comment", "//boolean for keeping track of ready state\n" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
		{ "ToolTip", "boolean for keeping track of ready state" },
	};
#endif
	void Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((APlatformerPlayerState*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlatformerPlayerState), &Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "Comment", "//For keeping track of what UI we're displaying locally\n" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
		{ "ToolTip", "For keeping track of what UI we're displaying locally" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState = { "CurrentLocalMatchState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, CurrentLocalMatchState), Z_Construct_UEnum_PlatformerGame_EMatchState, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfDeaths_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfDeaths = { "NumberOfDeaths", nullptr, (EPropertyFlags)0x0020080000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, NumberOfDeaths), METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfDeaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfCoinsCollected_MetaData[] = {
		{ "Category", "Platformer Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfCoinsCollected = { "NumberOfCoinsCollected", nullptr, (EPropertyFlags)0x0020080000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, NumberOfCoinsCollected), METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfCoinsCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfCoinsCollected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedPowerup_MetaData[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "PlatformerPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedPowerup = { "SelectedPowerup", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerState, SelectedPowerup), Z_Construct_UClass_APowerup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedPowerup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedPowerup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedCharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_bIsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentLocalMatchState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_NumberOfCoinsCollected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerState_Statics::NewProp_SelectedPowerup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerPlayerState_Statics::ClassParams = {
		&APlatformerPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformerPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerPlayerState, 2081274013);
	template<> PLATFORMERGAME_API UClass* StaticClass<APlatformerPlayerState>()
	{
		return APlatformerPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerPlayerState(Z_Construct_UClass_APlatformerPlayerState, &APlatformerPlayerState::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APlatformerPlayerState"), false, nullptr, nullptr, nullptr);

	void APlatformerPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SelectedPowerup(TEXT("SelectedPowerup"));
		static const FName Name_NumberOfCoinsCollected(TEXT("NumberOfCoinsCollected"));
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
		static const FName Name_NumberOfDeaths(TEXT("NumberOfDeaths"));
		static const FName Name_bIsReady(TEXT("bIsReady"));
		static const FName Name_bSpectator(TEXT("bSpectator"));
		static const FName Name_SelectedCharacterIndex(TEXT("SelectedCharacterIndex"));

		const bool bIsValid = true
			&& Name_SelectedPowerup == ClassReps[(int32)ENetFields_Private::SelectedPowerup].Property->GetFName()
			&& Name_NumberOfCoinsCollected == ClassReps[(int32)ENetFields_Private::NumberOfCoinsCollected].Property->GetFName()
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
			&& Name_NumberOfDeaths == ClassReps[(int32)ENetFields_Private::NumberOfDeaths].Property->GetFName()
			&& Name_bIsReady == ClassReps[(int32)ENetFields_Private::bIsReady].Property->GetFName()
			&& Name_bSpectator == ClassReps[(int32)ENetFields_Private::bSpectator].Property->GetFName()
			&& Name_SelectedCharacterIndex == ClassReps[(int32)ENetFields_Private::SelectedCharacterIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlatformerPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

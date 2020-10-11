// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_ABaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseCharacter::execReceiveDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execNextPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPowerup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execCollectPowerup)
	{
		P_GET_OBJECT(APowerup,Z_Param_Powerup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectPowerup(Z_Param_Powerup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execCollectHeart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectHeart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execCollectCoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectCoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execPowerupUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->PowerupUsed_Validate())
		{
			RPC_ValidateFailed(TEXT("PowerupUsed_Validate"));
			return;
		}
		P_THIS->PowerupUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execUsePowerupStartServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->UsePowerupStartServer_Validate())
		{
			RPC_ValidateFailed(TEXT("UsePowerupStartServer_Validate"));
			return;
		}
		P_THIS->UsePowerupStartServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execUsePowerupStartClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UsePowerupStartClient();
		P_NATIVE_END;
	}
	static FName NAME_ABaseCharacter_PowerupUsed = FName(TEXT("PowerupUsed"));
	void ABaseCharacter::PowerupUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_PowerupUsed),NULL);
	}
	static FName NAME_ABaseCharacter_UsePowerupStartServer = FName(TEXT("UsePowerupStartServer"));
	void ABaseCharacter::UsePowerupStartServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_UsePowerupStartServer),NULL);
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectCoin", &ABaseCharacter::execCollectCoin },
			{ "CollectHeart", &ABaseCharacter::execCollectHeart },
			{ "CollectPowerup", &ABaseCharacter::execCollectPowerup },
			{ "NextPowerup", &ABaseCharacter::execNextPowerup },
			{ "PowerupUsed", &ABaseCharacter::execPowerupUsed },
			{ "ReceiveDamage", &ABaseCharacter::execReceiveDamage },
			{ "UsePowerupStartClient", &ABaseCharacter::execUsePowerupStartClient },
			{ "UsePowerupStartServer", &ABaseCharacter::execUsePowerupStartServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_CollectCoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_CollectCoin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_CollectCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "CollectCoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_CollectCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CollectCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_CollectCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_CollectCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_CollectHeart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_CollectHeart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_CollectHeart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "CollectHeart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_CollectHeart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CollectHeart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_CollectHeart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_CollectHeart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics
	{
		struct BaseCharacter_eventCollectPowerup_Parms
		{
			APowerup* Powerup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Powerup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::NewProp_Powerup = { "Powerup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacter_eventCollectPowerup_Parms, Powerup), Z_Construct_UClass_APowerup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::NewProp_Powerup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "CollectPowerup", nullptr, nullptr, sizeof(BaseCharacter_eventCollectPowerup_Parms), Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_CollectPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_CollectPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_NextPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_NextPowerup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Function for cycling between powerups\n" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
		{ "ToolTip", "Function for cycling between powerups" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_NextPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "NextPowerup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_NextPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_NextPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_NextPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_NextPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_PowerupUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_PowerupUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_PowerupUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "PowerupUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_PowerupUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_PowerupUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_PowerupUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_PowerupUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics
	{
		struct BaseCharacter_eventReceiveDamage_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacter_eventReceiveDamage_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//DAMAGE FUNCTION\n" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
		{ "ToolTip", "DAMAGE FUNCTION" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(BaseCharacter_eventReceiveDamage_Parms), Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "Comment", "/* USE POWERUP FUNCTIONS */" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
		{ "ToolTip", "USE POWERUP FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "UsePowerupStartClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "UsePowerupStartServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_CollectCoin, "CollectCoin" }, // 2351261561
		{ &Z_Construct_UFunction_ABaseCharacter_CollectHeart, "CollectHeart" }, // 2872356799
		{ &Z_Construct_UFunction_ABaseCharacter_CollectPowerup, "CollectPowerup" }, // 3203227279
		{ &Z_Construct_UFunction_ABaseCharacter_NextPowerup, "NextPowerup" }, // 1109930423
		{ &Z_Construct_UFunction_ABaseCharacter_PowerupUsed, "PowerupUsed" }, // 1187597402
		{ &Z_Construct_UFunction_ABaseCharacter_ReceiveDamage, "ReceiveDamage" }, // 1712375479
		{ &Z_Construct_UFunction_ABaseCharacter_UsePowerupStartClient, "UsePowerupStartClient" }, // 3848077343
		{ &Z_Construct_UFunction_ABaseCharacter_UsePowerupStartServer, "UsePowerupStartServer" }, // 920075535
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_TraceDirection_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Arrow for determining forward direction \xe7\xae\xad\xe5\xa4\xb4\xe6\x96\xb9\xe5\x90\x91\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
		{ "ToolTip", "Arrow for determining forward direction \xe7\xae\xad\xe5\xa4\xb4\xe6\x96\xb9\xe5\x90\x91\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_TraceDirection = { "TraceDirection", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCharacter, TraceDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_TraceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_TraceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Camera Component  \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
		{ "ToolTip", "Camera Component  \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "/* COMPONENTS|\xe7\xbb\x84\xe4\xbb\xb6 *///Spring Arm for holding camera \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
		{ "ToolTip", "COMPONENTS|\xe7\xbb\x84\xe4\xbb\xb6 //Spring Arm for holding camera \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_TraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsFiring,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter, 3301765907);
	template<> PLATFORMERGAME_API UClass* StaticClass<ABaseCharacter>()
	{
		return ABaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);

	void ABaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsFiring(TEXT("bIsFiring"));

		const bool bIsValid = true
			&& Name_bIsFiring == ClassReps[(int32)ENetFields_Private::bIsFiring].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

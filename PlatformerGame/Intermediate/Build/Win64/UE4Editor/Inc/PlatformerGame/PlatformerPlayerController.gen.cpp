// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerPlayerController() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerPlayerController_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlatformerPlayerController::execHideAllMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideAllMenus();
		P_NATIVE_END;
	}
	void APlatformerPlayerController::StaticRegisterNativesAPlatformerPlayerController()
	{
		UClass* Class = APlatformerPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideAllMenus", &APlatformerPlayerController::execHideAllMenus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer Player Controller" },
		{ "ModuleRelativePath", "PlatformerPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerPlayerController, nullptr, "HideAllMenus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformerPlayerController_NoRegister()
	{
		return APlatformerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerListDisplayed_MetaData[];
#endif
		static void NewProp_bPlayerListDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerListDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseMenuDisplayed_MetaData[];
#endif
		static void NewProp_bPauseMenuDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseMenuDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformerPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformerPlayerController_HideAllMenus, "HideAllMenus" }, // 3606024774
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformerPlayerController.h" },
		{ "ModuleRelativePath", "PlatformerPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed_MetaData[] = {
		{ "Category", "Platformer Player Controller" },
		{ "Comment", "//to hide or show the player list\n" },
		{ "ModuleRelativePath", "PlatformerPlayerController.h" },
		{ "ToolTip", "to hide or show the player list" },
	};
#endif
	void Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed_SetBit(void* Obj)
	{
		((APlatformerPlayerController*)Obj)->bPlayerListDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed = { "bPlayerListDisplayed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlatformerPlayerController), &Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed_MetaData[] = {
		{ "Category", "Platformer Player Controller" },
		{ "Comment", "//to hide or show pause menu\n" },
		{ "ModuleRelativePath", "PlatformerPlayerController.h" },
		{ "ToolTip", "to hide or show pause menu" },
	};
#endif
	void Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed_SetBit(void* Obj)
	{
		((APlatformerPlayerController*)Obj)->bPauseMenuDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed = { "bPauseMenuDisplayed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlatformerPlayerController), &Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_cHUD_MetaData[] = {
		{ "Category", "Platformer Player Controller" },
		{ "Comment", "//To hold a reference to our UMG HUD widget\n" },
		{ "ModuleRelativePath", "PlatformerPlayerController.h" },
		{ "ToolTip", "To hold a reference to our UMG HUD widget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_cHUD = { "cHUD", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformerPlayerController, cHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_cHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_cHUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPlayerListDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_bPauseMenuDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerPlayerController_Statics::NewProp_cHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerPlayerController_Statics::ClassParams = {
		&APlatformerPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformerPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerPlayerController, 4035790835);
	template<> PLATFORMERGAME_API UClass* StaticClass<APlatformerPlayerController>()
	{
		return APlatformerPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerPlayerController(Z_Construct_UClass_APlatformerPlayerController, &APlatformerPlayerController::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APlatformerPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameGameModeBase() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerGameGameModeBase_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APlatformerGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
// End Cross Module References
	void APlatformerGameGameModeBase::StaticRegisterNativesAPlatformerGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APlatformerGameGameModeBase_NoRegister()
	{
		return APlatformerGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformerGameGameModeBase.h" },
		{ "ModuleRelativePath", "PlatformerGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameGameModeBase_Statics::ClassParams = {
		&APlatformerGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerGameGameModeBase, 729190146);
	template<> PLATFORMERGAME_API UClass* StaticClass<APlatformerGameGameModeBase>()
	{
		return APlatformerGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerGameGameModeBase(Z_Construct_UClass_APlatformerGameGameModeBase, &APlatformerGameGameModeBase::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APlatformerGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

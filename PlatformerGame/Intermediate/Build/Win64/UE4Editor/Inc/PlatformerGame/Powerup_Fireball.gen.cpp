// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Powerup_Fireball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerup_Fireball() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup_Fireball_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup_Fireball();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
// End Cross Module References
	void APowerup_Fireball::StaticRegisterNativesAPowerup_Fireball()
	{
	}
	UClass* Z_Construct_UClass_APowerup_Fireball_NoRegister()
	{
		return APowerup_Fireball::StaticClass();
	}
	struct Z_Construct_UClass_APowerup_Fireball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerup_Fireball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Fireball_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Powerup_Fireball.h" },
		{ "ModuleRelativePath", "Powerup_Fireball.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerup_Fireball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerup_Fireball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerup_Fireball_Statics::ClassParams = {
		&APowerup_Fireball::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerup_Fireball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Fireball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerup_Fireball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerup_Fireball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerup_Fireball, 2225381077);
	template<> PLATFORMERGAME_API UClass* StaticClass<APowerup_Fireball>()
	{
		return APowerup_Fireball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerup_Fireball(Z_Construct_UClass_APowerup_Fireball, &APowerup_Fireball::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APowerup_Fireball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerup_Fireball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

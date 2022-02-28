// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Powerup_Fireball.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerup_Fireball);
	UClass* Z_Construct_UClass_APowerup_Fireball_NoRegister()
	{
		return APowerup_Fireball::StaticClass();
	}
	struct Z_Construct_UClass_APowerup_Fireball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerup_Fireball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Fireball_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Powerup_Fireball.h" },
		{ "ModuleRelativePath", "Powerup_Fireball.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerup_Fireball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerup_Fireball>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerup_Fireball_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_APowerup_Fireball.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerup_Fireball.OuterSingleton, Z_Construct_UClass_APowerup_Fireball_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APowerup_Fireball.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<APowerup_Fireball>()
	{
		return APowerup_Fireball::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerup_Fireball);
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_Fireball_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_Fireball_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APowerup_Fireball, APowerup_Fireball::StaticClass, TEXT("APowerup_Fireball"), &Z_Registration_Info_UClass_APowerup_Fireball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerup_Fireball), 55968091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_Fireball_h_3704124727(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_Fireball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_Fireball_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Pickup_Coin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup_Coin() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup_Coin_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup_Coin();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
// End Cross Module References
	void APickup_Coin::StaticRegisterNativesAPickup_Coin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup_Coin);
	UClass* Z_Construct_UClass_APickup_Coin_NoRegister()
	{
		return APickup_Coin::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Coin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Coin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Coin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickup_Coin.h" },
		{ "ModuleRelativePath", "Pickup_Coin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Coin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_Coin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Coin_Statics::ClassParams = {
		&APickup_Coin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APickup_Coin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Coin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup_Coin()
	{
		if (!Z_Registration_Info_UClass_APickup_Coin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup_Coin.OuterSingleton, Z_Construct_UClass_APickup_Coin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickup_Coin.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<APickup_Coin>()
	{
		return APickup_Coin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_Coin);
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_Coin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_Coin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickup_Coin, APickup_Coin::StaticClass, TEXT("APickup_Coin"), &Z_Registration_Info_UClass_APickup_Coin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup_Coin), 2680838425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_Coin_h_2215840154(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_Coin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_Coin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

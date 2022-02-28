// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Pickup_heart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup_heart() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup_heart_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup_heart();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
// End Cross Module References
	void APickup_heart::StaticRegisterNativesAPickup_heart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup_heart);
	UClass* Z_Construct_UClass_APickup_heart_NoRegister()
	{
		return APickup_heart::StaticClass();
	}
	struct Z_Construct_UClass_APickup_heart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_heart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_heart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickup_heart.h" },
		{ "ModuleRelativePath", "Pickup_heart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_heart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_heart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_heart_Statics::ClassParams = {
		&APickup_heart::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APickup_heart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_heart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup_heart()
	{
		if (!Z_Registration_Info_UClass_APickup_heart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup_heart.OuterSingleton, Z_Construct_UClass_APickup_heart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickup_heart.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<APickup_heart>()
	{
		return APickup_heart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_heart);
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_heart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_heart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickup_heart, APickup_heart::StaticClass, TEXT("APickup_heart"), &Z_Registration_Info_UClass_APickup_heart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup_heart), 913273150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_heart_h_3126318144(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_heart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Pickup_heart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

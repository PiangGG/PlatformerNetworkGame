// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Pickup_heart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_APickup_heart_NoRegister()
	{
		return APickup_heart::StaticClass();
	}
	struct Z_Construct_UClass_APickup_heart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_heart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_heart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickup_heart.h" },
		{ "ModuleRelativePath", "Pickup_heart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_heart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_heart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_heart_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_heart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup_heart, 2450638242);
	template<> PLATFORMERGAME_API UClass* StaticClass<APickup_heart>()
	{
		return APickup_heart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup_heart(Z_Construct_UClass_APickup_heart, &APickup_heart::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APickup_heart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_heart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

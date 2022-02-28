// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Powerup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerup() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APowerup();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void APowerup::StaticRegisterNativesAPowerup()
	{
	}
	UClass* Z_Construct_UClass_APowerup_NoRegister()
	{
		return APowerup::StaticClass();
	}
	struct Z_Construct_UClass_APowerup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Powerup.h" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::NewProp_icon_MetaData[] = {
		{ "Category", "Power Up" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerup_Statics::NewProp_icon = { "icon", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerup, icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::NewProp_icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::NewProp_icon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerup_Statics::NewProp_icon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerup_Statics::ClassParams = {
		&APowerup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APowerup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerup, 604941281);
	template<> PLATFORMERGAME_API UClass* StaticClass<APowerup>()
	{
		return APowerup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerup(Z_Construct_UClass_APowerup, &APowerup::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APowerup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

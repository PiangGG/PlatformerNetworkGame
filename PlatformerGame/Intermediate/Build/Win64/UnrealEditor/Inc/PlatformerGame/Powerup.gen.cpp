// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Powerup.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerup);
	UClass* Z_Construct_UClass_APowerup_NoRegister()
	{
		return APowerup::StaticClass();
	}
	struct Z_Construct_UClass_APowerup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Powerup.h" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerup_Statics::NewProp_icon_MetaData[] = {
		{ "Category", "Power Up" },
		{ "ModuleRelativePath", "Powerup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerup_Statics::NewProp_icon = { "icon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerup, icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerup_Statics::NewProp_icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerup_Statics::NewProp_icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerup_Statics::NewProp_icon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerup_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_APowerup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerup.OuterSingleton, Z_Construct_UClass_APowerup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APowerup.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<APowerup>()
	{
		return APowerup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerup);
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APowerup, APowerup::StaticClass, TEXT("APowerup"), &Z_Registration_Info_UClass_APowerup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerup), 612708777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_h_243962149(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Powerup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

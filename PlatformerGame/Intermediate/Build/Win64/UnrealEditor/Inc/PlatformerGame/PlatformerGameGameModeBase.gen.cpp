// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/PlatformerGameGameModeBase.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerGameGameModeBase);
	UClass* Z_Construct_UClass_APlatformerGameGameModeBase_NoRegister()
	{
		return APlatformerGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameGameModeBase.h" },
		{ "ModuleRelativePath", "PlatformerGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameGameModeBase_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_APlatformerGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameGameModeBase.OuterSingleton, Z_Construct_UClass_APlatformerGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerGameGameModeBase.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<APlatformerGameGameModeBase>()
	{
		return APlatformerGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameGameModeBase, APlatformerGameGameModeBase::StaticClass, TEXT("APlatformerGameGameModeBase"), &Z_Registration_Info_UClass_APlatformerGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameGameModeBase), 3559473851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameGameModeBase_h_193142545(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_PlatformerGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

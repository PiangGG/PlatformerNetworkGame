// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlatformerGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlatformerGame()
	{
		if (!Z_Registration_Info_UPackage__Script_PlatformerGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlatformerGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x55030809,
				0xD4F64F93,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlatformerGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlatformerGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlatformerGame(Z_Construct_UPackage__Script_PlatformerGame, TEXT("/Script/PlatformerGame"), Z_Registration_Info_UPackage__Script_PlatformerGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x55030809, 0xD4F64F93));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

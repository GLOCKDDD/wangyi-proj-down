// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemy_game_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_my_game;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_my_game()
	{
		if (!Z_Registration_Info_UPackage__Script_my_game.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/my_game",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5C4882C9,
				0xB40974A2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_my_game.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_my_game.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_my_game(Z_Construct_UPackage__Script_my_game, TEXT("/Script/my_game"), Z_Registration_Info_UPackage__Script_my_game, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5C4882C9, 0xB40974A2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

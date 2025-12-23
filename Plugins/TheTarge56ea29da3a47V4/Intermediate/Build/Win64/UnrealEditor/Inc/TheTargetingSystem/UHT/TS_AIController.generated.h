// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TS_AIController.h"

#ifdef THETARGETINGSYSTEM_TS_AIController_generated_h
#error "TS_AIController.generated.h already included, missing '#pragma once' in TS_AIController.h"
#endif
#define THETARGETINGSYSTEM_TS_AIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATS_AIController *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTargetRight); \
	DECLARE_FUNCTION(execTargetLeft); \
	DECLARE_FUNCTION(execTargetCenter);


THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATS_AIController_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATS_AIController(); \
	friend struct Z_Construct_UClass_ATS_AIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATS_AIController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATS_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTargetingSystem"), Z_Construct_UClass_ATS_AIController_NoRegister) \
	DECLARE_SERIALIZER(ATS_AIController)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATS_AIController(ATS_AIController&&) = delete; \
	ATS_AIController(const ATS_AIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATS_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATS_AIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATS_AIController) \
	NO_API virtual ~ATS_AIController();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATS_AIController;

// ********** End Class ATS_AIController ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TS_AIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetingSystemComponent.h"

#ifdef THETARGETINGSYSTEM_TargetingSystemComponent_generated_h
#error "TargetingSystemComponent.generated.h already included, missing '#pragma once' in TargetingSystemComponent.h"
#endif
#define THETARGETINGSYSTEM_TargetingSystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UAIPerceptionComponent;

// ********** Begin Class UTargetingSystemComponent ************************************************
#define FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientHideWidgetForTargetNotBeingLockOnTo_Implementation() const; \
	virtual void ClientShowWidgetForTargetNotBeingLockOnTo_Implementation() const; \
	virtual bool ServerEnableOrDisableLockOn_Validate(bool ); \
	virtual void ServerEnableOrDisableLockOn_Implementation(bool bInEnable); \
	virtual bool MulticastOpenGateForTick_Validate(); \
	virtual void MulticastOpenGateForTick_Implementation(); \
	virtual bool MulticastCloseGateForTick_Validate(); \
	virtual void MulticastCloseGateForTick_Implementation(); \
	virtual bool ServerCloseGateForTick_Validate(); \
	virtual void ServerCloseGateForTick_Implementation(); \
	virtual void ClientHideOrDisplayWidgetForLockedOnTarget_Implementation(bool bHide, bool bUseDelay); \
	virtual bool ServerSwitchToTheTargetToTheRightOfCurrentTarget_Validate(); \
	virtual void ServerSwitchToTheTargetToTheRightOfCurrentTarget_Implementation(); \
	virtual bool ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Validate(); \
	virtual void ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Implementation(); \
	virtual bool ServerSwitchTargets_Validate(bool ); \
	virtual void ServerSwitchTargets_Implementation(bool bSwitchTarget); \
	virtual bool ServerDetermineActorToTargetFromLowestRotationAngleArray_Validate(); \
	virtual void ServerDetermineActorToTargetFromLowestRotationAngleArray_Implementation(); \
	virtual bool ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Validate(); \
	virtual void ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Implementation(); \
	virtual bool ServerResetAllArrays_Validate(); \
	virtual void ServerResetAllArrays_Implementation(); \
	virtual bool ServerStorePerceivedActorsInArray_Validate(); \
	virtual void ServerStorePerceivedActorsInArray_Implementation(); \
	virtual bool ServerLockOnToTarget_Right_Validate(); \
	virtual void ServerLockOnToTarget_Right_Implementation(); \
	virtual bool ServerLockOnToTarget_Left_Validate(); \
	virtual void ServerLockOnToTarget_Left_Implementation(); \
	virtual bool ServerLockOnToTarget_Validate(); \
	virtual void ServerLockOnToTarget_Implementation(); \
	virtual bool ServerInitializeVariables_Validate(UAIPerceptionComponent* , AActor* ); \
	virtual void ServerInitializeVariables_Implementation(UAIPerceptionComponent* InAIPerceptionComponent, AActor* InOwningCharacter); \
	DECLARE_FUNCTION(execEnterLockOnClientGate); \
	DECLARE_FUNCTION(execClientHideWidgetForTargetNotBeingLockOnTo); \
	DECLARE_FUNCTION(execClientShowWidgetForTargetNotBeingLockOnTo); \
	DECLARE_FUNCTION(execClearTimer_StorePerceivedActorsInArray); \
	DECLARE_FUNCTION(execTimer_StorePerceivedActorInArray); \
	DECLARE_FUNCTION(execServerEnableOrDisableLockOn); \
	DECLARE_FUNCTION(execMulticastOpenGateForTick); \
	DECLARE_FUNCTION(execMulticastCloseGateForTick); \
	DECLARE_FUNCTION(execServerCloseGateForTick); \
	DECLARE_FUNCTION(execClientHideOrDisplayWidgetForLockedOnTarget); \
	DECLARE_FUNCTION(execServerSwitchToTheTargetToTheRightOfCurrentTarget); \
	DECLARE_FUNCTION(execServerSwitchToTheTargetToTheLeftOfCurrentTarget); \
	DECLARE_FUNCTION(execServerSwitchTargets); \
	DECLARE_FUNCTION(execServerDetermineActorToTargetFromLowestRotationAngleArray); \
	DECLARE_FUNCTION(execServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget); \
	DECLARE_FUNCTION(execServerResetAllArrays); \
	DECLARE_FUNCTION(execServerStorePerceivedActorsInArray); \
	DECLARE_FUNCTION(execServerLockOnToTarget_Right); \
	DECLARE_FUNCTION(execServerLockOnToTarget_Left); \
	DECLARE_FUNCTION(execServerLockOnToTarget); \
	DECLARE_FUNCTION(execServerInitializeVariables); \
	DECLARE_FUNCTION(execSortArray_Float); \
	DECLARE_FUNCTION(execGetAngleBetweenVectors_UsingArcTanDifference); \
	DECLARE_FUNCTION(execGetAngleBetweenVectors_UsingDeltaRotation); \
	DECLARE_FUNCTION(execFindIdealActorToTarget_NoAbs); \
	DECLARE_FUNCTION(execFindIdealActorToTarget);


#define FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_CALLBACK_WRAPPERS
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSystemComponent_NoRegister();

#define FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingSystemComponent(); \
	friend struct Z_Construct_UClass_UTargetingSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetingSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTargetingSystem"), Z_Construct_UClass_UTargetingSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UTargetingSystemComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bInitialize=NETFIELD_REP_START, \
		OwningActor, \
		AIPerceptionComponent, \
		ActorToTarget, \
		bIsLockOnEnabled, \
		bOpenGateForTick, \
		AutoSwitchTargetsOnPerceptionFailure, \
		AutoSwitchTargetsOnActorToTargetInvalid, \
		InterpolationSpeed, \
		AllPerceivedActors, \
		ShouldShowWidgetForLockOn, \
		LowestRotationAngle_Array, \
		DelayBeforeLockOn, \
		NETFIELD_REP_END=DelayBeforeLockOn	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetingSystemComponent(UTargetingSystemComponent&&) = delete; \
	UTargetingSystemComponent(const UTargetingSystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetingSystemComponent) \
	NO_API virtual ~UTargetingSystemComponent();


#define FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_17_PROLOG
#define FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_CALLBACK_WRAPPERS \
	FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetingSystemComponent;

// ********** End Class UTargetingSystemComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TargetingSystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystemComponent.h"
#include "UObject/CoreNet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTargetingSystemComponent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSystemComponent();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheTargetingSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTargetingSystemComponent Function ClearTimer_StorePerceivedActorsInArray 
struct Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StorePerceivedActors" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ClearTimer_StorePerceivedActorsInArray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execClearTimer_StorePerceivedActorsInArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTimer_StorePerceivedActorsInArray();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ClearTimer_StorePerceivedActorsInArray **

// ********** Begin Class UTargetingSystemComponent Function ClientHideOrDisplayWidgetForLockedOnTarget 
struct TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms
{
	bool bHide;
	bool bUseDelay;
};
static FName NAME_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget = FName(TEXT("ClientHideOrDisplayWidgetForLockedOnTarget"));
void UTargetingSystemComponent::ClientHideOrDisplayWidgetForLockedOnTarget(bool bHide, bool bUseDelay)
{
	TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms Parms;
	Parms.bHide=bHide ? true : false;
	Parms.bUseDelay=bUseDelay ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HideOrDisplayWidget" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHide;
	static void NewProp_bUseDelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bHide_SetBit(void* Obj)
{
	((TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms*)Obj)->bHide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bHide = { "bHide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms), &Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bHide_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bUseDelay_SetBit(void* Obj)
{
	((TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms*)Obj)->bUseDelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bUseDelay = { "bUseDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms), &Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bUseDelay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bHide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::NewProp_bUseDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ClientHideOrDisplayWidgetForLockedOnTarget", Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::PropPointers), sizeof(TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetingSystemComponent_eventClientHideOrDisplayWidgetForLockedOnTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execClientHideOrDisplayWidgetForLockedOnTarget)
{
	P_GET_UBOOL(Z_Param_bHide);
	P_GET_UBOOL(Z_Param_bUseDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientHideOrDisplayWidgetForLockedOnTarget_Implementation(Z_Param_bHide,Z_Param_bUseDelay);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ClientHideOrDisplayWidgetForLockedOnTarget 

// ********** Begin Class UTargetingSystemComponent Function ClientHideWidgetForTargetNotBeingLockOnTo 
static FName NAME_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo = FName(TEXT("ClientHideWidgetForTargetNotBeingLockOnTo"));
void UTargetingSystemComponent::ClientHideWidgetForTargetNotBeingLockOnTo() const
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo);
		const_cast<UTargetingSystemComponent*>(this)->ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock On Variables|UI" },
		{ "Comment", "//Hide Widget For Target Not Being Locked On To, So Only The  Target Being Locked On To Displays The 3D Widget\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Hide Widget For Target Not Being Locked On To, So Only The  Target Being Locked On To Displays The 3D Widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ClientHideWidgetForTargetNotBeingLockOnTo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x45080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execClientHideWidgetForTargetNotBeingLockOnTo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientHideWidgetForTargetNotBeingLockOnTo_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ClientHideWidgetForTargetNotBeingLockOnTo 

// ********** Begin Class UTargetingSystemComponent Function ClientShowWidgetForTargetNotBeingLockOnTo 
static FName NAME_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo = FName(TEXT("ClientShowWidgetForTargetNotBeingLockOnTo"));
void UTargetingSystemComponent::ClientShowWidgetForTargetNotBeingLockOnTo() const
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo);
		const_cast<UTargetingSystemComponent*>(this)->ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock On Variables|UI" },
		{ "Comment", "//Hide Widget For Target Not Being Locked On To, So Only The  Target Being Locked On To Displays The 3D Widget\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Hide Widget For Target Not Being Locked On To, So Only The  Target Being Locked On To Displays The 3D Widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ClientShowWidgetForTargetNotBeingLockOnTo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x45080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execClientShowWidgetForTargetNotBeingLockOnTo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientShowWidgetForTargetNotBeingLockOnTo_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ClientShowWidgetForTargetNotBeingLockOnTo 

// ********** Begin Class UTargetingSystemComponent Function EnterLockOnClientGate *****************
struct Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "Comment", "//function for tick\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "function for tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "EnterLockOnClientGate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execEnterLockOnClientGate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterLockOnClientGate();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function EnterLockOnClientGate *******************

// ********** Begin Class UTargetingSystemComponent Function FindIdealActorToTarget ****************
struct Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics
{
	struct TargetingSystemComponent_eventFindIdealActorToTarget_Parms
	{
		TArray<float> InArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HelperFunctions" },
		{ "Comment", "//Find Ideal Actor To Target in given Array\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Find Ideal Actor To Target in given Array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventFindIdealActorToTarget_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::NewProp_InArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "FindIdealActorToTarget", Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::TargetingSystemComponent_eventFindIdealActorToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::TargetingSystemComponent_eventFindIdealActorToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execFindIdealActorToTarget)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindIdealActorToTarget(Z_Param_Out_InArray);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function FindIdealActorToTarget ******************

// ********** Begin Class UTargetingSystemComponent Function FindIdealActorToTarget_NoAbs **********
struct Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics
{
	struct TargetingSystemComponent_eventFindIdealActorToTarget_NoAbs_Parms
	{
		TArray<float> InArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HelperFunctions" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventFindIdealActorToTarget_NoAbs_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::NewProp_InArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "FindIdealActorToTarget_NoAbs", Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::TargetingSystemComponent_eventFindIdealActorToTarget_NoAbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::TargetingSystemComponent_eventFindIdealActorToTarget_NoAbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execFindIdealActorToTarget_NoAbs)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindIdealActorToTarget_NoAbs(Z_Param_Out_InArray);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function FindIdealActorToTarget_NoAbs ************

// ********** Begin Class UTargetingSystemComponent Function GetAngleBetweenVectors_UsingArcTanDifference 
struct Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics
{
	struct TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms
	{
		FVector InStart;
		FVector InTarget;
		FVector InDirectionVector;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Get Angle Between Vectors" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDirectionVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_InStart = { "InStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms, InStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_InTarget = { "InTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms, InTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_InDirectionVector = { "InDirectionVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms, InDirectionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_InStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_InTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_InDirectionVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "GetAngleBetweenVectors_UsingArcTanDifference", Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::TargetingSystemComponent_eventGetAngleBetweenVectors_UsingArcTanDifference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execGetAngleBetweenVectors_UsingArcTanDifference)
{
	P_GET_STRUCT(FVector,Z_Param_InStart);
	P_GET_STRUCT(FVector,Z_Param_InTarget);
	P_GET_STRUCT(FVector,Z_Param_InDirectionVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UTargetingSystemComponent::GetAngleBetweenVectors_UsingArcTanDifference(Z_Param_InStart,Z_Param_InTarget,Z_Param_InDirectionVector);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function GetAngleBetweenVectors_UsingArcTanDifference 

// ********** Begin Class UTargetingSystemComponent Function GetAngleBetweenVectors_UsingDeltaRotation 
struct Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics
{
	struct TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms
	{
		FVector InStart;
		FVector InTarget;
		FRotator InRotationToCheckAgainst;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Get Angle Between Vectors" },
		{ "Comment", "//Get Angle between vectors\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Get Angle between vectors" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotationToCheckAgainst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_InStart = { "InStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms, InStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_InTarget = { "InTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms, InTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_InRotationToCheckAgainst = { "InRotationToCheckAgainst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms, InRotationToCheckAgainst), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_InStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_InTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_InRotationToCheckAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "GetAngleBetweenVectors_UsingDeltaRotation", Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::TargetingSystemComponent_eventGetAngleBetweenVectors_UsingDeltaRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execGetAngleBetweenVectors_UsingDeltaRotation)
{
	P_GET_STRUCT(FVector,Z_Param_InStart);
	P_GET_STRUCT(FVector,Z_Param_InTarget);
	P_GET_STRUCT(FRotator,Z_Param_InRotationToCheckAgainst);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UTargetingSystemComponent::GetAngleBetweenVectors_UsingDeltaRotation(Z_Param_InStart,Z_Param_InTarget,Z_Param_InRotationToCheckAgainst);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function GetAngleBetweenVectors_UsingDeltaRotation 

// ********** Begin Class UTargetingSystemComponent Function MulticastCloseGateForTick *************
static FName NAME_UTargetingSystemComponent_MulticastCloseGateForTick = FName(TEXT("MulticastCloseGateForTick"));
void UTargetingSystemComponent::MulticastCloseGateForTick()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_MulticastCloseGateForTick);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TickGates" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "MulticastCloseGateForTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execMulticastCloseGateForTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->MulticastCloseGateForTick_Validate())
	{
		RPC_ValidateFailed(TEXT("MulticastCloseGateForTick_Validate"));
		return;
	}
	P_THIS->MulticastCloseGateForTick_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function MulticastCloseGateForTick ***************

// ********** Begin Class UTargetingSystemComponent Function MulticastOpenGateForTick **************
static FName NAME_UTargetingSystemComponent_MulticastOpenGateForTick = FName(TEXT("MulticastOpenGateForTick"));
void UTargetingSystemComponent::MulticastOpenGateForTick()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_MulticastOpenGateForTick);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TickGates" },
		{ "Comment", "//Allow fixing the camera unto the target\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Allow fixing the camera unto the target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "MulticastOpenGateForTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execMulticastOpenGateForTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->MulticastOpenGateForTick_Validate())
	{
		RPC_ValidateFailed(TEXT("MulticastOpenGateForTick_Validate"));
		return;
	}
	P_THIS->MulticastOpenGateForTick_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function MulticastOpenGateForTick ****************

// ********** Begin Class UTargetingSystemComponent Function ServerCloseGateForTick ****************
static FName NAME_UTargetingSystemComponent_ServerCloseGateForTick = FName(TEXT("ServerCloseGateForTick"));
void UTargetingSystemComponent::ServerCloseGateForTick()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerCloseGateForTick);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TickGates" },
		{ "Comment", "//Prevent auto-camera rotation which is done on tick\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Prevent auto-camera rotation which is done on tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerCloseGateForTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerCloseGateForTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCloseGateForTick_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerCloseGateForTick_Validate"));
		return;
	}
	P_THIS->ServerCloseGateForTick_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerCloseGateForTick ******************

// ********** Begin Class UTargetingSystemComponent Function ServerDetermineActorToTargetFromLowestRotationAngleArray 
static FName NAME_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray = FName(TEXT("ServerDetermineActorToTargetFromLowestRotationAngleArray"));
void UTargetingSystemComponent::ServerDetermineActorToTargetFromLowestRotationAngleArray()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FilterPerceivedActorsForTarget" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerDetermineActorToTargetFromLowestRotationAngleArray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerDetermineActorToTargetFromLowestRotationAngleArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerDetermineActorToTargetFromLowestRotationAngleArray_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerDetermineActorToTargetFromLowestRotationAngleArray_Validate"));
		return;
	}
	P_THIS->ServerDetermineActorToTargetFromLowestRotationAngleArray_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerDetermineActorToTargetFromLowestRotationAngleArray 

// ********** Begin Class UTargetingSystemComponent Function ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget 
static FName NAME_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget = FName(TEXT("ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget"));
void UTargetingSystemComponent::ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FilterPerceivedActorsForTarget" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Validate"));
		return;
	}
	P_THIS->ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget 

// ********** Begin Class UTargetingSystemComponent Function ServerEnableOrDisableLockOn ***********
struct TargetingSystemComponent_eventServerEnableOrDisableLockOn_Parms
{
	bool bInEnable;
};
static FName NAME_UTargetingSystemComponent_ServerEnableOrDisableLockOn = FName(TEXT("ServerEnableOrDisableLockOn"));
void UTargetingSystemComponent::ServerEnableOrDisableLockOn(bool bInEnable)
{
	TargetingSystemComponent_eventServerEnableOrDisableLockOn_Parms Parms;
	Parms.bInEnable=bInEnable ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerEnableOrDisableLockOn);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "Comment", "//helper functions for Lock On\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "helper functions for Lock On" },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::NewProp_bInEnable_SetBit(void* Obj)
{
	((TargetingSystemComponent_eventServerEnableOrDisableLockOn_Parms*)Obj)->bInEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetingSystemComponent_eventServerEnableOrDisableLockOn_Parms), &Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::NewProp_bInEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::NewProp_bInEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerEnableOrDisableLockOn", Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::PropPointers), sizeof(TargetingSystemComponent_eventServerEnableOrDisableLockOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetingSystemComponent_eventServerEnableOrDisableLockOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerEnableOrDisableLockOn)
{
	P_GET_UBOOL(Z_Param_bInEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerEnableOrDisableLockOn_Validate(Z_Param_bInEnable))
	{
		RPC_ValidateFailed(TEXT("ServerEnableOrDisableLockOn_Validate"));
		return;
	}
	P_THIS->ServerEnableOrDisableLockOn_Implementation(Z_Param_bInEnable);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerEnableOrDisableLockOn *************

// ********** Begin Class UTargetingSystemComponent Function ServerInitializeVariables *************
struct TargetingSystemComponent_eventServerInitializeVariables_Parms
{
	UAIPerceptionComponent* InAIPerceptionComponent;
	AActor* InOwningCharacter;
};
static FName NAME_UTargetingSystemComponent_ServerInitializeVariables = FName(TEXT("ServerInitializeVariables"));
void UTargetingSystemComponent::ServerInitializeVariables(UAIPerceptionComponent* InAIPerceptionComponent, AActor* InOwningCharacter)
{
	TargetingSystemComponent_eventServerInitializeVariables_Parms Parms;
	Parms.InAIPerceptionComponent=InAIPerceptionComponent;
	Parms.InOwningCharacter=InOwningCharacter;
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerInitializeVariables);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "Comment", "//Initialize variables\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Initialize variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwningCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::NewProp_InAIPerceptionComponent = { "InAIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventServerInitializeVariables_Parms, InAIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAIPerceptionComponent_MetaData), NewProp_InAIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::NewProp_InOwningCharacter = { "InOwningCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventServerInitializeVariables_Parms, InOwningCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::NewProp_InAIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::NewProp_InOwningCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerInitializeVariables", Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::PropPointers), sizeof(TargetingSystemComponent_eventServerInitializeVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetingSystemComponent_eventServerInitializeVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerInitializeVariables)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_InAIPerceptionComponent);
	P_GET_OBJECT(AActor,Z_Param_InOwningCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerInitializeVariables_Validate(Z_Param_InAIPerceptionComponent,Z_Param_InOwningCharacter))
	{
		RPC_ValidateFailed(TEXT("ServerInitializeVariables_Validate"));
		return;
	}
	P_THIS->ServerInitializeVariables_Implementation(Z_Param_InAIPerceptionComponent,Z_Param_InOwningCharacter);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerInitializeVariables ***************

// ********** Begin Class UTargetingSystemComponent Function ServerLockOnToTarget ******************
static FName NAME_UTargetingSystemComponent_ServerLockOnToTarget = FName(TEXT("ServerLockOnToTarget"));
void UTargetingSystemComponent::ServerLockOnToTarget()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerLockOnToTarget);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "Comment", "//Lock On functions (called from input)\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Lock On functions (called from input)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerLockOnToTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerLockOnToTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerLockOnToTarget_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerLockOnToTarget_Validate"));
		return;
	}
	P_THIS->ServerLockOnToTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerLockOnToTarget ********************

// ********** Begin Class UTargetingSystemComponent Function ServerLockOnToTarget_Left *************
static FName NAME_UTargetingSystemComponent_ServerLockOnToTarget_Left = FName(TEXT("ServerLockOnToTarget_Left"));
void UTargetingSystemComponent::ServerLockOnToTarget_Left()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerLockOnToTarget_Left);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerLockOnToTarget_Left", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerLockOnToTarget_Left)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerLockOnToTarget_Left_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerLockOnToTarget_Left_Validate"));
		return;
	}
	P_THIS->ServerLockOnToTarget_Left_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerLockOnToTarget_Left ***************

// ********** Begin Class UTargetingSystemComponent Function ServerLockOnToTarget_Right ************
static FName NAME_UTargetingSystemComponent_ServerLockOnToTarget_Right = FName(TEXT("ServerLockOnToTarget_Right"));
void UTargetingSystemComponent::ServerLockOnToTarget_Right()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerLockOnToTarget_Right);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerLockOnToTarget_Right", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerLockOnToTarget_Right)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerLockOnToTarget_Right_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerLockOnToTarget_Right_Validate"));
		return;
	}
	P_THIS->ServerLockOnToTarget_Right_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerLockOnToTarget_Right **************

// ********** Begin Class UTargetingSystemComponent Function ServerResetAllArrays ******************
static FName NAME_UTargetingSystemComponent_ServerResetAllArrays = FName(TEXT("ServerResetAllArrays"));
void UTargetingSystemComponent::ServerResetAllArrays()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerResetAllArrays);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StorePerceivedActors" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerResetAllArrays", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerResetAllArrays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerResetAllArrays_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerResetAllArrays_Validate"));
		return;
	}
	P_THIS->ServerResetAllArrays_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerResetAllArrays ********************

// ********** Begin Class UTargetingSystemComponent Function ServerStorePerceivedActorsInArray *****
static FName NAME_UTargetingSystemComponent_ServerStorePerceivedActorsInArray = FName(TEXT("ServerStorePerceivedActorsInArray"));
void UTargetingSystemComponent::ServerStorePerceivedActorsInArray()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerStorePerceivedActorsInArray);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StorePerceivedActors" },
		{ "Comment", "//get perceived actors and store them in an array\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "get perceived actors and store them in an array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerStorePerceivedActorsInArray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerStorePerceivedActorsInArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerStorePerceivedActorsInArray_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerStorePerceivedActorsInArray_Validate"));
		return;
	}
	P_THIS->ServerStorePerceivedActorsInArray_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerStorePerceivedActorsInArray *******

// ********** Begin Class UTargetingSystemComponent Function ServerSwitchTargets *******************
struct TargetingSystemComponent_eventServerSwitchTargets_Parms
{
	bool bSwitchTarget;
};
static FName NAME_UTargetingSystemComponent_ServerSwitchTargets = FName(TEXT("ServerSwitchTargets"));
void UTargetingSystemComponent::ServerSwitchTargets(bool bSwitchTarget)
{
	TargetingSystemComponent_eventServerSwitchTargets_Parms Parms;
	Parms.bSwitchTarget=bSwitchTarget ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerSwitchTargets);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SwitchTargets" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSwitchTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::NewProp_bSwitchTarget_SetBit(void* Obj)
{
	((TargetingSystemComponent_eventServerSwitchTargets_Parms*)Obj)->bSwitchTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::NewProp_bSwitchTarget = { "bSwitchTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetingSystemComponent_eventServerSwitchTargets_Parms), &Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::NewProp_bSwitchTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::NewProp_bSwitchTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerSwitchTargets", Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::PropPointers), sizeof(TargetingSystemComponent_eventServerSwitchTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetingSystemComponent_eventServerSwitchTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerSwitchTargets)
{
	P_GET_UBOOL(Z_Param_bSwitchTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSwitchTargets_Validate(Z_Param_bSwitchTarget))
	{
		RPC_ValidateFailed(TEXT("ServerSwitchTargets_Validate"));
		return;
	}
	P_THIS->ServerSwitchTargets_Implementation(Z_Param_bSwitchTarget);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerSwitchTargets *********************

// ********** Begin Class UTargetingSystemComponent Function ServerSwitchToTheTargetToTheLeftOfCurrentTarget 
static FName NAME_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget = FName(TEXT("ServerSwitchToTheTargetToTheLeftOfCurrentTarget"));
void UTargetingSystemComponent::ServerSwitchToTheTargetToTheLeftOfCurrentTarget()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SwitchTargets" },
		{ "Comment", "//switch to target to the left of the current targeted actor\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "switch to target to the left of the current targeted actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerSwitchToTheTargetToTheLeftOfCurrentTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerSwitchToTheTargetToTheLeftOfCurrentTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Validate"));
		return;
	}
	P_THIS->ServerSwitchToTheTargetToTheLeftOfCurrentTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerSwitchToTheTargetToTheLeftOfCurrentTarget 

// ********** Begin Class UTargetingSystemComponent Function ServerSwitchToTheTargetToTheRightOfCurrentTarget 
static FName NAME_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget = FName(TEXT("ServerSwitchToTheTargetToTheRightOfCurrentTarget"));
void UTargetingSystemComponent::ServerSwitchToTheTargetToTheRightOfCurrentTarget()
{
	UFunction* Func = FindFunctionChecked(NAME_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SwitchTargets" },
		{ "Comment", "//switch to target to the right of the current targeted actor\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "switch to target to the right of the current targeted actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "ServerSwitchToTheTargetToTheRightOfCurrentTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execServerSwitchToTheTargetToTheRightOfCurrentTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSwitchToTheTargetToTheRightOfCurrentTarget_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerSwitchToTheTargetToTheRightOfCurrentTarget_Validate"));
		return;
	}
	P_THIS->ServerSwitchToTheTargetToTheRightOfCurrentTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function ServerSwitchToTheTargetToTheRightOfCurrentTarget 

// ********** Begin Class UTargetingSystemComponent Function SortArray_Float ***********************
struct Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics
{
	struct TargetingSystemComponent_eventSortArray_Float_Parms
	{
		TArray<float> ArrayToSort;
		bool bReversed;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sort Array" },
		{ "Comment", "//Sort Function\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Sort Function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayToSort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrayToSort_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayToSort;
	static void NewProp_bReversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ArrayToSort_Inner = { "ArrayToSort", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ArrayToSort = { "ArrayToSort", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventSortArray_Float_Parms, ArrayToSort), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayToSort_MetaData), NewProp_ArrayToSort_MetaData) };
void Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_bReversed_SetBit(void* Obj)
{
	((TargetingSystemComponent_eventSortArray_Float_Parms*)Obj)->bReversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetingSystemComponent_eventSortArray_Float_Parms), &Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingSystemComponent_eventSortArray_Float_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ArrayToSort_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ArrayToSort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_bReversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "SortArray_Float", Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::TargetingSystemComponent_eventSortArray_Float_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::TargetingSystemComponent_eventSortArray_Float_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execSortArray_Float)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_ArrayToSort);
	P_GET_UBOOL(Z_Param_bReversed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->SortArray_Float(Z_Param_Out_ArrayToSort,Z_Param_bReversed);
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function SortArray_Float *************************

// ********** Begin Class UTargetingSystemComponent Function Timer_StorePerceivedActorInArray ******
struct Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StorePerceivedActors" },
		{ "Comment", "//timers\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "timers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetingSystemComponent, nullptr, "Timer_StorePerceivedActorInArray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingSystemComponent::execTimer_StorePerceivedActorInArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Timer_StorePerceivedActorInArray();
	P_NATIVE_END;
}
// ********** End Class UTargetingSystemComponent Function Timer_StorePerceivedActorInArray ********

// ********** Begin Class UTargetingSystemComponent ************************************************
void UTargetingSystemComponent::StaticRegisterNativesUTargetingSystemComponent()
{
	UClass* Class = UTargetingSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTimer_StorePerceivedActorsInArray", &UTargetingSystemComponent::execClearTimer_StorePerceivedActorsInArray },
		{ "ClientHideOrDisplayWidgetForLockedOnTarget", &UTargetingSystemComponent::execClientHideOrDisplayWidgetForLockedOnTarget },
		{ "ClientHideWidgetForTargetNotBeingLockOnTo", &UTargetingSystemComponent::execClientHideWidgetForTargetNotBeingLockOnTo },
		{ "ClientShowWidgetForTargetNotBeingLockOnTo", &UTargetingSystemComponent::execClientShowWidgetForTargetNotBeingLockOnTo },
		{ "EnterLockOnClientGate", &UTargetingSystemComponent::execEnterLockOnClientGate },
		{ "FindIdealActorToTarget", &UTargetingSystemComponent::execFindIdealActorToTarget },
		{ "FindIdealActorToTarget_NoAbs", &UTargetingSystemComponent::execFindIdealActorToTarget_NoAbs },
		{ "GetAngleBetweenVectors_UsingArcTanDifference", &UTargetingSystemComponent::execGetAngleBetweenVectors_UsingArcTanDifference },
		{ "GetAngleBetweenVectors_UsingDeltaRotation", &UTargetingSystemComponent::execGetAngleBetweenVectors_UsingDeltaRotation },
		{ "MulticastCloseGateForTick", &UTargetingSystemComponent::execMulticastCloseGateForTick },
		{ "MulticastOpenGateForTick", &UTargetingSystemComponent::execMulticastOpenGateForTick },
		{ "ServerCloseGateForTick", &UTargetingSystemComponent::execServerCloseGateForTick },
		{ "ServerDetermineActorToTargetFromLowestRotationAngleArray", &UTargetingSystemComponent::execServerDetermineActorToTargetFromLowestRotationAngleArray },
		{ "ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget", &UTargetingSystemComponent::execServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget },
		{ "ServerEnableOrDisableLockOn", &UTargetingSystemComponent::execServerEnableOrDisableLockOn },
		{ "ServerInitializeVariables", &UTargetingSystemComponent::execServerInitializeVariables },
		{ "ServerLockOnToTarget", &UTargetingSystemComponent::execServerLockOnToTarget },
		{ "ServerLockOnToTarget_Left", &UTargetingSystemComponent::execServerLockOnToTarget_Left },
		{ "ServerLockOnToTarget_Right", &UTargetingSystemComponent::execServerLockOnToTarget_Right },
		{ "ServerResetAllArrays", &UTargetingSystemComponent::execServerResetAllArrays },
		{ "ServerStorePerceivedActorsInArray", &UTargetingSystemComponent::execServerStorePerceivedActorsInArray },
		{ "ServerSwitchTargets", &UTargetingSystemComponent::execServerSwitchTargets },
		{ "ServerSwitchToTheTargetToTheLeftOfCurrentTarget", &UTargetingSystemComponent::execServerSwitchToTheTargetToTheLeftOfCurrentTarget },
		{ "ServerSwitchToTheTargetToTheRightOfCurrentTarget", &UTargetingSystemComponent::execServerSwitchToTheTargetToTheRightOfCurrentTarget },
		{ "SortArray_Float", &UTargetingSystemComponent::execSortArray_Float },
		{ "Timer_StorePerceivedActorInArray", &UTargetingSystemComponent::execTimer_StorePerceivedActorInArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTargetingSystemComponent;
UClass* UTargetingSystemComponent::GetPrivateStaticClass()
{
	using TClass = UTargetingSystemComponent;
	if (!Z_Registration_Info_UClass_UTargetingSystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TargetingSystemComponent"),
			Z_Registration_Info_UClass_UTargetingSystemComponent.InnerSingleton,
			StaticRegisterNativesUTargetingSystemComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTargetingSystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTargetingSystemComponent_NoRegister()
{
	return UTargetingSystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTargetingSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TargetingSystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialize_MetaData[] = {
		{ "Category", "Initialization" },
		{ "Comment", "//variables\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
		{ "Category", "Actors|Owner" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTarget_MetaData[] = {
		{ "Category", "Actors|Target" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLockOnEnabled_MetaData[] = {
		{ "Category", "Lock On Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenGateForTick_MetaData[] = {
		{ "Category", "TickGates" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSwitchTargetsOnPerceptionFailure_MetaData[] = {
		{ "Category", "Perception Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSwitchTargetsOnActorToTargetInvalid_MetaData[] = {
		{ "Category", "Perception Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "Lock on Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_Left_MetaData[] = {
		{ "Category", "Perception Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "This attempts to make sure that the current target is not part of the resulting sorted array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_Right_MetaData[] = {
		{ "Category", "Perception Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "This attempts to make sure that the current target is not part of the resulting sorted array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPerceivedActors_MetaData[] = {
		{ "Category", "Actors|Perception" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Array to store all perceived actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldShowWidgetForLockOn_MetaData[] = {
		{ "Category", "Lock On Variables|UI" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Should 3D widget in character be shown to indicate which character is locked-on to?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestRotationAngle_Array_MetaData[] = {
		{ "Category", "PerceptionVariables|AngleArrays" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Aray to store each perceived actor's angle difference between the owning actor and the perceived actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestRotationAngle_Left_Array_MetaData[] = {
		{ "Category", "PerceptionVariables|AngleArrays|Left" },
		{ "Comment", "//non-replicated variables\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "non-replicated variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestRotationAngle_Left_Array_Sorted_MetaData[] = {
		{ "Category", "PerceptionVariables|AngleArrays|Left" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestRotationAngle_Right_Array_MetaData[] = {
		{ "Category", "PerceptionVariables|AngleArrays|Right" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestRotationAngle_Right_Array_Sorted_MetaData[] = {
		{ "Category", "PerceptionVariables|AngleArrays|Right" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeLockOn_MetaData[] = {
		{ "Category", "Lock On Variables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Delay between input and actual lock-on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerIntervalForStoringPerceivedActorsInArray_MetaData[] = {
		{ "Category", "PerceptionVariables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "How quickly should actors perceived be stored?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopTimerForStoringPerceivedActorsInArray_MetaData[] = {
		{ "Category", "PerceptionVariables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Loop the timer or just store the perceived actors once?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseToUseForPerception_MetaData[] = {
		{ "Category", "PerceptionVariables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Sense To Use For Perception - Should be set to the dominant sense being used, or any preferred one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterPerceivedActorsArray_MetaData[] = {
		{ "Category", "PerceptionVariables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Should the Currently Perceived Actors Be Filtered Into A Particular Class?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassToFilterPerceivedActorsTo_MetaData[] = {
		{ "Category", "PerceptionVariables" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Class to filter perceived actors into if bFilterPerceivedActorsArray is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorRotation_MetaData[] = {
		{ "Category", "Perception Variables|Algorithm to Use for Getting Angle Between Vectors" },
		{ "Comment", "//If False, Control Rotation Is Used\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "If False, Control Rotation Is Used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeltaRotation_MetaData[] = {
		{ "Category", "Perception Variables|Algorithm to Use for Getting Angle Between Vectors" },
		{ "Comment", "//Important For [Use Control Rotation]. If False, Arc Tan Difference Is Used\n" },
		{ "ModuleRelativePath", "Public/TargetingSystemComponent.h" },
		{ "ToolTip", "Important For [Use Control Rotation]. If False, Arc Tan Difference Is Used" },
	};
#endif // WITH_METADATA
	static void NewProp_bInitialize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTarget;
	static void NewProp_bIsLockOnEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLockOnEnabled;
	static void NewProp_bOpenGateForTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenGateForTick;
	static void NewProp_AutoSwitchTargetsOnPerceptionFailure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoSwitchTargetsOnPerceptionFailure;
	static void NewProp_AutoSwitchTargetsOnActorToTargetInvalid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoSwitchTargetsOnActorToTargetInvalid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance_Left;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPerceivedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPerceivedActors;
	static void NewProp_ShouldShowWidgetForLockOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldShowWidgetForLockOn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestRotationAngle_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LowestRotationAngle_Array;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestRotationAngle_Left_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LowestRotationAngle_Left_Array;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestRotationAngle_Left_Array_Sorted_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LowestRotationAngle_Left_Array_Sorted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestRotationAngle_Right_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LowestRotationAngle_Right_Array;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestRotationAngle_Right_Array_Sorted_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LowestRotationAngle_Right_Array_Sorted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeLockOn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerIntervalForStoringPerceivedActorsInArray;
	static void NewProp_bLoopTimerForStoringPerceivedActorsInArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopTimerForStoringPerceivedActorsInArray;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUseForPerception;
	static void NewProp_bFilterPerceivedActorsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterPerceivedActorsArray;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToFilterPerceivedActorsTo;
	static void NewProp_bUseActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorRotation;
	static void NewProp_bUseDeltaRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeltaRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ClearTimer_StorePerceivedActorsInArray, "ClearTimer_StorePerceivedActorsInArray" }, // 2055553837
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ClientHideOrDisplayWidgetForLockedOnTarget, "ClientHideOrDisplayWidgetForLockedOnTarget" }, // 2256294468
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ClientHideWidgetForTargetNotBeingLockOnTo, "ClientHideWidgetForTargetNotBeingLockOnTo" }, // 2323281205
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ClientShowWidgetForTargetNotBeingLockOnTo, "ClientShowWidgetForTargetNotBeingLockOnTo" }, // 3115171611
		{ &Z_Construct_UFunction_UTargetingSystemComponent_EnterLockOnClientGate, "EnterLockOnClientGate" }, // 1200902115
		{ &Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget, "FindIdealActorToTarget" }, // 2967006341
		{ &Z_Construct_UFunction_UTargetingSystemComponent_FindIdealActorToTarget_NoAbs, "FindIdealActorToTarget_NoAbs" }, // 1986546025
		{ &Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingArcTanDifference, "GetAngleBetweenVectors_UsingArcTanDifference" }, // 555992999
		{ &Z_Construct_UFunction_UTargetingSystemComponent_GetAngleBetweenVectors_UsingDeltaRotation, "GetAngleBetweenVectors_UsingDeltaRotation" }, // 4213015776
		{ &Z_Construct_UFunction_UTargetingSystemComponent_MulticastCloseGateForTick, "MulticastCloseGateForTick" }, // 3005448153
		{ &Z_Construct_UFunction_UTargetingSystemComponent_MulticastOpenGateForTick, "MulticastOpenGateForTick" }, // 4219629966
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerCloseGateForTick, "ServerCloseGateForTick" }, // 85358096
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorToTargetFromLowestRotationAngleArray, "ServerDetermineActorToTargetFromLowestRotationAngleArray" }, // 3582328038
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget, "ServerDetermineActorWithTheLeastActorRotationAngleRequiredToTarget" }, // 29604694
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerEnableOrDisableLockOn, "ServerEnableOrDisableLockOn" }, // 2817450812
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerInitializeVariables, "ServerInitializeVariables" }, // 1557369458
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget, "ServerLockOnToTarget" }, // 2630144334
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Left, "ServerLockOnToTarget_Left" }, // 3506580585
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerLockOnToTarget_Right, "ServerLockOnToTarget_Right" }, // 3890803137
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerResetAllArrays, "ServerResetAllArrays" }, // 1061628251
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerStorePerceivedActorsInArray, "ServerStorePerceivedActorsInArray" }, // 2341057082
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchTargets, "ServerSwitchTargets" }, // 3371265439
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheLeftOfCurrentTarget, "ServerSwitchToTheTargetToTheLeftOfCurrentTarget" }, // 604783918
		{ &Z_Construct_UFunction_UTargetingSystemComponent_ServerSwitchToTheTargetToTheRightOfCurrentTarget, "ServerSwitchToTheTargetToTheRightOfCurrentTarget" }, // 467624828
		{ &Z_Construct_UFunction_UTargetingSystemComponent_SortArray_Float, "SortArray_Float" }, // 2079334907
		{ &Z_Construct_UFunction_UTargetingSystemComponent_Timer_StorePerceivedActorInArray, "Timer_StorePerceivedActorInArray" }, // 227378968
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bInitialize_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bInitialize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bInitialize = { "bInitialize", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bInitialize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialize_MetaData), NewProp_bInitialize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x001000000008003c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ActorToTarget = { "ActorToTarget", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, ActorToTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToTarget_MetaData), NewProp_ActorToTarget_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bIsLockOnEnabled_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bIsLockOnEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bIsLockOnEnabled = { "bIsLockOnEnabled", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bIsLockOnEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLockOnEnabled_MetaData), NewProp_bIsLockOnEnabled_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bOpenGateForTick_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bOpenGateForTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bOpenGateForTick = { "bOpenGateForTick", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bOpenGateForTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenGateForTick_MetaData), NewProp_bOpenGateForTick_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnPerceptionFailure_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->AutoSwitchTargetsOnPerceptionFailure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnPerceptionFailure = { "AutoSwitchTargetsOnPerceptionFailure", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnPerceptionFailure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSwitchTargetsOnPerceptionFailure_MetaData), NewProp_AutoSwitchTargetsOnPerceptionFailure_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnActorToTargetInvalid_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->AutoSwitchTargetsOnActorToTargetInvalid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnActorToTargetInvalid = { "AutoSwitchTargetsOnActorToTargetInvalid", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnActorToTargetInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSwitchTargetsOnActorToTargetInvalid_MetaData), NewProp_AutoSwitchTargetsOnActorToTargetInvalid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData), NewProp_InterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ErrorTolerance_Left = { "ErrorTolerance_Left", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, ErrorTolerance_Left), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_Left_MetaData), NewProp_ErrorTolerance_Left_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ErrorTolerance_Right = { "ErrorTolerance_Right", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, ErrorTolerance_Right), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_Right_MetaData), NewProp_ErrorTolerance_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AllPerceivedActors_Inner = { "AllPerceivedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AllPerceivedActors = { "AllPerceivedActors", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, AllPerceivedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPerceivedActors_MetaData), NewProp_AllPerceivedActors_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ShouldShowWidgetForLockOn_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->ShouldShowWidgetForLockOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ShouldShowWidgetForLockOn = { "ShouldShowWidgetForLockOn", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ShouldShowWidgetForLockOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldShowWidgetForLockOn_MetaData), NewProp_ShouldShowWidgetForLockOn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Array_Inner = { "LowestRotationAngle_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Array = { "LowestRotationAngle_Array", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, LowestRotationAngle_Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestRotationAngle_Array_MetaData), NewProp_LowestRotationAngle_Array_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array_Inner = { "LowestRotationAngle_Left_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array = { "LowestRotationAngle_Left_Array", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, LowestRotationAngle_Left_Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestRotationAngle_Left_Array_MetaData), NewProp_LowestRotationAngle_Left_Array_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array_Sorted_Inner = { "LowestRotationAngle_Left_Array_Sorted", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array_Sorted = { "LowestRotationAngle_Left_Array_Sorted", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, LowestRotationAngle_Left_Array_Sorted), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestRotationAngle_Left_Array_Sorted_MetaData), NewProp_LowestRotationAngle_Left_Array_Sorted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array_Inner = { "LowestRotationAngle_Right_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array = { "LowestRotationAngle_Right_Array", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, LowestRotationAngle_Right_Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestRotationAngle_Right_Array_MetaData), NewProp_LowestRotationAngle_Right_Array_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array_Sorted_Inner = { "LowestRotationAngle_Right_Array_Sorted", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array_Sorted = { "LowestRotationAngle_Right_Array_Sorted", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, LowestRotationAngle_Right_Array_Sorted), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestRotationAngle_Right_Array_Sorted_MetaData), NewProp_LowestRotationAngle_Right_Array_Sorted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_DelayBeforeLockOn = { "DelayBeforeLockOn", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, DelayBeforeLockOn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayBeforeLockOn_MetaData), NewProp_DelayBeforeLockOn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_TimerIntervalForStoringPerceivedActorsInArray = { "TimerIntervalForStoringPerceivedActorsInArray", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, TimerIntervalForStoringPerceivedActorsInArray), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerIntervalForStoringPerceivedActorsInArray_MetaData), NewProp_TimerIntervalForStoringPerceivedActorsInArray_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bLoopTimerForStoringPerceivedActorsInArray_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bLoopTimerForStoringPerceivedActorsInArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bLoopTimerForStoringPerceivedActorsInArray = { "bLoopTimerForStoringPerceivedActorsInArray", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bLoopTimerForStoringPerceivedActorsInArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopTimerForStoringPerceivedActorsInArray_MetaData), NewProp_bLoopTimerForStoringPerceivedActorsInArray_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_SenseToUseForPerception = { "SenseToUseForPerception", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, SenseToUseForPerception), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseToUseForPerception_MetaData), NewProp_SenseToUseForPerception_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bFilterPerceivedActorsArray_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bFilterPerceivedActorsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bFilterPerceivedActorsArray = { "bFilterPerceivedActorsArray", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bFilterPerceivedActorsArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterPerceivedActorsArray_MetaData), NewProp_bFilterPerceivedActorsArray_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ClassToFilterPerceivedActorsTo = { "ClassToFilterPerceivedActorsTo", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSystemComponent, ClassToFilterPerceivedActorsTo), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassToFilterPerceivedActorsTo_MetaData), NewProp_ClassToFilterPerceivedActorsTo_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseActorRotation_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bUseActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseActorRotation = { "bUseActorRotation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseActorRotation_MetaData), NewProp_bUseActorRotation_MetaData) };
void Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseDeltaRotation_SetBit(void* Obj)
{
	((UTargetingSystemComponent*)Obj)->bUseDeltaRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseDeltaRotation = { "bUseDeltaRotation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingSystemComponent), &Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseDeltaRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeltaRotation_MetaData), NewProp_bUseDeltaRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bInitialize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ActorToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bIsLockOnEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bOpenGateForTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnPerceptionFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AutoSwitchTargetsOnActorToTargetInvalid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_InterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ErrorTolerance_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ErrorTolerance_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AllPerceivedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_AllPerceivedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ShouldShowWidgetForLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array_Sorted_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Left_Array_Sorted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array_Sorted_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_LowestRotationAngle_Right_Array_Sorted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_DelayBeforeLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_TimerIntervalForStoringPerceivedActorsInArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bLoopTimerForStoringPerceivedActorsInArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_SenseToUseForPerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bFilterPerceivedActorsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_ClassToFilterPerceivedActorsTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSystemComponent_Statics::NewProp_bUseDeltaRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TheTargetingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSystemComponent_Statics::ClassParams = {
	&UTargetingSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTargetingSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingSystemComponent()
{
	if (!Z_Registration_Info_UClass_UTargetingSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSystemComponent.OuterSingleton, Z_Construct_UClass_UTargetingSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingSystemComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UTargetingSystemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bInitialize(TEXT("bInitialize"));
	static FName Name_OwningActor(TEXT("OwningActor"));
	static FName Name_AIPerceptionComponent(TEXT("AIPerceptionComponent"));
	static FName Name_ActorToTarget(TEXT("ActorToTarget"));
	static FName Name_bIsLockOnEnabled(TEXT("bIsLockOnEnabled"));
	static FName Name_bOpenGateForTick(TEXT("bOpenGateForTick"));
	static FName Name_AutoSwitchTargetsOnPerceptionFailure(TEXT("AutoSwitchTargetsOnPerceptionFailure"));
	static FName Name_AutoSwitchTargetsOnActorToTargetInvalid(TEXT("AutoSwitchTargetsOnActorToTargetInvalid"));
	static FName Name_InterpolationSpeed(TEXT("InterpolationSpeed"));
	static FName Name_AllPerceivedActors(TEXT("AllPerceivedActors"));
	static FName Name_ShouldShowWidgetForLockOn(TEXT("ShouldShowWidgetForLockOn"));
	static FName Name_LowestRotationAngle_Array(TEXT("LowestRotationAngle_Array"));
	static FName Name_DelayBeforeLockOn(TEXT("DelayBeforeLockOn"));
	const bool bIsValid = true
		&& Name_bInitialize == ClassReps[(int32)ENetFields_Private::bInitialize].Property->GetFName()
		&& Name_OwningActor == ClassReps[(int32)ENetFields_Private::OwningActor].Property->GetFName()
		&& Name_AIPerceptionComponent == ClassReps[(int32)ENetFields_Private::AIPerceptionComponent].Property->GetFName()
		&& Name_ActorToTarget == ClassReps[(int32)ENetFields_Private::ActorToTarget].Property->GetFName()
		&& Name_bIsLockOnEnabled == ClassReps[(int32)ENetFields_Private::bIsLockOnEnabled].Property->GetFName()
		&& Name_bOpenGateForTick == ClassReps[(int32)ENetFields_Private::bOpenGateForTick].Property->GetFName()
		&& Name_AutoSwitchTargetsOnPerceptionFailure == ClassReps[(int32)ENetFields_Private::AutoSwitchTargetsOnPerceptionFailure].Property->GetFName()
		&& Name_AutoSwitchTargetsOnActorToTargetInvalid == ClassReps[(int32)ENetFields_Private::AutoSwitchTargetsOnActorToTargetInvalid].Property->GetFName()
		&& Name_InterpolationSpeed == ClassReps[(int32)ENetFields_Private::InterpolationSpeed].Property->GetFName()
		&& Name_AllPerceivedActors == ClassReps[(int32)ENetFields_Private::AllPerceivedActors].Property->GetFName()
		&& Name_ShouldShowWidgetForLockOn == ClassReps[(int32)ENetFields_Private::ShouldShowWidgetForLockOn].Property->GetFName()
		&& Name_LowestRotationAngle_Array == ClassReps[(int32)ENetFields_Private::LowestRotationAngle_Array].Property->GetFName()
		&& Name_DelayBeforeLockOn == ClassReps[(int32)ENetFields_Private::DelayBeforeLockOn].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTargetingSystemComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSystemComponent);
UTargetingSystemComponent::~UTargetingSystemComponent() {}
// ********** End Class UTargetingSystemComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TargetingSystemComponent_h__Script_TheTargetingSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSystemComponent, UTargetingSystemComponent::StaticClass, TEXT("UTargetingSystemComponent"), &Z_Registration_Info_UClass_UTargetingSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSystemComponent), 295125269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TargetingSystemComponent_h__Script_TheTargetingSystem_1248668468(TEXT("/Script/TheTargetingSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TargetingSystemComponent_h__Script_TheTargetingSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TheTargetingSystem_Source_TheTargetingSystem_Public_TargetingSystemComponent_h__Script_TheTargetingSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

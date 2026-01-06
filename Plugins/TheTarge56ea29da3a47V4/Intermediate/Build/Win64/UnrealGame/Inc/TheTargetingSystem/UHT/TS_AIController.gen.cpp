// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TS_AIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTS_AIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATS_AIController();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATS_AIController_NoRegister();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheTargetingSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATS_AIController Function TargetCenter ***********************************
struct Z_Construct_UFunction_ATS_AIController_TargetCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//call these to perform targeting\n" },
#endif
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "call these to perform targeting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATS_AIController_TargetCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATS_AIController, nullptr, "TargetCenter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATS_AIController_TargetCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATS_AIController_TargetCenter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATS_AIController_TargetCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATS_AIController_TargetCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATS_AIController::execTargetCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TargetCenter();
	P_NATIVE_END;
}
// ********** End Class ATS_AIController Function TargetCenter *************************************

// ********** Begin Class ATS_AIController Function TargetLeft *************************************
struct Z_Construct_UFunction_ATS_AIController_TargetLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATS_AIController_TargetLeft_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATS_AIController, nullptr, "TargetLeft", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATS_AIController_TargetLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATS_AIController_TargetLeft_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATS_AIController_TargetLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATS_AIController_TargetLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATS_AIController::execTargetLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TargetLeft();
	P_NATIVE_END;
}
// ********** End Class ATS_AIController Function TargetLeft ***************************************

// ********** Begin Class ATS_AIController Function TargetRight ************************************
struct Z_Construct_UFunction_ATS_AIController_TargetRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock-On" },
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATS_AIController_TargetRight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATS_AIController, nullptr, "TargetRight", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATS_AIController_TargetRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATS_AIController_TargetRight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATS_AIController_TargetRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATS_AIController_TargetRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATS_AIController::execTargetRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TargetRight();
	P_NATIVE_END;
}
// ********** End Class ATS_AIController Function TargetRight **************************************

// ********** Begin Class ATS_AIController *********************************************************
void ATS_AIController::StaticRegisterNativesATS_AIController()
{
	UClass* Class = ATS_AIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TargetCenter", &ATS_AIController::execTargetCenter },
		{ "TargetLeft", &ATS_AIController::execTargetLeft },
		{ "TargetRight", &ATS_AIController::execTargetRight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATS_AIController;
UClass* ATS_AIController::GetPrivateStaticClass()
{
	using TClass = ATS_AIController;
	if (!Z_Registration_Info_UClass_ATS_AIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TS_AIController"),
			Z_Registration_Info_UClass_ATS_AIController.InnerSingleton,
			StaticRegisterNativesATS_AIController,
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
	return Z_Registration_Info_UClass_ATS_AIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATS_AIController_NoRegister()
{
	return ATS_AIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATS_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TS_AIController.h" },
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//private\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "private" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseConfig_Sight_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//configuration for Sight Sense for Perception\n" },
#endif
		{ "ModuleRelativePath", "Public/TS_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "configuration for Sight Sense for Perception" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingSystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SenseConfig_Sight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATS_AIController_TargetCenter, "TargetCenter" }, // 156920456
		{ &Z_Construct_UFunction_ATS_AIController_TargetLeft, "TargetLeft" }, // 3693288782
		{ &Z_Construct_UFunction_ATS_AIController_TargetRight, "TargetRight" }, // 3896689863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATS_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATS_AIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_AIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATS_AIController_Statics::NewProp_TargetingSystemComponent = { "TargetingSystemComponent", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_AIController, TargetingSystemComponent), Z_Construct_UClass_UTargetingSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingSystemComponent_MetaData), NewProp_TargetingSystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATS_AIController_Statics::NewProp_SenseConfig_Sight = { "SenseConfig_Sight", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_AIController, SenseConfig_Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseConfig_Sight_MetaData), NewProp_SenseConfig_Sight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATS_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_AIController_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_AIController_Statics::NewProp_TargetingSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_AIController_Statics::NewProp_SenseConfig_Sight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATS_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATS_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheTargetingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATS_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATS_AIController_Statics::ClassParams = {
	&ATS_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATS_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATS_AIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATS_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATS_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATS_AIController()
{
	if (!Z_Registration_Info_UClass_ATS_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATS_AIController.OuterSingleton, Z_Construct_UClass_ATS_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATS_AIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATS_AIController);
ATS_AIController::~ATS_AIController() {}
// ********** End Class ATS_AIController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_AIController_h__Script_TheTargetingSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATS_AIController, ATS_AIController::StaticClass, TEXT("ATS_AIController"), &Z_Registration_Info_UClass_ATS_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATS_AIController), 1194942259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_AIController_h__Script_TheTargetingSystem_3861170121(TEXT("/Script/TheTargetingSystem"),
	Z_CompiledInDeferFile_FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_AIController_h__Script_TheTargetingSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_AIController_h__Script_TheTargetingSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

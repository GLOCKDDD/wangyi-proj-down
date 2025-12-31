// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TS_Character.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTS_Character() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATS_Character();
THETARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATS_Character_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheTargetingSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATS_Character ************************************************************
void ATS_Character::StaticRegisterNativesATS_Character()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATS_Character;
UClass* ATS_Character::GetPrivateStaticClass()
{
	using TClass = ATS_Character;
	if (!Z_Registration_Info_UClass_ATS_Character.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TS_Character"),
			Z_Registration_Info_UClass_ATS_Character.InnerSingleton,
			StaticRegisterNativesATS_Character,
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
	return Z_Registration_Info_UClass_ATS_Character.InnerSingleton;
}
UClass* Z_Construct_UClass_ATS_Character_NoRegister()
{
	return ATS_Character::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATS_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TS_Character.h" },
		{ "ModuleRelativePath", "Public/TS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingWidget_3D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
#endif
		{ "ModuleRelativePath", "Public/TS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
#endif
		{ "ModuleRelativePath", "Public/TS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingWidget_3D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATS_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATS_Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATS_Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATS_Character_Statics::NewProp_TargetingWidget_3D = { "TargetingWidget_3D", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_Character, TargetingWidget_3D), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingWidget_3D_MetaData), NewProp_TargetingWidget_3D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATS_Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_Character, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATS_Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATS_Character, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATS_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_Character_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_Character_Statics::NewProp_TargetingWidget_3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_Character_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATS_Character_Statics::NewProp_BaseLookUpRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATS_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATS_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheTargetingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATS_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATS_Character_Statics::ClassParams = {
	&ATS_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATS_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATS_Character_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATS_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ATS_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATS_Character()
{
	if (!Z_Registration_Info_UClass_ATS_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATS_Character.OuterSingleton, Z_Construct_UClass_ATS_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATS_Character.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATS_Character);
ATS_Character::~ATS_Character() {}
// ********** End Class ATS_Character **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_github_clon_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_Character_h__Script_TheTargetingSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATS_Character, ATS_Character::StaticClass, TEXT("ATS_Character"), &Z_Registration_Info_UClass_ATS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATS_Character), 2583419142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_github_clon_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_Character_h__Script_TheTargetingSystem_1602518655(TEXT("/Script/TheTargetingSystem"),
	Z_CompiledInDeferFile_FID_github_clon_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_Character_h__Script_TheTargetingSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_github_clon_wangyi_proj_down_Plugins_TheTarge56ea29da3a47V4_Source_TheTargetingSystem_Public_TS_Character_h__Script_TheTargetingSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

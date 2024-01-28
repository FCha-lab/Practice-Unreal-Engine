// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraFramework/Characters/CF_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCF_Character() {}
// Cross Module References
	CAMERAFRAMEWORK_API UClass* Z_Construct_UClass_ACF_Character_NoRegister();
	CAMERAFRAMEWORK_API UClass* Z_Construct_UClass_ACF_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CameraFramework();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	void ACF_Character::StaticRegisterNativesACF_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACF_Character);
	UClass* Z_Construct_UClass_ACF_Character_NoRegister()
	{
		return ACF_Character::StaticClass();
	}
	struct Z_Construct_UClass_ACF_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintshake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_sprintshake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_landshake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_landshake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSprintShake_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSprintShake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACF_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CF_Character.h" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_DefaultSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_DefaultSpeed = { "DefaultSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, DefaultSpeed), METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_DefaultSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_DefaultSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, TurnRate), METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_TurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_LookUpRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_LookUpRate = { "LookUpRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, LookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_LookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_LookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_sprintshake_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_sprintshake = { "sprintshake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, sprintshake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_sprintshake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_sprintshake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_landshake_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_landshake = { "landshake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, landshake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_landshake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_landshake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACF_Character_Statics::NewProp_CurrentSprintShake_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Characters/CF_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACF_Character_Statics::NewProp_CurrentSprintShake = { "CurrentSprintShake", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACF_Character, CurrentSprintShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::NewProp_CurrentSprintShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::NewProp_CurrentSprintShake_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACF_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_DefaultSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_TurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_LookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_sprintshake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_landshake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACF_Character_Statics::NewProp_CurrentSprintShake,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACF_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACF_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACF_Character_Statics::ClassParams = {
		&ACF_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACF_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACF_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACF_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACF_Character()
	{
		if (!Z_Registration_Info_UClass_ACF_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACF_Character.OuterSingleton, Z_Construct_UClass_ACF_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACF_Character.OuterSingleton;
	}
	template<> CAMERAFRAMEWORK_API UClass* StaticClass<ACF_Character>()
	{
		return ACF_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACF_Character);
	struct Z_CompiledInDeferFile_FID_CameraFramework_Source_CameraFramework_Characters_CF_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CameraFramework_Source_CameraFramework_Characters_CF_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACF_Character, ACF_Character::StaticClass, TEXT("ACF_Character"), &Z_Registration_Info_UClass_ACF_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACF_Character), 3394900841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CameraFramework_Source_CameraFramework_Characters_CF_Character_h_453537132(TEXT("/Script/CameraFramework"),
		Z_CompiledInDeferFile_FID_CameraFramework_Source_CameraFramework_Characters_CF_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CameraFramework_Source_CameraFramework_Characters_CF_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

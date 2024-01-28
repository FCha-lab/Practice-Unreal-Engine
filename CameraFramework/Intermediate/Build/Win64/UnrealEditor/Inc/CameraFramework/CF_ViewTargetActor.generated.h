// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CAMERAFRAMEWORK_CF_ViewTargetActor_generated_h
#error "CF_ViewTargetActor.generated.h already included, missing '#pragma once' in CF_ViewTargetActor.h"
#endif
#define CAMERAFRAMEWORK_CF_ViewTargetActor_generated_h

#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_SPARSE_DATA
#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACF_ViewTargetActor(); \
	friend struct Z_Construct_UClass_ACF_ViewTargetActor_Statics; \
public: \
	DECLARE_CLASS(ACF_ViewTargetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraFramework"), NO_API) \
	DECLARE_SERIALIZER(ACF_ViewTargetActor)


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACF_ViewTargetActor(); \
	friend struct Z_Construct_UClass_ACF_ViewTargetActor_Statics; \
public: \
	DECLARE_CLASS(ACF_ViewTargetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraFramework"), NO_API) \
	DECLARE_SERIALIZER(ACF_ViewTargetActor)


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACF_ViewTargetActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACF_ViewTargetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACF_ViewTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACF_ViewTargetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACF_ViewTargetActor(ACF_ViewTargetActor&&); \
	NO_API ACF_ViewTargetActor(const ACF_ViewTargetActor&); \
public:


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACF_ViewTargetActor(ACF_ViewTargetActor&&); \
	NO_API ACF_ViewTargetActor(const ACF_ViewTargetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACF_ViewTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACF_ViewTargetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACF_ViewTargetActor)


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_11_PROLOG
#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_SPARSE_DATA \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_RPC_WRAPPERS \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_INCLASS \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_SPARSE_DATA \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMERAFRAMEWORK_API UClass* StaticClass<class ACF_ViewTargetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CameraFramework_Source_CameraFramework_Actors_CF_ViewTargetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

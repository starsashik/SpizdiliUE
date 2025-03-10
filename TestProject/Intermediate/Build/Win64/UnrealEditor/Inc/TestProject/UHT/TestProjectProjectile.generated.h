// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TESTPROJECT_TestProjectProjectile_generated_h
#error "TestProjectProjectile.generated.h already included, missing '#pragma once' in TestProjectProjectile.h"
#endif
#define TESTPROJECT_TestProjectProjectile_generated_h

#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_SPARSE_DATA
#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_ACCESSORS
#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectProjectile(); \
	friend struct Z_Construct_UClass_ATestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectProjectile(ATestProjectProjectile&&); \
	NO_API ATestProjectProjectile(const ATestProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectProjectile) \
	NO_API virtual ~ATestProjectProjectile();


#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_12_PROLOG
#define FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_SPARSE_DATA \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_ACCESSORS \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_SpizdiliUE_TestProject_Source_TestProject_TestProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

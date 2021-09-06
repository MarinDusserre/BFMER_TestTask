// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTASK_TestTaskCharacter_generated_h
#error "TestTaskCharacter.generated.h already included, missing '#pragma once' in TestTaskCharacter.h"
#endif
#define TESTTASK_TestTaskCharacter_generated_h

#define TestTask_Source_TestTask_TestTaskCharacter_h_12_SPARSE_DATA
#define TestTask_Source_TestTask_TestTaskCharacter_h_12_RPC_WRAPPERS
#define TestTask_Source_TestTask_TestTaskCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTask_Source_TestTask_TestTaskCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTaskCharacter(); \
	friend struct Z_Construct_UClass_ATestTaskCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestTaskCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask"), NO_API) \
	DECLARE_SERIALIZER(ATestTaskCharacter)


#define TestTask_Source_TestTask_TestTaskCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestTaskCharacter(); \
	friend struct Z_Construct_UClass_ATestTaskCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestTaskCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask"), NO_API) \
	DECLARE_SERIALIZER(ATestTaskCharacter)


#define TestTask_Source_TestTask_TestTaskCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestTaskCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTaskCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTaskCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTaskCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTaskCharacter(ATestTaskCharacter&&); \
	NO_API ATestTaskCharacter(const ATestTaskCharacter&); \
public:


#define TestTask_Source_TestTask_TestTaskCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTaskCharacter(ATestTaskCharacter&&); \
	NO_API ATestTaskCharacter(const ATestTaskCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTaskCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTaskCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestTaskCharacter)


#define TestTask_Source_TestTask_TestTaskCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATestTaskCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATestTaskCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATestTaskCharacter, CursorToWorld); }


#define TestTask_Source_TestTask_TestTaskCharacter_h_9_PROLOG
#define TestTask_Source_TestTask_TestTaskCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_SPARSE_DATA \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_RPC_WRAPPERS \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_INCLASS \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTask_Source_TestTask_TestTaskCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_SPARSE_DATA \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TestTask_Source_TestTask_TestTaskCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASK_API UClass* StaticClass<class ATestTaskCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTask_Source_TestTask_TestTaskCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

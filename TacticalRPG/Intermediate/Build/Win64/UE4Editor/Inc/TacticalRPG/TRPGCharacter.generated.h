// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthSystem;
class UCharacterStats;
#ifdef TACTICALRPG_TRPGCharacter_generated_h
#error "TRPGCharacter.generated.h already included, missing '#pragma once' in TRPGCharacter.h"
#endif
#define TACTICALRPG_TRPGCharacter_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execID); \
	DECLARE_FUNCTION(execGetHealthSystem); \
	DECLARE_FUNCTION(execgetStats);


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execID); \
	DECLARE_FUNCTION(execGetHealthSystem); \
	DECLARE_FUNCTION(execgetStats);


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATRPGCharacter(); \
	friend struct Z_Construct_UClass_ATRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ATRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(ATRPGCharacter)


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATRPGCharacter(); \
	friend struct Z_Construct_UClass_ATRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ATRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(ATRPGCharacter)


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATRPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATRPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATRPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATRPGCharacter(ATRPGCharacter&&); \
	NO_API ATRPGCharacter(const ATRPGCharacter&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATRPGCharacter(ATRPGCharacter&&); \
	NO_API ATRPGCharacter(const ATRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATRPGCharacter)


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_name() { return STRUCT_OFFSET(ATRPGCharacter, m_name); }


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_13_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class ATRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_TRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

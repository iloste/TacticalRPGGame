// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageEffect;
class UTexture;
#ifdef TACTICALRPG_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define TACTICALRPG_Ability_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDamageEffects); \
	DECLARE_FUNCTION(execIsAreaEffect); \
	DECLARE_FUNCTION(execGetCastCost); \
	DECLARE_FUNCTION(execGetCastTime); \
	DECLARE_FUNCTION(execGetProfileImage); \
	DECLARE_FUNCTION(execgetRange); \
	DECLARE_FUNCTION(execgetDescription); \
	DECLARE_FUNCTION(execgetName);


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDamageEffects); \
	DECLARE_FUNCTION(execIsAreaEffect); \
	DECLARE_FUNCTION(execGetCastCost); \
	DECLARE_FUNCTION(execGetCastTime); \
	DECLARE_FUNCTION(execGetProfileImage); \
	DECLARE_FUNCTION(execgetRange); \
	DECLARE_FUNCTION(execgetDescription); \
	DECLARE_FUNCTION(execgetName);


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbility)


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_PRIVATE_PROPERTY_OFFSET
#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_16_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_Ability_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class UAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class VitalStats : uint8;
#ifdef TACTICALRPG_DamageEffect_generated_h
#error "DamageEffect.generated.h already included, missing '#pragma once' in DamageEffect.h"
#endif
#define TACTICALRPG_DamageEffect_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetVitalStat);


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetVitalStat);


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageEffect(); \
	friend struct Z_Construct_UClass_UDamageEffect_Statics; \
public: \
	DECLARE_CLASS(UDamageEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UDamageEffect)


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDamageEffect(); \
	friend struct Z_Construct_UClass_UDamageEffect_Statics; \
public: \
	DECLARE_CLASS(UDamageEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UDamageEffect)


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageEffect(UDamageEffect&&); \
	NO_API UDamageEffect(const UDamageEffect&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageEffect(UDamageEffect&&); \
	NO_API UDamageEffect(const UDamageEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageEffect)


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_PRIVATE_PROPERTY_OFFSET
#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_12_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class UDamageEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_DamageEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

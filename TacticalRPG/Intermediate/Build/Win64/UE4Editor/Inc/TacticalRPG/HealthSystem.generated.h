// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthSystem;
#ifdef TACTICALRPG_HealthSystem_generated_h
#error "HealthSystem.generated.h already included, missing '#pragma once' in HealthSystem.h"
#endif
#define TACTICALRPG_HealthSystem_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_10_DELEGATE \
struct _Script_TacticalRPG_eventOnDeath_Parms \
{ \
	UHealthSystem* hs; \
}; \
static inline void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, UHealthSystem* hs) \
{ \
	_Script_TacticalRPG_eventOnDeath_Parms Parms; \
	Parms.hs=hs; \
	OnDeath.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exectakeDamage); \
	DECLARE_FUNCTION(execgetCurrentHeatlh);


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exectakeDamage); \
	DECLARE_FUNCTION(execgetCurrentHeatlh);


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthSystem(); \
	friend struct Z_Construct_UClass_UHealthSystem_Statics; \
public: \
	DECLARE_CLASS(UHealthSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UHealthSystem)


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthSystem(); \
	friend struct Z_Construct_UClass_UHealthSystem_Statics; \
public: \
	DECLARE_CLASS(UHealthSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UHealthSystem)


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthSystem(UHealthSystem&&); \
	NO_API UHealthSystem(const UHealthSystem&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthSystem(UHealthSystem&&); \
	NO_API UHealthSystem(const UHealthSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthSystem)


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_PRIVATE_PROPERTY_OFFSET
#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_12_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class UHealthSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_HealthSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

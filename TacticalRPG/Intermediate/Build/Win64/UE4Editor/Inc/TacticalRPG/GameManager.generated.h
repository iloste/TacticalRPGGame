// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATRPGCharacter;
#ifdef TACTICALRPG_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define TACTICALRPG_GameManager_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetNextCharacter);


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetNextCharacter);


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager)


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_allCharacters() { return STRUCT_OFFSET(AGameManager, m_allCharacters); } \
	FORCEINLINE static uint32 __PPO__m_turnPointsThreshold() { return STRUCT_OFFSET(AGameManager, m_turnPointsThreshold); }


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_16_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_GameManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

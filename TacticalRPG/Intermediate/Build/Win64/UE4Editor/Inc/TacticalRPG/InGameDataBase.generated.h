// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPopupInfo;
class UPopupable;
class UAbility;
struct FVector;
class ATRPGCharacter;
#ifdef TACTICALRPG_InGameDataBase_generated_h
#error "InGameDataBase.generated.h already included, missing '#pragma once' in InGameDataBase.h"
#endif
#define TACTICALRPG_InGameDataBase_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_13_DELEGATE \
static inline void FUpdatedAbilityPopup_DelegateWrapper(const FMulticastScriptDelegate& UpdatedAbilityPopup) \
{ \
	UpdatedAbilityPopup.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_12_DELEGATE \
static inline void FUpdatedCurrentTurnOrder_DelegateWrapper(const FMulticastScriptDelegate& UpdatedCurrentTurnOrder) \
{ \
	UpdatedCurrentTurnOrder.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_11_DELEGATE \
static inline void FUpdatedCurrentCharacter_DelegateWrapper(const FMulticastScriptDelegate& UpdatedCurrentCharacter) \
{ \
	UpdatedCurrentCharacter.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveCurrentPopupFromDatabase); \
	DECLARE_FUNCTION(execGetNextPopup); \
	DECLARE_FUNCTION(execAddPopup); \
	DECLARE_FUNCTION(execGetPopupAbilityPos); \
	DECLARE_FUNCTION(execGetPopupAbility); \
	DECLARE_FUNCTION(execRemoveAbilityPopup); \
	DECLARE_FUNCTION(execSetAbilityPopup); \
	DECLARE_FUNCTION(execGetCurrentTurnOrder); \
	DECLARE_FUNCTION(execSetCurrentCharacter); \
	DECLARE_FUNCTION(execGetCurrentCharacter); \
	DECLARE_FUNCTION(execPressedButton);


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveCurrentPopupFromDatabase); \
	DECLARE_FUNCTION(execGetNextPopup); \
	DECLARE_FUNCTION(execAddPopup); \
	DECLARE_FUNCTION(execGetPopupAbilityPos); \
	DECLARE_FUNCTION(execGetPopupAbility); \
	DECLARE_FUNCTION(execRemoveAbilityPopup); \
	DECLARE_FUNCTION(execSetAbilityPopup); \
	DECLARE_FUNCTION(execGetCurrentTurnOrder); \
	DECLARE_FUNCTION(execSetCurrentCharacter); \
	DECLARE_FUNCTION(execGetCurrentCharacter); \
	DECLARE_FUNCTION(execPressedButton);


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameDataBase(); \
	friend struct Z_Construct_UClass_UInGameDataBase_Statics; \
public: \
	DECLARE_CLASS(UInGameDataBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UInGameDataBase)


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUInGameDataBase(); \
	friend struct Z_Construct_UClass_UInGameDataBase_Statics; \
public: \
	DECLARE_CLASS(UInGameDataBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UInGameDataBase)


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameDataBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameDataBase(UInGameDataBase&&); \
	NO_API UInGameDataBase(const UInGameDataBase&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameDataBase(UInGameDataBase&&); \
	NO_API UInGameDataBase(const UInGameDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameDataBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInGameDataBase)


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_PRIVATE_PROPERTY_OFFSET
#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_16_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class UInGameDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_InGameDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TACTICALRPG_Popupable_generated_h
#error "Popupable.generated.h already included, missing '#pragma once' in Popupable.h"
#endif
#define TACTICALRPG_Popupable_generated_h

#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_SPARSE_DATA
#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPopupDeactivated);


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPopupDeactivated);


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPopupable(); \
	friend struct Z_Construct_UClass_UPopupable_Statics; \
public: \
	DECLARE_CLASS(UPopupable, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UPopupable)


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPopupable(); \
	friend struct Z_Construct_UClass_UPopupable_Statics; \
public: \
	DECLARE_CLASS(UPopupable, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TacticalRPG"), NO_API) \
	DECLARE_SERIALIZER(UPopupable)


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPopupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPopupable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPopupable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPopupable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPopupable(UPopupable&&); \
	NO_API UPopupable(const UPopupable&); \
public:


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPopupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPopupable(UPopupable&&); \
	NO_API UPopupable(const UPopupable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPopupable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPopupable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPopupable)


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_popupActive() { return STRUCT_OFFSET(UPopupable, m_popupActive); }


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_12_PROLOG
#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_RPC_WRAPPERS \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_INCLASS \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_SPARSE_DATA \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_INCLASS_NO_PURE_DECLS \
	TacticalRPG_Source_TacticalRPG_Public_Popupable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALRPG_API UClass* StaticClass<class UPopupable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_Popupable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

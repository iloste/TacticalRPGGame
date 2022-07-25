// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TACTICALRPG_CharacterStates_generated_h
#error "CharacterStates.generated.h already included, missing '#pragma once' in CharacterStates.h"
#endif
#define TACTICALRPG_CharacterStates_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_CharacterStates_h


#define FOREACH_ENUM_CHARACTERSTATES(op) \
	op(CharacterStates::Default) \
	op(CharacterStates::Idle) \
	op(CharacterStates::Movement) \
	op(CharacterStates::Attack) \
	op(CharacterStates::Active) 

enum class CharacterStates : uint8;
template<> TACTICALRPG_API UEnum* StaticEnum<CharacterStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

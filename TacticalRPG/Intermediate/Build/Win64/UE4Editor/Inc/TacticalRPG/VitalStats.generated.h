// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TACTICALRPG_VitalStats_generated_h
#error "VitalStats.generated.h already included, missing '#pragma once' in VitalStats.h"
#endif
#define TACTICALRPG_VitalStats_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalRPG_Source_TacticalRPG_Public_VitalStats_h


#define FOREACH_ENUM_VITALSTATS(op) \
	op(VitalStats::Health) \
	op(VitalStats::Stamina) \
	op(VitalStats::Mana) 

enum class VitalStats : uint8;
template<> TACTICALRPG_API UEnum* StaticEnum<VitalStats>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

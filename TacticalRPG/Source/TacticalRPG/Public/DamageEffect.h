// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VitalStats.h"
/**
 * 
 */
class TACTICALRPG_API DamageEffect
{
public:
	DamageEffect();
	~DamageEffect();
	int m_damage;
	VitalStats m_vitalStat;
};

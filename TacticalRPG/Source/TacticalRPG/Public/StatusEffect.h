// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageEffect.h"
#include "StatBuff.h"


/**
 * 
 */
class TACTICALRPG_API StatusEffect
{
public:
	StatusEffect();
	~StatusEffect();
	DamageEffect m_damageEffect;
	StatBuff m_statBuff;
	int m_turnsLeft;
};

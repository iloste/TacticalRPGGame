// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VitalStat.h"
/**
 * 
 */

class TACTICALRPG_API VitalStats
{
public:
	VitalStats();
	~VitalStats();
private:
	VitalStat m_health;
	VitalStat m_stamina;
	VitalStat m_mana;

};

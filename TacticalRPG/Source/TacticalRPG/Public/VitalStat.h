// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TACTICALRPG_API VitalStat
{
public:
	VitalStat();
	~VitalStat();
	VitalStat(int maxValue);
	int getCurrent() { return m_currentValue; }
	int getMax() { return m_maxValue; }
	void decreaseBy(int decreaseValue);
	void increaseBy(int decreaseValue);

private:
	int m_maxValue;
	int m_currentValue;

};

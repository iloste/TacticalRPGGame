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
	/// <summary>
	/// Returns a value between 0-1
	/// </summary>
	float GetCurrentAsPercentage();
	
	// Returns health in format 1000/1000
	FString GetCurrentAsString();

private:
	int m_maxValue;
	int m_currentValue;

};

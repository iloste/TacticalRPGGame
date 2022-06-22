// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalStat.h"

VitalStat::VitalStat()
{
}
VitalStat::VitalStat(int maxValue)
{
	m_maxValue = maxValue;
	m_currentValue = maxValue;
}

VitalStat::~VitalStat()
{
}

void VitalStat::decreaseBy(int decreaseValue) {
	m_currentValue -= decreaseValue;
	
	if (m_currentValue < 0)
	{
		m_currentValue = 0;
	}
	else if (m_currentValue > m_maxValue) {
		m_currentValue = m_maxValue;
	}
}


void VitalStat::increaseBy(int decreaseValue) {
	m_currentValue += decreaseValue;
	
	if (m_currentValue < 0)
	{
		m_currentValue = 0;
	}
	else if (m_currentValue > m_maxValue) {
		m_currentValue = m_maxValue;
	}
}

float VitalStat::GetCurrentAsPercentage() {
	return (float)m_currentValue / (float)m_maxValue;
}


FString VitalStat::GetCurrentAsString() {
	FString healthStr = "";
	healthStr.AppendInt(m_currentValue);
	healthStr += "/";
	healthStr.AppendInt(m_maxValue);
	return healthStr;
}

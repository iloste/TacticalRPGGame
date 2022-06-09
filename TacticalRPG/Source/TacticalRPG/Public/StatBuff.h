// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <String>
/**
 * 
 */
class TACTICALRPG_API StatBuff
{
public:
	StatBuff();
	~StatBuff();
	int m_value;
	std::string description;
	int m_turnsAppliedFor;
	int m_turnsRemaining;
};

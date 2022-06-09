// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>
#include "StatBuff.h"

/**
 * 
 */
class TACTICALRPG_API Stat
{
public:
	Stat();
	Stat(int base);
	~Stat();
	// ToDo: change this to take the buffs into account
	int getCurrent() { return m_base; }
private:
	int m_base;
	std::vector<StatBuff> m_buffs;
	std::vector<StatBuff> m_debuffs;

};

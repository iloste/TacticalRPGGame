// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TRPGCharacter.h"
/**
 * 
 */
class TACTICALRPG_API TurnOrderCalculator
{
public:
	TurnOrderCalculator();
	~TurnOrderCalculator();
	
private:
	TArray<ATRPGCharacter*> m_currentTurnOrder;
	TArray<ATRPGCharacter*> m_predictedTurnOrder;
	/*
	I'm going to want an array for current turn order and one for predicted turn order. 
	The initiative tick function.
	Some way of keeping track of the actual initiative/reserve values. Maybe as a current reserve/initiative and the predicted initiative/reserve values. 
		If I do this, I'd have to make sure to update the current values with each new character taken.
	
	*/
};

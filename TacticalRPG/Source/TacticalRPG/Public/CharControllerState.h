// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "CharacterController.h"
#include "GameManager.h"
#include "CharacterStates.h"
#include "CoreMinimal.h"

/**
 *
 */
class TACTICALRPG_API CharControllerState
{
public:
	CharControllerState();
	~CharControllerState();


	void virtual OnEnter();
	void virtual Update(){};
	void virtual OnExit(){};
	void SetGameManager(AGameManager* gameManager) { m_gameManager = gameManager; }
	bool ReadyToChange() { return m_changeState; }
	CharacterStates GetNextState() { return m_nextState; }

protected:
	bool m_changeState;
	CharacterStates m_nextState;
	AGameManager* m_gameManager;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "CharControllerState.h"

CharControllerState::CharControllerState()
{
}

CharControllerState::~CharControllerState()
{
}

void CharControllerState::OnEnter()
{
	m_changeState = false;
	m_nextState = CharacterStates::Default;
}

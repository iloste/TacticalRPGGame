// Fill out your copyright notice in the Description page of Project Settings.


#include "CharControllerIdle.h"

CharControllerIdle::CharControllerIdle()
{
}

CharControllerIdle::CharControllerIdle(UInputComponent* inputComponent)
{
	//inputComponent->BindAction("TestKey", IE_Pressed, this, &CharControllerIdle::TestFunctionDeleteThis);
}



CharControllerIdle::~CharControllerIdle()
{
}

void CharControllerIdle::OnEnter()
{
	CharControllerState::OnEnter();

	if (GEngine)
	{
		FString message = "On Enter";
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, message);
	}

	toBeDeleted = 0;

}

void CharControllerIdle::Update()
{
	if (GEngine)
	{
		//FString message = "Idle Update";
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, message);
	}

	/*if (m_gameManager->GetDataBase)
	{

	}*/

	toBeDeleted++;

	if (toBeDeleted >= 3)
	{
		m_nextState = CharacterStates::Idle;
	}

}

void CharControllerIdle::OnExit()
{
	if (GEngine)
	{
		FString message = "On Exit";
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, message);
	}
}

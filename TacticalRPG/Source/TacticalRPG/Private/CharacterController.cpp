// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

void ACharacterController::attack(ATRPGCharacter* enemy) {
	// to do: include the math for the damage.
	enemy->GetHealthSystem()->takeDamage(25);
	ReduceInitiative(m_controlledCharacter->getStats(), 250);
	// debug to print health of enemy and current char
	/*if (GEngine)
	{
			FString details = "Character: ";
			details.AppendInt(m_controlledCharacter->ID());
			details += (" | Health: ");
			details.AppendInt(m_controlledCharacter->GetHealthSystem()->getCurrentHeatlh());
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, details);
			const TCHAR* ff = *details;
			UE_LOG(LogTemp, Warning, TEXT("%s"), *details);

			details = "Character: ";
			details.AppendInt(enemy->ID());
			details += (" | Health: ");
			details.AppendInt(enemy->GetHealthSystem()->getCurrentHeatlh());
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, details);
			ff = *details;
			UE_LOG(LogTemp, Warning, TEXT("%s"), *details);

	}*/


}

void ACharacterController::ReduceInitiative(UCharacterStats* stats, int reductionAmount) {
	stats->DecreaseInitiative(reductionAmount);
}

//void ACharacterController::ChangeState(CharacterStates newState)
//{
//	ChangeState(m_allStates[(int)newState]);
//}

void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*StateUpdate();

	if (m_currentState->ReadyToChange())
	{
		ChangeState(m_currentState->GetNextState());
	}*/
}

void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	m_gameManager = Cast<AGameManager>(UGameplayStatics::GetGameMode(this));

	//CharControllerState* state = new CharControllerIdle();
	//state->SetGameManager(m_gameManager);
	//m_allStates.push_back(state);
	//// to do: make the first on the default state.
	//m_allStates.push_back(state);

	//state = new CharacterControllerMoving();
	//state->SetGameManager(m_gameManager);
	//m_allStates.push_back(state);
	//m_allStates.push_back(state);

	//state = new CharControllerAttacking();
	//state->SetGameManager(m_gameManager);
	//m_allStates.push_back(state);
	//m_allStates.push_back(state);


	//ChangeState(m_allStates[1]);
}
//
//void ACharacterController::ChangeState(CharControllerState* newState)
//{
//	if (m_currentState != nullptr)
//	{
//		m_currentState->OnExit();
//	}
//
//	m_currentState = newState;
//	m_currentState->OnEnter();
//}
//
//void ACharacterController::StateUpdate()
//{
//	if (m_currentState != nullptr)
//	{
//		m_currentState->Update();
//	}
//}


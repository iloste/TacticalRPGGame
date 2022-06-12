// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

void AGameManager::initiativeTick() {
	// iterate through the characters.
	// Add their speed to their current initiative.
	for (size_t i = 0; i < m_allCharacters.Num(); i++)
	{
		UCharacterStats* stats = m_allCharacters[i]->getStats();
		stats->increaseInitiative();
	}

	// check to see if anyone has initiative over 1000.
	// if so, calculate base reserve.
	// apply base reserve to everyone but self.

	for (size_t x = 0; x < m_allCharacters.Num(); x++)
	{
		UCharacterStats* stats = m_allCharacters[x]->getStats();

		if (stats->getInitiative() >= m_turnPointsThreshold)
		{
			// base reserve;
			int baseReserve = stats->getBaseReserve();

			for (size_t y = 0; y < m_allCharacters.Num(); y++)
			{
				if (x != y)
				{
					m_allCharacters[y]->getStats()->applyBaseReserve(baseReserve);
				}
			}

			m_charactersWithTurn.Add(m_allCharacters[x]);
		}
	}
}

ATRPGCharacter* AGameManager::getNextCharacter() {
	int counter = 0;
	while (m_charactersWithTurn.Num() == 0)
	{
		initiativeTick();
		counter++;


		// To do: remove this or have it able to turn on off? May not matter as it should only run in engine. But you'll want it off if debugging other things.
		/*if (GEngine) 
		{
			for (size_t i = 0; i < m_allCharacters.Num(); i++)
			{
				FString details = "Character: ";
				details.AppendInt(i);
				details += (" | initiative: ");
				details.AppendInt(m_allCharacters[i]->getStats()->getInitiative());
				details += (" | reserve: ");
				details.AppendInt(m_allCharacters[i]->getStats()->GetReserve());
				details += " | speed: ";
				details.AppendInt(m_allCharacters[i]->getStats()->GetSpeed());

				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, details);
				const TCHAR* ff = *details;
				UE_LOG(LogTemp, Warning, TEXT("%s"), *details);
			}
		}*/

		// To do: continue working on the turn order. You need to know have it so if you just attack instead of move (or skip turn), you'll get a turn soon than the opponenet.
	}


	ATRPGCharacter* nextCharacter = m_charactersWithTurn[0];
	m_charactersWithTurn.RemoveAt(0);
	return nextCharacter;
}

void AGameManager::RespondToOnDeath() {
	UE_LOG(LogTemp, Warning, TEXT("OnDeath"));

}

void AGameManager::BeginPlay()
{
	Super::BeginPlay();
}

void AGameManager::BindDelegates()
{
	for (size_t i = 0; i < m_allCharacters.Num(); i++)
	{
		ATRPGCharacter* character = m_allCharacters[i];
		UHealthSystem* hs = character->GetHealthSystem();
		hs->m_onDeath.AddDynamic(this, &AGameManager::RespondToOnDeath);
	}

}

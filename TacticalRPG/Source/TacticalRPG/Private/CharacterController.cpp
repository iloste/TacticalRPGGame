// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

void ACharacterController::attack(ATRPGCharacter* enemy) {
	// to do: include the math for the damage.
	enemy->GetHealthSystem()->takeDamage(25);

	// debug to print health of enemy and current char
	if (GEngine)
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

	}


}

void ACharacterController::ReduceInitiative(UCharacterStats* stats, int reductionAmount) {
	stats->DecreaseInitiative(reductionAmount);
}


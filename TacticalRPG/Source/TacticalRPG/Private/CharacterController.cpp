// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

void ACharacterController::attack(ATRPGCharacter* enemy) {
	// to do: include the math for the damage.
	enemy->GetHealthSystem()->takeDamage(100);

}

void ACharacterController::ReduceInitiative(UCharacterStats* stats, int reductionAmount) {
	stats->DecreaseInitiative(reductionAmount);
}


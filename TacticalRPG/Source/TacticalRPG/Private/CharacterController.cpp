// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

void ACharacterController::attack(ATRPGCharacter* enemy) {


}

void ACharacterController::ReduceInitiative(UCharacterStats* stats, int reductionAmount) {
	stats->DecreaseInitiative(reductionAmount);
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterStats.h"
#include "TRPGCharacter.h"
#include "CharacterController.generated.h"

/**
 *
 */
UCLASS()
class TACTICALRPG_API ACharacterController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		ATRPGCharacter* m_controlledCharacter;

	UFUNCTION(BlueprintCallable)
		void attack(ATRPGCharacter* enemy);

	UFUNCTION(BlueprintCallable)
		void ReduceInitiative(UCharacterStats* stats, int reductionAmount);
};


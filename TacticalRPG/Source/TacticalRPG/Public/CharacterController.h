// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterStats.h"
#include "TRPGCharacter.h"
#include "CharControllerState.h"
#include "CharacterControllerMoving.h"
#include "CharacterControllerDefault.h"
#include "CharControllerAttacking.h"
#include <vector>
#include "CharacterStates.h"
#include "CharControllerIdle.h"
#include "CharacterController.generated.h"


class CharControllerState;
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
	
	

	//void ChangeState(CharacterStates newState);

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

private:

	
	//CharControllerState* m_currentState;
	//std::vector<CharControllerState*> m_allStates{};
	//
	//void ChangeState(CharControllerState* newState);
	//void StateUpdate();
	

	AGameManager* m_gameManager{};

};


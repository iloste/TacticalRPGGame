// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TRPGCharacter.h"
#include "CharacterStats.h"
#include "HealthSystem.h"
#include "GameManager.generated.h"



/**
 * 
 */
UCLASS()
class TACTICALRPG_API AGameManager : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int test;
	UFUNCTION(BlueprintCallable)
	ATRPGCharacter* getNextCharacter();

protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<ATRPGCharacter*> m_allCharacters;
	TArray<ATRPGCharacter*> m_charactersWithTurn;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int m_turnPointsThreshold{ 1000 };

	// figures out who gets a go, if anybody, on the next tick
	void initiativeTick();

	UFUNCTION()
	void RespondToOnDeath();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void BindDelegates();
};


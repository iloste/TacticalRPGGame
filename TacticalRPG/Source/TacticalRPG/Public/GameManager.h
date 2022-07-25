// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TRPGCharacter.h"
#include "CharacterStats.h"
#include "HealthSystem.h"
#include "InGameDataBase.h"
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

	UFUNCTION(BlueprintCallable)
	UInGameDataBase* GetDatabase() { return m_database; }

	UFUNCTION(BlueprintCallable)
	void SetDatabase(UInGameDataBase* database) {  m_database = database; }

	//UInGameDataBase* GetDataBase2(){Get}

protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<ATRPGCharacter*> m_allCharacters;
	TArray<ATRPGCharacter*> m_deadCharacters;
	TArray<ATRPGCharacter*> m_charactersWithTurn;
	TArray<ATRPGCharacter*> m_currentTurnOrder;
	TArray<ATRPGCharacter*> m_predictedTurnOrder;
	
	UInGameDataBase* m_database;
	

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int m_turnPointsThreshold{ 1000 };

	// figures out who gets a go, if anybody, on the next tick
	void initiativeTick();
	void PredictiveInitiativeTick();
	void PredictTurnOrder();

	UFUNCTION()
	void RespondToOnDeath(UHealthSystem* hs);

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void BindDelegates();
};


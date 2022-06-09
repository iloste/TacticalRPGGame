// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Abilities.h"
#include "CharacterStats.h"
#include "HealthSystem.h"
#include "TRPGCharacter.generated.h"


UCLASS()
class TACTICALRPG_API ATRPGCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATRPGCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UCharacterStats* m_stats;
	UHealthSystem* m_healthSystem;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UCharacterStats* getStats() { return m_stats; }


	
	UAbilities* m_abilities;
};

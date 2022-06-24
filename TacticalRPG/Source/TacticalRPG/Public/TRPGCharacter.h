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
	static int m_nextID;
	int m_ID{};

	UPROPERTY( EditAnywhere)
		FString m_name;
	UPROPERTY(EditAnywhere)
		UTexture* m_profileImage;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable)
		UCharacterStats* getStats() { return m_stats; }
	UFUNCTION(BlueprintCallable)
		UHealthSystem* GetHealthSystem() { return m_healthSystem; }


	UAbilities* m_abilities;
	UFUNCTION(BlueprintCallable)
		int ID() { return m_ID; }

	UFUNCTION(BlueprintCallable)
		FString GetName();
	UFUNCTION(BlueprintCallable)
		UTexture* GetProfileImage() { return m_profileImage; }
};


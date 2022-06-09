// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "VitalStat.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Entity.generated.h"

UCLASS()
class TACTICALRPG_API AEntity : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEntity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	VitalStat m_health;
	VitalStat m_stamina;
	VitalStat m_mana;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int getCurrentHeatlh() { return m_health.getCurrent(); }
	void takeDamage(int damage) { m_health.decreaseBy(damage); }
};

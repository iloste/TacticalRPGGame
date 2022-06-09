// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "VitalStat.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthSystem.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UHealthSystem : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	VitalStat m_health;
	VitalStat m_stamina;
	VitalStat m_mana;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
		int getCurrentHeatlh() { return m_health.getCurrent(); }
	UFUNCTION(BlueprintCallable)
		void takeDamage(int damage) { m_health.decreaseBy(damage); }

	

};

enum class VitalStats {
	Health,
	Stamina,
	Mana,
};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Stat.h"
#include "VitalStat.h"
#include "CoreMinimal.h"
#include <time.h>
#include "Components/ActorComponent.h"
#include "CharacterStats.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UCharacterStats : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharacterStats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	////UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	Stat* m_strength;
	////UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	Stat* m_speed;
	////UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	Stat* m_intelligence;
	////UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	Stat* m_charisma;
	////UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	Stat* m_vitality;

	VitalStat* m_initiativeCounter;
	VitalStat* m_initiativeReserve;
	VitalStat* m_predictedInitiativeCounter;
	VitalStat* m_predictedInitiativeReserve;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



	void increaseInitiative();
	void DecreaseInitiative(int num);
	void applyBaseReserve(int baseReserve);
	int getInitiative() { return m_initiativeCounter->getCurrent(); }
	int getBaseReserve();

	void IncreasePredictedInitiative();
	void DecreasePredictedInitiative(int num);
	void ApplyPredictedBaseReserve(int baseReserve);
	int GetPredictedInitiative() { return m_predictedInitiativeCounter->getCurrent(); }
	int GetPredictedBaseReserve();
	void ResetPredictedValues();

	int GetSpeed() { return m_speed->getCurrent(); }
	int GetReserve() { return m_initiativeReserve->getCurrent(); }
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VitalStats.h"
#include "DamageEffect.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UDamageEffect: public UObject
{
	GENERATED_BODY()

public:
	UDamageEffect();
	//~DamageEffect();
	UFUNCTION(BlueprintCallable)
		VitalStats GetVitalStat() { return m_vitalStat; }
	UFUNCTION(BlueprintCallable)
		int GetDamage() { return m_damage; }

	void Setup(VitalStats vitalStat, int damage);


private:
	int m_damage;
	VitalStats m_vitalStat;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <String>
#include <VitalStats.h>
#include "StatusEffect.h"
#include "DamageEffect.h"
#include <vector>
#include "Ability.generated.h"

/**
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UAbility : public UObject
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UAbility();
	void setDescriptors(FString name, FString description);
	void setFunctionalValues(int range, int cost, int castTime, bool areaEffect);


	UFUNCTION(BlueprintCallable)
		FString getName() { return m_name; }
	UFUNCTION(BlueprintCallable)
		FString getDescription() { return m_description; }
	UFUNCTION(BlueprintCallable)
		int getRange() { return m_range; }
protected:
	// Called when the game starts
	/*virtual void BeginPlay() override;*/

public:
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	FString m_name;
	FString m_description;
	int m_cost;
	VitalStats m_statToTarget;
	int m_castTime;
	bool m_areaEffect;
	int m_range;
	std::vector<StatusEffect> m_statusEffects;
	std::vector<DamageEffect> m_damageEffects;

};

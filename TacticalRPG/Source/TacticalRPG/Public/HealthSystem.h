// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "VitalStat.h"
#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "Components/ActorComponent.h"
#include "HealthSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, UHealthSystem*, hs);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UHealthSystem : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthSystem();

	UPROPERTY(BlueprintAssignable)
		FOnDeath m_onDeath ;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	VitalStat m_health;
	VitalStat m_stamina;
	VitalStat m_mana;

	void CheckIfDead();
	

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
		int getCurrentHeatlh() { return m_health.getCurrent(); }
	UFUNCTION(BlueprintCallable)
		float GetCurrentHeatlhAsPercentage() { return m_health.GetCurrentAsPercentage(); }
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentStamina() { return m_stamina.getCurrent(); }
	UFUNCTION(BlueprintCallable)
		float GetCurrentStaminaAsPercentage() { return m_stamina.GetCurrentAsPercentage(); }
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentMana() { return m_mana.getCurrent(); }
	UFUNCTION(BlueprintCallable)
		float GetCurrentManaAsPercentage() { return m_mana.GetCurrentAsPercentage(); }
	
	
	UFUNCTION(BlueprintCallable)
		void takeDamage(int damage);


};


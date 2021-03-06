// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "VitalStat.h"
#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "Components/ActorComponent.h"
#include "HealthSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, UHealthSystem*, hs);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVitalStatUpdate);


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UHealthSystem : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthSystem();

	UPROPERTY(BlueprintAssignable)
		FOnDeath m_onDeath;
	
	UPROPERTY(BlueprintAssignable)
		FVitalStatUpdate m_vitalStatUpdate;

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


#pragma region Getters
	// Heatlh
	UFUNCTION(BlueprintCallable)
		int getCurrentHeatlh() { return m_health.getCurrent(); }

	UFUNCTION(BlueprintCallable)
		/// <summary>
		/// Returns the health as a value between 0-1
		/// </summary>
		float GetCurrentHeatlhAsPercentage() { return m_health.GetCurrentAsPercentage(); }

	
	UFUNCTION(BlueprintCallable)
		/// <summary>
		/// Returns the health as a string in the format 1000/1000
		/// </summary>
		FString GetCurrentHealthAsString() { return m_health.GetCurrentAsString(); }

	// Stamina
	UFUNCTION(BlueprintCallable)
		int GetCurrentStamina() { return m_stamina.getCurrent(); }

	UFUNCTION(BlueprintCallable)
		/// <summary>
		/// Returns the stamina as a value between 0-1
		/// </summary>
		float GetCurrentStaminaAsPercentage() { return m_stamina.GetCurrentAsPercentage(); }


	UFUNCTION(BlueprintCallable)
		/// <summary>
		/// Returns the stamina as a string in the format 1000/1000
		/// </summary>
		FString GetCurrentStaminaAsString() { return m_stamina.GetCurrentAsString(); }

	// mana
	UFUNCTION(BlueprintCallable)
		int GetCurrentMana() { return m_mana.getCurrent(); }

	UFUNCTION(BlueprintCallable)
		/// <summary>
		/// Returns the mana as a value between 0-1
		/// </summary>
		float GetCurrentManaAsPercentage() { return m_mana.GetCurrentAsPercentage(); }

	
	UFUNCTION(BlueprintCallable)
		/// <summary>
		/// Returns the mana as a string in the format 1000/1000
		/// </summary>
		FString GetCurrentManaAsString() { return m_mana.GetCurrentAsString(); }



#pragma endregion



	UFUNCTION(BlueprintCallable)
		void takeDamage(int damage);


};


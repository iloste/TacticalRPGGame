// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthSystem.h"

// Sets default values for this component's properties
UHealthSystem::UHealthSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthSystem::BeginPlay()
{
	Super::BeginPlay();
	m_health = VitalStat(88);
	m_mana = VitalStat(88);
	m_stamina = VitalStat(88);
	
}


void UHealthSystem::CheckIfDead()
{
	if (m_health.getCurrent() <= 0)
	{
		m_onDeath.Broadcast(this);
		// dead
	}
}

// Called every frame
void UHealthSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthSystem::takeDamage(int damage)
{
	m_health.decreaseBy(damage);
	CheckIfDead();
}


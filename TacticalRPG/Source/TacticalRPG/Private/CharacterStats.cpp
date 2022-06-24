// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"

// Sets default values for this component's properties
UCharacterStats::UCharacterStats()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterStats::BeginPlay()
{
	
	Super::BeginPlay();
	m_initiativeReserve = new VitalStat(500);
	m_initiativeReserve->decreaseBy(500);

	m_initiativeCounter = new VitalStat(2000);
	m_initiativeCounter->decreaseBy(2000);

	m_predictedInitiativeReserve = new VitalStat(500);
	m_predictedInitiativeReserve->decreaseBy(500);

	m_predictedInitiativeCounter = new VitalStat(2000);
	m_predictedInitiativeCounter->decreaseBy(2000);

	m_speed = new Stat(rand() % 30 + 100);
	//m_speed = new Stat(rand() % 100);

	// ...

}


// Called every frame
void UCharacterStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterStats::increaseInitiative() {
	m_initiativeCounter->increaseBy(m_speed->getCurrent() + m_initiativeReserve->getCurrent());
	m_initiativeReserve->decreaseBy(m_initiativeReserve->getCurrent());
}

void UCharacterStats::DecreaseInitiative(int num) {
	m_initiativeCounter->decreaseBy(num);
}


void UCharacterStats::applyBaseReserve(int baseReserve) {
	if (baseReserve <= m_initiativeCounter->getCurrent())
	{
		m_initiativeCounter->decreaseBy(baseReserve);
		m_initiativeReserve->increaseBy(baseReserve);
	}
	else {
		m_initiativeReserve->increaseBy(m_initiativeCounter->getCurrent());
		m_initiativeCounter->decreaseBy(m_initiativeCounter->getCurrent());
	}
	
}

int UCharacterStats::getBaseReserve() {
	// To do: replace 1000 with a variable. This should be the same value as the game manager is using (m_turnPointsThreshold), but I don't want to have to get it from there 
	// necessarily as I don't want this class to know abobut it. I could have the game manager pass the value in once it has gotten all of the characters. This should work well.
	int baseReserve = m_initiativeCounter->getCurrent() - 1000;

	if (baseReserve < 0)
	{
		baseReserve = 0;
	}

	return baseReserve;
}





void UCharacterStats::IncreasePredictedInitiative() {
	m_predictedInitiativeCounter->increaseBy(m_speed->getCurrent() + m_predictedInitiativeReserve->getCurrent());
	m_predictedInitiativeReserve->decreaseBy(m_predictedInitiativeReserve->getCurrent());
}

void UCharacterStats::DecreasePredictedInitiative(int num) {
	m_predictedInitiativeCounter->decreaseBy(num);
}


void UCharacterStats::ApplyPredictedBaseReserve(int baseReserve) {
	if (baseReserve <= m_predictedInitiativeCounter->getCurrent())
	{
		m_predictedInitiativeCounter->decreaseBy(baseReserve);
		m_predictedInitiativeReserve->increaseBy(baseReserve);
	}
	else {
		m_predictedInitiativeReserve->increaseBy(m_predictedInitiativeCounter->getCurrent());
		m_predictedInitiativeCounter->decreaseBy(m_predictedInitiativeCounter->getCurrent());
	}

}

int UCharacterStats::GetPredictedBaseReserve() {
	// To do: replace 1000 with a variable. This should be the same value as the game manager is using (m_turnPointsThreshold), but I don't want to have to get it from there 
	// necessarily as I don't want this class to know abobut it. I could have the game manager pass the value in once it has gotten all of the characters. This should work well.
	int baseReserve = m_predictedInitiativeCounter->getCurrent() - 1000;

	if (baseReserve < 0)
	{
		baseReserve = 0;
	}

	return baseReserve;
}


void UCharacterStats::ResetPredictedValues() {
	// To Do: check to see if the predicted values need to have their instance deleted
	m_predictedInitiativeCounter->SetCurrent(m_initiativeCounter->getCurrent());
	m_predictedInitiativeReserve->SetCurrent(m_initiativeReserve->getCurrent());
}

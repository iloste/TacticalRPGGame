// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability.h"

// Sets default values for this component's properties
UAbility::UAbility()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...


}
void UAbility::setDescriptors(FString name, FString description) {
	m_name = name;
	m_description = description;
}

void UAbility::setFunctionalValues(int range, int cost, int castTime, bool areaEffect) {
	m_range = range;
	m_cost = cost;
	m_castTime = castTime;
	m_areaEffect = areaEffect;

	UDamageEffect* a = NewObject<UDamageEffect>();
	a->Setup(VitalStats::Health, 20);
	m_damageEffects.Add(a);

}


//// Called when the game starts
//void UAbility::BeginPlay()
//{
//	Super::BeginPlay();
//
//	// ...
//
//}


// Called every frame
//void UAbility::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//}

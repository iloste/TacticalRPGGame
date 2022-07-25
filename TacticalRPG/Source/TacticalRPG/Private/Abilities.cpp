// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities.h"



// Sets default values for this component's properties
UAbilities::UAbilities()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAbilities::BeginPlay()
{
	Super::BeginPlay();
	UAbility* a = NewObject<UAbility>();
	a->setDescriptors("a", "Attacks with a sword");
	a->setFunctionalValues(300, 2, 1, false);
	m_abilities.Add(a);

	UAbility* b = NewObject<UAbility>();
	b->setDescriptors("b", "Attacks with a sword");
	b->setFunctionalValues(100, 3, 2, false);
	m_abilities.Add(b);
	// ...
	
}


// Called every frame
void UAbilities::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


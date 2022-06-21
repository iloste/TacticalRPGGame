// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameDataBase.h"

// Sets default values for this component's properties
UInGameDataBase::UInGameDataBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInGameDataBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInGameDataBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInGameDataBase::SetCurrentCharacter(ATRPGCharacter* newCharacter){
	m_currentCharacter = newCharacter;
	m_updatedCurrentCharacter.Broadcast();
	// to do: broadcast event that current character has been changed.
}

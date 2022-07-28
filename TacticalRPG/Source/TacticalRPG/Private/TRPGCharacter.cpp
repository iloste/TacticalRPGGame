// Fill out your copyright notice in the Description page of Project Settings.


#include "TRPGCharacter.h"

// Sets default values
ATRPGCharacter::ATRPGCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

int ATRPGCharacter::m_nextID = 0;

// Called when the game starts or when spawned
void ATRPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	//m_ID = ATRPGCharacter::m_nextID;
	//ATRPGCharacter::m_nextID++;
	m_stats = FindComponentByClass<UCharacterStats>();
	m_healthSystem = FindComponentByClass<UHealthSystem>();

	// to do: set name properly
	//if (m_ID == 0)
	//{
	//	m_name = "Gina";
	//}
	//else {
	//	m_name = "Luke";
	//}

	// to do: make this use FindComponent too and then check everything works fine.
	m_abilities = NewObject<UAbilities>();
}

void ATRPGCharacter::SetID(int newID) {
	if (m_ID == -1)
	{
		m_ID = newID;
	}
	// to do: throw warning that ID has already been set and cannot be changed
}


// Called every frame
void ATRPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATRPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FString ATRPGCharacter::GetName()
{
	return m_name;

}

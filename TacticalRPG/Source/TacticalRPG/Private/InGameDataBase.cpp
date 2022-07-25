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

void UInGameDataBase::SetCurrentCharacter(ATRPGCharacter* newCharacter) {
	m_currentCharacter = newCharacter;
	m_updatedCurrentCharacter.Broadcast();
	// to do: broadcast event that current character has been changed.
}

void UInGameDataBase::SetCurrentTurnOrder(TArray<ATRPGCharacter*> currentTurnOrder)
{
	m_currentTurnOrder = currentTurnOrder;
	m_updatedCurrentTurnOrder.Broadcast();
}

void UInGameDataBase::SetAbilityPopup(UAbility* ability, FVector pos) {
	m_popupAbility = ability;
	m_popupAbilityPos = pos;
	m_updatedAbilityPopup.Broadcast();
}

void UInGameDataBase::RemoveAbilityPopup() {
	m_popupAbility = nullptr;
	// To do: destroy the old vector? m_popupAbilityPos

	// To do: for now, this broadcasts the same event to remove the popup, with the ui displaying it if m_popupAbility is not null and removing it if it is.
	//			Perhaps it would be better to have two seperate events?
	m_updatedAbilityPopup.Broadcast();

}

void UInGameDataBase::AddPopup(UPopupable* owner, UAbility* ability, FVector pos)
{
	UPopupInfo* popup = NewObject<UPopupInfo>();
	popup->m_owner = owner;
	popup->m_popupAbility = ability;
	popup->m_popupAbilityPos = pos;
	m_popups.Add(popup);
	m_updatedAbilityPopup.Broadcast();
}

UPopupInfo* UInGameDataBase::GetNextPopup()
{
	if (m_popups.Num() > 0)
	{
		return m_popups.Last();
	}

	return nullptr;
}

void UInGameDataBase::RemoveCurrentPopupFromDatabase()
{
	if (m_popups.Num() > 0)
	{
		m_popups.Last()->m_owner->PopupDeactivated();
		m_popups.RemoveAt(m_popups.Num() - 1);
		m_updatedAbilityPopup.Broadcast();
	}

}

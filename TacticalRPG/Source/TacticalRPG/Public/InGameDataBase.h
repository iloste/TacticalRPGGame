// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TRPGCharacter.h"
#include "PopupInfo.h"
#include "Components/ActorComponent.h"
#include "InGameDataBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdatedCurrentCharacter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdatedCurrentTurnOrder);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdatedAbilityPopup);


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UInGameDataBase : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInGameDataBase();

	UPROPERTY(BlueprintAssignable)
		FUpdatedCurrentCharacter m_updatedCurrentCharacter;
	UPROPERTY(BlueprintAssignable)
		FUpdatedCurrentTurnOrder m_updatedCurrentTurnOrder;
	UPROPERTY(BlueprintAssignable)
		FUpdatedAbilityPopup m_updatedAbilityPopup;


	UPROPERTY(visibleanywhere)
		bool buttonPressed{ false };
	UFUNCTION(BlueprintCallable)
		void PressedButton(bool pressed) { buttonPressed = pressed; }



	UFUNCTION(BlueprintCallable)
		TArray<ATRPGCharacter*> GetAllCharacters() { return m_allCharacters; }
	
	UFUNCTION(BlueprintCallable)
		void SetAllCharacters(TArray<ATRPGCharacter*> allCharacters) { m_allCharacters = allCharacters; }
	
	UFUNCTION(BlueprintCallable)
		ATRPGCharacter* GetCharacter(int ID) { return m_allCharacters[ID]; }


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
		ATRPGCharacter* GetCurrentCharacter() { return m_currentCharacter; }
	UFUNCTION(BlueprintCallable)
		void SetCurrentCharacter(ATRPGCharacter* newCharacter);

	void SetCurrentTurnOrder(TArray<ATRPGCharacter*> currentTurnOrder);

	UFUNCTION(BlueprintCallable)
		TArray<ATRPGCharacter*>  GetCurrentTurnOrder() { return m_currentTurnOrder; }

	UFUNCTION(BlueprintCallable)
		void SetAbilityPopup(UAbility* ability, FVector pos);
	UFUNCTION(BlueprintCallable)
		void RemoveAbilityPopup();

	UFUNCTION(BlueprintCallable)
		UAbility* GetPopupAbility() { return m_popupAbility; }
	UFUNCTION(BlueprintCallable)
		FVector GetPopupAbilityPos() { return m_popupAbilityPos; }

	UFUNCTION(BlueprintCallable)
		void AddPopup(UPopupable* owner, UAbility* ability, FVector2D pos);

	UFUNCTION(BlueprintCallable)
		UPopupInfo* GetNextPopup();

	UFUNCTION(BlueprintCallable)
		void RemoveCurrentPopupFromDatabase();

private:
	ATRPGCharacter* m_currentCharacter;
	TArray<ATRPGCharacter*> m_currentTurnOrder;

	UAbility* m_popupAbility;
	FVector m_popupAbilityPos;

	// To do: When removing a popup, make sure it is destroyed and doesn't lead to a memory leak.
	TArray<UPopupInfo*> m_popups;

	TArray<ATRPGCharacter*> m_allCharacters;

};

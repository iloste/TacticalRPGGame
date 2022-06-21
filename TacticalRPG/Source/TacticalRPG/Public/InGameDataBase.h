// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TRPGCharacter.h"
#include "Components/ActorComponent.h"
#include "InGameDataBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdatedCurrentCharacter);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TACTICALRPG_API UInGameDataBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInGameDataBase();

	UPROPERTY(BlueprintAssignable)
		FUpdatedCurrentCharacter m_updatedCurrentCharacter;

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

		
private:
	ATRPGCharacter* m_currentCharacter;

};

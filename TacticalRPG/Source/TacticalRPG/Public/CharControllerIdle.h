// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CharControllerState.h"
#include "Kismet/GameplayStatics.h"
#include "GameManager.h"
#include "CoreMinimal.h"

/**
 *
 */
class TACTICALRPG_API CharControllerIdle : public CharControllerState
{
public:
	CharControllerIdle();
	CharControllerIdle(UInputComponent* inputComponent);
	~CharControllerIdle();

	virtual void OnEnter() override;
	virtual void Update() override;
	virtual void OnExit() override;

private:
	UInputComponent* m_inpuptComponent;
	int toBeDeleted = 0;
	void TestFunctionDeleteThis() {
		FString message = "Test Successful!";
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, message);
	}
};

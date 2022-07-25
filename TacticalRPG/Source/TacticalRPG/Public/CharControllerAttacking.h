// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CharControllerState.h"

#include "CoreMinimal.h"

/**
 * 
 */
class TACTICALRPG_API CharControllerAttacking : public CharControllerState
{
public:
	CharControllerAttacking();
	~CharControllerAttacking();

	virtual void OnEnter() override;
	virtual void Update() override;
	virtual void OnExit() override;
};

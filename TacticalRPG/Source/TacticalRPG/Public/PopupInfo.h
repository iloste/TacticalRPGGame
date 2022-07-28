// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Ability.h"
#include "Popupable.h"
#include "CoreMinimal.h"
#include "PopupInfo.generated.h"

/**
 * 
 */

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TACTICALRPG_API UPopupInfo : public UObject
{
	GENERATED_BODY()

public:
	//UPopupInfo();
	//~UPopupInfo();
	UPROPERTY(BlueprintReadWrite)
	UPopupable* m_owner;

	UPROPERTY(BlueprintReadWrite)
	UAbility* m_popupAbility;

	UPROPERTY(BlueprintReadWrite)
	FVector2D m_popupAbilityPos;

	UPROPERTY(BlueprintReadWrite)
	UWidget* m_popup;
	//popup type
	// location
	// popup
	// ability info


};

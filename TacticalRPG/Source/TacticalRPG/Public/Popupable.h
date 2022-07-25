// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popupable.generated.h"

/**
 * 
 */
UCLASS()
class TACTICALRPG_API UPopupable : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		void PopupDeactivated() { m_popupActive = false; }


protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		bool m_popupActive;
};

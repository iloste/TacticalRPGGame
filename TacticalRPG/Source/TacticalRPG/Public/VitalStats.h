// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
UENUM(BlueprintType)
enum class VitalStats : uint8
{
	Health UMETA(DisplayName ="Health"),
	Stamina UMETA(DisplayName = "Stamina"), 
	Mana UMETA(DisplayName = "Mana"),
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 *
 */
UENUM(BlueprintType)
enum class CharacterStates : uint8 {
	Default UMETA(DisplayName = "Default"),
	Idle UMETA(DisplayName = "Idle"),
	Movement UMETA(DisplayName = "Movement"),
	Attack UMETA(DisplayName = "Attack"),
	Active UMETA(DisplayName = "Active"),
};
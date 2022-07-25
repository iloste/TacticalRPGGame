// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageEffect.h"

UDamageEffect::UDamageEffect()
{
}

void UDamageEffect::Setup(VitalStats vitalStat, int damage) {
	m_vitalStat = vitalStat;
	m_damage = damage;
}


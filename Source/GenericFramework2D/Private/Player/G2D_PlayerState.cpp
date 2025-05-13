// Copyright (c) 2025 HeartString Entertainment. All Rights Reserved.

#include "Player/G2D_PlayerState.h"

#include "AbilitySystem/G2D_AbilitySystemComponent.h"
#include "AbilitySystem/G2D_AttributeSet.h"

AG2D_PlayerState::AG2D_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UG2D_AbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<UG2D_AttributeSet>("AttributeSet");
	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* AG2D_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

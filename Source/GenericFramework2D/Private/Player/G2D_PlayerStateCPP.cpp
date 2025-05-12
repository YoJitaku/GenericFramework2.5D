// Copyright (c) 2025 HeartString Entertainment. All Rights Reserved.

#include "Player/G2D_PlayerStateCPP.h"

#include "AbilitySystem/G2D_AbilitySystemComponentCPP.h"
#include "AbilitySystem/G2D_AttributeSetCPP.h"

AG2D_PlayerStateCPP::AG2D_PlayerStateCPP()
{
	AbilitySystemComponent = CreateDefaultSubobject<UG2D_AbilitySystemComponentCPP>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AttributeSet = CreateDefaultSubobject<UG2D_AttributeSetCPP>("AttributeSet");
	NetUpdateFrequency = 100.f;
}
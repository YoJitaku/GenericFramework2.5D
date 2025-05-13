// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "Player/G2D_PaperZDEnemy.h"

#include "AbilitySystem/G2D_AbilitySystemComponent.h"
#include "AbilitySystem/G2D_AttributeSet.h"

AG2D_PaperZDEnemy::AG2D_PaperZDEnemy()
{
	//初始化GAS, player的GAS由PlayerState控制
	AbilitySystemComponent = CreateDefaultSubobject<UG2D_AbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<UG2D_AttributeSet>("AttributeSet");
}

void AG2D_PaperZDEnemy::BeginPlay()
{
	Super::BeginPlay();

	//Init ASC
	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

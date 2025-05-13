// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "Player/G2D_PaperZDBase.h"

#include "AbilitySystem/G2D_AbilitySystemComponent.h"

AG2D_PaperZDBase::AG2D_PaperZDBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

UAbilitySystemComponent* AG2D_PaperZDBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AG2D_PaperZDBase::BeginPlay()
{
	Super::BeginPlay();
}

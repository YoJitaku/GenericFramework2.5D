// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "AbilitySystem/G2D_AttributeSet.h"

#include "Net/UnrealNetwork.h"

UG2D_AttributeSet::UG2D_AttributeSet()
{
	InitHealth((3.f));
	InitMaxHealth((10.f));
}

void UG2D_AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UG2D_AttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UG2D_AttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UG2D_AttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UG2D_AttributeSet, Health, OldHealth);
}

void UG2D_AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UG2D_AttributeSet, MaxHealth, OldMaxHealth);
}

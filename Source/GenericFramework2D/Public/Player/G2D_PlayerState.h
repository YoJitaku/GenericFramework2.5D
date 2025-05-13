// Copyright (c) 2025 HeartString Entertainment. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/G2D_AttributeSet.h"
#include "GameFramework/PlayerState.h"
#include "G2D_PlayerState.generated.h"

class UG2D_AttributeSet;
class UG2D_AbilitySystemComponent;
/**
 * 
 */
UCLASS()
class GENERICFRAMEWORK2D_API AG2D_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AG2D_PlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	
protected:
	UPROPERTY();
	TObjectPtr<UG2D_AbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY();
	TObjectPtr<UG2D_AttributeSet> AttributeSet;
	
};

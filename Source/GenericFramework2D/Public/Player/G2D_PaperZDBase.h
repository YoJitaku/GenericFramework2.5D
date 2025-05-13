// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AttributeSet.h"
#include "PaperZDCharacter.h"
#include "AbilitySystem/G2D_AttributeSet.h"
#include "G2D_PaperZDBase.generated.h"

class UG2D_AbilitySystemComponent;
class UG2D_AttributeSet;

/**
 * 
 */
UCLASS(Abstract)
class GENERICFRAMEWORK2D_API AG2D_PaperZDBase : public APaperZDCharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AG2D_PaperZDBase();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY();
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY();
	TObjectPtr<UAttributeSet> AttributeSet;
};
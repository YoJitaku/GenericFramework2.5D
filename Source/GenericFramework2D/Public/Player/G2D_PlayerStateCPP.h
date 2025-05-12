// Copyright (c) 2025 HeartString Entertainment. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "G2D_PlayerStateCPP.generated.h"

class UG2D_AttributeSetCPP;
class UG2D_AbilitySystemComponentCPP;
/**
 * 
 */
UCLASS()
class GENERICFRAMEWORK2D_API AG2D_PlayerStateCPP : public APlayerState
{
	GENERATED_BODY()
public:
	AG2D_PlayerStateCPP();
protected:
	UPROPERTY();
	TObjectPtr<UG2D_AbilitySystemComponentCPP> AbilitySystemComponent;

	UPROPERTY();
	TObjectPtr<UG2D_AttributeSetCPP> AttributeSet;
	
};

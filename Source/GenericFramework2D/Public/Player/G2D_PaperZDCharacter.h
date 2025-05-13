// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player/G2D_PaperZDBase.h"
#include "G2D_PaperZDCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GENERICFRAMEWORK2D_API AG2D_PaperZDCharacter : public AG2D_PaperZDBase
{
	GENERATED_BODY()
public:
	AG2D_PaperZDCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
};

// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "G2D_PaperZDCPP.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class GENERICFRAMEWORK2D_API AG2D_PaperZDCPP : public APaperZDCharacter
{
	GENERATED_BODY()
public:
	AG2D_PaperZDCPP();
protected:
	virtual void BeginPlay() override;
};
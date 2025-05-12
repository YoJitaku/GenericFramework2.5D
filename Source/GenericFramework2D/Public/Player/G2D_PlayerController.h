// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "G2D_PlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class GENERICFRAMEWORK2D_API AG2D_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AG2D_PlayerController();
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> G2D_Context;
};

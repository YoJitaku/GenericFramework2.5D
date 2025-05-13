// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "G2DUserWidget.h"
#include "GameFramework/HUD.h"
#include "G2DHUD.generated.h"

/**
 * 
 */
UCLASS()
class GENERICFRAMEWORK2D_API AG2DHUD : public AHUD
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TObjectPtr<UG2DUserWidget> OverlayWidget;

protected:
	virtual void BeginPlay() override;
	
private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UG2DUserWidget> OverlayWidgetClass;
};

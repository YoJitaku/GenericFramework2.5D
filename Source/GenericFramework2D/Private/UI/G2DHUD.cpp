// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "UI/G2DHUD.h"

void AG2DHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
	
}

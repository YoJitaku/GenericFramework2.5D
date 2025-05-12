// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "Player/G2D_PlayerController.h"
#include "EnhancedInputSubsystems.h"

AG2D_PlayerController::AG2D_PlayerController()
{
	bReplicates = true;
}

void AG2D_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(G2D_Context);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(G2D_Context, 0);

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}
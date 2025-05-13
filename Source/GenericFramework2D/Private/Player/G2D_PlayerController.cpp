// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "Player/G2D_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"

AG2D_PlayerController::AG2D_PlayerController()
{
	bReplicates = true;
}

void AG2D_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	//增强输入
	check(G2D_Context);
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(G2D_Context, 0);

	//激活光标
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	//鼠标模式
	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}

void AG2D_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AG2D_PlayerController::Move);
	// EnhancedInputComponent->BindAction(CameraRotate, ETriggerEvent::Triggered, this, &AG2D_PlayerController::RotateCamera);
	// EnhancedInputComponent->BindAction(CameraZoom, ETriggerEvent::Triggered, this, &AG2D_PlayerController::ZoomCamera);
}

/*class USpringArmComponent* AG2D_PlayerController::GetPawnSpringArm() const
{
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		return ControlledPawn->FindComponentByClass<USpringArmComponent>();
	}
	return nullptr;
}*/

void AG2D_PlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}

/*
 *void AG2D_PlayerController::RotateCamera(const FInputActionValue& InputActionValue)
{
	UE_LOG(LogTemp, Log, TEXT("RotateCamera: %s"), *InputActionValue.ToString());
}

void AG2D_PlayerController::ZoomCamera(const FInputActionValue& InputActionValue)
{
	const float InputValue = InputActionValue.Get<float>();
	if (FMath::IsNearlyZero(InputValue)) return;
	
	if (USpringArmComponent* SpringArm = GetPawnSpringArm())
	{
		float newLength = SpringArm->TargetArmLength + InputValue * CameraZoomSpeed;
		newLength = FMath::Clamp(newLength, 200.f, 1000.f);
		SpringArm->TargetArmLength = newLength;
	}
}*/
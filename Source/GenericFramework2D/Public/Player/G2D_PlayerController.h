// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "G2D_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

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
	virtual void SetupInputComponent() override;
	// class USpringArmComponent* GetPawnSpringArm() const;
	
private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> G2D_Context;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;
	
	/*UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> CameraRotate;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> CameraZoom;

	UPROPERTY(EditAnywhere, Category = "Input")
	float CameraZoomSpeed = 100.f;*/
	
	void Move(const FInputActionValue& InputActionValue);
	/*void RotateCamera(const FInputActionValue& InputActionValue);
	void ZoomCamera(const FInputActionValue& InputActionValue);*/
};

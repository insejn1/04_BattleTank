// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	
	
	ATank* GetControlledTank() const;
	virtual void BeginPlay() override;

	virtual void Tick(float Deltatime) override;


	// Start the tank moving the barrel so a shot would hit where
	// the crosshair interesects the world
	void AimTowardsCrosshair();

};

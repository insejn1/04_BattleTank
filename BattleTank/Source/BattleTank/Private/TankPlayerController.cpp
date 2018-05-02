// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankPlayerController.h"



		

void ATankPlayerController::BeginPlay() 
{
	Super::BeginPlay();
	
	auto ControlledTank = GetControlledTank();

	if (!ControlledTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT(" PlayController not posessing a tank"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT(" PlayController posessing: %S"),*(ControlledTank->GetName()));
	}

}

void ATankPlayerController::Tick(float Deltatime)
{
	Super::Tick(Deltatime);
	AimTowardsCrosshair();

}

ATank* ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair() 
{
	if (!GetControlledTank()) { return; }
	//Get world location if linetrace through crosshair 
	// If it hits the landscape
	  //Tell controlled tank to aim at this point
}
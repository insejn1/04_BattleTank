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

ATank* ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}
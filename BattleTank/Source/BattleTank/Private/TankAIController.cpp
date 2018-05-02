// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledAITank = GetControlledAITank();

	if (!ControlledAITank)
	{

	UE_LOG(LogTemp, Warning, TEXT("AIController not posessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController posessing: %S"), *(ControlledAITank->GetName()));
	}
}

ATank* ATankAIController::GetControlledAITank() const
{
	return Cast<ATank>(GetPawn());
}
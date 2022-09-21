// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTankrController.h"
#include "MyPawnTank.h"
void AMyTankrController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	MyPawnTank = Cast<AMyPawnTank>(InPawn);
}
void AMyTankrController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &AMyTankrController::MoveForward);
}

void AMyTankrController::MoveForward(float Value)
{
	if (MyPawnTank)
	{
		MyPawnTank->MoveForward(Value);
	}
}
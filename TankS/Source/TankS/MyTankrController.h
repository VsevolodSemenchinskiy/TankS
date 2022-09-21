// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyTankrController.generated.h"

UCLASS()
class TANKS_API AMyTankrController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetPawn(APawn*InPawn) override;
protected:
	virtual void SetupInputComponent() override;
private:
	class AMyPawnTank* MyPawnTank;
	void MoveForward(float Value);
};
